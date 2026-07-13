#ifndef _MSER_H_
#define _MSER_H_

#include "sdvbs_common.h"
typedef int val_t;

typedef struct
{
    int width;
    int data[];
} iArray;

typedef struct
{
    int width;
    unsigned int data[];
} uiArray;

typedef struct
{
    int width;
    unsigned long long data[];
} ulliArray;

int script_mser();
void mser_sw(I2D *I, int in_delta, I2D **rtr_val);
void mser_hw_bridge(I2D *I, int in_delta, I2D **rtr_val);
#endif
