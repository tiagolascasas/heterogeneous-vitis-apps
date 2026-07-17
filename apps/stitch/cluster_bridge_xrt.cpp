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


void cluster(int *points_width, int *points_height, float *points_data, int r,
    int *rtr_val_width, int *rtr_val_height, float *rtr_val_data,
    int *m68_w, int *m68_h, float *m68_d, int *m69_w, int *m69_h, float *m69_d,
    int *m70_w, int *m70_h, int *m70_d, int *m71_w, int *m71_h, float *m71_d,
    int *m72_w, int *m72_h, float *m72_d, int *m73_w, int *m73_h, float *m73_d,
    int *m74_w, int *m74_h, int *m74_d, int *m75_w, int *m75_h, float *m75_d,
    int *m76_w, int *m76_h, float *m76_d, int *m77_w, int *m77_h, float *m77_d,
    int *m78_w, int *m78_h, float *m78_d, int *m79_w, int *m79_h, float *m79_d,
    int *m80_w, int *m80_h, float *m80_d, int *m81_w, int *m81_h, float *m81_d,
    int *m82_w, int *m82_h, int *m82_d);

static bool initialized = false;
#ifndef NO_XRT
static xrt::device* device = nullptr;
static xrt::kernel* krnl = nullptr;
#endif

void getANMS_hw_bridge(F2D *points, int r, F2D **rtr_val)
{
    bool use_offload_sim = (getenv("OFFLOAD_SIM") != nullptr);

    if (use_offload_sim) {
        // Allocate isolated "device-side" buffers matching XRT buffer sizes
        int   dev_points_w = points->width;
        int   dev_points_h = points->height;
        float *dev_points_data = (float *)malloc(points->width * points->height * sizeof(float));
        std::memcpy(dev_points_data, points->data, points->width * points->height * sizeof(float));

        int   dev_rtr_w = 0, dev_rtr_h = 0;
        float *dev_rtr_data = (float *)calloc(222452, sizeof(float));

        // Memregion scratch buffers (sizes match XRT allocations)
        int m68_w=0, m68_h=0; float *m68_d = (float *)calloc(222452, sizeof(float));
        int m69_w=0, m69_h=0; float *m69_d = (float *)calloc(222452, sizeof(float));
        int m70_w=0, m70_h=0; int   *m70_d = (int *)  calloc(222452, sizeof(int));
        int m71_w=0, m71_h=0; float *m71_d = (float *)calloc(667340, sizeof(float));
        int m72_w=0, m72_h=0; float *m72_d = (float *)calloc(667340, sizeof(float));
        int m73_w=0, m73_h=0; float *m73_d = (float *)calloc(222452, sizeof(float));
        int m74_w=0, m74_h=0; int   *m74_d = (int *)  calloc(222452, sizeof(int));
        int m75_w=0, m75_h=0; float *m75_d = (float *)calloc(667340, sizeof(float));
        int m76_w=0, m76_h=0; float *m76_d = (float *)calloc(667340, sizeof(float));
        int m77_w=0, m77_h=0; float *m77_d = (float *)calloc(667340, sizeof(float));
        int m78_w=0, m78_h=0; float *m78_d = (float *)calloc(667340, sizeof(float));
        int m79_w=0, m79_h=0; float *m79_d = (float *)calloc(222452, sizeof(float));
        int m80_w=0, m80_h=0; float *m80_d = (float *)calloc(667340, sizeof(float));
        int m81_w=0, m81_h=0; float *m81_d = (float *)calloc(222452, sizeof(float));
        int m82_w=0, m82_h=0; int   *m82_d = (int *)  calloc(222452, sizeof(int));

        cluster(&dev_points_w, &dev_points_h, dev_points_data, r,
                &dev_rtr_w, &dev_rtr_h, dev_rtr_data,
                &m68_w, &m68_h, m68_d, &m69_w, &m69_h, m69_d,
                &m70_w, &m70_h, m70_d, &m71_w, &m71_h, m71_d,
                &m72_w, &m72_h, m72_d, &m73_w, &m73_h, m73_d,
                &m74_w, &m74_h, m74_d, &m75_w, &m75_h, m75_d,
                &m76_w, &m76_h, m76_d, &m77_w, &m77_h, m77_d,
                &m78_w, &m78_h, m78_d, &m79_w, &m79_h, m79_d,
                &m80_w, &m80_h, m80_d, &m81_w, &m81_h, m81_d,
                &m82_w, &m82_h, m82_d);

        // Simulate device -> host DMA
        size_t out_bytes = dev_rtr_w * dev_rtr_h * sizeof(float);
        *rtr_val = (F2D *)malloc(sizeof(F2D) + out_bytes);
        (*rtr_val)->width = dev_rtr_w;
        (*rtr_val)->height = dev_rtr_h;
        std::memcpy((*rtr_val)->data, dev_rtr_data, out_bytes);

        free(dev_points_data); free(dev_rtr_data);
        free(m68_d); free(m69_d); free(m70_d); free(m71_d); free(m72_d);
        free(m73_d); free(m74_d); free(m75_d); free(m76_d); free(m77_d);
        free(m78_d); free(m79_d); free(m80_d); free(m81_d); free(m82_d);
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
    auto bo_mem_72_d = xrt::bo(*device, 667340 * sizeof(float), krnl->group_id(21));
    auto bo_mem_73_w = xrt::bo(*device, 4, krnl->group_id(22));
    auto bo_mem_73_h = xrt::bo(*device, 4, krnl->group_id(23));
    auto bo_mem_73_d = xrt::bo(*device, 222452 * sizeof(float), krnl->group_id(24));
    auto bo_mem_74_w = xrt::bo(*device, 4, krnl->group_id(25));
    auto bo_mem_74_h = xrt::bo(*device, 4, krnl->group_id(26));
    auto bo_mem_74_d = xrt::bo(*device, 222452 * sizeof(int), krnl->group_id(27));
    auto bo_mem_75_w = xrt::bo(*device, 4, krnl->group_id(28));
    auto bo_mem_75_h = xrt::bo(*device, 4, krnl->group_id(29));
    auto bo_mem_75_d = xrt::bo(*device, 667340 * sizeof(float), krnl->group_id(30));
    auto bo_mem_76_w = xrt::bo(*device, 4, krnl->group_id(31));
    auto bo_mem_76_h = xrt::bo(*device, 4, krnl->group_id(32));
    auto bo_mem_76_d = xrt::bo(*device, 667340 * sizeof(float), krnl->group_id(33));
    auto bo_mem_77_w = xrt::bo(*device, 4, krnl->group_id(34));
    auto bo_mem_77_h = xrt::bo(*device, 4, krnl->group_id(35));
    auto bo_mem_77_d = xrt::bo(*device, 667340 * sizeof(float), krnl->group_id(36));
    auto bo_mem_78_w = xrt::bo(*device, 4, krnl->group_id(37));
    auto bo_mem_78_h = xrt::bo(*device, 4, krnl->group_id(38));
    auto bo_mem_78_d = xrt::bo(*device, 667340 * sizeof(float), krnl->group_id(39));
    auto bo_mem_79_w = xrt::bo(*device, 4, krnl->group_id(40));
    auto bo_mem_79_h = xrt::bo(*device, 4, krnl->group_id(41));
    auto bo_mem_79_d = xrt::bo(*device, 222452 * sizeof(float), krnl->group_id(42));
    auto bo_mem_80_w = xrt::bo(*device, 4, krnl->group_id(43));
    auto bo_mem_80_h = xrt::bo(*device, 4, krnl->group_id(44));
    auto bo_mem_80_d = xrt::bo(*device, 667340 * sizeof(float), krnl->group_id(45));
    auto bo_mem_81_w = xrt::bo(*device, 4, krnl->group_id(46));
    auto bo_mem_81_h = xrt::bo(*device, 4, krnl->group_id(47));
    auto bo_mem_81_d = xrt::bo(*device, 222452 * sizeof(float), krnl->group_id(48));
    auto bo_mem_82_w = xrt::bo(*device, 4, krnl->group_id(49));
    auto bo_mem_82_h = xrt::bo(*device, 4, krnl->group_id(50));
    auto bo_mem_82_d = xrt::bo(*device, 222452 * sizeof(int), krnl->group_id(51));

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
