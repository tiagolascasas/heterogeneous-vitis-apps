#include "cluster.h"
#include <iostream>
#include <stdexcept>
#include <string>

// XRT includes
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"
#include "mser.h"

static bool initialized = false;
static xrt::device device;
static xrt::kernel krnl;

void cluster(int *I_width, int *I_height, int *I_data, int in_delta, int *rtr_val_width, int *rtr_val_height,
             int *rtr_val_data, int *memregion_159_size8294400, int *memregion_161_size8294400,
             idx_t *memregion_162_size8294400, idx_t *memregion_163_size8294400, val_t *memregion_164_size8294400,
             int *memregion_165_size8294400, int *memregion_166_size8294400, int *memregion_167_size8294400,
             float *memregion_168_size8294400, int *memregion_169_size8294400, val_t *memregion_170_size8294400,
             idx_t *memregion_171_size8294400, idx_t *memregion_172_size8294400, idx_t *memregion_173_size8294400,
             idx_t *memregion_174_size8294400, int *memregion_175_size8294400, int *memregion_177_size16588804,
             int *memregion_182_size8294400);

void mser_hw_bridge(I2D *I, int in_delta, I2D **rtr_val)
{
    // The sizes of the memregions based on the argument names
    int size8294400 = 8294400;
    int size16588804 = 16588804;

    I2D *rtr_val_out = (I2D *)malloc(size8294400 * sizeof(int) + sizeof(I2D));
    rtr_val_out->width = I->width;
    rtr_val_out->height = I->height;

    if (getenv("OFFLOAD_SIM") != NULL) {
        // Allocate temporary arrays for simulation
        int* memregion_159_size8294400_ptr = (int*)malloc(size8294400 * sizeof(int));
        int* memregion_161_size8294400_ptr = (int*)malloc(size8294400 * sizeof(int));
        idx_t* memregion_162_size8294400_ptr = (idx_t*)malloc(size8294400 * sizeof(idx_t));
        idx_t* memregion_163_size8294400_ptr = (idx_t*)malloc(size8294400 * sizeof(idx_t));
        val_t* memregion_164_size8294400_ptr = (val_t*)malloc(size8294400 * sizeof(val_t));
        int* memregion_165_size8294400_ptr = (int*)malloc(size8294400 * sizeof(int));
        int* memregion_166_size8294400_ptr = (int*)malloc(size8294400 * sizeof(int));
        int* memregion_167_size8294400_ptr = (int*)malloc(size8294400 * sizeof(int));
        float* memregion_168_size8294400_ptr = (float*)malloc(size8294400 * sizeof(float));
        int* memregion_169_size8294400_ptr = (int*)malloc(size8294400 * sizeof(int));
        val_t* memregion_170_size8294400_ptr = (val_t*)malloc(size8294400 * sizeof(val_t));
        idx_t* memregion_171_size8294400_ptr = (idx_t*)malloc(size8294400 * sizeof(idx_t));
        idx_t* memregion_172_size8294400_ptr = (idx_t*)malloc(size8294400 * sizeof(idx_t));
        idx_t* memregion_173_size8294400_ptr = (idx_t*)malloc(size8294400 * sizeof(idx_t));
        idx_t* memregion_174_size8294400_ptr = (idx_t*)malloc(size8294400 * sizeof(idx_t));
        int* memregion_175_size8294400_ptr = (int*)malloc(size8294400 * sizeof(int));
        int* memregion_177_size16588804_ptr = (int*)malloc(size16588804 * sizeof(int));
        int* memregion_182_size8294400_ptr = (int*)malloc(size8294400 * sizeof(int));
        cluster(&(I->width), &(I->height), I->data, in_delta, &(rtr_val_out->width), &(rtr_val_out->height), rtr_val_out->data, memregion_159_size8294400_ptr, memregion_161_size8294400_ptr, memregion_162_size8294400_ptr, memregion_163_size8294400_ptr, memregion_164_size8294400_ptr, memregion_165_size8294400_ptr, memregion_166_size8294400_ptr, memregion_167_size8294400_ptr, memregion_168_size8294400_ptr, memregion_169_size8294400_ptr, memregion_170_size8294400_ptr, memregion_171_size8294400_ptr, memregion_172_size8294400_ptr, memregion_173_size8294400_ptr, memregion_174_size8294400_ptr, memregion_175_size8294400_ptr, memregion_177_size16588804_ptr, memregion_182_size8294400_ptr);
        free(memregion_159_size8294400_ptr);
        free(memregion_161_size8294400_ptr);
        free(memregion_162_size8294400_ptr);
        free(memregion_163_size8294400_ptr);
        free(memregion_164_size8294400_ptr);
        free(memregion_165_size8294400_ptr);
        free(memregion_166_size8294400_ptr);
        free(memregion_167_size8294400_ptr);
        free(memregion_168_size8294400_ptr);
        free(memregion_169_size8294400_ptr);
        free(memregion_170_size8294400_ptr);
        free(memregion_171_size8294400_ptr);
        free(memregion_172_size8294400_ptr);
        free(memregion_173_size8294400_ptr);
        free(memregion_174_size8294400_ptr);
        free(memregion_175_size8294400_ptr);
        free(memregion_177_size16588804_ptr);
        free(memregion_182_size8294400_ptr);

        *rtr_val = rtr_val_out;
        return;
    }

    if (!initialized) {
        std::string binaryFile = getenv("XCLBIN") ? getenv("XCLBIN") : "build/cluster_hw_u250.xclbin";
        unsigned int device_index = 0;
        device = xrt::device(device_index);
        auto uuid = device.load_xclbin(binaryFile);
        krnl = xrt::kernel(device, uuid, "cluster");
        initialized = true;
    }

    auto bo_I_width = xrt::bo(device, 4, krnl.group_id(0));
    auto bo_I_height = xrt::bo(device, 4, krnl.group_id(1));
    auto bo_I_data = xrt::bo(device, I->width * I->height * sizeof(int), krnl.group_id(2));
    
    auto bo_rtr_val_width = xrt::bo(device, 4, krnl.group_id(4));
    auto bo_rtr_val_height = xrt::bo(device, 4, krnl.group_id(5));
    auto bo_rtr_val_data = xrt::bo(device, size8294400 * sizeof(int), krnl.group_id(6));
    
    auto bo_memregion_159_size8294400 = xrt::bo(device, size8294400 * sizeof(int), krnl.group_id(7));
    auto bo_memregion_161_size8294400 = xrt::bo(device, size8294400 * sizeof(int), krnl.group_id(8));
    auto bo_memregion_162_size8294400 = xrt::bo(device, size8294400 * sizeof(idx_t), krnl.group_id(9));
    auto bo_memregion_163_size8294400 = xrt::bo(device, size8294400 * sizeof(idx_t), krnl.group_id(10));
    auto bo_memregion_164_size8294400 = xrt::bo(device, size8294400 * sizeof(val_t), krnl.group_id(11));
    auto bo_memregion_165_size8294400 = xrt::bo(device, size8294400 * sizeof(int), krnl.group_id(12));
    auto bo_memregion_166_size8294400 = xrt::bo(device, size8294400 * sizeof(int), krnl.group_id(13));
    auto bo_memregion_167_size8294400 = xrt::bo(device, size8294400 * sizeof(int), krnl.group_id(14));
    auto bo_memregion_168_size8294400 = xrt::bo(device, size8294400 * sizeof(float), krnl.group_id(15));
    auto bo_memregion_169_size8294400 = xrt::bo(device, size8294400 * sizeof(int), krnl.group_id(16));
    auto bo_memregion_170_size8294400 = xrt::bo(device, size8294400 * sizeof(val_t), krnl.group_id(17));
    auto bo_memregion_171_size8294400 = xrt::bo(device, size8294400 * sizeof(idx_t), krnl.group_id(18));
    auto bo_memregion_172_size8294400 = xrt::bo(device, size8294400 * sizeof(idx_t), krnl.group_id(19));
    auto bo_memregion_173_size8294400 = xrt::bo(device, size8294400 * sizeof(idx_t), krnl.group_id(20));
    auto bo_memregion_174_size8294400 = xrt::bo(device, size8294400 * sizeof(idx_t), krnl.group_id(21));
    auto bo_memregion_175_size8294400 = xrt::bo(device, size8294400 * sizeof(int), krnl.group_id(22));
    auto bo_memregion_177_size16588804 = xrt::bo(device, size16588804 * sizeof(int), krnl.group_id(23));
    auto bo_memregion_182_size8294400 = xrt::bo(device, size8294400 * sizeof(int), krnl.group_id(24));

    bo_I_width.write(&(I->width));
    bo_I_height.write(&(I->height));
    bo_I_data.write(I->data);
    bo_rtr_val_width.write(&(rtr_val_out->width));
    bo_rtr_val_height.write(&(rtr_val_out->height));

    bo_I_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_I_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_I_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_rtr_val_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_rtr_val_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);

    auto run = krnl(
        bo_I_width, bo_I_height, bo_I_data, in_delta, bo_rtr_val_width, bo_rtr_val_height, bo_rtr_val_data, bo_memregion_159_size8294400, bo_memregion_161_size8294400, bo_memregion_162_size8294400, bo_memregion_163_size8294400, bo_memregion_164_size8294400, bo_memregion_165_size8294400, bo_memregion_166_size8294400, bo_memregion_167_size8294400, bo_memregion_168_size8294400, bo_memregion_169_size8294400, bo_memregion_170_size8294400, bo_memregion_171_size8294400, bo_memregion_172_size8294400, bo_memregion_173_size8294400, bo_memregion_174_size8294400, bo_memregion_175_size8294400, bo_memregion_177_size16588804, bo_memregion_182_size8294400);

    run.wait();

    bo_rtr_val_width.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_rtr_val_height.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_rtr_val_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

    bo_rtr_val_width.read(&(rtr_val_out->width));
    bo_rtr_val_height.read(&(rtr_val_out->height));
    bo_rtr_val_data.read(rtr_val_out->data);

    *rtr_val = rtr_val_out;
}
