#include "cluster.h"
#include <cstdint>
#include <cstring>
#include <cstdio>
#include <fcntl.h>
#include <linux/dma-heap.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <chrono>
#include <iostream>
#include <stdexcept>

#define BUFFER_SIZE 92006

// cluster_1 AXI-Lite base address (from cluster.xclbin.info: Instance cluster_1)
static constexpr uintptr_t CLUSTER_BASE = 0x80000000;
static constexpr size_t REGS_MAP_SIZE = 0x1000;

// AXI-Lite control register offsets (from hls/syn/verilog/cluster_control_s_axi.v)
static constexpr uint32_t CTRL_REG = 0x00; // bit0=ap_start, bit1=ap_done, bit2=ap_idle
static constexpr uint32_t INPUT_WIDTH_REG = 0x10;
static constexpr uint32_t INPUT_HEIGHT_REG = 0x18;
static constexpr uint32_t INPUT_DATA_REG_LO = 0x20;
static constexpr uint32_t INPUT_DATA_REG_HI = 0x24;
static constexpr uint32_t DIM_REG = 0x2C;
static constexpr uint32_t RTR_VAL_WIDTH_REG_LO = 0x34;
static constexpr uint32_t RTR_VAL_WIDTH_REG_HI = 0x38;
static constexpr uint32_t RTR_VAL_HEIGHT_REG_LO = 0x40;
static constexpr uint32_t RTR_VAL_HEIGHT_REG_HI = 0x44;
static constexpr uint32_t RTR_VAL_DATA_REG_LO = 0x4C;
static constexpr uint32_t RTR_VAL_DATA_REG_HI = 0x50;

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
// Necessary because the m_axi ports on Zynq MPSoC are non-coherent.
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

static void fSortIndices_hw_axi(F2D *input, int dim, I2D *rtr_val)
{
    const size_t inputBytes = static_cast<size_t>(input->width) * input->height * sizeof(float);
    const size_t outputBytes = BUFFER_SIZE * sizeof(int);

    int mem_fd = open("/dev/mem", O_RDWR | O_SYNC);
    if (mem_fd < 0)
        throw std::runtime_error("cannot open /dev/mem");
    volatile uint32_t *regs = static_cast<volatile uint32_t *>(
        mmap(nullptr, REGS_MAP_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED,
             mem_fd, static_cast<off_t>(CLUSTER_BASE)));
    if (regs == MAP_FAILED)
        throw std::runtime_error("mmap /dev/mem failed");

    DmaBuf buf_input(inputBytes);
    DmaBuf buf_rtr_width(sizeof(int));
    DmaBuf buf_rtr_height(sizeof(int));
    DmaBuf buf_rtr_data(outputBytes);

    std::memcpy(buf_input.vaddr, input->data, inputBytes);
    cache_flush(buf_input.vaddr, inputBytes);
    cache_flush(buf_rtr_width.vaddr, sizeof(int));
    cache_flush(buf_rtr_height.vaddr, sizeof(int));
    cache_flush(buf_rtr_data.vaddr, outputBytes);

    auto start = std::chrono::high_resolution_clock::now();

    while (!(reg_read(regs, CTRL_REG) & 0x4))
        ;

    reg_write(regs, INPUT_WIDTH_REG, static_cast<uint32_t>(input->width));
    reg_write(regs, INPUT_HEIGHT_REG, static_cast<uint32_t>(input->height));
    reg_write(regs, DIM_REG, static_cast<uint32_t>(dim));

    reg_write(regs, INPUT_DATA_REG_LO, static_cast<uint32_t>(buf_input.phys));
    reg_write(regs, INPUT_DATA_REG_HI, static_cast<uint32_t>(buf_input.phys >> 32));
    reg_write(regs, RTR_VAL_WIDTH_REG_LO, static_cast<uint32_t>(buf_rtr_width.phys));
    reg_write(regs, RTR_VAL_WIDTH_REG_HI, static_cast<uint32_t>(buf_rtr_width.phys >> 32));
    reg_write(regs, RTR_VAL_HEIGHT_REG_LO, static_cast<uint32_t>(buf_rtr_height.phys));
    reg_write(regs, RTR_VAL_HEIGHT_REG_HI, static_cast<uint32_t>(buf_rtr_height.phys >> 32));
    reg_write(regs, RTR_VAL_DATA_REG_LO, static_cast<uint32_t>(buf_rtr_data.phys));
    reg_write(regs, RTR_VAL_DATA_REG_HI, static_cast<uint32_t>(buf_rtr_data.phys >> 32));

    asm volatile("dsb sy\n\tisb" ::: "memory");

    reg_write(regs, CTRL_REG, 0x1);

    int cnt = 0;
    while (!(reg_read(regs, CTRL_REG) & 0x2))
    {
        printf("Waiting for kernel... %d\n", cnt++);
        fflush(stdout);
    }

    std::cout << std::chrono::duration_cast<std::chrono::microseconds>(
                     std::chrono::high_resolution_clock::now() - start)
                     .count()
              << " us" << std::endl;

    cache_flush(buf_rtr_width.vaddr, sizeof(int));
    cache_flush(buf_rtr_height.vaddr, sizeof(int));
    cache_flush(buf_rtr_data.vaddr, outputBytes);

    std::memcpy(&rtr_val->width, buf_rtr_width.vaddr, sizeof(int));
    std::memcpy(&rtr_val->height, buf_rtr_height.vaddr, sizeof(int));
    std::memcpy(rtr_val->data, buf_rtr_data.vaddr, outputBytes);

    munmap(const_cast<uint32_t *>(regs), REGS_MAP_SIZE);
    close(mem_fd);
}

void fSortIndices_hw_bridge(F2D *input, int dim, I2D *rtr_val)
{
    fSortIndices_hw_axi(input, dim, rtr_val);
}
