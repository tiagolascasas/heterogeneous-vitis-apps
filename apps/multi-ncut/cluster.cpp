#include "cluster.h"

void cluster(int input_width, int input_height, float *input_data, int dim, int *rtr_val_width, int *rtr_val_height, int *rtr_val_data)
{
    // sanity check: just copy the input to output for now
    for (int i = 0; i < 92006; i++)
    {
        rtr_val_data[i] = i;
    }
    return;

    //     int k;
    //     int j;
    //     int i;
    //     int cols;
    //     int rows;
    //     int decomp_0;
    //     rows = input_height;
    //     cols = input_width;
    //     int cols_i38;rtr_val_data
    //     int rows_i38;
    //     int j_i38;
    //     int i_i38;
    //     rows_i38 = input_height;
    //     cols_i38 = input_width;
    //     int i_i44;
    //     int j_i44;

    //     int out_i44_width;
    //     int out_i44_height;
    //     float out_i44_data[92006];
    // #pragma clava malloc_size max = 368032 min = 368032 avg = 368032
    //     out_i44_height = rows_i38;
    //     out_i44_width = cols_i38;

    //     for (i_i38 = 0; i_i38 < rows_i38; i_i38++)
    //     {
    // #pragma HLS loop_tripcount max = 1
    //         for (j_i38 = 0; j_i38 < cols_i38; j_i38++)
    //         {
    // #pragma HLS loop_tripcount max = 92006
    //             out_i44_data[i_i38 * out_i44_width + j_i38] = input_data[i_i38 * input_width + j_i38];
    //         }
    //     }

    //     int i_i39;
    //     int j_i39;
    //     int out_i39_width;
    //     int out_i39_height;
    //     int out_i39_data[92006];
    // #pragma clava malloc_size max = 368032 min = 368032 avg = 368032
    //     // cluster_iMallocHandle_out11_rep4(): begin inline
    //     out_i39_height = rows;
    //     out_i39_width = cols;

    //     for (i = 0; i < cols; i++)
    //     {
    // #pragma HLS loop_tripcount max = 92006
    //         for (j = 0; j < rows; j++)
    //         {
    // #pragma HLS loop_tripcount max = 1
    //             out_i39_data[j * out_i39_width + i] = 0;
    //         }
    //     }
    //     decomp_0 = dim == 1;
    //     if (decomp_0)
    //     {
    //         for (k = 0; k < rows; k++)
    //         {
    // #pragma HLS loop_tripcount max = 1
    //             for (i = 0; i < cols; i++)
    //             {
    // #pragma HLS loop_tripcount max = 92006
    //                 float localMax_i47;
    //                 int localIndex_i47;
    //                 localMax_i47 = out_i44_data[k * out_i44_width + i];
    //                 localIndex_i47 = i;
    //                 out_i39_data[k * out_i39_width + i] = i;
    //                 for (j = 0; j < cols; j++)
    //                 {
    // #pragma HLS loop_tripcount max = 92006
    //                     int decomp_1_renamed_1_i47;
    //                     decomp_1_renamed_1_i47 = localMax_i47 < out_i44_data[k * out_i44_width + j];
    //                     if (decomp_1_renamed_1_i47)
    //                     {
    //                         out_i39_data[k * out_i39_width + i] = j;
    //                         localMax_i47 = out_i44_data[k * out_i44_width + j];
    //                         localIndex_i47 = j;
    //                     }
    //                 }
    //                 out_i44_data[k * out_i44_width + localIndex_i47] = 0;
    //             }
    //         }
    //         *rtr_val_width = out_i39_width;
    //         *rtr_val_height = out_i39_height;
    //         memcpy(rtr_val_data, out_i39_data, sizeof(int) * 92006);
    //         return;
    //     }
    //     *rtr_val_width = out_i39_width;
    //     *rtr_val_height = out_i39_height;
    //     memcpy(rtr_val_data, out_i39_data, sizeof(int) * 92006);
}
