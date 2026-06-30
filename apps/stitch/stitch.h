#ifndef _STITCH_H_
#define _STITCH_H_

#include "sdvbs_common.h"
F2D * dist2(I2D *x, F2D *c);
void extractFeatures(I2D *I, F2D *x, F2D *y, F2D **rtr_val);
void getANMS_sw(F2D *points, int r, F2D **rtr_val);
void getANMS_hw_bridge(F2D *points, int r, F2D **rtr_val);
void harris(I2D *im, F2D **rtr_val);
I2D * matchFeatures(F2D *vecF1, F2D *vecF2);
void maxWindow(F2D *im, I2D *window, F2D **rtr_val);
void supress(F2D *im, F2D *im1, F2D **rtr_val);
int script_stitch();
#endif
