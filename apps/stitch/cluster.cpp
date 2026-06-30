#include "cluster.h"
void cluster(int *points_width, int *points_height, float *points_data, int r, int *rtr_val_width, int *rtr_val_height, float *rtr_val_data, int *memregion_68_size222452_width, int *memregion_68_size222452_height, float *memregion_68_size222452_data, int *memregion_69_size222452_width, int *memregion_69_size222452_height, float *memregion_69_size222452_data, int *memregion_70_size222452_width, int *memregion_70_size222452_height, int *memregion_70_size222452_data, int *memregion_71_size667340_width, int *memregion_71_size667340_height, float *memregion_71_size667340_data, int *memregion_72_size20_width, int *memregion_72_size20_height, float *memregion_72_size20_data, int *memregion_73_size222452_width, int *memregion_73_size222452_height, float *memregion_73_size222452_data, int *memregion_74_size222452_width, int *memregion_74_size222452_height, int *memregion_74_size222452_data, int *memregion_75_size20_width, int *memregion_75_size20_height, float *memregion_75_size20_data, int *memregion_76_size20_width, int *memregion_76_size20_height, float *memregion_76_size20_data, int *memregion_77_size32_width, int *memregion_77_size32_height, float *memregion_77_size32_data, int *memregion_78_size20_width, int *memregion_78_size20_height, float *memregion_78_size20_data, int *memregion_79_size12_width, int *memregion_79_size12_height, float *memregion_79_size12_data, int *memregion_80_size8_width, int *memregion_80_size8_height, float *memregion_80_size8_data, int *memregion_81_size8_width, int *memregion_81_size8_height, float *memregion_81_size8_data, int *memregion_82_size8_width, int *memregion_82_size8_height, int *memregion_82_size8_data)
{
#pragma HLS INTERFACE m_axi port = points_width offset = slave bundle = gmem0
#pragma HLS INTERFACE m_axi port = points_height offset = slave bundle = gmem0
#pragma HLS INTERFACE m_axi port = points_data offset = slave bundle = gmem0

#pragma HLS INTERFACE m_axi port = rtr_val_width offset = slave bundle = gmem1
#pragma HLS INTERFACE m_axi port = rtr_val_height offset = slave bundle = gmem1
#pragma HLS INTERFACE m_axi port = rtr_val_data offset = slave bundle = gmem1

#pragma HLS INTERFACE m_axi port = memregion_68_size222452_width offset = slave bundle = gmem2
#pragma HLS INTERFACE m_axi port = memregion_68_size222452_height offset = slave bundle = gmem2
#pragma HLS INTERFACE m_axi port = memregion_68_size222452_data offset = slave bundle = gmem2

#pragma HLS INTERFACE m_axi port = memregion_69_size222452_width offset = slave bundle = gmem3
#pragma HLS INTERFACE m_axi port = memregion_69_size222452_height offset = slave bundle = gmem3
#pragma HLS INTERFACE m_axi port = memregion_69_size222452_data offset = slave bundle = gmem3

#pragma HLS INTERFACE m_axi port = memregion_70_size222452_width offset = slave bundle = gmem4
#pragma HLS INTERFACE m_axi port = memregion_70_size222452_height offset = slave bundle = gmem4
#pragma HLS INTERFACE m_axi port = memregion_70_size222452_data offset = slave bundle = gmem4

#pragma HLS INTERFACE m_axi port = memregion_71_size667340_width offset = slave bundle = gmem5
#pragma HLS INTERFACE m_axi port = memregion_71_size667340_height offset = slave bundle = gmem5
#pragma HLS INTERFACE m_axi port = memregion_71_size667340_data offset = slave bundle = gmem5

#pragma HLS INTERFACE m_axi port = memregion_73_size222452_width offset = slave bundle = gmem6
#pragma HLS INTERFACE m_axi port = memregion_73_size222452_height offset = slave bundle = gmem6
#pragma HLS INTERFACE m_axi port = memregion_73_size222452_data offset = slave bundle = gmem6

#pragma HLS INTERFACE m_axi port = memregion_74_size222452_width offset = slave bundle = gmem7
#pragma HLS INTERFACE m_axi port = memregion_74_size222452_height offset = slave bundle = gmem7
#pragma HLS INTERFACE m_axi port = memregion_74_size222452_data offset = slave bundle = gmem7

// Small scratch buffers (≤32 bytes each) share gmem8
#pragma HLS INTERFACE m_axi port = memregion_72_size20_width offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_72_size20_height offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_72_size20_data offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_75_size20_width offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_75_size20_height offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_75_size20_data offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_76_size20_width offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_76_size20_height offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_76_size20_data offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_77_size32_width offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_77_size32_height offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_77_size32_data offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_78_size20_width offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_78_size20_height offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_78_size20_data offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_79_size12_width offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_79_size12_height offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_79_size12_data offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_80_size8_width offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_80_size8_height offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_80_size8_data offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_81_size8_width offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_81_size8_height offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_81_size8_data offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_82_size8_width offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_82_size8_height offset = slave bundle = gmem8
#pragma HLS INTERFACE m_axi port = memregion_82_size8_data offset = slave bundle = gmem8

#pragma HLS INTERFACE s_axilite port = r
#pragma HLS INTERFACE s_axilite port = return
    int *temp_width;
    int *temp_height;
    float *temp_data;
    int cols;
    int rows;
    int iter;
    int *v_width;
    int *v_height;
    float *v_data;
    int validCount;
    int j;
    int i;
    int *interestPnts_width;
    int *interestPnts_height;
    float *interestPnts_data;
    float t1;
    float t;
    float r_sq;
    int *supId_width;
    int *supId_height;
    int *supId_data;
    int *srtdVIdx_width;
    int *srtdVIdx_height;
    int *srtdVIdx_data;
    int k;
    int n;
    int *srtdPnts_width;
    int *srtdPnts_height;
    float *srtdPnts_data;
    float C_ROBUST;
    int *suppressR_width;
    int *suppressR_height;
    float *suppressR_data;
    unsigned int MAX_LIMIT;
    int *tempF_i412_width;
    int *tempF_i412_height;
    float *tempF_i412_data;
    // cluster_getANMS_out0(): begin inline
    int *srtdV_i412_width;
    int *srtdV_i412_height;
    float *srtdV_i412_data;
    int cnt_i412;
    int end_i412;
    int supIdPtr_i412;
    MAX_LIMIT = 10000000;
    C_ROBUST = 0.9;
    validCount = 0;
    supIdPtr_i412 = 0;
    // cluster_getANMS_out0(): end inline
    // cluster_fMallocHandle_rep115(): begin inline
    int i_i413;
    int j_i413;
    int out_i413_width;
    int out_i413_height;
    float out_i413_data[55611];
#pragma HLS BIND_STORAGE variable = out_i413_data type = ram_2p impl = auto
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    int _lit36 = 1;
    // cluster_fMallocHandle_out18_rep6(): begin inline
    out_i413_height = *points_height;
    out_i413_width = _lit36;
    v_width = &out_i413_width;
    v_height = &out_i413_height;
    v_data = out_i413_data;
    // cluster_fMallocHandle_out18_rep6(): end inline
    // cluster_fMallocHandle_rep115(): end inline
    // cluster_getANMS_out1(): begin inline
    for (i = 0; i < (*v_height); i++)
    {
#pragma HLS loop_tripcount max = 55611
        v_data[i] = points_data[i * (*points_width) + 2];
    }
    r_sq = r * r * 1.0;
    n = (*v_height);
    int *ind_i415_width;
    int *ind_i415_height;
    int *ind_i415_data;
    // cluster_getANMS_out1(): end inline
    // cluster_fSortIndices(): begin inline
    int k_i415;
    int j_i415;
    int i_i415;
    int *in_i415_width;
    int *in_i415_height;
    float *in_i415_data;
    int cols_i415;
    int rows_i415;
    int decomp_0_renamed_96_i415;
    // cluster_fSortIndices_out12(): begin inline
    rows_i415 = (*v_height);
    cols_i415 = (*v_width);
    // cluster_fSortIndices_out12(): end inline
    // cluster_fDeepCopy_rep5(): begin inline
    int cols_i432;
    int rows_i432;
    int *out_i432_width;
    int *out_i432_height;
    float *out_i432_data;
    int j_i432;
    int i_i432;
    // cluster_fDeepCopy_out14_rep6(): begin inline
    rows_i432 = (*v_height);
    cols_i432 = (*v_width);
    // cluster_fDeepCopy_out14_rep6(): end inline
    // cluster_fMallocHandle_rep150(): begin inline
    int i_i470;
    int j_i470;
    int out_i470_width;
    int out_i470_height;
    float out_i470_data[55611];
#pragma HLS BIND_STORAGE variable = out_i470_data type = ram_2p impl = auto
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    // cluster_fMallocHandle_out18_rep60(): begin inline
    out_i470_height = rows_i432;
    out_i470_width = cols_i432;
    out_i432_width = &out_i470_width;
    out_i432_height = &out_i470_height;
    out_i432_data = out_i470_data;
    // cluster_fMallocHandle_out18_rep60(): end inline
    // cluster_fMallocHandle_rep150(): end inline
    // cluster_fDeepCopy_out15_rep6(): begin inline
    for (i_i432 = 0; i_i432 < rows_i432; i_i432++)
    {
#pragma HLS loop_tripcount max = 55611
        for (j_i432 = 0; j_i432 < cols_i432; j_i432++)
        {
#pragma HLS loop_tripcount max = 1
            out_i432_data[i_i432 * (*out_i432_width) + j_i432] = v_data[i_i432 * (*v_width) + j_i432];
        }
    }
    in_i415_width = out_i432_width;
    in_i415_height = out_i432_height;
    in_i415_data = out_i432_data;
    // cluster_fDeepCopy_out15_rep6(): end inline
    // cluster_fDeepCopy_rep5(): end inline
    // cluster_iMallocHandle_rep58(): begin inline
    int i_i433;
    int j_i433;
    int out_i433_width;
    int out_i433_height;
    int out_i433_data[55611];
#pragma HLS BIND_STORAGE variable = out_i433_data type = ram_2p impl = auto
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    // cluster_iMallocHandle_out25_rep5(): begin inline
    out_i433_height = rows_i415;
    out_i433_width = cols_i415;
    ind_i415_width = &out_i433_width;
    ind_i415_height = &out_i433_height;
    ind_i415_data = out_i433_data;
    // cluster_iMallocHandle_out25_rep5(): end inline
    // cluster_iMallocHandle_rep58(): end inline
    int _lit37 = 1;
    // cluster_fSortIndices_out13(): begin inline
    for (i_i415 = 0; i_i415 < cols_i415; i_i415++)
    {
#pragma HLS loop_tripcount max = 1
        for (j_i415 = 0; j_i415 < rows_i415; j_i415++)
        {
#pragma HLS loop_tripcount max = 55611
            ind_i415_data[j_i415 * (*ind_i415_width) + i_i415] = 0;
        }
    }
    decomp_0_renamed_96_i415 = _lit37 == 1;
    // cluster_fSortIndices_out13(): end inline
    if (decomp_0_renamed_96_i415)
    {
        int *__rtr_val_17_i415_width;
        int *__rtr_val_17_i415_height;
        int *__rtr_val_17_i415_data;
        int __rtr_flag_17_i415;
        __rtr_flag_17_i415 = 0;
        // cluster_fSortIndices_out14(): begin inline
        // cluster_fSortIndices_out14_out0(): begin inline
        for (k_i415 = 0; k_i415 < rows_i415; k_i415++)
        {
#pragma HLS loop_tripcount max = 55611
            for (i_i415 = 0; i_i415 < cols_i415; i_i415++)
            {
#pragma HLS loop_tripcount max = 1
                float localMax_i473;
                int localIndex_i473;
                localMax_i473 = in_i415_data[k_i415 * (*in_i415_width) + i_i415];
                localIndex_i473 = i_i415;
                ind_i415_data[k_i415 * (*ind_i415_width) + i_i415] = i_i415;
                for (j_i415 = 0; j_i415 < cols_i415; j_i415++)
                {
#pragma HLS loop_tripcount max = 1
                    int decomp_1_renamed_13_i473;
                    decomp_1_renamed_13_i473 = localMax_i473 < in_i415_data[k_i415 * (*in_i415_width) + j_i415];
                    if (decomp_1_renamed_13_i473)
                    {
                        ind_i415_data[k_i415 * (*ind_i415_width) + i_i415] = j_i415;
                        localMax_i473 = in_i415_data[k_i415 * (*in_i415_width) + j_i415];
                        localIndex_i473 = j_i415;
                    }
                }
                in_i415_data[k_i415 * (*in_i415_width) + localIndex_i473] = 0;
            }
        }
        // cluster_fSortIndices_out14_out0(): end inline
        // cluster_fFreeHandle_rep43(): begin inline
        int decomp_0_renamed_119_i474;
        // cluster_fFreeHandle_out14_rep41(): begin inline
        decomp_0_renamed_119_i474 = in_i415_width != ((void *)0);
        // cluster_fFreeHandle_out14_rep41(): end inline
        if (decomp_0_renamed_119_i474)
        {
            // free(in_i415);
        }
        __rtr_val_17_i415_width = ind_i415_width;
        __rtr_val_17_i415_height = ind_i415_height;
        __rtr_val_17_i415_data = ind_i415_data;
        // cluster_fFreeHandle_rep43(): end inline
        __rtr_flag_17_i415 = 1;
        // cluster_fSortIndices_out14(): end inline
        if (__rtr_flag_17_i415)
        {
            srtdVIdx_width = __rtr_val_17_i415_width;
            srtdVIdx_height = __rtr_val_17_i415_height;
            srtdVIdx_data = __rtr_val_17_i415_data;
            goto end_inline_i415;
        }
    }
    // cluster_fFreeHandle_rep44(): begin inline
    int decomp_0_renamed_105_i436;
    // cluster_fFreeHandle_out14_rep40(): begin inline
    decomp_0_renamed_105_i436 = in_i415_width != ((void *)0);
    // cluster_fFreeHandle_out14_rep40(): end inline
    if (decomp_0_renamed_105_i436)
    {
        // free(in_i415);
    }
    srtdVIdx_width = ind_i415_width;
    srtdVIdx_height = ind_i415_height;
    srtdVIdx_data = ind_i415_data;
// cluster_fFreeHandle_rep44(): end inline
end_inline_i415:;
    // cluster_fSortIndices(): end inline
    // cluster_fMallocHandle_rep116(): begin inline
    int i_i416;
    int j_i416;
    int out_i416_width;
    int out_i416_height;
    float out_i416_data[55611];
#pragma HLS BIND_STORAGE variable = out_i416_data type = ram_2p impl = auto
#pragma clava malloc_size max = 667340 min = 667340 avg = 667340
    // cluster_fMallocHandle_out18_rep5(): begin inline
    out_i416_height = ((*srtdVIdx_height));
    out_i416_width = ((*points_width));
    srtdPnts_width = &out_i416_width;
    srtdPnts_height = &out_i416_height;
    srtdPnts_data = out_i416_data;
    // cluster_fMallocHandle_out18_rep5(): end inline
    // cluster_fMallocHandle_rep116(): end inline
    // cluster_getANMS_out2(): begin inline
    for (i = 0; i < (*srtdVIdx_height); i++)
    {
#pragma HLS loop_tripcount max = 55611
        for (j = 0; j < (*points_width); j++)
        {
#pragma HLS loop_tripcount max = 3
            srtdPnts_data[i * (*srtdPnts_width) + j] = points_data[(srtdVIdx_data[i]) * (*points_width) + j];
        }
    }
    // cluster_getANMS_out2(): end inline
    // cluster_fSetArray_rep28(): begin inline
    int i_i418;
    int j_i418;
    int *out_i418_width;
    int *out_i418_height;
    float *out_i418_data;
    // cluster_fMallocHandle_rep104(): begin inline
    int i_i438;
    int j_i438;
    // int *out_i438_width;
    // int *out_i438_height;
    // float *out_i438_data;
    // out_i438_width = memregion_72_size20_width;
    // out_i438_height = memregion_72_size20_height;
    // out_i438_data = memregion_72_size20_data;
    int out_i438_width;
    int out_i438_height;
    float out_i438_data[3];
#pragma HLS BIND_STORAGE variable = out_i438_data type = ram_2p impl
#pragma clava malloc_size max = 20 min = 20 avg = 20
    int _lit43 = 1;
    int _lit44 = 3;
    // cluster_fMallocHandle_out18_rep17(): begin inline
    out_i438_height = _lit43;
    out_i438_width = _lit44;
    out_i418_width = &out_i438_width;
    out_i418_height = &out_i438_height;
    out_i418_data = out_i438_data;
    // cluster_fMallocHandle_out18_rep17(): end inline
    // cluster_fMallocHandle_rep104(): end inline
    int _lit38 = 1;
    int _lit39 = 3;
    int _lit40 = 0;
    // cluster_fSetArray_out18_rep6(): begin inline
    for (i_i418 = 0; i_i418 < _lit38; i_i418++)
    {
#pragma HLS loop_tripcount max = 1
        for (j_i418 = 0; j_i418 < _lit39; j_i418++)
        {
#pragma HLS loop_tripcount max = 3
            out_i418_data[i_i418 * (*out_i418_width) + j_i418] = _lit40;
        }
    }
    temp_width = out_i418_width;
    temp_height = out_i418_height;
    temp_data = out_i418_data;
    // cluster_fSetArray_out18_rep6(): end inline
    // cluster_fSetArray_rep28(): end inline
    // cluster_fSetArray_rep29(): begin inline
    int i_i419;
    int j_i419;
    int *out_i419_width;
    int *out_i419_height;
    float *out_i419_data;
    // cluster_fMallocHandle_rep103(): begin inline
    int i_i440;
    int j_i440;
    int out_i440_width;
    int out_i440_height;
    float out_i440_data[55611];
#pragma HLS BIND_STORAGE variable = out_i440_data type = ram_2p impl
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    int _lit45 = 1;
    // cluster_fMallocHandle_out18_rep18(): begin inline
    out_i440_height = n;
    out_i440_width = _lit45;
    out_i419_width = &out_i440_width;
    out_i419_height = &out_i440_height;
    out_i419_data = out_i440_data;
    // cluster_fMallocHandle_out18_rep18(): end inline
    // cluster_fMallocHandle_rep103(): end inline
    int _lit41 = 1;
    // cluster_fSetArray_out18_rep5(): begin inline
    for (i_i419 = 0; i_i419 < n; i_i419++)
    {
#pragma HLS loop_tripcount max = 55611
        for (j_i419 = 0; j_i419 < _lit41; j_i419++)
        {
#pragma HLS loop_tripcount max = 1
            out_i419_data[i_i419 * (*out_i419_width) + j_i419] = MAX_LIMIT;
        }
    }
    suppressR_width = out_i419_width;
    suppressR_height = out_i419_height;
    suppressR_data = out_i419_data;
    // cluster_fSetArray_out18_rep5(): end inline
    // cluster_fSetArray_rep29(): end inline
    // cluster_getANMS_out3(): begin inline
    validCount = 0;
    iter = 0;
    for (i = 0; i < (*suppressR_height); i++)
    {
#pragma HLS loop_tripcount max = 55611
        int decomp_0_renamed_97_i420;
        decomp_0_renamed_97_i420 = suppressR_data[i] > r_sq;
        if (decomp_0_renamed_97_i420)
        {
            validCount++;
        }
    }
    k = 0;
    // cluster_getANMS_out3(): end inline
    // cluster_iMallocHandle_rep60(): begin inline
    int i_i421;
    int j_i421;
    int out_i421_width;
    int out_i421_height;
    int out_i421_data[55611];
#pragma HLS BIND_STORAGE variable = out_i421_data type = ram_2p impl = auto
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    int _lit42 = 1;
    // cluster_iMallocHandle_out25_rep3(): begin inline
    out_i421_height = validCount;
    out_i421_width = _lit42;
    supId_width = &out_i421_width;
    supId_height = &out_i421_height;
    supId_data = out_i421_data;
    // cluster_iMallocHandle_out25_rep3(): end inline
    // cluster_iMallocHandle_rep60(): end inline
    // cluster_getANMS_out4(): begin inline
    for (i = 0; i < ((*suppressR_height) * (*suppressR_width)); i++)
    {
#pragma HLS loop_tripcount max = 55611
        int decomp_1_renamed_12_i422;
        decomp_1_renamed_12_i422 = suppressR_data[i] > r_sq;
        if (decomp_1_renamed_12_i422)
        {
            supId_data[k++] = i;
        }
    }
    // cluster_getANMS_out4(): end inline
    while (validCount > 0)
    {
#pragma HLS loop_tripcount max = 55611
        // cluster_getANMS_out5(): begin inline
        int decomp_2_renamed_9_i423;
        int *temps_i423_width;
        int *temps_i423_height;
        float *temps_i423_data;
        int *tempp_i423_width;
        int *tempp_i423_height;
        float *tempp_i423_data;
        // cluster_getANMS_out5_out0(): begin inline
        temp_data[0] = srtdPnts_data[(supId_data[0]) * (*srtdPnts_width) + 0];
        temp_data[1] = srtdPnts_data[(supId_data[0]) * (*srtdPnts_width) + 1];
        temp_data[2] = srtdPnts_data[(supId_data[0]) * (*srtdPnts_width) + 2];
        decomp_2_renamed_9_i423 = iter == 0;
        // cluster_getANMS_out5_out0(): end inline
        if (decomp_2_renamed_9_i423)
        {
            // cluster_fDeepCopy_rep6(): begin inline
            int cols_i444;
            int rows_i444;
            int *out_i444_width;
            int *out_i444_height;
            float *out_i444_data;
            int j_i444;
            int i_i444;
            // cluster_fDeepCopy_out14_rep5(): begin inline
            rows_i444 = (*temp_height);
            cols_i444 = (*temp_width);
            // cluster_fDeepCopy_out14_rep5(): end inline
            // cluster_fMallocHandle_rep149(): begin inline
            int i_i479;
            int j_i479;
            // int *out_i479_width;
            // int *out_i479_height;
            // float *out_i479_data;
            // out_i479_width = memregion_75_size20_width;
            // out_i479_height = memregion_75_size20_height;
            // out_i479_data = memregion_75_size20_data;
            int out_i479_width;
            int out_i479_height;
            float out_i479_data[3];
#pragma HLS BIND_STORAGE variable = out_i479_data type = ram_2p impl
#pragma clava malloc_size max = 20 min = 20 avg = 20
            // cluster_fMallocHandle_out18_rep61(): begin inline
            out_i479_height = rows_i444;
            out_i479_width = cols_i444;
            out_i444_width = &out_i479_width;
            out_i444_height = &out_i479_height;
            out_i444_data = out_i479_data;
            // cluster_fMallocHandle_out18_rep61(): end inline
            // cluster_fMallocHandle_rep149(): end inline
            // cluster_fDeepCopy_out15_rep5(): begin inline
            for (i_i444 = 0; i_i444 < rows_i444; i_i444++)
            {
#pragma HLS loop_tripcount max = 1
                for (j_i444 = 0; j_i444 < cols_i444; j_i444++)
                {
#pragma HLS loop_tripcount max = 3
                    out_i444_data[i_i444 * (*out_i444_width) + j_i444] = temp_data[i_i444 * (*temp_width) + j_i444];
                }
            }
            interestPnts_width = out_i444_width;
            interestPnts_height = out_i444_height;
            interestPnts_data = out_i444_data;
            // cluster_fDeepCopy_out15_rep5(): end inline
            // cluster_fDeepCopy_rep6(): end inline
        }
        else
        {
            // cluster_fDeepCopy_rep7(): begin inline
            int cols_i445;
            int rows_i445;
            int *out_i445_width;
            int *out_i445_height;
            float *out_i445_data;
            int j_i445;
            int i_i445;
            // cluster_fDeepCopy_out14_rep4(): begin inline
            rows_i445 = (*interestPnts_height);
            cols_i445 = (*interestPnts_width);
            // cluster_fDeepCopy_out14_rep4(): end inline
            // cluster_fMallocHandle_rep148(): begin inline
            int i_i482;
            int j_i482;
            int *out_i482_width;
            int *out_i482_height;
            float *out_i482_data;
            out_i482_width = memregion_76_size20_width;
            out_i482_height = memregion_76_size20_height;
            out_i482_data = memregion_76_size20_data;
#pragma clava malloc_size max = 20 min = 667328 avg = 333674
            // cluster_fMallocHandle_out18_rep62(): begin inline
            (*out_i482_height) = rows_i445;
            (*out_i482_width) = cols_i445;
            out_i445_width = out_i482_width;
            out_i445_height = out_i482_height;
            out_i445_data = out_i482_data;
            // cluster_fMallocHandle_out18_rep62(): end inline
            // cluster_fMallocHandle_rep148(): end inline
            // cluster_fDeepCopy_out15_rep4(): begin inline
            for (i_i445 = 0; i_i445 < rows_i445; i_i445++)
            {
#pragma HLS loop_tripcount min = 1 max = 55610
                for (j_i445 = 0; j_i445 < cols_i445; j_i445++)
                {
#pragma HLS loop_tripcount max = 3
                    out_i445_data[i_i445 * (*out_i445_width) + j_i445] = interestPnts_data[i_i445 * (*interestPnts_width) + j_i445];
                }
            }
            tempp_i423_width = out_i445_width;
            tempp_i423_height = out_i445_height;
            tempp_i423_data = out_i445_data;
            // cluster_fDeepCopy_out15_rep4(): end inline
            // cluster_fDeepCopy_rep7(): end inline
            // cluster_fFreeHandle_rep45(): begin inline
            int decomp_0_renamed_106_i446;
            // cluster_fFreeHandle_out14_rep39(): begin inline
            decomp_0_renamed_106_i446 = interestPnts_width != ((void *)0);
            // cluster_fFreeHandle_out14_rep39(): end inline
            if (decomp_0_renamed_106_i446)
            {
                // free(interestPnts);
            }
            // cluster_fFreeHandle_rep45(): end inline
            // cluster_ffVertcat(): begin inline
            int k_i447;
            int j_i447;
            int i_i447;
            int row2_i447;
            int col1_i447;
            int row1_i447;
            int *outMatrix_i447_width;
            int *outMatrix_i447_height;
            float *outMatrix_i447_data;
            // cluster_ffVertcat_out0(): begin inline
            int col2_i485;
            row1_i447 = (*tempp_i423_height);
            col1_i447 = (*tempp_i423_width);
            row2_i447 = (*temp_height);
            col2_i485 = (*temp_width);
            // cluster_ffVertcat_out0(): end inline
            // cluster_fMallocHandle_rep111(): begin inline
            int i_i486;
            int j_i486;
            int out_i486_width;
            int out_i486_height;
            float out_i486_data[166833];
#pragma HLS BIND_STORAGE variable = out_i486_data type = ram_2p impl = auto
#pragma clava malloc_size max = 32 min = 667340 avg = 333686
            // cluster_fMallocHandle_out18_rep10(): begin inline
            out_i486_height = (row1_i447 + row2_i447);
            out_i486_width = col1_i447;
            outMatrix_i447_width = &out_i486_width;
            outMatrix_i447_height = &out_i486_height;
            outMatrix_i447_data = out_i486_data;
            // cluster_fMallocHandle_out18_rep10(): end inline
            // cluster_fMallocHandle_rep111(): end inline
            // cluster_ffVertcat_out1(): begin inline
            for (i_i447 = 0; i_i447 < col1_i447; i_i447++)
            {
#pragma HLS loop_tripcount max = 3
                for (j_i447 = 0; j_i447 < row1_i447; j_i447++)
                {
#pragma HLS loop_tripcount min = 1 max = 55610
                    outMatrix_i447_data[j_i447 * (*outMatrix_i447_width) + i_i447] = tempp_i423_data[j_i447 * (*tempp_i423_width) + i_i447];
                }
                for (k_i447 = 0; k_i447 < row2_i447; k_i447++)
                {
#pragma HLS loop_tripcount max = 1
                    outMatrix_i447_data[(k_i447 + row1_i447) * (*outMatrix_i447_width) + i_i447] = temp_data[k_i447 * (*temp_width) + i_i447];
                }
            }
            interestPnts_width = outMatrix_i447_width;
            interestPnts_height = outMatrix_i447_height;
            interestPnts_data = outMatrix_i447_data;
            // cluster_ffVertcat_out1(): end inline
            // cluster_ffVertcat(): end inline
            // cluster_fFreeHandle_rep46(): begin inline
            int decomp_0_renamed_107_i448;
            // cluster_fFreeHandle_out14_rep38(): begin inline
            decomp_0_renamed_107_i448 = tempp_i423_width != ((void *)0);
            // cluster_fFreeHandle_out14_rep38(): end inline
            if (decomp_0_renamed_107_i448)
            {
                // free(tempp_i423);
            }
            // cluster_fFreeHandle_rep46(): end inline
        }
        // cluster_getANMS_out5_out1(): begin inline
        iter++;
        // cluster_getANMS_out5_out1(): end inline
        // cluster_fDeepCopy_rep8(): begin inline
        int cols_i450;
        int rows_i450;
        int *out_i450_width;
        int *out_i450_height;
        float *out_i450_data;
        int j_i450;
        int i_i450;
        // cluster_fDeepCopy_out14_rep3(): begin inline
        rows_i450 = (*srtdPnts_height);
        cols_i450 = (*srtdPnts_width);
        // cluster_fDeepCopy_out14_rep3(): end inline
        // cluster_fMallocHandle_rep147(): begin inline
        int i_i490;
        int j_i490;
        int out_i490_width;
        int out_i490_height;
        float out_i490_data[166833];
#pragma HLS BIND_STORAGE variable = out_i490_data type = ram_2p impl = auto
#pragma clava malloc_size max = 20 min = 667340 avg = 333680
        // cluster_fMallocHandle_out18_rep63(): begin inline
        out_i490_height = rows_i450;
        out_i490_width = cols_i450;
        out_i450_width = &out_i490_width;
        out_i450_height = &out_i490_height;
        out_i450_data = out_i490_data;
        // cluster_fMallocHandle_out18_rep63(): end inline
        // cluster_fMallocHandle_rep147(): end inline
        // cluster_fDeepCopy_out15_rep3(): begin inline
        for (i_i450 = 0; i_i450 < rows_i450; i_i450++)
        {
#pragma HLS loop_tripcount min = 1 max = 55611
            for (j_i450 = 0; j_i450 < cols_i450; j_i450++)
            {
#pragma HLS loop_tripcount max = 3
                out_i450_data[i_i450 * (*out_i450_width) + j_i450] = srtdPnts_data[i_i450 * (*srtdPnts_width) + j_i450];
            }
        }
        tempp_i423_width = out_i450_width;
        tempp_i423_height = out_i450_height;
        tempp_i423_data = out_i450_data;
        // cluster_fDeepCopy_out15_rep3(): end inline
        // cluster_fDeepCopy_rep8(): end inline
        // cluster_fDeepCopy_rep9(): begin inline
        int cols_i451;
        int rows_i451;
        int *out_i451_width;
        int *out_i451_height;
        float *out_i451_data;
        int j_i451;
        int i_i451;
        // cluster_fDeepCopy_out14_rep2(): begin inline
        rows_i451 = (*suppressR_height);
        cols_i451 = (*suppressR_width);
        // cluster_fDeepCopy_out14_rep2(): end inline
        // cluster_fMallocHandle_rep146(): begin inline
        int i_i493;
        int j_i493;
        int out_i493_width;
        int out_i493_height;
        float out_i493_data[55611];
#pragma HLS BIND_STORAGE variable = out_i493_data type = ram_2p impl = auto
#pragma clava malloc_size max = 12 min = 222452 avg = 111232
        // cluster_fMallocHandle_out18_rep64(): begin inline
        out_i493_height = rows_i451;
        out_i493_width = cols_i451;
        out_i451_width = &out_i493_width;
        out_i451_height = &out_i493_height;
        out_i451_data = out_i493_data;
        // cluster_fMallocHandle_out18_rep64(): end inline
        // cluster_fMallocHandle_rep146(): end inline
        // cluster_fDeepCopy_out15_rep2(): begin inline
        for (i_i451 = 0; i_i451 < rows_i451; i_i451++)
        {
#pragma HLS loop_tripcount min = 1 max = 55611
            for (j_i451 = 0; j_i451 < cols_i451; j_i451++)
            {
#pragma HLS loop_tripcount max = 1
                out_i451_data[i_i451 * (*out_i451_width) + j_i451] = suppressR_data[i_i451 * (*suppressR_width) + j_i451];
            }
        }
        temps_i423_width = out_i451_width;
        temps_i423_height = out_i451_height;
        temps_i423_data = out_i451_data;
        // cluster_fDeepCopy_out15_rep2(): end inline
        // cluster_fDeepCopy_rep9(): end inline
        // cluster_fFreeHandle_rep47(): begin inline
        int decomp_0_renamed_108_i452;
        // cluster_fFreeHandle_out14_rep37(): begin inline
        decomp_0_renamed_108_i452 = srtdPnts_width != ((void *)0);
        // cluster_fFreeHandle_out14_rep37(): end inline
        if (decomp_0_renamed_108_i452)
        {
            // free(srtdPnts);
        }
        // cluster_fFreeHandle_rep47(): end inline
        // cluster_fFreeHandle_rep48(): begin inline
        int decomp_0_renamed_109_i453;
        // cluster_fFreeHandle_out14_rep36(): begin inline
        decomp_0_renamed_109_i453 = suppressR_width != ((void *)0);
        // cluster_fFreeHandle_out14_rep36(): end inline
        if (decomp_0_renamed_109_i453)
        {
            // free(suppressR);
        }
        // cluster_fFreeHandle_rep48(): end inline
        // cluster_fMallocHandle_rep113(): begin inline
        int i_i454;
        int j_i454;
        int out_i454_width;
        int out_i454_height;
        float out_i454_data[166830];
#pragma HLS BIND_STORAGE variable = out_i454_data type = ram_2p impl = auto
#pragma clava malloc_size max = 8 min = 667328 avg = 333668
        int _lit46 = 3;
        // cluster_fMallocHandle_out18_rep8(): begin inline
        out_i454_height = ((*supId_height) - 1);
        out_i454_width = _lit46;
        srtdPnts_width = &out_i454_width;
        srtdPnts_height = &out_i454_height;
        srtdPnts_data = out_i454_data;
        // cluster_fMallocHandle_out18_rep8(): end inline
        // cluster_fMallocHandle_rep113(): end inline
        // cluster_fMallocHandle_rep114(): begin inline
        int i_i455;
        int j_i455;
        int out_i455_width;
        int out_i455_height;
        float out_i455_data[55610];
#pragma HLS BIND_STORAGE variable = out_i455_data type = ram_2p impl = auto
#pragma clava malloc_size max = 8 min = 222448 avg = 111228
        int _lit47 = 1;
        // cluster_fMallocHandle_out18_rep7(): begin inline
        out_i455_height = ((*supId_height) - 1);
        out_i455_width = _lit47;
        suppressR_width = &out_i455_width;
        suppressR_height = &out_i455_height;
        suppressR_data = out_i455_data;
        // cluster_fMallocHandle_out18_rep7(): end inline
        // cluster_fMallocHandle_rep114(): end inline
        // cluster_getANMS_out5_out2(): begin inline
        k = 0;
        for (i = 1; i < (*supId_height); i++)
        {
#pragma HLS loop_tripcount min = 0 max = 55610
            srtdPnts_data[k * (*srtdPnts_width) + 0] = tempp_i423_data[(supId_data[i]) * (*tempp_i423_width) + 0];
            srtdPnts_data[k * (*srtdPnts_width) + 1] = tempp_i423_data[(supId_data[i]) * (*tempp_i423_width) + 1];
            srtdPnts_data[k * (*srtdPnts_width) + 2] = tempp_i423_data[(supId_data[i]) * (*tempp_i423_width) + 2];
            suppressR_data[k * (*suppressR_width) + 0] = temps_i423_data[(supId_data[i]) * (*temps_i423_width) + 0];
            k++;
        }
        // cluster_getANMS_out5_out2(): end inline
        // cluster_fFreeHandle_rep49(): begin inline
        int decomp_0_renamed_110_i457;
        // cluster_fFreeHandle_out14_rep35(): begin inline
        decomp_0_renamed_110_i457 = tempp_i423_width != ((void *)0);
        // cluster_fFreeHandle_out14_rep35(): end inline
        if (decomp_0_renamed_110_i457)
        {
            // free(tempp_i423);
        }
        // cluster_fFreeHandle_rep49(): end inline
        // cluster_fFreeHandle_rep50(): begin inline
        int decomp_0_renamed_111_i458;
        // cluster_fFreeHandle_out14_rep34(): begin inline
        decomp_0_renamed_111_i458 = temps_i423_width != ((void *)0);
        // cluster_fFreeHandle_out14_rep34(): end inline
        if (decomp_0_renamed_111_i458)
        {
            // free(temps_i423);
        }
        // cluster_fFreeHandle_rep50(): end inline
        // cluster_getANMS_out5_out3(): begin inline
        rows = (*interestPnts_height) - 1;
        cols = (*interestPnts_width);
        for (i = 0; i < (*srtdPnts_height); i++)
        {
#pragma HLS loop_tripcount min = 0 max = 55610
            int decomp_3_renamed_3_i459;
            int decomp_4_renamed_3_i459;
            int decomp_5_renamed_3_i459;
            t = 0;
            t1 = 0;
            decomp_3_renamed_3_i459 = (C_ROBUST * interestPnts_data[rows * (*interestPnts_width) + 2]) >= srtdPnts_data[i * (*srtdPnts_width) + 2];
            if (decomp_3_renamed_3_i459)
            {
                t = srtdPnts_data[i * (*srtdPnts_width) + 0] - interestPnts_data[rows * (*interestPnts_width) + 0];
                t1 = srtdPnts_data[i * (*srtdPnts_width) + 1] - interestPnts_data[rows * (*interestPnts_width) + 1];
                t = t * t + t1 * t1;
                t1 = 0;
            }
            decomp_4_renamed_3_i459 = (C_ROBUST * interestPnts_data[rows * (*interestPnts_width) + 2]) < srtdPnts_data[i * (*srtdPnts_width) + 2];
            if (decomp_4_renamed_3_i459)
            {
                t1 = 1 * MAX_LIMIT;
            }
            decomp_5_renamed_3_i459 = suppressR_data[i] > (t + t1);
            if (decomp_5_renamed_3_i459)
            {
                suppressR_data[i] = t + t1;
            }
        }
        validCount = 0;
        for (i = 0; i < (*suppressR_height); i++)
        {
#pragma HLS loop_tripcount min = 0 max = 55610
            int decomp_6_renamed_3_i459;
            decomp_6_renamed_3_i459 = suppressR_data[i] > r_sq;
            if (decomp_6_renamed_3_i459)
            {
                validCount++;
            }
        }
        k = 0;
        // cluster_getANMS_out5_out3(): end inline
        // cluster_iFreeHandle_rep30(): begin inline
        int decomp_0_renamed_112_i460;
        // cluster_iFreeHandle_out14_rep5(): begin inline
        decomp_0_renamed_112_i460 = supId_width != ((void *)0);
        // cluster_iFreeHandle_out14_rep5(): end inline
        if (decomp_0_renamed_112_i460)
        {
            // free(supId);
        }
        // cluster_iFreeHandle_rep30(): end inline
        // cluster_iMallocHandle_rep59(): begin inline
        int i_i461;
        int j_i461;
        int out_i461_width;
        int out_i461_height;
        int out_i461_data[55610];
#pragma HLS BIND_STORAGE variable = out_i461_data type = ram_2p impl
#pragma clava malloc_size max = 8 min = 222448 avg = 111228
        int _lit48 = 1;
        // cluster_iMallocHandle_out25_rep4(): begin inline
        out_i461_height = validCount;
        out_i461_width = _lit48;
        supId_width = &out_i461_width;
        supId_height = &out_i461_height;
        supId_data = out_i461_data;
        // cluster_iMallocHandle_out25_rep4(): end inline
        // cluster_iMallocHandle_rep59(): end inline
        // cluster_getANMS_out5_out4(): begin inline
        for (i = 0; i < (*suppressR_height) * (*suppressR_width); i++)
        {
#pragma HLS loop_tripcount min = 0 max = 55610
            int decomp_7_renamed_3_i462;
            decomp_7_renamed_3_i462 = suppressR_data[i] > r_sq;
            if (decomp_7_renamed_3_i462)
            {
                supId_data[k++] = i;
            }
        }
        // cluster_getANMS_out5_out4(): end inline
        // cluster_getANMS_out5(): end inline
    }
    // cluster_iFreeHandle_rep31(): begin inline
    int decomp_0_renamed_98_i424;
    // cluster_iFreeHandle_out14_rep4(): begin inline
    decomp_0_renamed_98_i424 = supId_width != ((void *)0);
    // cluster_iFreeHandle_out14_rep4(): end inline
    if (decomp_0_renamed_98_i424)
    {
        // free(supId);
    }
    // cluster_iFreeHandle_rep31(): end inline
    // cluster_iFreeHandle_rep32(): begin inline
    int decomp_0_renamed_99_i425;
    // cluster_iFreeHandle_out14_rep3(): begin inline
    decomp_0_renamed_99_i425 = srtdVIdx_width != ((void *)0);
    // cluster_iFreeHandle_out14_rep3(): end inline
    if (decomp_0_renamed_99_i425)
    {
        // free(srtdVIdx);
    }
    // cluster_iFreeHandle_rep32(): end inline
    // cluster_fFreeHandle_rep51(): begin inline
    int decomp_0_renamed_100_i426;
    // cluster_fFreeHandle_out14_rep33(): begin inline
    decomp_0_renamed_100_i426 = srtdPnts_width != ((void *)0);
    // cluster_fFreeHandle_out14_rep33(): end inline
    if (decomp_0_renamed_100_i426)
    {
        // free(srtdPnts);
    }
    // cluster_fFreeHandle_rep51(): end inline
    // cluster_fFreeHandle_rep52(): begin inline
    int decomp_0_renamed_101_i427;
    // cluster_fFreeHandle_out14_rep32(): begin inline
    decomp_0_renamed_101_i427 = temp_width != ((void *)0);
    // cluster_fFreeHandle_out14_rep32(): end inline
    if (decomp_0_renamed_101_i427)
    {
        // free(temp);
    }
    // cluster_fFreeHandle_rep52(): end inline
    // cluster_fFreeHandle_rep53(): begin inline
    int decomp_0_renamed_102_i428;
    // cluster_fFreeHandle_out14_rep31(): begin inline
    decomp_0_renamed_102_i428 = suppressR_width != ((void *)0);
    // cluster_fFreeHandle_out14_rep31(): end inline
    if (decomp_0_renamed_102_i428)
    {
        // free(suppressR);
    }
    // cluster_fFreeHandle_rep53(): end inline
    // cluster_fFreeHandle_rep54(): begin inline
    int decomp_0_renamed_103_i429;
    // cluster_fFreeHandle_out14_rep30(): begin inline
    decomp_0_renamed_103_i429 = v_width != ((void *)0);
    // cluster_fFreeHandle_out14_rep30(): end inline
    if (decomp_0_renamed_103_i429)
    {
        // free(v);
    }
    memcpy(rtr_val_width, interestPnts_width, sizeof(int));
    memcpy(rtr_val_height, interestPnts_height, sizeof(int));
    memcpy(rtr_val_data, interestPnts_data, sizeof(float));
    // cluster_fFreeHandle_rep54(): end inline
}