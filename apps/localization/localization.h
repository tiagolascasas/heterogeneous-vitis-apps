#ifndef _LOCALIZATION_H_
#define _LOCALIZATION_H_

#include "sdvbs_common.h"
int script_localization();
F2D *eul2quat(F2D *angle);
void generateSample(F2D *w, F2D *quat, F2D *vel, F2D *pos);
void get3DGaussianProb(F2D *data, F2D *mean, F2D *A, F2D **rtr_val);
void mcl(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val);
F2D *quat2eul(F2D *quat);
void quatConj(F2D *a, F2D **rtr_val);
void quatMul(F2D *a, F2D *b, F2D **rtr_val);
void quatRot(F2D *vec, F2D *rQuat, F2D **rtr_val);
F2D *readSensorData(I2D *index, F2D *fid, I2D *type, I2D *eof);
void weightedSample(F2D *w, I2D **rtr_val);
#endif
