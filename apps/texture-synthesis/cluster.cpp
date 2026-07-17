#include "cluster.h"
static int *xloopout;
static int *yloopout;
static int *target_width;
static int *target_height;
static float *target_data;
static F2D *target;
static int *result_width;
static int *result_height;
static float *result_data;
static F2D *result;
static int *candlisty;
static int *candlistx;
void cluster(double *diff, int *k, int *ncand, double *curdiff, int *image_width,
                                      int *image_height, float *image_data, int *j, int *i, int *data_localx,
                                      int *data_localy, int *data_localz, int *data_widthin, int *data_widthout,
                                      int *data_heightin, int *data_heightout, int *data_nfin, int *data_nfout,
                                      int *bestx, int *besty, int *candlistx, int *candlisty, int *result_width,
                                      int *result_height, float *result_data, int *target_width, int *target_height,
                                      float *target_data, int *yloopout, int *xloopout);
void cluster(double *diff, int *k, int *ncand, double *curdiff, int *image_width,
                                      int *image_height, float *image_data, int *j, int *i, int *data_localx,
                                      int *data_localy, int *data_localz, int *data_widthin, int *data_widthout,
                                      int *data_heightin, int *data_heightout, int *data_nfin, int *data_nfout,
                                      int *bestx, int *besty, int *candlistx, int *candlisty, int *result_width,
                                      int *result_height, float *result_data, int *target_width, int *target_height,
                                      float *target_data, int *yloopout, int *xloopout)
{
    float local_image_data[2304];
#pragma HLS bind_storage variable = local_image_data type = RAM_2P impl = BRAM
    memcpy(local_image_data, image_data, 9216);
    double local_curdiff;
    local_curdiff = *curdiff;
    int local_besty;
    local_besty = *besty;
    int local_bestx;
    local_bestx = *bestx;
    int local_data_nfout;
    local_data_nfout = *data_nfout;
    int local_data_nfin;
    local_data_nfin = *data_nfin;
    int local_data_heightout;
    local_data_heightout = *data_heightout;
    int local_data_heightin;
    local_data_heightin = *data_heightin;
    int local_data_widthout;
    local_data_widthout = *data_widthout;
    int local_data_widthin;
    local_data_widthin = *data_widthin;
    int local_data_localz;
    local_data_localz = *data_localz;
    int local_data_localy;
    local_data_localy = *data_localy;
    int local_data_localx;
    local_data_localx = *data_localx;
    int local_image_height;
    local_image_height = *image_height;
    int local_image_width;
    local_image_width = *image_width;
    int local_ncand;
    local_ncand = *ncand;
    int local_k;
    local_k = *k;
#pragma clava bram_usage = 4 max_bram = 1824 bytes_per_bram = 2048
#pragma clava param = diff type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 8
#pragma clava param = k type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = ncand type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = curdiff type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 8
#pragma clava param = image_height type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = image_width type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = image_data type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 9216
#pragma clava param = j type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = i type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 4
#pragma clava param = data_localx type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = data_localy type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = data_localz type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = data_widthin type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = data_widthout type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = data_heightin type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = data_heightout type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = data_nfin type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = data_nfout type = STRUCT_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = bestx type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = besty type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 4
#pragma clava param = global_candlistx type = PRIMITIVE_POINTER in = NONE out = LIVEOUT size = 4
#pragma clava param = global_candlisty type = PRIMITIVE_POINTER in = NONE out = LIVEOUT size = 4
#pragma clava param = result_height type = STRUCT_POINTER in = NONE out = LIVEOUT size = 4
#pragma clava param = result_width type = STRUCT_POINTER in = NONE out = LIVEOUT size = 4
#pragma clava param = result_data type = STRUCT_POINTER in = NONE out = LIVEOUT size = 3686400
#pragma clava param = target_height type = STRUCT_POINTER in = NONE out = LIVEOUT size = 4
#pragma clava param = target_width type = STRUCT_POINTER in = NONE out = LIVEOUT size = 4
#pragma clava param = target_data type = STRUCT_POINTER in = NONE out = LIVEOUT size = 3686400
#pragma clava param = yloopout type = PRIMITIVE_POINTER in = NONE out = LIVEOUT size = 4
#pragma clava param = xloopout type = PRIMITIVE_POINTER in = NONE out = LIVEOUT size = 4
    // candlistx = global_candlistx; // Removed by CallTreeInliner
    // candlisty = global_candlisty; // Removed by CallTreeInliner
    // result = global_result; // Removed by CallTreeInliner
    // target = global_target; // Removed by CallTreeInliner
    // yloopout = global_yloopout; // Removed by CallTreeInliner
    // xloopout = global_xloopout; // Removed by CallTreeInliner
    // cluster_create_texture_out1_out0_out1_out0(): begin inline
    (*diff) = 1e10;
    // cluster_create_texture_out1_out0_out1_out0(): end inline
    for ((local_k) = 0; (local_k) < (local_ncand); (local_k)++)
    {
#pragma HLS loop_tripcount max = 112 min = 2
        // cluster_create_texture_out1_out0_out1_out1(): begin inline
        double _d0_0_i912;
        // cluster_compare_neighb(): begin inline
        double tmp_i913;
        double res_i913;
        int i_i913;
        int j_i913;
        int addr1_i913;
        int addr_i913;
        res_i913 = 0;
        for (i_i913 = -((local_data_localy) / 2); i_i913 < 0; i_i913++)
        {
#pragma HLS loop_tripcount max = 7
            for (j_i913 = -((local_data_localx) / 2); j_i913 <= (local_data_localx) / 2; j_i913++)
            {
#pragma HLS loop_tripcount max = 15
                addr_i913 = (1 * (((candlisty[(local_k)]) + i_i913) * (local_data_widthin) +
                                  ((candlistx[(local_k)]) + j_i913)));
                addr1_i913 = (1 * ((yloopout[(*i) + i_i913]) * (local_data_widthout) + (xloopout[(*j) + j_i913])));
                tmp_i913 = local_image_data[addr_i913 + 0] - result_data[addr1_i913 + 0];
                res_i913 = res_i913 + tmp_i913 * tmp_i913;
            }
        }
        for (j_i913 = -((local_data_localx) / 2); j_i913 < 0; j_i913++)
        {
#pragma HLS loop_tripcount max = 7
            addr_i913 = (1 * ((candlisty[(local_k)]) * (local_data_widthin) + ((candlistx[(local_k)]) + j_i913)));
            addr1_i913 = (1 * ((*i) * (local_data_widthout) + (xloopout[(*j) + j_i913])));
            tmp_i913 = local_image_data[addr_i913 + 0] - result_data[addr1_i913 + 0];
            res_i913 = res_i913 + tmp_i913 * tmp_i913;
        }
        local_curdiff = res_i913;
        // cluster_compare_neighb(): end inline
        // cluster_compare_rest(): begin inline
        double tmp_i914;
        double res_i914;
        int i_i914;
        int j_i914;
        int addr_i914;
        int addr1_i914;
        res_i914 = 0;
        for (i_i914 = ((local_data_localy) / 2); i_i914 > 0; i_i914--)
        {
#pragma HLS loop_tripcount max = 7
            for (j_i914 = -((local_data_localx) / 2); j_i914 <= (local_data_localx) / 2; j_i914++)
            {
#pragma HLS loop_tripcount max = 15
                int decomp_0_renamed_239_i914;
                addr_i914 = (1 * (((candlisty[(local_k)]) + i_i914) * (local_data_widthin) +
                                  ((candlistx[(local_k)]) + j_i914)));
                addr1_i914 = (1 * ((yloopout[(*i) + i_i914]) * (local_data_widthout) + (xloopout[(*j) + j_i914])));
                decomp_0_renamed_239_i914 = target_data[addr1_i914 + 0] != 1.0;
                if (decomp_0_renamed_239_i914)
                { // KVS?
                    tmp_i914 = local_image_data[addr_i914 + 0] - target_data[addr1_i914 + 0];
                    res_i914 = res_i914 + tmp_i914 * tmp_i914;
                }
            }
        }
        for (j_i914 = ((local_data_localx) / 2); j_i914 > 0; j_i914--)
        {
#pragma HLS loop_tripcount max = 7
            int decomp_1_renamed_17_i914;
            addr_i914 = (1 * ((candlisty[(local_k)]) * (local_data_widthin) + ((candlistx[(local_k)]) + j_i914)));
            addr1_i914 = (1 * ((*i) * (local_data_widthout) + (xloopout[(*j) + j_i914])));
            decomp_1_renamed_17_i914 = target_data[addr1_i914 + 0] != 1.0;
            if (decomp_1_renamed_17_i914)
            { // KVS?
                tmp_i914 = local_image_data[addr_i914 + 0] - target_data[addr1_i914 + 0];
                res_i914 = res_i914 + tmp_i914 * tmp_i914;
            }
        }
        _d0_0_i912 = res_i914;
        // cluster_compare_rest(): end inline
        // cluster_create_texture_out1_out0_out1_out1_out1(): begin inline
        double _d0_1_i915;
        int decomp_1_renamed_18_i915;
        _d0_1_i915 = (local_curdiff) + _d0_0_i912;
        (local_curdiff) = _d0_1_i915;
        decomp_1_renamed_18_i915 = (local_curdiff) < (*diff);
        if (decomp_1_renamed_18_i915)
        {
            (*diff) = (local_curdiff);
            (local_bestx) = candlistx[(local_k)];
            (local_besty) = candlisty[(local_k)];
        }
        // cluster_create_texture_out1_out0_out1_out1_out1(): end inline
            *bestx = local_bestx;
    *besty = local_besty;
        // cluster_create_texture_out1_out0_out1_out1(): end inline
    }
}
