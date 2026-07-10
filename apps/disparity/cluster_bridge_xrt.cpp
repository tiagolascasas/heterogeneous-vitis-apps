#include "cluster.h"
#include <chrono>
#include <cstring>
#include <iostream>
#include <string>

// XRT includes
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

#define ILEFT_BYTES ((8294408 - 8) / 4 * sizeof(int))
#define IRIGHT_BYTES ((8294408 - 8) / 4 * sizeof(int))
#define SCRATCH_BYTES ((8390664 - 8) / 4 * sizeof(float))
#define RETSAD_BYTES ((8294408 - 8) / 4 * sizeof(float))

void correlateSAD_2D_hw_bridge(I2D *Ileft, I2D *Iright, int win_sz, int disparity, F2D *retSAD)
{
    // Lazy-init: device, xclbin, kernel, and buffers are initialized once
    // and reused across calls.  This function is invoked inside a tight loop
    // (max_shift iterations), so re-loading the xclbin every time would be
    // prohibitively slow.
    static auto device = xrt::device(0);
    static auto uuid = device.load_xclbin("cluster.xclbin");
    static auto krnl = xrt::kernel(device, uuid, "cluster");

    static auto bo_ileft_data = xrt::bo(device, ILEFT_BYTES, krnl.group_id(2));
    static auto bo_iright_data = xrt::bo(device, IRIGHT_BYTES, krnl.group_id(5));
    static auto bo_iright_moved_data = xrt::bo(device, SCRATCH_BYTES, krnl.group_id(8));
    static auto bo_sad_data = xrt::bo(device, SCRATCH_BYTES, krnl.group_id(13));
    static auto bo_integralimg_data = xrt::bo(device, SCRATCH_BYTES, krnl.group_id(16));
    static auto bo_retsad_width = xrt::bo(device, sizeof(int), krnl.group_id(17));
    static auto bo_retsad_height = xrt::bo(device, sizeof(int), krnl.group_id(18));
    static auto bo_retsad_data = xrt::bo(device, RETSAD_BYTES, krnl.group_id(19));

    // Ileft, Iright, and retSAD dimensions don't change between loop
    // iterations — only the scalar 'disparity' argument does.  Upload the
    // unchanging data once.
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

    auto start = std::chrono::high_resolution_clock::now();
    auto run = krnl(
        Ileft->width, Ileft->height, bo_ileft_data,
        Iright->width, Iright->height, bo_iright_data,
        scratch_w, scratch_h, bo_iright_moved_data,
        win_sz, disparity,
        scratch_w, scratch_h, bo_sad_data,
        scratch_w, scratch_h, bo_integralimg_data,
        bo_retsad_width, bo_retsad_height, bo_retsad_data);
    run.wait();
    std::cout << std::chrono::duration_cast<std::chrono::microseconds>(
                     std::chrono::high_resolution_clock::now() - start)
                     .count()
              << " us" << std::endl;

    bo_retsad_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_retsad_data.read(retSAD->data, retSAD->width * retSAD->height * sizeof(float), 0);
}