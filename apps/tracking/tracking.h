#ifndef _TRACKING_H_
#define _TRACKING_H_

#include "sdvbs_common.h"
#include <stdint.h>
F2D *calcAreaSum(F2D *src, int cols, int rows, int winSize);
F2D *calcGoodFeature(F2D *dX, F2D *dY, int cols, int rows, int winSize);
void calcPyrLKTrack(F2D *previousImageBlur_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level1,
                    F2D *vertEdge_level2, F2D *horzEdge_level1, F2D *horzEdge_level2, F2D *currentImageBlur_level1,
                    F2D *currentImageBlur_level2, F2D *previousFrameFeatures, int nFeatures, int winSize,
                    float accuracy, int max_iter, F2D *currentFrameFeatures, I2D **rtr_val);
void cluster_calcPyrLKTrack(F2D *previousImageBlur_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level1,
                            F2D *vertEdge_level2, F2D *horzEdge_level1, F2D *horzEdge_level2,
                            F2D *currentImageBlur_level1, F2D *currentImageBlur_level2, F2D *previousFrameFeatures,
                            int nFeatures, int winSize, float accuracy, int max_iter, F2D *currentFrameFeatures,
                            I2D **rtr_val);
F2D *getANMS(F2D *points, float r);
void getInterpolatePatch(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
float polynomial(int d, F2D *a, F2D *b, int dim);
I2D *sortInd(F2D *input, int dim);
F2D *fillFeatures(F2D *lambda, int N_FEA, int win);
#endif
