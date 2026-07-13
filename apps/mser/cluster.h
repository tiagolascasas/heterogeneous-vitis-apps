#ifndef _CLUSTER_H_
#define _CLUSTER_H_

#include "mser.h"
#include "sdvbs_common.h"
#include "timingUtils.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef unsigned long long acc_t;
typedef unsigned int idx_t;

typedef struct
{
    idx_t parent;
    idx_t index;
    val_t value;
    int area;
    int area_top;
    int area_bot;
    float variation;
    int maxstable;
} region_t;

typedef struct
{
    idx_t parent;
    idx_t shortcut;
    idx_t region;
    int area;
} node_t;

typedef struct
{
    val_t value;
    idx_t index;
} pair_t;

#endif
