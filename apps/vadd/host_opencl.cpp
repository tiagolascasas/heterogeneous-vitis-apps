/**
 * Copyright (C) 2019-2021 Xilinx, Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifdef USE_AXI
#include <cstdint>
#include <cstring>
#include <fcntl.h>
#include <linux/dma-heap.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <unistd.h>
#else
#define CL_HPP_TARGET_OPENCL_VERSION 120
#define CL_HPP_MINIMUM_OPENCL_VERSION 120
#include <CL/opencl.hpp>
#include <fstream>
#include <string>
#include <vector>
#endif

#include <chrono>
#include <iostream>
#include <stdexcept>
#include <vector>

// ─────────────────────────────── AXI backend ────────────────────────────────
#ifdef USE_AXI

// cluster_1 AXI-Lite base address (from cluster.xclbin.info)
static constexpr uintptr_t CLUSTER_BASE = 0x80000000;
static constexpr size_t REGS_MAP_SIZE = 0x1000;

// AXI-Lite control register offsets (from HLS-generated cluster_control_s_axi.v)
static constexpr uint32_t CTRL_REG = 0x00; // bit0=ap_start, bit1=ap_done, bit2=ap_idle
static constexpr uint32_t IN1_REG_LO = 0x10;
static constexpr uint32_t IN1_REG_HI = 0x14;
static constexpr uint32_t IN2_REG_LO = 0x1C;
static constexpr uint32_t IN2_REG_HI = 0x20;
static constexpr uint32_t OUT_REG_LO = 0x28;
static constexpr uint32_t OUT_REG_HI = 0x2C;
static constexpr uint32_t SIZE_REG = 0x34;

static inline void reg_write(volatile uint32_t *b, uint32_t off, uint32_t v) { b[off / 4] = v; }
static inline uint32_t reg_read(volatile uint32_t *b, uint32_t off) { return b[off / 4]; }

// Read the physical address of a virtual address via /proc/self/pagemap.
// Requires CAP_SYS_ADMIN (already needed for /dev/mem).
static uint64_t virt_to_phys(const void *vaddr)
{
    const long page_size = sysconf(_SC_PAGESIZE);
    const uintptr_t va = reinterpret_cast<uintptr_t>(vaddr);
    const uintptr_t vpn = va / (uintptr_t)page_size;

    int fd = open("/proc/self/pagemap", O_RDONLY);
    if (fd < 0)
        throw std::runtime_error("cannot open /proc/self/pagemap");

    uint64_t entry = 0;
    if (pread(fd, &entry, sizeof(entry), (off_t)(vpn * sizeof(uint64_t))) != (ssize_t)sizeof(uint64_t))
    {
        close(fd);
        throw std::runtime_error("pagemap pread failed");
    }
    close(fd);

    if (!(entry & (UINT64_C(1) << 63)))
        throw std::runtime_error("page not present in pagemap (must run as root)");

    const uint64_t pfn = entry & ((UINT64_C(1) << 55) - 1);
    return pfn * (uint64_t)page_size + (va & (uintptr_t)(page_size - 1));
}

// Clean and invalidate D-cache lines covering [addr, addr+len) to PoC.
// Necessary because HP0 on Zynq MPSoC is a non-coherent AXI port.
static void cache_flush(const void *addr, size_t len)
{
    static constexpr uintptr_t LINE = 64;
    const uintptr_t start = reinterpret_cast<uintptr_t>(addr) & ~(LINE - 1);
    const uintptr_t end = (reinterpret_cast<uintptr_t>(addr) + len + LINE - 1) & ~(LINE - 1);
    for (uintptr_t p = start; p < end; p += LINE)
        asm volatile("dc civac, %0" ::"r"(p) : "memory");
    asm volatile("dsb sy" ::: "memory");
}

// DMA buffer backed by physically contiguous memory.
// Strategy (in order):
//   1. /dev/dma_heap/linux,cma  — CMA-backed dmabuf, no pre-allocation required.
//   2. MAP_HUGETLB              — 2 MB huge page (pre-allocate if needed:
//                                  echo N > /sys/kernel/mm/hugepages/hugepages-2048kB/nr_hugepages)
struct DmaBuf
{
    int dmabuf_fd = -1;
    void *vaddr = MAP_FAILED;
    uint64_t phys = 0;
    size_t alloc_size = 0;

    explicit DmaBuf(size_t bytes) : alloc_size(bytes)
    {
        static const char *heap_names[] = {
            "/dev/dma_heap/linux,cma",
            "/dev/dma_heap/reserved",
            nullptr};
        for (const char **name = heap_names; *name && dmabuf_fd < 0; ++name)
        {
            int heap_fd = open(*name, O_RDWR | O_CLOEXEC);
            if (heap_fd < 0)
                continue;
            dma_heap_allocation_data alloc{};
            alloc.len = alloc_size;
            alloc.fd_flags = O_CLOEXEC | O_RDWR;
            if (ioctl(heap_fd, DMA_HEAP_IOCTL_ALLOC, &alloc) == 0)
                dmabuf_fd = (int)alloc.fd;
            close(heap_fd);
        }
        if (dmabuf_fd >= 0)
        {
            vaddr = mmap(nullptr, alloc_size, PROT_READ | PROT_WRITE,
                         MAP_SHARED, dmabuf_fd, 0);
        }
        else
        {
            static constexpr size_t HUGE = 2UL * 1024 * 1024;
            alloc_size = (bytes + HUGE - 1) & ~(HUGE - 1);
            vaddr = mmap(nullptr, alloc_size, PROT_READ | PROT_WRITE,
                         MAP_PRIVATE | MAP_ANONYMOUS | MAP_HUGETLB, -1, 0);
            if (vaddr == MAP_FAILED)
                throw std::runtime_error(
                    "No DMA heap found and MAP_HUGETLB failed.\n"
                    "Pre-allocate huge pages with:\n"
                    "  echo 4 > /sys/kernel/mm/hugepages/hugepages-2048kB/nr_hugepages");
        }
        if (vaddr == MAP_FAILED)
            throw std::runtime_error("mmap DMA buffer failed");

        memset(vaddr, 0, alloc_size);
        phys = virt_to_phys(vaddr);
    }

    ~DmaBuf()
    {
        if (vaddr != MAP_FAILED)
            munmap(vaddr, alloc_size);
        if (dmabuf_fd >= 0)
            close(dmabuf_fd);
    }
    DmaBuf(const DmaBuf &) = delete;
    DmaBuf &operator=(const DmaBuf &) = delete;
};

static int run_axi(int dataSize)
{
    const size_t sizeInBytes = static_cast<size_t>(dataSize) * sizeof(unsigned int);

    std::vector<unsigned int> reference(dataSize);
    for (int i = 0; i < dataSize; ++i)
        reference[i] = (unsigned int)i + (unsigned int)i;

    const auto initEpoch = std::chrono::high_resolution_clock::now();

    int mem_fd = open("/dev/mem", O_RDWR | O_SYNC);
    if (mem_fd < 0)
        throw std::runtime_error("cannot open /dev/mem");
    volatile uint32_t *regs = static_cast<volatile uint32_t *>(
        mmap(nullptr, REGS_MAP_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED,
             mem_fd, static_cast<off_t>(CLUSTER_BASE)));
    if (regs == MAP_FAILED)
        throw std::runtime_error("mmap /dev/mem failed");

    DmaBuf buf0(sizeInBytes), buf1(sizeInBytes), buf_out(sizeInBytes);

    unsigned int *a = static_cast<unsigned int *>(buf0.vaddr);
    unsigned int *b = static_cast<unsigned int *>(buf1.vaddr);
    unsigned int *out = static_cast<unsigned int *>(buf_out.vaddr);

    for (int i = 0; i < dataSize; ++i)
    {
        a[i] = (unsigned int)i;
        b[i] = (unsigned int)i;
    }

    // Clean+invalidate CPU cache to DDR before the PL kernel reads (HP0 is non-coherent)
    cache_flush(a, sizeInBytes);
    cache_flush(b, sizeInBytes);
    cache_flush(out, sizeInBytes);

    const auto initTime = std::chrono::duration_cast<std::chrono::microseconds>(
                              std::chrono::high_resolution_clock::now() - initEpoch)
                              .count();

    const auto kernelEpoch = std::chrono::high_resolution_clock::now();

    // ap_ctrl_hs: the kernel only latches ap_start when ap_idle (bit 2) is high.
    // Wait here in case it is still in the 'done' state from a previous run.
    while (!(reg_read(regs, CTRL_REG) & 0x4))
        ;

    reg_write(regs, IN1_REG_LO, static_cast<uint32_t>(buf0.phys));
    reg_write(regs, IN1_REG_HI, static_cast<uint32_t>(buf0.phys >> 32));
    reg_write(regs, IN2_REG_LO, static_cast<uint32_t>(buf1.phys));
    reg_write(regs, IN2_REG_HI, static_cast<uint32_t>(buf1.phys >> 32));
    reg_write(regs, OUT_REG_LO, static_cast<uint32_t>(buf_out.phys));
    reg_write(regs, OUT_REG_HI, static_cast<uint32_t>(buf_out.phys >> 32));
    reg_write(regs, SIZE_REG, static_cast<uint32_t>(dataSize));

    // Full barrier: guarantee all argument writes reach the AXI slave before ap_start.
    asm volatile("dsb sy\n\tisb" ::: "memory");

    // Pulse ap_start
    reg_write(regs, CTRL_REG, 0x1);

    // Poll ap_done (bit 1, Clear-On-Read — latched until we read it)
    while (!(reg_read(regs, CTRL_REG) & 0x2))
        ;

    const auto kernelTime = std::chrono::duration_cast<std::chrono::microseconds>(
                                std::chrono::high_resolution_clock::now() - kernelEpoch)
                                .count();

    const auto epilogueEpoch = std::chrono::high_resolution_clock::now();

    // Invalidate CPU cache so we read what the PL kernel wrote to DDR
    cache_flush(out, sizeInBytes);

    if (std::memcmp(out, reference.data(), sizeInBytes))
        throw std::runtime_error("Value read back does not match reference");

    const auto epilogueTime = std::chrono::duration_cast<std::chrono::microseconds>(
                                  std::chrono::high_resolution_clock::now() - epilogueEpoch)
                                  .count();

    const auto totalTime = std::chrono::duration_cast<std::chrono::microseconds>(
                               std::chrono::high_resolution_clock::now() - initEpoch)
                               .count();

    std::cout << dataSize << ", " << initTime << ", " << kernelTime << ", " << epilogueTime << ", " << totalTime << "\n";

    munmap(const_cast<uint32_t *>(regs), REGS_MAP_SIZE);
    close(mem_fd);
    return 0;
}

// ─────────────────────────────── OpenCL backend ─────────────────────────────
#else // !USE_AXI

#define OCL_CHECK(error, call)                                                                                      \
    call;                                                                                                           \
    if ((error) != CL_SUCCESS)                                                                                      \
    {                                                                                                               \
        std::cerr << "OpenCL error " << (error) << " from " #call << " at " << __FILE__ << ":" << __LINE__ << "\n"; \
        return 1;                                                                                                   \
    }

static std::vector<unsigned char> loadBinary(const std::string &path)
{
    std::ifstream stream(path, std::ios::binary | std::ios::ate);
    if (!stream)
        throw std::runtime_error("Unable to open xclbin: " + path);

    const auto size = stream.tellg();
    stream.seekg(0, std::ios::beg);

    std::vector<unsigned char> buffer(static_cast<size_t>(size));
    stream.read(reinterpret_cast<char *>(buffer.data()), size);
    if (!stream)
        throw std::runtime_error("Unable to read xclbin: " + path);

    return buffer;
}

static cl::Device getXilinxDevice()
{
    std::vector<cl::Platform> platforms;
    cl::Platform::get(&platforms);

    for (const auto &platform : platforms)
    {
        if (platform.getInfo<CL_PLATFORM_NAME>() != "Xilinx")
            continue;

        std::vector<cl::Device> devices;
        platform.getDevices(CL_DEVICE_TYPE_ACCELERATOR, &devices);
        if (!devices.empty())
            return devices.front();
    }

    throw std::runtime_error("Unable to find a Xilinx OpenCL accelerator device");
}

static int run_opencl(int dataSize, const std::string &binaryFile)
{
    std::vector<unsigned int> a(dataSize);
    std::vector<unsigned int> b(dataSize);
    std::vector<unsigned int> output(dataSize);
    std::vector<unsigned int> reference(dataSize);
    for (int i = 0; i < dataSize; ++i)
    {
        a[i] = (unsigned int)i;
        b[i] = (unsigned int)i;
        reference[i] = a[i] + b[i];
    }

    const size_t sizeInBytes = static_cast<size_t>(dataSize) * sizeof(unsigned int);
    cl_int err = CL_SUCCESS;

    try
    {
        const auto initEpoch = std::chrono::high_resolution_clock::now();
        auto device = getXilinxDevice();
        auto binary = loadBinary(binaryFile);

        cl::Context context(device, nullptr, nullptr, nullptr, &err);
        if (err != CL_SUCCESS)
        {
            std::cerr << "OpenCL error " << err << " creating context\n";
            return 1;
        }

        cl::CommandQueue queue(context, device, CL_QUEUE_PROFILING_ENABLE, &err);
        if (err != CL_SUCCESS)
        {
            std::cerr << "OpenCL error " << err << " creating command queue\n";
            return 1;
        }

        cl::Program::Binaries binaries;
        binaries.push_back(binary);
        cl::Program program(context, {device}, binaries, nullptr, &err);
        if (err != CL_SUCCESS)
        {
            std::cerr << "Failed to program device with xclbin: " << binaryFile << "\n";
            return 1;
        }

        cl::Kernel kernel(program, "cluster", &err);
        if (err != CL_SUCCESS)
        {
            std::cerr << "OpenCL error " << err << " creating kernel\n";
            return 1;
        }

        OCL_CHECK(err, cl::Buffer bufferA(context, CL_MEM_READ_ONLY, sizeInBytes, nullptr, &err));
        OCL_CHECK(err, cl::Buffer bufferB(context, CL_MEM_READ_ONLY, sizeInBytes, nullptr, &err));
        OCL_CHECK(err, cl::Buffer bufferOut(context, CL_MEM_WRITE_ONLY, sizeInBytes, nullptr, &err));

        OCL_CHECK(err, err = queue.enqueueWriteBuffer(bufferA, CL_TRUE, 0, sizeInBytes, a.data()));
        OCL_CHECK(err, err = queue.enqueueWriteBuffer(bufferB, CL_TRUE, 0, sizeInBytes, b.data()));

        OCL_CHECK(err, err = kernel.setArg(0, bufferA));
        OCL_CHECK(err, err = kernel.setArg(1, bufferB));
        OCL_CHECK(err, err = kernel.setArg(2, bufferOut));
        OCL_CHECK(err, err = kernel.setArg(3, dataSize));

        const auto initTime = std::chrono::duration_cast<std::chrono::microseconds>(
                                  std::chrono::high_resolution_clock::now() - initEpoch)
                                  .count();

        const auto kernelEpoch = std::chrono::high_resolution_clock::now();
        OCL_CHECK(err, err = queue.enqueueTask(kernel));
        OCL_CHECK(err, err = queue.finish());
        const auto kernelTime = std::chrono::duration_cast<std::chrono::microseconds>(
                                    std::chrono::high_resolution_clock::now() - kernelEpoch)
                                    .count();

        const auto epilogueEpoch = std::chrono::high_resolution_clock::now();
        OCL_CHECK(err, err = queue.enqueueReadBuffer(bufferOut, CL_TRUE, 0, sizeInBytes, output.data()));
        const auto epilogueTime = std::chrono::duration_cast<std::chrono::microseconds>(
                                      std::chrono::high_resolution_clock::now() - epilogueEpoch)
                                      .count();

        const auto totalTime = std::chrono::duration_cast<std::chrono::microseconds>(
                                   std::chrono::high_resolution_clock::now() - initEpoch)
                                   .count();

        if (output != reference)
            throw std::runtime_error("Value read back does not match reference");

        std::cout << dataSize << ", " << initTime << ", " << kernelTime << ", " << epilogueTime << ", " << totalTime << "\n";
    }
    catch (const std::exception &ex)
    {
        std::cerr << ex.what() << "\n";
        return 1;
    }

    return 0;
}

#endif // USE_AXI

// ──────────────────────────────────── main ───────────────────────────────────

int main(int argc, char **argv)
{
    int dataSize = 4096;
#ifndef USE_AXI
    std::string binaryFile = "cluster.xclbin";
#endif

    if (argc == 1)
    {
    }
    else if (argc == 2)
    {
        dataSize = std::stoi(argv[1]);
    }
#ifndef USE_AXI
    else if (argc == 3)
    {
        dataSize = std::stoi(argv[1]);
        binaryFile = argv[2];
    }
#endif
    else
    {
        std::cerr << "Usage: " << argv[0] << " [data_size]"
#ifndef USE_AXI
                  << " [xclbin]"
#endif
                  << "\n";
        return 1;
    }

    if (dataSize <= 0)
    {
        std::cerr << "Invalid data size specified: " << dataSize << "\n";
        return 1;
    }

    try
    {
#ifdef USE_AXI
        return run_axi(dataSize);
#else
        return run_opencl(dataSize, binaryFile);
#endif
    }
    catch (const std::exception &ex)
    {
        std::cerr << ex.what() << "\n";
        return 1;
    }
}
