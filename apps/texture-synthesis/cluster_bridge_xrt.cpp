#include "cluster.h"
#include <stdint.h>
#include <iostream>
#include <vector>
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

void create_texture_out1_out0_out1_hw_bridge(double *diff, int *k, int *ncand, double *curdiff, F2D *image, int *j,
                                             int *i, params *data, int *bestx, int *besty, int *global_candlistx,
                                             int *global_candlisty, F2D *global_result, F2D *global_target,
                                             int *global_yloopout, int *global_xloopout)
{
    if (getenv("OFFLOAD_SIM") != NULL) {
        int image_width = image->width;
        int image_height = image->height;
        float *image_data = image->data;
        int result_width = global_result->width;
        int result_height = global_result->height;
        float *result_data = global_result->data;
        int target_width = global_target->width;
        int target_height = global_target->height;
        float *target_data = global_target->data;
        int data_localx = data->localx;
        int data_localy = data->localy;
        int data_localz = data->localz;
        int data_widthin = data->widthin;
        int data_widthout = data->widthout;
        int data_heightin = data->heightin;
        int data_heightout = data->heightout;
        int data_nfin = data->nfin;
        int data_nfout = data->nfout;

        void cluster(
            double *diff, int *k, int *ncand, double *curdiff, int *image_width, int *image_height, float *image_data, int *j, int *i, int *data_localx, int *data_localy, int *data_localz,
            int *data_widthin, int *data_widthout, int *data_heightin, int *data_heightout, int *data_nfin, int *data_nfout, int *bestx, int *besty,
            int *candlistx, int *candlisty, int *result_width, int *result_height, float *result_data,
            int *target_width, int *target_height, float *target_data, int *yloopout, int *xloopout);

        cluster(
            diff, k, ncand, curdiff, &image_width, &image_height, image_data, j, i, &data_localx, &data_localy, &data_localz,
            &data_widthin, &data_widthout, &data_heightin, &data_heightout, &data_nfin, &data_nfout, bestx, besty,
            global_candlistx, global_candlisty, &result_width, &result_height, result_data,
            &target_width, &target_height, target_data, global_yloopout, global_xloopout);

        image->width = image_width;
        image->height = image_height;
        global_result->width = result_width;
        global_result->height = result_height;
        global_target->width = target_width;
        global_target->height = target_height;
        data->localx = data_localx;
        data->localy = data_localy;
        data->localz = data_localz;
        data->widthin = data_widthin;
        data->widthout = data_widthout;
        data->heightin = data_heightin;
        data->heightout = data_heightout;
        data->nfin = data_nfin;
        data->nfout = data_nfout;
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

    double diff_val = *diff;
    int k_val = *k;
    int ncand_val = *ncand;
    double curdiff_val = *curdiff;
    int image_width = image->width;
    int image_height = image->height;
    float *image_data = image->data;
    int j_val = *j;
    int i_val = *i;
    int data_localx = data->localx;
    int data_localy = data->localy;
    int data_localz = data->localz;
    int data_widthin = data->widthin;
    int data_widthout = data->widthout;
    int data_heightin = data->heightin;
    int data_heightout = data->heightout;
    int data_nfin = data->nfin;
    int data_nfout = data->nfout;
    int bestx_val = *bestx;
    int besty_val = *besty;
    
    int *candlistx = global_candlistx;
    int *candlisty = global_candlisty;

    int result_width = global_result->width;
    int result_height = global_result->height;
    float *result_data = global_result->data;
    int target_width = global_target->width;
    int target_height = global_target->height;
    float *target_data = global_target->data;
    int yloopout = *global_yloopout;
    int xloopout = *global_xloopout;

    auto bo_diff = xrt::bo(device, 8, krnl.group_id(0));
    bo_diff.write(&diff);
    auto bo_k = xrt::bo(device, 4, krnl.group_id(1));
    bo_k.write(&k);
    auto bo_ncand = xrt::bo(device, 4, krnl.group_id(2));
    bo_ncand.write(&ncand);
    auto bo_curdiff = xrt::bo(device, 8, krnl.group_id(3));
    bo_curdiff.write(&curdiff);
    auto bo_image_width = xrt::bo(device, 4, krnl.group_id(4));
    bo_image_width.write(&image_width);
    auto bo_image_height = xrt::bo(device, 4, krnl.group_id(5));
    bo_image_height.write(&image_height);
    auto bo_image_data = xrt::bo(device, 76800, krnl.group_id(6));
    bo_image_data.write(image_data);
    auto bo_j = xrt::bo(device, 4, krnl.group_id(7));
    bo_j.write(&j);
    auto bo_i = xrt::bo(device, 4, krnl.group_id(8));
    bo_i.write(&i);
    auto bo_data_localx = xrt::bo(device, 4, krnl.group_id(9));
    bo_data_localx.write(&data_localx);
    auto bo_data_localy = xrt::bo(device, 4, krnl.group_id(10));
    bo_data_localy.write(&data_localy);
    auto bo_data_localz = xrt::bo(device, 4, krnl.group_id(11));
    bo_data_localz.write(&data_localz);
    auto bo_data_widthin = xrt::bo(device, 4, krnl.group_id(12));
    bo_data_widthin.write(&data_widthin);
    auto bo_data_widthout = xrt::bo(device, 4, krnl.group_id(13));
    bo_data_widthout.write(&data_widthout);
    auto bo_data_heightin = xrt::bo(device, 4, krnl.group_id(14));
    bo_data_heightin.write(&data_heightin);
    auto bo_data_heightout = xrt::bo(device, 4, krnl.group_id(15));
    bo_data_heightout.write(&data_heightout);
    auto bo_data_nfin = xrt::bo(device, 4, krnl.group_id(16));
    bo_data_nfin.write(&data_nfin);
    auto bo_data_nfout = xrt::bo(device, 4, krnl.group_id(17));
    bo_data_nfout.write(&data_nfout);
    auto bo_bestx = xrt::bo(device, 4, krnl.group_id(18));
    bo_bestx.write(&bestx);
    auto bo_besty = xrt::bo(device, 4, krnl.group_id(19));
    bo_besty.write(&besty);
    auto bo_candlistx = xrt::bo(device, 1600, krnl.group_id(20));
    bo_candlistx.write(candlistx);
    auto bo_candlisty = xrt::bo(device, 1600, krnl.group_id(21));
    bo_candlisty.write(candlisty);
    auto bo_result_width = xrt::bo(device, 4, krnl.group_id(22));
    bo_result_width.write(&result_width);
    auto bo_result_height = xrt::bo(device, 4, krnl.group_id(23));
    bo_result_height.write(&result_height);
    auto bo_result_data = xrt::bo(device, 76800, krnl.group_id(24));
    bo_result_data.write(result_data);
    auto bo_target_width = xrt::bo(device, 4, krnl.group_id(25));
    bo_target_width.write(&target_width);
    auto bo_target_height = xrt::bo(device, 4, krnl.group_id(26));
    bo_target_height.write(&target_height);
    auto bo_target_data = xrt::bo(device, 76800, krnl.group_id(27));
    bo_target_data.write(target_data);
    auto bo_yloopout = xrt::bo(device, 4, krnl.group_id(28));
    bo_yloopout.write(&yloopout);
    auto bo_xloopout = xrt::bo(device, 4, krnl.group_id(29));
    bo_xloopout.write(&xloopout);


    for (auto bo : { &bo_diff, &bo_k, &bo_ncand, &bo_curdiff, &bo_image_width, &bo_image_height, &bo_image_data, &bo_j, &bo_i, &bo_data_localx, &bo_data_localy, &bo_data_localz, &bo_data_widthin, &bo_data_widthout, &bo_data_heightin, &bo_data_heightout, &bo_data_nfin, &bo_data_nfout, &bo_bestx, &bo_besty, &bo_candlistx, &bo_candlisty, &bo_result_width, &bo_result_height, &bo_result_data, &bo_target_width, &bo_target_height, &bo_target_data, &bo_yloopout, &bo_xloopout }) {
        bo->sync(XCL_BO_SYNC_BO_TO_DEVICE);
    }

    auto run = xrt::run(krnl);
    run.set_arg(0, bo_diff);
    run.set_arg(1, bo_k);
    run.set_arg(2, bo_ncand);
    run.set_arg(3, bo_curdiff);
    run.set_arg(4, bo_image_width);
    run.set_arg(5, bo_image_height);
    run.set_arg(6, bo_image_data);
    run.set_arg(7, bo_j);
    run.set_arg(8, bo_i);
    run.set_arg(9, bo_data_localx);
    run.set_arg(10, bo_data_localy);
    run.set_arg(11, bo_data_localz);
    run.set_arg(12, bo_data_widthin);
    run.set_arg(13, bo_data_widthout);
    run.set_arg(14, bo_data_heightin);
    run.set_arg(15, bo_data_heightout);
    run.set_arg(16, bo_data_nfin);
    run.set_arg(17, bo_data_nfout);
    run.set_arg(18, bo_bestx);
    run.set_arg(19, bo_besty);
    run.set_arg(20, bo_candlistx);
    run.set_arg(21, bo_candlisty);
    run.set_arg(22, bo_result_width);
    run.set_arg(23, bo_result_height);
    run.set_arg(24, bo_result_data);
    run.set_arg(25, bo_target_width);
    run.set_arg(26, bo_target_height);
    run.set_arg(27, bo_target_data);
    run.set_arg(28, bo_yloopout);
    run.set_arg(29, bo_xloopout);

    run.start();
    run.wait();

    for (auto bo : { &bo_diff, &bo_k, &bo_ncand, &bo_curdiff, &bo_bestx, &bo_besty, &bo_candlistx, &bo_candlisty, &bo_result_data, &bo_target_data }) {
        bo->sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    }

    bo_diff.read(&diff);
    bo_k.read(&k);
    bo_ncand.read(&ncand);
    bo_curdiff.read(&curdiff);
    bo_image_width.read(&image_width);
    bo_image_height.read(&image_height);
    bo_image_data.read(image_data);
    bo_j.read(&j);
    bo_i.read(&i);
    bo_data_localx.read(&data_localx);
    bo_data_localy.read(&data_localy);
    bo_data_localz.read(&data_localz);
    bo_data_widthin.read(&data_widthin);
    bo_data_widthout.read(&data_widthout);
    bo_data_heightin.read(&data_heightin);
    bo_data_heightout.read(&data_heightout);
    bo_data_nfin.read(&data_nfin);
    bo_data_nfout.read(&data_nfout);
    bo_bestx.read(&bestx);
    bo_besty.read(&besty);
    bo_candlistx.read(candlistx);
    bo_candlisty.read(candlisty);
    bo_result_width.read(&result_width);
    bo_result_height.read(&result_height);
    bo_result_data.read(result_data);
    bo_target_width.read(&target_width);
    bo_target_height.read(&target_height);
    bo_target_data.read(target_data);
    bo_yloopout.read(&yloopout);
    bo_xloopout.read(&xloopout);

    *diff = diff_val;
    *k = k_val;
    *ncand = ncand_val;
    *curdiff = curdiff_val;
    *bestx = bestx_val;
    *besty = besty_val;
    image->width = image_width;
    image->height = image_height;
    global_result->width = result_width;
    global_result->height = result_height;
    global_target->width = target_width;
    global_target->height = target_height;
    *global_yloopout = yloopout;
    *global_xloopout = xloopout;
    data->localx = data_localx;
    data->localy = data_localy;
    data->localz = data_localz;
    data->widthin = data_widthin;
    data->widthout = data_widthout;
    data->heightin = data_heightin;
    data->heightout = data_heightout;
    data->nfin = data_nfin;
    data->nfout = data_nfout;
}
