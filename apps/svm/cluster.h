#ifndef _CLUSTER_H_
#define _CLUSTER_H_

#include "sdvbs_common.h"
#include "svm.h"
#include "timingUtils.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

void cluster(int N, int *trn1_width, int *trn1_height, float *trn1_data, int *trn2_width,
                             int *trn2_height, float *trn2_data, int iterations, float *alpha_b, float *alpha_C,
                             int *alpha_d, int *alpha_dim, float *alpha_eps, int *alpha_a_result_width,
                             int *alpha_a_result_height, float *alpha_a_result_data, int *alpha_b_result_width,
                             int *alpha_b_result_height, float *alpha_b_result_data, int *alpha_X_width,
                             int *alpha_X_height, float *alpha_X_data, float *alpha_tolerance);

#ifdef __cplusplus
}
#endif
#endif
