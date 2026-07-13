#ifndef _CLUSTER_H_
#define _CLUSTER_H_

#include "localization.h"
#include "sdvbs_common.h"
#include "timingUtils.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void cluster(int *accl_width, int *accl_height, float *accl_data, int *sData_width, int *sData_height,
                         float *sData_data, int *ones_width, int *ones_height, float *ones_data, int *quat_width,
                         int *quat_height, float *quat_data, float *STDDEV_ACCL, int *vel_width, int *vel_height,
                         float *vel_data, int *pos_width, int *pos_height, float *pos_data, float *acclTimeInterval,
                         int *n, float *M_STDDEV_POS, float *M_STDDEV_VEL, float *memregion_56_size9999992);
#endif
