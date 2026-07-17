#include "cluster.h"
#include <chrono>
#include <cstring>
#include <iostream>
#include <string>

// XRT includes
#ifndef NO_XRT
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"
#endif

void getANMS_sw(F2D *points, int r, F2D **rtr_val);

static bool initialized = false;
#ifndef NO_XRT
static xrt::device* device = nullptr;
static xrt::kernel* krnl = nullptr;
#endif

void getANMS_hw_bridge(F2D *points, int r, F2D **rtr_val)
{
    bool use_offload_sim = (getenv("OFFLOAD_SIM") != nullptr);

    if (use_offload_sim) {
        size_t input_bytes = points->width * points->height * sizeof(float);
        F2D *dev_points = (F2D *)malloc(sizeof(F2D) + input_bytes);

        dev_points->width = points->width;
        dev_points->height = points->height;
        std::memcpy(dev_points->data, points->data, input_bytes);

        F2D *dev_rtr_val = nullptr;
        getANMS_sw(dev_points, r, &dev_rtr_val);

        if (dev_rtr_val != nullptr) {
            size_t out_bytes = dev_rtr_val->width * dev_rtr_val->height * sizeof(float);
            *rtr_val = (F2D *)malloc(sizeof(F2D) + out_bytes);
            (*rtr_val)->width = dev_rtr_val->width;
            (*rtr_val)->height = dev_rtr_val->height;
            std::memcpy((*rtr_val)->data, dev_rtr_val->data, out_bytes);
            free(dev_rtr_val);
        }

        free(dev_points);
        return;
    }

#ifndef NO_XRT
    if (!initialized) {
        std::string binaryFile = getenv("XCLBIN") ? getenv("XCLBIN") : "cluster.xclbin";
        unsigned int device_index = 0;
        device = new xrt::device(device_index);
        auto uuid = device->load_xclbin(binaryFile);
        krnl = new xrt::kernel(*device, uuid, "cluster");
        initialized = true;
    }

    size_t input_bytes = points->width * points->height * sizeof(float);
    if (input_bytes == 0) input_bytes = 4;
    size_t rtr_bytes = 222452 * sizeof(float); // Max size

    auto bo_points_width = xrt::bo(*device, 4, krnl->group_id(0));
    auto bo_points_height = xrt::bo(*device, 4, krnl->group_id(1));
    auto bo_points_data = xrt::bo(*device, input_bytes, krnl->group_id(2));
    
    // r is scalar at 3

    auto bo_rtr_val_width = xrt::bo(*device, 4, krnl->group_id(4));
    auto bo_rtr_val_height = xrt::bo(*device, 4, krnl->group_id(5));
    auto bo_rtr_val_data = xrt::bo(*device, rtr_bytes, krnl->group_id(6));

    auto bo_mem_68_w = xrt::bo(*device, 4, krnl->group_id(7));
    auto bo_mem_68_h = xrt::bo(*device, 4, krnl->group_id(8));
    auto bo_mem_68_d = xrt::bo(*device, 222452 * sizeof(float), krnl->group_id(9));
    auto bo_mem_69_w = xrt::bo(*device, 4, krnl->group_id(10));
    auto bo_mem_69_h = xrt::bo(*device, 4, krnl->group_id(11));
    auto bo_mem_69_d = xrt::bo(*device, 222452 * sizeof(float), krnl->group_id(12));
    auto bo_mem_70_w = xrt::bo(*device, 4, krnl->group_id(13));
    auto bo_mem_70_h = xrt::bo(*device, 4, krnl->group_id(14));
    auto bo_mem_70_d = xrt::bo(*device, 222452 * sizeof(int), krnl->group_id(15));
    auto bo_mem_71_w = xrt::bo(*device, 4, krnl->group_id(16));
    auto bo_mem_71_h = xrt::bo(*device, 4, krnl->group_id(17));
    auto bo_mem_71_d = xrt::bo(*device, 667340 * sizeof(float), krnl->group_id(18));
    auto bo_mem_72_w = xrt::bo(*device, 4, krnl->group_id(19));
    auto bo_mem_72_h = xrt::bo(*device, 4, krnl->group_id(20));
    auto bo_mem_72_d = xrt::bo(*device, 20 * sizeof(float), krnl->group_id(21));
    auto bo_mem_73_w = xrt::bo(*device, 4, krnl->group_id(22));
    auto bo_mem_73_h = xrt::bo(*device, 4, krnl->group_id(23));
    auto bo_mem_73_d = xrt::bo(*device, 222452 * sizeof(float), krnl->group_id(24));
    auto bo_mem_74_w = xrt::bo(*device, 4, krnl->group_id(25));
    auto bo_mem_74_h = xrt::bo(*device, 4, krnl->group_id(26));
    auto bo_mem_74_d = xrt::bo(*device, 222452 * sizeof(int), krnl->group_id(27));
    auto bo_mem_75_w = xrt::bo(*device, 4, krnl->group_id(28));
    auto bo_mem_75_h = xrt::bo(*device, 4, krnl->group_id(29));
    auto bo_mem_75_d = xrt::bo(*device, 20 * sizeof(float), krnl->group_id(30));
    auto bo_mem_76_w = xrt::bo(*device, 4, krnl->group_id(31));
    auto bo_mem_76_h = xrt::bo(*device, 4, krnl->group_id(32));
    auto bo_mem_76_d = xrt::bo(*device, 20 * sizeof(float), krnl->group_id(33));
    auto bo_mem_77_w = xrt::bo(*device, 4, krnl->group_id(34));
    auto bo_mem_77_h = xrt::bo(*device, 4, krnl->group_id(35));
    auto bo_mem_77_d = xrt::bo(*device, 32 * sizeof(float), krnl->group_id(36));
    auto bo_mem_78_w = xrt::bo(*device, 4, krnl->group_id(37));
    auto bo_mem_78_h = xrt::bo(*device, 4, krnl->group_id(38));
    auto bo_mem_78_d = xrt::bo(*device, 20 * sizeof(float), krnl->group_id(39));
    auto bo_mem_79_w = xrt::bo(*device, 4, krnl->group_id(40));
    auto bo_mem_79_h = xrt::bo(*device, 4, krnl->group_id(41));
    auto bo_mem_79_d = xrt::bo(*device, 12 * sizeof(float), krnl->group_id(42));
    auto bo_mem_80_w = xrt::bo(*device, 4, krnl->group_id(43));
    auto bo_mem_80_h = xrt::bo(*device, 4, krnl->group_id(44));
    auto bo_mem_80_d = xrt::bo(*device, 8 * sizeof(float), krnl->group_id(45));
    auto bo_mem_81_w = xrt::bo(*device, 4, krnl->group_id(46));
    auto bo_mem_81_h = xrt::bo(*device, 4, krnl->group_id(47));
    auto bo_mem_81_d = xrt::bo(*device, 8 * sizeof(float), krnl->group_id(48));
    auto bo_mem_82_w = xrt::bo(*device, 4, krnl->group_id(49));
    auto bo_mem_82_h = xrt::bo(*device, 4, krnl->group_id(50));
    auto bo_mem_82_d = xrt::bo(*device, 8 * sizeof(int), krnl->group_id(51));

    bo_points_width.write(&(points->width));
    bo_points_height.write(&(points->height));
    bo_points_data.write(points->data);

    bo_points_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_points_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_points_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);

    auto run = (*krnl)(
        bo_points_width, bo_points_height, bo_points_data, r,
        bo_rtr_val_width, bo_rtr_val_height, bo_rtr_val_data, bo_mem_68_w, bo_mem_68_h, bo_mem_68_d, bo_mem_69_w, bo_mem_69_h, bo_mem_69_d, bo_mem_70_w, bo_mem_70_h, bo_mem_70_d, bo_mem_71_w, bo_mem_71_h, bo_mem_71_d, bo_mem_72_w, bo_mem_72_h, bo_mem_72_d, bo_mem_73_w, bo_mem_73_h, bo_mem_73_d, bo_mem_74_w, bo_mem_74_h, bo_mem_74_d, bo_mem_75_w, bo_mem_75_h, bo_mem_75_d, bo_mem_76_w, bo_mem_76_h, bo_mem_76_d, bo_mem_77_w, bo_mem_77_h, bo_mem_77_d, bo_mem_78_w, bo_mem_78_h, bo_mem_78_d, bo_mem_79_w, bo_mem_79_h, bo_mem_79_d, bo_mem_80_w, bo_mem_80_h, bo_mem_80_d, bo_mem_81_w, bo_mem_81_h, bo_mem_81_d, bo_mem_82_w, bo_mem_82_h, bo_mem_82_d
    );

    run.wait();

    bo_rtr_val_width.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_rtr_val_height.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_rtr_val_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

    int rtr_w, rtr_h;
    bo_rtr_val_width.read(&rtr_w);
    bo_rtr_val_height.read(&rtr_h);

    size_t out_bytes = rtr_w * rtr_h * sizeof(float);
    *rtr_val = (F2D *)malloc(sizeof(F2D) + out_bytes);
    (*rtr_val)->width = rtr_w;
    (*rtr_val)->height = rtr_h;
    
    bo_rtr_val_data.read((*rtr_val)->data);

#else
    fprintf(stderr, "Error: True HW offload requires XRT. Compile without -DNO_XRT.\n");
    exit(1);
#endif
}
