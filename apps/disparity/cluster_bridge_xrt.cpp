#include "cluster.h"
#include <chrono>
#include <cstring>
#include <iostream>
#include <string>

#define ILEFT_BYTES ((8390664 - 8) / 4 * sizeof(int))
#define IRIGHT_BYTES ((8390664 - 8) / 4 * sizeof(int))
#define SCRATCH_BYTES ((8390664 - 8) / 4 * sizeof(float))
#define RETSAD_BYTES ((8294408 - 8) / 4 * sizeof(float))

extern void cluster(int, int, int*, int, int, int*, int, int, int*, int, int, int, int, float*, int, int, float*, int*, int*, float*);

static void correlateSAD_2D_hw_sim(I2D *Ileft, I2D *Iright, int win_sz, int disparity, F2D *retSAD)
{
    // Allocate isolated "device-side" buffers
    int   *dev_ileft_data       = (int *)  malloc(ILEFT_BYTES);
    int   *dev_iright_data      = (int *)  malloc(IRIGHT_BYTES);
    int   *dev_iright_moved     = (int *)  calloc(1, SCRATCH_BYTES);
    float *dev_sad_data         = (float *)calloc(1, SCRATCH_BYTES);
    float *dev_integralimg_data = (float *)calloc(1, SCRATCH_BYTES);
    int   *dev_retsad_width     = (int *)  malloc(sizeof(int));
    int   *dev_retsad_height    = (int *)  malloc(sizeof(int));
    float *dev_retsad_data      = (float *)calloc(1, RETSAD_BYTES);

    // Simulate host -> device DMA
    std::memcpy(dev_ileft_data, Ileft->data, Ileft->width * Ileft->height * sizeof(int));
    std::memcpy(dev_iright_data, Iright->data, Iright->width * Iright->height * sizeof(int));
    *dev_retsad_width = retSAD->width;
    *dev_retsad_height = retSAD->height;

    int scratch_w = Ileft->width;
    int scratch_h = Ileft->height;

    cluster(
        Ileft->width, Ileft->height, dev_ileft_data,
        Iright->width, Iright->height, dev_iright_data,
        scratch_w, scratch_h, dev_iright_moved,
        win_sz, disparity,
        scratch_w, scratch_h, dev_sad_data,
        scratch_w, scratch_h, dev_integralimg_data,
        dev_retsad_width, dev_retsad_height, dev_retsad_data
    );

    // Simulate device -> host DMA
    std::memcpy(retSAD->data, dev_retsad_data, retSAD->width * retSAD->height * sizeof(float));

    free(dev_ileft_data);
    free(dev_iright_data);
    free(dev_iright_moved);
    free(dev_sad_data);
    free(dev_integralimg_data);
    free(dev_retsad_width);
    free(dev_retsad_height);
    free(dev_retsad_data);
}

#ifndef NO_XRT
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

static void correlateSAD_2D_hw_offload(I2D *Ileft, I2D *Iright, int win_sz, int disparity, F2D *retSAD)
{
    std::string binaryFile = "cluster.xclbin";
    if (getenv("XCLBIN") != nullptr) {
        binaryFile = getenv("XCLBIN");
    }
    static auto device = new xrt::device(0);
    static auto uuid = device->load_xclbin(binaryFile);
    static auto krnl = new xrt::kernel(*device, uuid, "cluster");

    static auto bo_ileft_data = xrt::bo(*device, ILEFT_BYTES, krnl->group_id(2));
    static auto bo_iright_data = xrt::bo(*device, IRIGHT_BYTES, krnl->group_id(5));
    static auto bo_iright_moved_data = xrt::bo(*device, SCRATCH_BYTES, krnl->group_id(8));
    static auto bo_sad_data = xrt::bo(*device, SCRATCH_BYTES, krnl->group_id(13));
    static auto bo_integralimg_data = xrt::bo(*device, SCRATCH_BYTES, krnl->group_id(16));
    static auto bo_retsad_width = xrt::bo(*device, sizeof(int), krnl->group_id(17));
    static auto bo_retsad_height = xrt::bo(*device, sizeof(int), krnl->group_id(18));
    static auto bo_retsad_data = xrt::bo(*device, RETSAD_BYTES, krnl->group_id(19));

    static bool inputs_synced = false;
    if (!inputs_synced) {
        bo_ileft_data.write(Ileft->data, Ileft->width * Ileft->height * sizeof(int), 0);
        bo_iright_data.write(Iright->data, Iright->width * Iright->height * sizeof(int), 0);
        bo_retsad_width.write(&retSAD->width, sizeof(int), 0);
        bo_retsad_height.write(&retSAD->height, sizeof(int), 0);

        bo_ileft_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);
        bo_iright_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);
        bo_retsad_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
        bo_retsad_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
        inputs_synced = true;
    }

    int scratch_w = Ileft->width;
    int scratch_h = Ileft->height;

    auto run = (*krnl)(
        Ileft->width, Ileft->height, bo_ileft_data,
        Iright->width, Iright->height, bo_iright_data,
        scratch_w, scratch_h, bo_iright_moved_data,
        win_sz, disparity,
        scratch_w, scratch_h, bo_sad_data,
        scratch_w, scratch_h, bo_integralimg_data,
        bo_retsad_width, bo_retsad_height, bo_retsad_data);
    run.wait();

    bo_retsad_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_retsad_data.read(retSAD->data, retSAD->width * retSAD->height * sizeof(float), 0);
}
#endif

void correlateSAD_2D_hw_bridge(I2D *Ileft, I2D *Iright, int win_sz, int disparity, F2D *retSAD)
{
    bool use_offload_sim = (getenv("OFFLOAD_SIM") != nullptr);

    if (use_offload_sim) {
        correlateSAD_2D_hw_sim(Ileft, Iright, win_sz, disparity, retSAD);
    } else {
#ifndef NO_XRT
        correlateSAD_2D_hw_offload(Ileft, Iright, win_sz, disparity, retSAD);
#else
        fprintf(stderr, "Error: True HW offload requires XRT. Compile without -DNO_XRT.\n");
        exit(1);
#endif
    }
}