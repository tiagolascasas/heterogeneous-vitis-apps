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

#include <iostream>
#include <cstring>
#include <cstdint>
#include <chrono>
#include <stdexcept>
#include <string>
#include <cstdlib>

#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <linux/dma-heap.h>

// cluster_1 AXI-Lite base address (from cluster.xclbin.info: Instance cluster_1, Base Address 0x80000000)
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
    for (uintptr_t p = start; p < end; p += LINE) {
#if defined(__aarch64__)
        asm volatile("dc civac, %0" ::"r"(p) : "memory");
#elif defined(__x86_64__)
        asm volatile("clflush (%0)" ::"r"(p) : "memory");
#else
        #warning "cache_flush not implemented for this architecture"
#endif
    }
#if defined(__aarch64__)
    asm volatile("dsb sy" ::: "memory");
#elif defined(__x86_64__)
    asm volatile("mfence" ::: "memory");
#endif
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
        // -- Strategy 1: DMA heap (CMA) --
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
            // -- Strategy 2: 2 MB huge page --
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

        // Touch every page to force physical backing before reading pagemap
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

int main(int argc, char **argv)
{
    int dataSize = 4096;
    if (argc == 1)
    {
        // std::cout << "Using default data size of " << dataSize << "\n";
    }
    else if (argc == 2)
    {
        dataSize = std::stoi(argv[1]);
        if (dataSize <= 0)
        {
            std::cerr << "Invalid data size specified: " << argv[1] << "\n";
            return 1;
        }
        // std::cout << "Using data size of " << dataSize << "\n";
    }
    else
    {
        std::cerr << "Usage: " << argv[0] << " [data_size]\n";
        return 1;
    }

    const size_t buf_bytes = (size_t)dataSize * sizeof(int);

    int *bufReference = new int[dataSize];
    for (int i = 0; i < dataSize; ++i)
        bufReference[i] = i + i;

    auto const initEpoch = std::chrono::high_resolution_clock::now();
    long long initTime = 0, kernelTime = 0, epilogueTime = 0;

    bool use_offload = (getenv("OFFLOAD") != nullptr);
    bool use_offload_sim = (getenv("OFFLOAD_SIM") != nullptr);

    if (use_offload || use_offload_sim) {
        // Map the kernel's AXI-Lite control registers directly via /dev/mem.
        // The FPGA bitstream must already be loaded (e.g. via fpgautil or xmutil).
        int mem_fd = open("/dev/mem", O_RDWR | O_SYNC);
        if (mem_fd < 0)
            throw std::runtime_error("cannot open /dev/mem");
        volatile uint32_t *regs = static_cast<volatile uint32_t *>(
            mmap(nullptr, REGS_MAP_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED,
                 mem_fd, static_cast<off_t>(CLUSTER_BASE)));
        if (regs == MAP_FAILED)
            throw std::runtime_error("mmap /dev/mem failed");

        // Allocate contiguous DMA buffers via 2 MB huge pages.
        DmaBuf buf0(buf_bytes), buf1(buf_bytes), buf_out(buf_bytes);

        int *a = static_cast<int *>(buf0.vaddr);
        int *b = static_cast<int *>(buf1.vaddr);
        int *out = static_cast<int *>(buf_out.vaddr);

        for (int i = 0; i < dataSize; ++i)
        {
            a[i] = i;
            b[i] = i;
        }

        // Clean+invalidate CPU cache to DDR before the PL kernel reads (HP0 is non-coherent)
        cache_flush(a, buf_bytes);
        cache_flush(b, buf_bytes);
        cache_flush(out, buf_bytes);

        initTime = std::chrono::duration_cast<std::chrono::microseconds>(
                       std::chrono::high_resolution_clock::now() - initEpoch).count();

        const auto kernelEpoch = std::chrono::high_resolution_clock::now();

        if (use_offload) {
            // ap_ctrl_hs: the kernel only latches ap_start when ap_idle (bit 2) is high.
            // Wait here in case it is still in the 'done' state from a previous run.
            while (!(reg_read(regs, CTRL_REG) & 0x4))
                ;

            // Write buffer physical addresses and size directly to AXI-Lite registers
            reg_write(regs, IN1_REG_LO, static_cast<uint32_t>(buf0.phys));
            reg_write(regs, IN1_REG_HI, static_cast<uint32_t>(buf0.phys >> 32));
            reg_write(regs, IN2_REG_LO, static_cast<uint32_t>(buf1.phys));
            reg_write(regs, IN2_REG_HI, static_cast<uint32_t>(buf1.phys >> 32));
            reg_write(regs, OUT_REG_LO, static_cast<uint32_t>(buf_out.phys));
            reg_write(regs, OUT_REG_HI, static_cast<uint32_t>(buf_out.phys >> 32));
            reg_write(regs, SIZE_REG, static_cast<uint32_t>(dataSize));

            // Full barrier: guarantee all argument writes reach the AXI slave before ap_start.
            // nGnRnE device memory is strongly ordered, but dsb+isb makes the intent explicit
            // and prevents any speculative execution past this point on the CPU side.
        #if defined(__aarch64__)
            asm volatile("dsb sy\n\tisb" ::: "memory");
        #elif defined(__x86_64__)
            asm volatile("mfence" ::: "memory");
        #endif

            // Pulse ap_start
            reg_write(regs, CTRL_REG, 0x1);

            // Poll ap_done (bit 1, Clear-On-Read — latched until we read it)
            while (!(reg_read(regs, CTRL_REG) & 0x2))
                ;
        } else {
            // Software Execution using DMA mapped buffers
            for (int i = 0; i < dataSize; ++i) {
                out[i] = a[i] + b[i];
            }
        }

        kernelTime = std::chrono::duration_cast<std::chrono::microseconds>(
                         std::chrono::high_resolution_clock::now() - kernelEpoch).count();

        const auto epilogueEpoch = std::chrono::high_resolution_clock::now();

        // Invalidate CPU cache so we read what the PL kernel wrote to DDR
        cache_flush(out, buf_bytes);

        if (std::memcmp(out, bufReference, buf_bytes))
            throw std::runtime_error("Value read back does not match reference");

        epilogueTime = std::chrono::duration_cast<std::chrono::microseconds>(
                           std::chrono::high_resolution_clock::now() - epilogueEpoch).count();

        munmap(const_cast<uint32_t *>(regs), REGS_MAP_SIZE);
        close(mem_fd);
    } else {
        initTime = std::chrono::duration_cast<std::chrono::microseconds>(
                       std::chrono::high_resolution_clock::now() - initEpoch).count();

        const auto kernelEpoch = std::chrono::high_resolution_clock::now();
        int *a = new int[dataSize];
        int *b = new int[dataSize];
        int *out = new int[dataSize];
        for (int i = 0; i < dataSize; ++i) {
            a[i] = i;
            b[i] = i;
            out[i] = a[i] + b[i];
        }
        kernelTime = std::chrono::duration_cast<std::chrono::microseconds>(
                         std::chrono::high_resolution_clock::now() - kernelEpoch).count();

        const auto epilogueEpoch = std::chrono::high_resolution_clock::now();
        
        if (std::memcmp(out, bufReference, buf_bytes))
            throw std::runtime_error("Value read back does not match reference");

        epilogueTime = std::chrono::duration_cast<std::chrono::microseconds>(
                           std::chrono::high_resolution_clock::now() - epilogueEpoch).count();

        delete[] a;
        delete[] b;
        delete[] out;
    }

    const auto totalTime = std::chrono::duration_cast<std::chrono::microseconds>(
                               std::chrono::high_resolution_clock::now() - initEpoch).count();

    std::cout << dataSize << ", " << initTime << ", " << kernelTime << ", " << epilogueTime << ", " << totalTime << "\n";

    delete[] bufReference;
    return 0;
}
