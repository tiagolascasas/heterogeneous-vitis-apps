#include "cluster.h"
#include <stdint.h>
#include <iostream>
#include <vector>
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

void trackFeaturesPyramidalLK_hw_bridge(F2D **blurredImage, I2D *Ic, F2D **previousFrameBlurred_level1,
                                        F2D **blurred_level1, F2D **previousFrameBlurred_level2, F2D **blurred_level2,
                                        F2D **verticalEdge_level1, F2D **horizontalEdge_level1,
                                        F2D **verticalEdge_level2, F2D **horizontalEdge_level2, F2D **newpoints,
                                        F2D **features, I2D **status, int *WINSZ, float *accuracy, int *LK_ITER,
                                        F2D **np_temp, int *k, int *numFind, int *i)
{
    if (getenv("OFFLOAD_SIM") != NULL) {
        // Mock hardware simulation
        int blurredImage_width = (*blurredImage)->width;
        int blurredImage_height = (*blurredImage)->height;
        float* blurredImage_data = (*blurredImage)->data;
        int blurred_level1_width = (*blurred_level1)->width;
        int blurred_level1_height = (*blurred_level1)->height;
        float* blurred_level1_data = (*blurred_level1)->data;
        int blurred_level2_width = (*blurred_level2)->width;
        int blurred_level2_height = (*blurred_level2)->height;
        float* blurred_level2_data = (*blurred_level2)->data;
        int features_width = (*features)->width;
        int features_height = (*features)->height;
        float* features_data = (*features)->data;
        int Ic_width = Ic->width;
        int Ic_height = Ic->height;
        int* Ic_data = Ic->data;
        int status_width = (*status)->width;
        int status_height = (*status)->height;
        int* status_data = (*status)->data;

        float* d1 = (float*)malloc(8294400*4);
        float* d2 = (float*)malloc(8294400*4);
        float* d3 = (float*)malloc(8294400*4);
        float* d4 = (float*)malloc(4147200*4);
        float* d5 = (float*)malloc(2073600*4);
        float* d6 = (float*)malloc(8294400*4);
        float* d7 = (float*)malloc(8294400*4);
        float* d8 = (float*)malloc(8294400*4);
        float* d9 = (float*)malloc(8294400*4);
        float* d10 = (float*)malloc(2073600*4);
        float* d11 = (float*)malloc(2073600*4);
        float* d12 = (float*)malloc(2073600*4);
        float* d13 = (float*)malloc(2073600*4);
        
        void cluster(
            int *blurredImage_width, int *blurredImage_height, float *blurredImage_data, int *Ic_width, int *Ic_height,
            int *Ic_data, int *blurred_level1_width, int *blurred_level1_height, float *blurred_level1_data,
            int *blurred_level2_width, int *blurred_level2_height, float *blurred_level2_data, int *features_width,
            int *features_height, float *features_data, int *status_width, int *status_height, int *status_data, int *WINSZ,
            float *accuracy, int *LK_ITER, int *k, int *numFind, int *i, float *memregion_236_size8294400,
            float *memregion_239_size8294400, float *memregion_245_size8294400, float *memregion_251_size4147200,
            float *memregion_254_size2073600, float *memregion_260_size8294400, float *memregion_263_size8294400,
            float *memregion_272_size8294400, float *memregion_275_size8294400, float *memregion_284_size2073600,
            float *memregion_287_size2073600, float *memregion_296_size2073600, float *memregion_299_size2073600);

        cluster(
            &blurredImage_width, &blurredImage_height, blurredImage_data, &Ic_width, &Ic_height, Ic_data,
            &blurred_level1_width, &blurred_level1_height, blurred_level1_data, &blurred_level2_width,
            &blurred_level2_height, blurred_level2_data, &features_width, &features_height, features_data,
            &status_width, &status_height, status_data, WINSZ, accuracy, LK_ITER, k, numFind, i,
            d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13
        );
        
        (*blurredImage)->width = blurredImage_width;
        (*blurredImage)->height = blurredImage_height;
        (*blurred_level1)->width = blurred_level1_width;
        (*blurred_level1)->height = blurred_level1_height;
        (*blurred_level2)->width = blurred_level2_width;
        (*blurred_level2)->height = blurred_level2_height;
        (*features)->width = features_width;
        (*features)->height = features_height;
        Ic->width = Ic_width;
        Ic->height = Ic_height;
        (*status)->width = status_width;
        (*status)->height = status_height;
        return;
    }

    static bool initialized = false;
    static xrt::device device;
    static xrt::uuid uuid;
    static xrt::kernel krnl;

    if (!initialized) {
        device = xrt::device(0);
        uuid = device.load_xclbin("cluster_hw.xclbin");
        krnl = xrt::kernel(device, uuid, "cluster");
        initialized = true;
    }

    int blurredImage_width = (*blurredImage)->width;
    int blurredImage_height = (*blurredImage)->height;
    float* blurredImage_data = (*blurredImage)->data;
    int blurred_level1_width = (*blurred_level1)->width;
    int blurred_level1_height = (*blurred_level1)->height;
    float* blurred_level1_data = (*blurred_level1)->data;
    int blurred_level2_width = (*blurred_level2)->width;
    int blurred_level2_height = (*blurred_level2)->height;
    float* blurred_level2_data = (*blurred_level2)->data;
    int features_width = (*features)->width;
    int features_height = (*features)->height;
    float* features_data = (*features)->data;
    int Ic_width = Ic->width;
    int Ic_height = Ic->height;
    int* Ic_data = Ic->data;
    int status_width = (*status)->width;
    int status_height = (*status)->height;
    int* status_data = (*status)->data;
    int WINSZ_val = *WINSZ;
    float accuracy_val = *accuracy;
    int LK_ITER_val = *LK_ITER;
    int k_val = *k;
    int numFind_val = *numFind;
    int i_val = *i;

    std::vector<xrt::bo*> sync_out_bos;

    auto bo_blurredImage_width = xrt::bo(device, 4, krnl.group_id(0));
    bo_blurredImage_width.write(&blurredImage_width);
    auto bo_blurredImage_height = xrt::bo(device, 4, krnl.group_id(1));
    bo_blurredImage_height.write(&blurredImage_height);
    auto bo_blurredImage_data = xrt::bo(device, 33177600, krnl.group_id(2));
    bo_blurredImage_data.write(blurredImage_data);
    sync_out_bos.push_back(&bo_blurredImage_data);
    auto bo_Ic_width = xrt::bo(device, 4, krnl.group_id(3));
    bo_Ic_width.write(&Ic_width);
    auto bo_Ic_height = xrt::bo(device, 4, krnl.group_id(4));
    bo_Ic_height.write(&Ic_height);
    auto bo_Ic_data = xrt::bo(device, 33177600, krnl.group_id(5));
    bo_Ic_data.write(Ic_data);
    sync_out_bos.push_back(&bo_Ic_data);
    auto bo_blurred_level1_width = xrt::bo(device, 4, krnl.group_id(6));
    bo_blurred_level1_width.write(&blurred_level1_width);
    auto bo_blurred_level1_height = xrt::bo(device, 4, krnl.group_id(7));
    bo_blurred_level1_height.write(&blurred_level1_height);
    auto bo_blurred_level1_data = xrt::bo(device, 33177600, krnl.group_id(8));
    bo_blurred_level1_data.write(blurred_level1_data);
    sync_out_bos.push_back(&bo_blurred_level1_data);
    auto bo_blurred_level2_width = xrt::bo(device, 4, krnl.group_id(9));
    bo_blurred_level2_width.write(&blurred_level2_width);
    auto bo_blurred_level2_height = xrt::bo(device, 4, krnl.group_id(10));
    bo_blurred_level2_height.write(&blurred_level2_height);
    auto bo_blurred_level2_data = xrt::bo(device, 8294400, krnl.group_id(11));
    bo_blurred_level2_data.write(blurred_level2_data);
    sync_out_bos.push_back(&bo_blurred_level2_data);
    auto bo_features_width = xrt::bo(device, 4, krnl.group_id(12));
    bo_features_width.write(&features_width);
    sync_out_bos.push_back(&bo_features_width);
    auto bo_features_height = xrt::bo(device, 4, krnl.group_id(13));
    bo_features_height.write(&features_height);
    sync_out_bos.push_back(&bo_features_height);
    auto bo_features_data = xrt::bo(device, 160, krnl.group_id(14));
    bo_features_data.write(features_data);
    sync_out_bos.push_back(&bo_features_data);
    auto bo_status_width = xrt::bo(device, 4, krnl.group_id(15));
    bo_status_width.write(&status_width);
    sync_out_bos.push_back(&bo_status_width);
    auto bo_status_height = xrt::bo(device, 4, krnl.group_id(16));
    bo_status_height.write(&status_height);
    sync_out_bos.push_back(&bo_status_height);
    auto bo_status_data = xrt::bo(device, 128, krnl.group_id(17));
    bo_status_data.write(status_data);
    sync_out_bos.push_back(&bo_status_data);
    auto bo_WINSZ = xrt::bo(device, 4, krnl.group_id(18));
    bo_WINSZ.write(&WINSZ);
    auto bo_accuracy = xrt::bo(device, 4, krnl.group_id(19));
    bo_accuracy.write(&accuracy);
    auto bo_LK_ITER = xrt::bo(device, 4, krnl.group_id(20));
    bo_LK_ITER.write(&LK_ITER);
    auto bo_k = xrt::bo(device, 4, krnl.group_id(21));
    bo_k.write(&k);
    auto bo_numFind = xrt::bo(device, 4, krnl.group_id(22));
    bo_numFind.write(&numFind);
    auto bo_i = xrt::bo(device, 4, krnl.group_id(23));
    bo_i.write(&i);
    auto bo_memregion_236_size8294400 = xrt::bo(device, 33177600, krnl.group_id(24));
    auto bo_memregion_239_size8294400 = xrt::bo(device, 33177600, krnl.group_id(25));
    auto bo_memregion_245_size8294400 = xrt::bo(device, 33177600, krnl.group_id(26));
    auto bo_memregion_251_size4147200 = xrt::bo(device, 16588800, krnl.group_id(27));
    auto bo_memregion_254_size2073600 = xrt::bo(device, 8294400, krnl.group_id(28));
    auto bo_memregion_260_size8294400 = xrt::bo(device, 33177600, krnl.group_id(29));
    auto bo_memregion_263_size8294400 = xrt::bo(device, 33177600, krnl.group_id(30));
    auto bo_memregion_272_size8294400 = xrt::bo(device, 33177600, krnl.group_id(31));
    auto bo_memregion_275_size8294400 = xrt::bo(device, 33177600, krnl.group_id(32));
    auto bo_memregion_284_size2073600 = xrt::bo(device, 8294400, krnl.group_id(33));
    auto bo_memregion_287_size2073600 = xrt::bo(device, 8294400, krnl.group_id(34));
    auto bo_memregion_296_size2073600 = xrt::bo(device, 8294400, krnl.group_id(35));
    auto bo_memregion_299_size2073600 = xrt::bo(device, 8294400, krnl.group_id(36));


    for (auto bo : { &bo_blurredImage_width, &bo_blurredImage_height, &bo_blurredImage_data, &bo_Ic_width, &bo_Ic_height, &bo_Ic_data, &bo_blurred_level1_width, &bo_blurred_level1_height, &bo_blurred_level1_data, &bo_blurred_level2_width, &bo_blurred_level2_height, &bo_blurred_level2_data, &bo_features_width, &bo_features_height, &bo_features_data, &bo_status_width, &bo_status_height, &bo_status_data, &bo_WINSZ, &bo_accuracy, &bo_LK_ITER, &bo_k, &bo_numFind, &bo_i, &bo_memregion_236_size8294400, &bo_memregion_239_size8294400, &bo_memregion_245_size8294400, &bo_memregion_251_size4147200, &bo_memregion_254_size2073600, &bo_memregion_260_size8294400, &bo_memregion_263_size8294400, &bo_memregion_272_size8294400, &bo_memregion_275_size8294400, &bo_memregion_284_size2073600, &bo_memregion_287_size2073600, &bo_memregion_296_size2073600, &bo_memregion_299_size2073600 }) {
        bo->sync(XCL_BO_SYNC_BO_TO_DEVICE);
    }

    auto run = xrt::run(krnl);
    run.set_arg(0, bo_blurredImage_width);
    run.set_arg(1, bo_blurredImage_height);
    run.set_arg(2, bo_blurredImage_data);
    run.set_arg(3, bo_Ic_width);
    run.set_arg(4, bo_Ic_height);
    run.set_arg(5, bo_Ic_data);
    run.set_arg(6, bo_blurred_level1_width);
    run.set_arg(7, bo_blurred_level1_height);
    run.set_arg(8, bo_blurred_level1_data);
    run.set_arg(9, bo_blurred_level2_width);
    run.set_arg(10, bo_blurred_level2_height);
    run.set_arg(11, bo_blurred_level2_data);
    run.set_arg(12, bo_features_width);
    run.set_arg(13, bo_features_height);
    run.set_arg(14, bo_features_data);
    run.set_arg(15, bo_status_width);
    run.set_arg(16, bo_status_height);
    run.set_arg(17, bo_status_data);
    run.set_arg(18, bo_WINSZ);
    run.set_arg(19, bo_accuracy);
    run.set_arg(20, bo_LK_ITER);
    run.set_arg(21, bo_k);
    run.set_arg(22, bo_numFind);
    run.set_arg(23, bo_i);
    run.set_arg(24, bo_memregion_236_size8294400);
    run.set_arg(25, bo_memregion_239_size8294400);
    run.set_arg(26, bo_memregion_245_size8294400);
    run.set_arg(27, bo_memregion_251_size4147200);
    run.set_arg(28, bo_memregion_254_size2073600);
    run.set_arg(29, bo_memregion_260_size8294400);
    run.set_arg(30, bo_memregion_263_size8294400);
    run.set_arg(31, bo_memregion_272_size8294400);
    run.set_arg(32, bo_memregion_275_size8294400);
    run.set_arg(33, bo_memregion_284_size2073600);
    run.set_arg(34, bo_memregion_287_size2073600);
    run.set_arg(35, bo_memregion_296_size2073600);
    run.set_arg(36, bo_memregion_299_size2073600);

    run.start();
    run.wait();

    for (auto bo : sync_out_bos) {
        bo->sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    }

    bo_blurredImage_width.read(&blurredImage_width);
    bo_blurredImage_height.read(&blurredImage_height);
    bo_blurredImage_data.read(blurredImage_data);
    bo_Ic_width.read(&Ic_width);
    bo_Ic_height.read(&Ic_height);
    bo_Ic_data.read(Ic_data);
    bo_blurred_level1_width.read(&blurred_level1_width);
    bo_blurred_level1_height.read(&blurred_level1_height);
    bo_blurred_level1_data.read(blurred_level1_data);
    bo_blurred_level2_width.read(&blurred_level2_width);
    bo_blurred_level2_height.read(&blurred_level2_height);
    bo_blurred_level2_data.read(blurred_level2_data);
    bo_features_width.read(&features_width);
    bo_features_height.read(&features_height);
    bo_features_data.read(features_data);
    bo_status_width.read(&status_width);
    bo_status_height.read(&status_height);
    bo_status_data.read(status_data);
    bo_WINSZ.read(&WINSZ);
    bo_accuracy.read(&accuracy);
    bo_LK_ITER.read(&LK_ITER);
    bo_k.read(&k);
    bo_numFind.read(&numFind);
    bo_i.read(&i);

    (*blurredImage)->width = blurredImage_width;
    (*blurredImage)->height = blurredImage_height;
    (*blurred_level1)->width = blurred_level1_width;
    (*blurred_level1)->height = blurred_level1_height;
    (*blurred_level2)->width = blurred_level2_width;
    (*blurred_level2)->height = blurred_level2_height;
    (*features)->width = features_width;
    (*features)->height = features_height;
    Ic->width = Ic_width;
    Ic->height = Ic_height;
    (*status)->width = status_width;
    (*status)->height = status_height;
}
