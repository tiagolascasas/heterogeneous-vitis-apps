#include "cluster.h"
#include <cstdint>
#include <cstring>
void edge_detect_hw(char *image_gray, char *temp_buf, char *filter, char *output)
{
    // XRT kernel interface: one AXI master port per pointer argument for independent memory access
#pragma HLS INTERFACE m_axi port = image_gray bundle = gmem0
#pragma HLS INTERFACE m_axi port = temp_buf bundle = gmem1
#pragma HLS INTERFACE m_axi port = filter bundle = gmem2
#pragma HLS INTERFACE m_axi port = output bundle = gmem3
    // AXI-Lite slave for kernel control and argument registers
#pragma HLS INTERFACE s_axilite port = image_gray bundle = control
#pragma HLS INTERFACE s_axilite port = temp_buf bundle = control
#pragma HLS INTERFACE s_axilite port = filter bundle = control
#pragma HLS INTERFACE s_axilite port = output bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

    char local_temp_buf[1036800];
#pragma HLS bind_storage variable = local_temp_buf type = RAM_2P impl = BRAM
    for (int paramIdx_1 = 0, localIdx_1 = 0; paramIdx_1 < 2073600 && localIdx_1 < 1036800;
         paramIdx_1 += 2, localIdx_1++)
    {
        local_temp_buf[localIdx_1] = temp_buf[paramIdx_1];
    }
    char local_image_gray[2073600];
#pragma HLS bind_storage variable = local_image_gray type = RAM_2P impl = BRAM
    memcpy(local_image_gray, image_gray, 2073600);
    char local_filter[9];
    memcpy(local_filter, filter, 9);
#pragma clava bram_usage = 31 max_bram = 1824 bytes_per_bram = 2048
#pragma clava param = output type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT_USEDLATER size = 2073600
#pragma clava param = filter type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 9
#pragma clava param = temp_buf type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 2073600
#pragma clava param = image_gray type = PRIMITIVE_POINTER in = LIVEIN out = LIVEOUT size = 2073600
    // cluster_convolve2d_rep0(): begin inline
    int i_i0;
    int j_i0;
    int c_i0;
    int r_i0;
    int normal_factor_i0;
    int sum_i0;
    int dead_rows_i0;
    int dead_cols_i0;
    int decomp_0_renamed_0_i0;
    dead_rows_i0 = 3 / 2;
    dead_cols_i0 = 3 / 2;
    normal_factor_i0 = 0;
    for (r_i0 = 0; r_i0 < 3; r_i0++)
    {
#pragma HLS loop_tripcount max = 3
        for (c_i0 = 0; c_i0 < 3; c_i0++)
        {
#pragma HLS loop_tripcount max = 3
            int _d0_0_i0;
            int _d0_1_i0;
            _d0_0_i0 = abs(local_filter[r_i0 * 3 + c_i0]);
            _d0_1_i0 = normal_factor_i0 + _d0_0_i0;
            normal_factor_i0 = _d0_1_i0;
        }
    }
    decomp_0_renamed_0_i0 = normal_factor_i0 == 0;
    if (decomp_0_renamed_0_i0)
    {
        normal_factor_i0 = 1;
    }
    for (r_i0 = 0; r_i0 < 1080 - 3 + 1; r_i0++)
    {
#pragma HLS loop_tripcount max = 1078
        for (c_i0 = 0; c_i0 < 1920 - 3 + 1; c_i0++)
        {
#pragma HLS loop_tripcount max = 1918
            sum_i0 = 0;
            for (i_i0 = 0; i_i0 < 3; i_i0++)
            {
#pragma HLS loop_tripcount max = 3
                for (j_i0 = 0; j_i0 < 3; j_i0++)
                {
#pragma HLS loop_tripcount max = 3
                    sum_i0 =
                        sum_i0 + local_image_gray[(r_i0 + i_i0) * 1920 + (c_i0 + j_i0)] * local_filter[i_i0 * 3 + j_i0];
                }
            }
            output[(r_i0 + dead_rows_i0) * 1920 + (c_i0 + dead_cols_i0)] = (sum_i0 / normal_factor_i0);
        }
    }
    // cluster_convolve2d_rep0(): end inline
    // cluster_edge_detect_out1(): begin inline
    local_filter[0] = 1;
    local_filter[1] = 0;
    local_filter[2] = -1;
    local_filter[3] = 2;
    local_filter[4] = 0;
    local_filter[5] = -2;
    local_filter[6] = 1;
    local_filter[7] = 0;
    local_filter[8] = -1;
    // cluster_edge_detect_out1(): end inline
    // cluster_convolve2d_rep1(): begin inline
    int i_i2;
    int j_i2;
    int c_i2;
    int r_i2;
    int normal_factor_i2;
    int sum_i2;
    int dead_rows_i2;
    int dead_cols_i2;
    int decomp_0_renamed_1_i2;
    dead_rows_i2 = 3 / 2;
    dead_cols_i2 = 3 / 2;
    normal_factor_i2 = 0;
    for (r_i2 = 0; r_i2 < 3; r_i2++)
    {
#pragma HLS loop_tripcount max = 3
        for (c_i2 = 0; c_i2 < 3; c_i2++)
        {
#pragma HLS loop_tripcount max = 3
            int _d0_0_i2;
            int _d0_1_i2;
            _d0_0_i2 = abs(local_filter[r_i2 * 3 + c_i2]);
            _d0_1_i2 = normal_factor_i2 + _d0_0_i2;
            normal_factor_i2 = _d0_1_i2;
        }
    }
    decomp_0_renamed_1_i2 = normal_factor_i2 == 0;
    if (decomp_0_renamed_1_i2)
    {
        normal_factor_i2 = 1;
    }
    for (r_i2 = 0; r_i2 < 1080 - 3 + 1; r_i2++)
    {
#pragma HLS loop_tripcount max = 1078
        for (c_i2 = 0; c_i2 < 1920 - 3 + 1; c_i2++)
        {
#pragma HLS loop_tripcount max = 1918
            sum_i2 = 0;
            for (i_i2 = 0; i_i2 < 3; i_i2++)
            {
#pragma HLS loop_tripcount max = 3
                for (j_i2 = 0; j_i2 < 3; j_i2++)
                {
#pragma HLS loop_tripcount max = 3
                    sum_i2 = sum_i2 + output[(r_i2 + i_i2) * 1920 + (c_i2 + j_i2)] * local_filter[i_i2 * 3 + j_i2];
                }
            }
            local_image_gray[(r_i2 + dead_rows_i2) * 1920 + (c_i2 + dead_cols_i2)] = (sum_i2 / normal_factor_i2);
        }
    }
    // cluster_convolve2d_rep1(): end inline
    // cluster_edge_detect_out2(): begin inline
    local_filter[0] = 1;
    local_filter[1] = 2;
    local_filter[2] = 1;
    local_filter[3] = 0;
    local_filter[4] = 0;
    local_filter[5] = 0;
    local_filter[6] = -1;
    local_filter[7] = -2;
    local_filter[8] = -1;
    // cluster_edge_detect_out2(): end inline
    // cluster_convolve2d_rep2(): begin inline
    int i_i4;
    int j_i4;
    int c_i4;
    int r_i4;
    int normal_factor_i4;
    int sum_i4;
    int dead_rows_i4;
    int dead_cols_i4;
    int decomp_0_renamed_2_i4;
    dead_rows_i4 = 3 / 2;
    dead_cols_i4 = 3 / 2;
    normal_factor_i4 = 0;
    for (r_i4 = 0; r_i4 < 3; r_i4++)
    {
#pragma HLS loop_tripcount max = 3
        for (c_i4 = 0; c_i4 < 3; c_i4++)
        {
#pragma HLS loop_tripcount max = 3
            int _d0_0_i4;
            int _d0_1_i4;
            _d0_0_i4 = abs(local_filter[r_i4 * 3 + c_i4]);
            _d0_1_i4 = normal_factor_i4 + _d0_0_i4;
            normal_factor_i4 = _d0_1_i4;
        }
    }
    decomp_0_renamed_2_i4 = normal_factor_i4 == 0;
    if (decomp_0_renamed_2_i4)
    {
        normal_factor_i4 = 1;
    }
    for (r_i4 = 0; r_i4 < 1080 - 3 + 1; r_i4++)
    {
#pragma HLS loop_tripcount max = 1078
        for (c_i4 = 0; c_i4 < 1920 - 3 + 1; c_i4++)
        {
#pragma HLS loop_tripcount max = 1918
            sum_i4 = 0;
            for (i_i4 = 0; i_i4 < 3; i_i4++)
            {
#pragma HLS loop_tripcount max = 3
                for (j_i4 = 0; j_i4 < 3; j_i4++)
                {
#pragma HLS loop_tripcount max = 3
                    sum_i4 = sum_i4 + output[(r_i4 + i_i4) * 1920 + (c_i4 + j_i4)] * local_filter[i_i4 * 3 + j_i4];
                }
            }
            size_t temp_buf_part2;
            if (((r_i4 + dead_rows_i4) * 1920 + (c_i4 + dead_cols_i4)) % 2 == 0)
                temp_buf_part2 = local_temp_buf[((r_i4 + dead_rows_i4) * 1920 + (c_i4 + dead_cols_i4)) / 2];
            else
                temp_buf_part2 = temp_buf[(r_i4 + dead_rows_i4) * 1920 + (c_i4 + dead_cols_i4)];
            temp_buf[temp_buf_part2] = (sum_i4 / normal_factor_i4);
        }
    }
    // cluster_convolve2d_rep2(): end inline
    // cluster_combthreshold(): begin inline
    int i_i5;
    int j_i5;
    int temp1_i5;
    int temp2_i5;
    int temp3_i5;
    for (i_i5 = 0; i_i5 < 1080; i_i5++)
    {
#pragma HLS loop_tripcount max = 1080
        for (j_i5 = 0; j_i5 < 1920; ++j_i5)
        {
#pragma HLS loop_tripcount max = 1920
            temp1_i5 = abs(local_image_gray[i_i5 * 1920 + j_i5]);
            size_t temp_buf_part3;
            if ((i_i5 * 1920 + j_i5) % 2 == 0)
                temp_buf_part3 = local_temp_buf[(i_i5 * 1920 + j_i5) / 2];
            else
                temp_buf_part3 = temp_buf[i_i5 * 1920 + j_i5];
            temp2_i5 = abs(temp_buf[temp_buf_part3]);
            temp3_i5 = (temp1_i5 > temp2_i5) ? temp1_i5 : temp2_i5;
            output[i_i5 * 1920 + j_i5] = (temp3_i5 > 20) ? 255 : 0;
        }
    }
    // cluster_combthreshold(): end inline
}
