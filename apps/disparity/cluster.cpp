#include "cluster.h"
#define N 1024
// void correlateSAD_2D_hw(int *Ileft_width, int *Ileft_height, int *Ileft_data, int *Iright_width, int *Iright_height, int *Iright_data, int *Iright_moved_width, int *Iright_moved_height, int *Iright_moved_data, int win_sz, int disparity, int *SAD_width, int *SAD_height, float *SAD_data, int *integralImg_width, int *integralImg_height, float *integralImg_data, int *retSAD_width, int *retSAD_height, float *retSAD_data, int *memregion_0_size16_width, int *memregion_0_size16_height, int *memregion_0_size16_data);
void cluster(int Ileft_width, int Ileft_height, int Ileft_data[(8294408 - 8) / 4],
             int Iright_width, int Iright_height, int Iright_data[(8294408 - 8) / 4],
             int Iright_moved_width, int Iright_moved_height, int Iright_moved_data[(8390664 - 8) / 4],
             int win_sz, int disparity,
             int SAD_width, int SAD_height, float SAD_data[(8390664 - 8) / 4],
             int integralImg_width, int integralImg_height, float integralImg_data_arr[(8390664 - 8) / 4],
             int *retSAD_width, int *retSAD_height, float retSAD_data[(8294408 - 8) / 4])
{
#pragma HLS INTERFACE m_axi port = Ileft_data offset = slave bundle = gmem0
#pragma HLS INTERFACE m_axi port = Iright_data offset = slave bundle = gmem1
#pragma HLS INTERFACE m_axi port = Iright_moved_data offset = slave bundle = gmem2
#pragma HLS INTERFACE m_axi port = SAD_data offset = slave bundle = gmem3
#pragma HLS INTERFACE m_axi port = integralImg_data_arr offset = slave bundle = gmem4
#pragma HLS INTERFACE m_axi port = retSAD_width offset = slave bundle = gmem5
#pragma HLS INTERFACE m_axi port = retSAD_height offset = slave bundle = gmem5
#pragma HLS INTERFACE m_axi port = retSAD_data offset = slave bundle = gmem5

#pragma HLS INTERFACE s_axilite port = Ileft_width
#pragma HLS INTERFACE s_axilite port = Ileft_height
#pragma HLS INTERFACE s_axilite port = Iright_width
#pragma HLS INTERFACE s_axilite port = Iright_height
#pragma HLS INTERFACE s_axilite port = Iright_moved_width
#pragma HLS INTERFACE s_axilite port = Iright_moved_height
#pragma HLS INTERFACE s_axilite port = win_sz
#pragma HLS INTERFACE s_axilite port = disparity
#pragma HLS INTERFACE s_axilite port = SAD_width
#pragma HLS INTERFACE s_axilite port = SAD_height
#pragma HLS INTERFACE s_axilite port = integralImg_width
#pragma HLS INTERFACE s_axilite port = integralImg_height
#pragma HLS INTERFACE s_axilite port = return
    int rows;
    int cols;
    int i;
    int j;
    int endRM;
    int range_width;
    int range_height;
    int range_data[16];
    // cluster_iMallocHandle_rep0(): begin inline
    int i_i0;
    int j_i0;

#pragma clava malloc_size max = 16 min = 16 avg = 16
    int _lit0 = 1;
    int _lit1 = 2;
    // cluster_iMallocHandle_out1_rep7(): begin inline
    range_width = _lit0;
    range_height = _lit1;
    // cluster_iMallocHandle_out1_rep7(): end inline
    // cluster_iMallocHandle_rep0(): end inline
    // cluster_correlateSAD_2D_out1(): begin inline
    range_data[0 * range_width + 0] = 0;
    range_data[0 * range_width + 1] = disparity;
    rows = Iright_moved_height;
    cols = Iright_moved_width;

    // --- optimization ---
    // buffer size is 2097664 int
    // ~1012728 int = 1800 BRAMs
    float integralImg_data[1012728];
#pragma HLS bind_storage variable=integralImg_data type=RAM_2P impl=URAM
    for (int n = 0, curr = 0; n < 2097664 && curr < 1012728; n += 2)
    {
#pragma HLS loop_tripcount max = 1012728
        integralImg_data[curr] = integralImg_data_arr[n];
        curr++;
    }

    for (i = 0; i < rows * cols; i++)
    {
#pragma HLS loop_tripcount max = 2097664
        Iright_moved_data[i] = 0;
    }

    // cluster_correlateSAD_2D_out1(): end inline
    // cluster_padarray4(): begin inline
    int rows_i2;
    int cols_i2;
    int bRows_i2;
    int bCols_i2;
    int newRows_i2;
    int newCols_i2;
    int i_i2;
    int j_i2;
    int adir_i2;
    int decomp_0_renamed_0_i2;
    adir_i2 = abs((-1));
    rows_i2 = Iright_height;
    cols_i2 = Iright_width;
    bRows_i2 = range_data[0];
    bCols_i2 = range_data[1];
    newRows_i2 = rows_i2 + bRows_i2;
    newCols_i2 = cols_i2 + bCols_i2;
    decomp_0_renamed_0_i2 = (-1) == 1;
    if (!decomp_0_renamed_0_i2)
    {
        for (i_i2 = 0; i_i2 < rows_i2 - bRows_i2; i_i2++)
        {
#pragma HLS loop_tripcount max = 1928
            for (j_i2 = 0; j_i2 < cols_i2 - bCols_i2; j_i2++)
            {
#pragma HLS loop_tripcount min = 1025 max = 1088
                Iright_moved_data[(bRows_i2 + i_i2) * Iright_moved_width + (bCols_i2 + j_i2)] = Iright_data[i_i2 * Iright_width + j_i2];
            }
        }
    }
    // cluster_padarray4(): end inline
    // cluster_computeSAD(): begin inline
    int rows_i3;
    int cols_i3;
    int i_i3;
    int j_i3;
    int diff_i3;
    rows_i3 = Ileft_height;
    cols_i3 = Ileft_width;
    for (i_i3 = 0; i_i3 < rows_i3; i_i3++)
    {
#pragma HLS loop_tripcount max = 1928
        for (j_i3 = 0; j_i3 < cols_i3; j_i3++)
        {
#pragma HLS loop_tripcount max = 1088
            diff_i3 = Ileft_data[i_i3 * Ileft_width + j_i3] - Iright_moved_data[i_i3 * Iright_moved_width + j_i3];
            SAD_data[i_i3 * SAD_width + j_i3] = diff_i3 * diff_i3;
        }
    }
    // cluster_computeSAD(): end inline
    // cluster_integralImage2D2D(): begin inline
    int nr_i4;
    int nc_i4;
    int i_i4;
    int j_i4;
    nr_i4 = SAD_height;
    nc_i4 = SAD_width;
    for (i_i4 = 0; i_i4 < nc_i4; i_i4++)
    {
#pragma HLS loop_tripcount max = 1088
        size_t s1 = 0 * integralImg_width + i_i4;
        if (s1 % 2 == 0 && (s1 / 2) < 1012728)
        {
            integralImg_data[s1 / 2] = SAD_data[0 * SAD_width + i_i4];
        }
        else
        {
            integralImg_data_arr[s1] = SAD_data[0 * SAD_width + i_i4];
        }
    }
    for (i_i4 = 1; i_i4 < nr_i4; i_i4++)
    {
#pragma HLS loop_tripcount max = 1927
        for (j_i4 = 0; j_i4 < nc_i4; j_i4++)
        {
#pragma HLS loop_tripcount max = 1088
            size_t s1 = i_i4 * integralImg_width + j_i4;
            size_t s2 = (i_i4 - 1) * integralImg_width + j_i4;
            float x2 = (s2 % 2 == 0 && (s2 / 2) < 1012728) ? integralImg_data[s2 / 2] : integralImg_data_arr[s2];

            if (s1 % 2 == 0 && (s1 / 2) < 1012728)
            {
                integralImg_data[s1 / 2] = x2 + SAD_data[i_i4 * SAD_width + j_i4];
            }
            else
            {
                integralImg_data_arr[s1] = x2 + SAD_data[i_i4 * SAD_width + j_i4];
            }
        }
    }
    for (i_i4 = 0; i_i4 < nr_i4; i_i4++)
    {
#pragma HLS loop_tripcount max = 1928
        for (j_i4 = 1; j_i4 < nc_i4; j_i4++)
        {
#pragma HLS loop_tripcount max = 1087
            size_t s1 = i_i4 * integralImg_width + j_i4;
            size_t s2 = i_i4 * integralImg_width + (j_i4 - 1);
            float x2 = (s2 % 2 == 0 && (s2 / 2) < 1012728) ? integralImg_data[s2 / 2] : integralImg_data_arr[s2];
            if (s1 % 2 == 0 && (s1 / 2) < 1012728)
            {
                integralImg_data[s1 / 2] = x2 + integralImg_data[s1 / 2];
            }
            else
            {
                integralImg_data_arr[s1] = x2 + integralImg_data_arr[s1];
            }
        }
    }
    // cluster_integralImage2D2D(): end inline
    // cluster_finalSAD(): begin inline
    int endR_i5;
    int endC_i5;
    int i_i5;
    int j_i5;
    int k_i5;
    endR_i5 = integralImg_height;
    endC_i5 = integralImg_width;
    k_i5 = 0;
    for (j_i5 = 0; j_i5 < (endC_i5 - win_sz); j_i5++)
    {
#pragma HLS loop_tripcount max = 1080
        for (i_i5 = 0; i_i5 < (endR_i5 - win_sz); i_i5++)
        {
#pragma HLS loop_tripcount max = 1920
            size_t s1 = (win_sz + i_i5) * integralImg_width + (j_i5 + win_sz);
            size_t s2 = (i_i5 + 1) * integralImg_width + (j_i5 + 1);
            size_t s3 = (i_i5 + 1) * integralImg_width + (j_i5 + win_sz);
            size_t s4 = (win_sz + i_i5) * integralImg_width + (j_i5 + 1);
            float x1 = (s1 % 2 == 0 && (s1 / 2) < 1012728) ? integralImg_data[s1 / 2] : integralImg_data_arr[s1];
            float x2 = (s2 % 2 == 0 && (s2 / 2) < 1012728) ? integralImg_data[s2 / 2] : integralImg_data_arr[s2];
            float x3 = (s3 % 2 == 0 && (s3 / 2) < 1012728) ? integralImg_data[s3 / 2] : integralImg_data_arr[s3];
            float x4 = (s4 % 2 == 0 && (s4 / 2) < 1012728) ? integralImg_data[s4 / 2] : integralImg_data_arr[s4];
            retSAD_data[i_i5 * (*retSAD_width) + j_i5] = x1 + x2 - x3 - x4;
        }
    }
    // cluster_iFreeHandle_rep0(): end inline
}