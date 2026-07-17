#include "tracking.h"
#include "sdvbs_common.h"
#include "timingUtils.h"
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void calcSobel_dX_out0_rep3(int *rows, F2D *imageIn, int *cols);
void cluster_calcSobel_dX_out0_rep3(int *rows, F2D *imageIn, int *cols);
void calcSobel_dX_out0_rep2(int *rows, F2D *imageIn, int *cols);
void cluster_calcSobel_dX_out0_rep2(int *rows, F2D *imageIn, int *cols);
void calcSobel_dX_out0_rep1(int *rows, F2D *imageIn, int *cols);
void calcSobel_dX_out0_rep0(int *rows, F2D *imageIn, int *cols);
void calcSobel_dX_out1_rep3(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut);
void cluster_calcSobel_dX_out1_rep3(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                                    int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                                    int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut,
                                    F2D *imageOut);
void calcSobel_dX_out1_rep2(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut);
void cluster_calcSobel_dX_out1_rep2(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                                    int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                                    int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut,
                                    F2D *imageOut);
void calcSobel_dX_out1_rep1(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut);
void calcSobel_dX_out1_rep0(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut);
void calcSobel_dX_rep2(F2D *imageIn, F2D **rtr_val);
void calcSobel_dX_rep1(F2D *imageIn, F2D **rtr_val);
void cluster_calcSobel_dX_rep1(F2D *imageIn, F2D **rtr_val);
void calcSobel_dX_rep0(F2D *imageIn, F2D **rtr_val);
void cluster_calcSobel_dX_rep0(F2D *imageIn, F2D **rtr_val);
void calcSobel_dY_out0_rep3(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols);
void cluster_calcSobel_dY_out0_rep3(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols);
void calcSobel_dY_out0_rep2(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols);
void cluster_calcSobel_dY_out0_rep2(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols);
void calcSobel_dY_out0_rep1(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols);
void calcSobel_dY_out0_rep0(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols);
void calcSobel_dY_out1_rep3(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut);
void cluster_calcSobel_dY_out1_rep3(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                                    int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                                    int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut,
                                    F2D *imageOut);
void calcSobel_dY_out1_rep2(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut);
void cluster_calcSobel_dY_out1_rep2(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                                    int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                                    int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut,
                                    F2D *imageOut);
void calcSobel_dY_out1_rep1(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut);
void calcSobel_dY_out1_rep0(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut);
void calcSobel_dY_rep2(F2D *imageIn, F2D **rtr_val);
void calcSobel_dY_rep1(F2D *imageIn, F2D **rtr_val);
void cluster_calcSobel_dY_rep1(F2D *imageIn, F2D **rtr_val);
void calcSobel_dY_rep0(F2D *imageIn, F2D **rtr_val);
void cluster_calcSobel_dY_rep0(F2D *imageIn, F2D **rtr_val);
void fDeepCopy_out18_rep8(int *rows, F2D *in, int *cols);
void fDeepCopy_out18_rep7(int *rows, F2D *in, int *cols);
void fDeepCopy_out18_rep6(int *rows, F2D *in, int *cols);
void fDeepCopy_out18_rep5(int *rows, F2D *in, int *cols);
void fDeepCopy_out18_rep4(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out18_rep4(int *rows, F2D *in, int *cols);
void fDeepCopy_out18_rep3(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out18_rep3(int *rows, F2D *in, int *cols);
void fDeepCopy_out18_rep2(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out18_rep2(int *rows, F2D *in, int *cols);
void fDeepCopy_out18_rep1(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out18_rep1(int *rows, F2D *in, int *cols);
void fDeepCopy_out18_rep0(int *rows, F2D *in, int *cols);
void fDeepCopy_out19_rep8(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out19_rep7(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out19_rep6(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out19_rep5(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out19_rep4(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out19_rep4(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out19_rep3(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out19_rep3(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out19_rep2(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out19_rep2(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out19_rep1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out19_rep1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out19_rep0(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_rep18(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep18(F2D *in, F2D **rtr_val);
void fDeepCopy_rep17(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep17(F2D *in, F2D **rtr_val);
void fDeepCopy_rep16(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep16(F2D *in, F2D **rtr_val);
void fDeepCopy_rep15(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep15(F2D *in, F2D **rtr_val);
void fDeepCopy_rep14(F2D *in, F2D **rtr_val);
void fDeepCopy_rep13(F2D *in, F2D **rtr_val);
void fDeepCopy_rep12(F2D *in, F2D **rtr_val);
void fDeepCopy_rep11(F2D *in, F2D **rtr_val);
void fFreeHandle_out17_rep56(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep55(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep54(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep53(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep52(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep51(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep50(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep49(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep48(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep47(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep46(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep46(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep45(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep45(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep44(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep44(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep43(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep43(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep42(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep42(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep41(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep41(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep40(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep40(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep39(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep39(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep38(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep38(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep37(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep61(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep60(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep59(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep59(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep58(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep58(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep57(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep36(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep66(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep65(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep64(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep64(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep63(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep63(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep62(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep35(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep71(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep70(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep69(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep69(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep68(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep68(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep67(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep34(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep76(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep75(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep74(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep74(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep73(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep73(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep72(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep33(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep32(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep31(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep30(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep29(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep28(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep27(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep26(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep25(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep24(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep24(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep23(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep23(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep22(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep22(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep21(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep21(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep20(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep20(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep19(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep19(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep18(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep18(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep17(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep17(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep16(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep16(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep15(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep15(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep14(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep14(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep13(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep13(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep12(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep12(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep11(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out17_rep11(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep10(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep9(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep8(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep7(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep6(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep5(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep4(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep3(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep2(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep1(int *decomp_0, F2D *out);
void fFreeHandle_out17_rep0(int *decomp_0, F2D *out);
void fFreeHandle_rep139(F2D *out);
void fFreeHandle_rep138(F2D *out);
void fFreeHandle_rep137(F2D *out);
void fFreeHandle_rep136(F2D *out);
void fFreeHandle_rep135(F2D *out);
void fFreeHandle_rep134(F2D *out);
void fFreeHandle_rep133(F2D *out);
void fFreeHandle_rep132(F2D *out);
void fFreeHandle_rep131(F2D *out);
void fFreeHandle_rep130(F2D *out);
void fFreeHandle_rep129(F2D *out);
void cluster_fFreeHandle_rep129(F2D *out);
void fFreeHandle_rep128(F2D *out);
void cluster_fFreeHandle_rep128(F2D *out);
void fFreeHandle_rep127(F2D *out);
void cluster_fFreeHandle_rep127(F2D *out);
void fFreeHandle_rep126(F2D *out);
void cluster_fFreeHandle_rep126(F2D *out);
void fFreeHandle_rep125(F2D *out);
void cluster_fFreeHandle_rep125(F2D *out);
void fFreeHandle_rep124(F2D *out);
void cluster_fFreeHandle_rep124(F2D *out);
void fFreeHandle_rep123(F2D *out);
void cluster_fFreeHandle_rep123(F2D *out);
void fFreeHandle_rep122(F2D *out);
void cluster_fFreeHandle_rep122(F2D *out);
void fFreeHandle_rep121(F2D *out);
void cluster_fFreeHandle_rep121(F2D *out);
void fFreeHandle_rep120(F2D *out);
void cluster_fFreeHandle_rep120(F2D *out);
void fFreeHandle_rep119(F2D *out);
void cluster_fFreeHandle_rep119(F2D *out);
void fFreeHandle_rep118(F2D *out);
void cluster_fFreeHandle_rep118(F2D *out);
void fFreeHandle_rep117(F2D *out);
void cluster_fFreeHandle_rep117(F2D *out);
void fFreeHandle_rep116(F2D *out);
void cluster_fFreeHandle_rep116(F2D *out);
void fFreeHandle_rep115(F2D *out);
void fFreeHandle_rep114(F2D *out);
void fFreeHandle_rep113(F2D *out);
void fFreeHandle_rep112(F2D *out);
void fFreeHandle_rep111(F2D *out);
void fFreeHandle_rep110(F2D *out);
void fFreeHandle_rep109(F2D *out);
void fFreeHandle_rep108(F2D *out);
void fFreeHandle_rep107(F2D *out);
void fFreeHandle_rep106(F2D *out);
void fFreeHandle_rep155(F2D *out);
void cluster_fFreeHandle_rep155(F2D *out);
void fFreeHandle_rep154(F2D *out);
void cluster_fFreeHandle_rep154(F2D *out);
void fFreeHandle_rep153(F2D *out);
void fFreeHandle_rep152(F2D *out);
void fFreeHandle_rep105(F2D *out);
void fFreeHandle_rep151(F2D *out);
void cluster_fFreeHandle_rep151(F2D *out);
void fFreeHandle_rep150(F2D *out);
void cluster_fFreeHandle_rep150(F2D *out);
void fFreeHandle_rep149(F2D *out);
void fFreeHandle_rep148(F2D *out);
void fFreeHandle_rep104(F2D *out);
void fFreeHandle_rep147(F2D *out);
void cluster_fFreeHandle_rep147(F2D *out);
void fFreeHandle_rep146(F2D *out);
void cluster_fFreeHandle_rep146(F2D *out);
void fFreeHandle_rep145(F2D *out);
void fFreeHandle_rep144(F2D *out);
void fFreeHandle_rep103(F2D *out);
void fFreeHandle_rep143(F2D *out);
void cluster_fFreeHandle_rep143(F2D *out);
void fFreeHandle_rep142(F2D *out);
void cluster_fFreeHandle_rep142(F2D *out);
void fFreeHandle_rep141(F2D *out);
void fFreeHandle_rep140(F2D *out);
void fFreeHandle_rep102(F2D *out);
void cluster_fFreeHandle_rep102(F2D *out);
void fFreeHandle_rep101(F2D *out);
void cluster_fFreeHandle_rep101(F2D *out);
void fFreeHandle_rep100(F2D *out);
void cluster_fFreeHandle_rep100(F2D *out);
void fFreeHandle_rep99(F2D *out);
void cluster_fFreeHandle_rep99(F2D *out);
void fFreeHandle_rep98(F2D *out);
void cluster_fFreeHandle_rep98(F2D *out);
void fFreeHandle_rep97(F2D *out);
void cluster_fFreeHandle_rep97(F2D *out);
void fFreeHandle_rep96(F2D *out);
void cluster_fFreeHandle_rep96(F2D *out);
void fFreeHandle_rep95(F2D *out);
void cluster_fFreeHandle_rep95(F2D *out);
void fFreeHandle_rep94(F2D *out);
void cluster_fFreeHandle_rep94(F2D *out);
void fFreeHandle_rep93(F2D *out);
void fFreeHandle_rep92(F2D *out);
void fFreeHandle_rep91(F2D *out);
void fFreeHandle_rep90(F2D *out);
void fFreeHandle_rep89(F2D *out);
void fFreeHandle_rep88(F2D *out);
void fFreeHandle_rep87(F2D *out);
void fFreeHandle_rep86(F2D *out);
void fFreeHandle_rep85(F2D *out);
void fFreeHandle_rep84(F2D *out);
void fMallocHandle_out22_rep35(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep34(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep33(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep32(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep31(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep30(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep29(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep28(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep28(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep27(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep62(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep61(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep60(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep60(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep59(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep59(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep58(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep26(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep67(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep66(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep65(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep65(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep64(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep64(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep63(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep25(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep45(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep44(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep44(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep43(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep43(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep42(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep42(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep41(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep41(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep40(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep39(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep38(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep37(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep36(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep24(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep23(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep22(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep21(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep21(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep20(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep20(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep19(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep19(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep18(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep18(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep17(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep17(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep16(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep16(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep15(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep90(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep89(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep89(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep88(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep88(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep87(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep87(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep86(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep86(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep85(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep85(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep84(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep84(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep83(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep83(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep82(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep82(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep81(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep80(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep14(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep13(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep12(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep11(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep79(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep78(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep78(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep77(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep77(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep76(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep75(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep74(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep10(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep73(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep72(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep72(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep71(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep71(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep70(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep69(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep68(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep9(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep57(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep56(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep56(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep55(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep55(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep54(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep53(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep52(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep8(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep51(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep50(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep50(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep49(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out22_rep49(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep48(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep47(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep46(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep7(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep6(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep5(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep4(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep3(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep2(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep1(F2D *out, int *rows, int *cols);
void fMallocHandle_out22_rep0(F2D *out, int *rows, int *cols);
void fMallocHandle_rep186(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep185(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep184(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep183(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep182(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep181(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep180(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep179(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep200(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep199(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep198(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep198(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep197(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep197(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep196(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep178(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep205(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep204(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep203(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep203(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep202(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep202(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep201(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep177(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep218(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep217(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep216(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep216(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep215(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep215(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep214(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep176(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep223(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep222(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep221(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep221(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep220(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep220(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep219(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep175(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep174(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep173(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep172(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep233(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep232(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep232(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep231(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep231(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep230(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep230(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep229(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep229(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep228(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep228(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep227(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep227(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep226(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep226(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep225(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep225(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep224(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep171(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep171(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep170(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep170(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep169(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep169(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep168(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep168(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep167(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep167(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep166(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep166(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep165(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep164(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep163(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep162(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep195(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep194(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep193(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep192(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep191(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep191(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep190(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep190(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep189(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep189(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep188(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep188(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep187(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep161(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep213(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep213(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep212(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep212(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep211(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep210(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep160(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep209(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep209(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep208(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep208(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep207(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep206(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep159(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep159(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep158(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep157(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep156(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep155(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep154(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep153(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep152(int rows, int cols, F2D **rtr_val);
void fSetArray_out22_rep17(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep16(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep15(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep22(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep21(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep20(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep20(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep19(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep19(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep18(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep14(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep27(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep26(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep25(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep25(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep24(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep24(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep23(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep13(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep32(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep31(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep30(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep30(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep29(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep29(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep28(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep12(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep37(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep36(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep35(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep35(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep34(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep34(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep33(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep11(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep10(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep9(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep8(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep47(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep46(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep46(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep45(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep45(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep44(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep44(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep43(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep43(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep42(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep42(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep41(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep41(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep40(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep40(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep39(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep39(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep38(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep7(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep7(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep6(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep6(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep5(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep5(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep4(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep4(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep3(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep3(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep2(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out22_rep2(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep1(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out22_rep0(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_rep59(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep58(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep58(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep57(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep57(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep56(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep56(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep55(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep55(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep54(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep54(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep53(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep53(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep52(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep84(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep84(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep83(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep83(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep82(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep82(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep81(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep81(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep80(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep80(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep79(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep79(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep78(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep78(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep77(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep77(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep76(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep51(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep50(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep49(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep48(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep75(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep75(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep74(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep74(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep73(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep72(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep47(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep71(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep71(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep70(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep70(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep69(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep68(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep46(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep67(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep67(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep66(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep66(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep65(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep64(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep45(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep63(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep63(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep62(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep62(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep61(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep60(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep44(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep43(int rows, int cols, float val, F2D **rtr_val);
void getInterpolatePatch_out0_rep8(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22);
void cluster_getInterpolatePatch_out0_rep8(float *centerX, float *centerY, float *a11, float *a12, float *a21,
                                           float *a22);
void getInterpolatePatch_out0_rep7(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22);
void cluster_getInterpolatePatch_out0_rep7(float *centerX, float *centerY, float *a11, float *a12, float *a21,
                                           float *a22);
void getInterpolatePatch_out0_rep6(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22);
void cluster_getInterpolatePatch_out0_rep6(float *centerX, float *centerY, float *a11, float *a12, float *a21,
                                           float *a22);
void getInterpolatePatch_out0_rep5(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22);
void cluster_getInterpolatePatch_out0_rep5(float *centerX, float *centerY, float *a11, float *a12, float *a21,
                                           float *a22);
void getInterpolatePatch_out0_rep4(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22);
void cluster_getInterpolatePatch_out0_rep4(float *centerX, float *centerY, float *a11, float *a12, float *a21,
                                           float *a22);
void getInterpolatePatch_out0_rep3(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22);
void cluster_getInterpolatePatch_out0_rep3(float *centerX, float *centerY, float *a11, float *a12, float *a21,
                                           float *a22);
void getInterpolatePatch_out0_rep2(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22);
void cluster_getInterpolatePatch_out0_rep2(float *centerX, float *centerY, float *a11, float *a12, float *a21,
                                           float *a22);
void getInterpolatePatch_out0_rep1(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22);
void cluster_getInterpolatePatch_out0_rep1(float *centerX, float *centerY, float *a11, float *a12, float *a21,
                                           float *a22);
void getInterpolatePatch_out0_rep0(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22);
void getInterpolatePatch_out1_rep8(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22);
void cluster_getInterpolatePatch_out1_rep8(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j,
                                           int *cols, float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src,
                                           float *a11, float *a12, float *a21, float *a22);
void getInterpolatePatch_out1_rep7(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22);
void cluster_getInterpolatePatch_out1_rep7(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j,
                                           int *cols, float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src,
                                           float *a11, float *a12, float *a21, float *a22);
void getInterpolatePatch_out1_rep6(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22);
void cluster_getInterpolatePatch_out1_rep6(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j,
                                           int *cols, float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src,
                                           float *a11, float *a12, float *a21, float *a22);
void getInterpolatePatch_out1_rep5(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22);
void cluster_getInterpolatePatch_out1_rep5(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j,
                                           int *cols, float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src,
                                           float *a11, float *a12, float *a21, float *a22);
void getInterpolatePatch_out1_rep4(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22);
void cluster_getInterpolatePatch_out1_rep4(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j,
                                           int *cols, float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src,
                                           float *a11, float *a12, float *a21, float *a22);
void getInterpolatePatch_out1_rep3(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22);
void cluster_getInterpolatePatch_out1_rep3(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j,
                                           int *cols, float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src,
                                           float *a11, float *a12, float *a21, float *a22);
void getInterpolatePatch_out1_rep2(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22);
void cluster_getInterpolatePatch_out1_rep2(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j,
                                           int *cols, float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src,
                                           float *a11, float *a12, float *a21, float *a22);
void getInterpolatePatch_out1_rep1(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22);
void cluster_getInterpolatePatch_out1_rep1(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j,
                                           int *cols, float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src,
                                           float *a11, float *a12, float *a21, float *a22);
void getInterpolatePatch_out1_rep0(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22);
void getInterpolatePatch_rep7(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void cluster_getInterpolatePatch_rep7(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void getInterpolatePatch_rep6(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void cluster_getInterpolatePatch_rep6(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void getInterpolatePatch_rep5(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void cluster_getInterpolatePatch_rep5(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void getInterpolatePatch_rep4(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void cluster_getInterpolatePatch_rep4(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void getInterpolatePatch_rep3(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void cluster_getInterpolatePatch_rep3(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void getInterpolatePatch_rep2(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void cluster_getInterpolatePatch_rep2(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void getInterpolatePatch_rep1(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void cluster_getInterpolatePatch_rep1(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void getInterpolatePatch_rep0(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void cluster_getInterpolatePatch_rep0(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void iFreeHandle_out17_rep11(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out17_rep11(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep10(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep16(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep15(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep14(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out17_rep14(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep13(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out17_rep13(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep12(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep9(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep21(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep20(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep19(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out17_rep19(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep18(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out17_rep18(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep17(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep8(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep7(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep6(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep5(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out17_rep5(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep4(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out17_rep4(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep3(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out17_rep3(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep2(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out17_rep2(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep1(int *decomp_0, I2D *out);
void iFreeHandle_out17_rep0(int *decomp_0, I2D *out);
void iFreeHandle_rep45(I2D *out);
void iFreeHandle_rep44(I2D *out);
void cluster_iFreeHandle_rep44(I2D *out);
void iFreeHandle_rep43(I2D *out);
void cluster_iFreeHandle_rep43(I2D *out);
void iFreeHandle_rep42(I2D *out);
void cluster_iFreeHandle_rep42(I2D *out);
void iFreeHandle_rep41(I2D *out);
void cluster_iFreeHandle_rep41(I2D *out);
void iFreeHandle_rep40(I2D *out);
void iFreeHandle_rep39(I2D *out);
void iFreeHandle_rep38(I2D *out);
void iFreeHandle_rep37(I2D *out);
void iFreeHandle_rep53(I2D *out);
void cluster_iFreeHandle_rep53(I2D *out);
void iFreeHandle_rep52(I2D *out);
void cluster_iFreeHandle_rep52(I2D *out);
void iFreeHandle_rep51(I2D *out);
void iFreeHandle_rep50(I2D *out);
void iFreeHandle_rep36(I2D *out);
void iFreeHandle_rep49(I2D *out);
void cluster_iFreeHandle_rep49(I2D *out);
void iFreeHandle_rep48(I2D *out);
void cluster_iFreeHandle_rep48(I2D *out);
void iFreeHandle_rep47(I2D *out);
void iFreeHandle_rep46(I2D *out);
void iFreeHandle_rep35(I2D *out);
void cluster_iFreeHandle_rep35(I2D *out);
void iMallocHandle_out29_rep10(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out29_rep10(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep9(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep15(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep14(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep13(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out29_rep13(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep12(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out29_rep12(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep11(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep8(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep20(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep19(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep18(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out29_rep18(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep17(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out29_rep17(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep16(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep7(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep6(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep5(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep4(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out29_rep4(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep3(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out29_rep3(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep2(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out29_rep2(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep1(I2D *out, int *rows, int *cols);
void iMallocHandle_out29_rep0(I2D *out, int *rows, int *cols);
void iMallocHandle_rep72(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep71(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep71(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep70(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep70(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep69(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep69(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep68(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep67(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep66(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep65(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep80(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep80(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep79(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep79(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep78(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep77(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep64(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep76(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep76(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep75(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep75(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep74(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep73(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep63(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep63(int rows, int cols, I2D **rtr_val);
I2D *readImage(char const *pathName);
void iMallocHandle(int rows, int cols, I2D **rtr_val);
unsigned int *photonStartTiming();
static void magic_timing_begin(unsigned int *cycles);
void imageBlur(I2D *imageIn, F2D **rtr_val);
void cluster_imageBlur(I2D *imageIn, F2D **rtr_val);
void fSetArray(int rows, int cols, float val, F2D **rtr_val);
void fMallocHandle(int rows, int cols, F2D **rtr_val);
void fFreeHandle(F2D *out);
void iFreeHandle(I2D *out);
void imageResize(F2D *imageIn, F2D **rtr_val);
void cluster_imageResize(F2D *imageIn, F2D **rtr_val);
void calcSobel_dX(F2D *imageIn, F2D **rtr_val);
void calcSobel_dY(F2D *imageIn, F2D **rtr_val);
F2D *calcGoodFeature(F2D *verticalEdgeImage, F2D *horizontalEdgeImage, int cols, int rows, int winSize);
F2D *calcAreaSum(F2D *src, int cols, int rows, int winSize);
F2D *fReshape(F2D *in, int rows, int cols);
F2D *fillFeatures(F2D *lambda, int N_FEA, int win);
F2D *fTranspose(F2D *a);
F2D *getANMS(F2D *points, float r);
void fDeepCopy(F2D *in, F2D **rtr_val);
F2D *ffVertcat(F2D *matrix1, F2D *matrix2);
unsigned int *photonEndTiming();
unsigned int *photonReportTiming(unsigned int *startCycles, unsigned int *endCycles);
void calcPyrLKTrack(F2D *previousImageBlur_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level1,
                    F2D *vertEdge_level2, F2D *horzEdge_level1, F2D *horzEdge_level2, F2D *currentImageBlur_level1,
                    F2D *currentImageBlur_level2, F2D *previousFrameFeatures, int nFeatures, int winSize,
                    float accuracy, int max_iter, F2D *currentFrameFeatures, I2D **rtr_val);
void cluster_calcPyrLKTrack(F2D *previousImageBlur_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level1,
                            F2D *vertEdge_level2, F2D *horzEdge_level1, F2D *horzEdge_level2,
                            F2D *currentImageBlur_level1, F2D *currentImageBlur_level2, F2D *previousFrameFeatures,
                            int nFeatures, int winSize, float accuracy, int max_iter, F2D *currentFrameFeatures,
                            I2D **rtr_val);
void iSetArray(int rows, int cols, int val, I2D **rtr_val);
void cluster_iSetArray(int rows, int cols, int val, I2D **rtr_val);
void getInterpolatePatch(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val);
void fWriteMatrix(F2D *input, char *inpath);
int fSelfCheck(F2D *in1, char *path, float tol);
// void photonPrintTiming(unsigned int *elapsed);
int main(int argc, char *argv[]);
F2D *calcAreaSum(F2D *src, int cols, int rows, int winSize)
{
    int nave, nave_half, i, j, k;
    F2D *ret, *a1;
    float a1sum;
    nave = winSize;
    nave_half = floor((nave + 1) / 2);
    fMallocHandle_rep152(rows, cols, &ret);
    fSetArray_rep43(1, cols + nave, 0, &a1);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            a1->data[j + nave_half] = src->data[(i)*src->width + (j)];
        }
        a1sum = 0;
        for (k = 0; k < nave; k++)
        {
            a1sum += a1->data[k];
        }
        for (j = 0; j < cols; j++)
        {
            ret->data[(i)*ret->width + (j)] = a1sum;
            a1sum += a1->data[j + nave] - a1->data[j];
        }
    }
    fFreeHandle_rep84(a1);
    fSetArray_rep44(1, rows + nave, 0, &a1);
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            a1->data[j + nave_half] = ret->data[(j)*ret->width + (i)];
        }
        a1sum = 0;
        for (k = 0; k < nave; k++)
        {
            a1sum += a1->data[k];
        }
        for (j = 0; j < rows; j++)
        {
            ret->data[(j)*ret->width + (i)] = a1sum;
            a1sum += a1->data[j + nave] - a1->data[j];
        }
    }
    fFreeHandle_rep85(a1);

    return ret;
}

F2D *calcGoodFeature(F2D *verticalEdgeImage, F2D *horizontalEdgeImage, int cols, int rows, int winSize)
{
    int i, j, k, ind;
    F2D *verticalEdgeSq, *horizontalEdgeSq, *horzVertEdge;
    F2D *tr, *det, *lambda;
    F2D *cummulative_verticalEdgeSq, *cummulative_horzVertEdge, *cummulative_horizontalEdgeSq;
    fMallocHandle_rep153(rows, cols, &verticalEdgeSq);
    fMallocHandle_rep154(rows, cols, &horzVertEdge);
    fMallocHandle_rep155(rows, cols, &horizontalEdgeSq);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            verticalEdgeSq->data[(i)*verticalEdgeSq->width + (j)] =
                verticalEdgeImage->data[(i)*verticalEdgeImage->width + (j)] *
                verticalEdgeImage->data[(i)*verticalEdgeImage->width + (j)];
            horzVertEdge->data[(i)*horzVertEdge->width + (j)] =
                verticalEdgeImage->data[(i)*verticalEdgeImage->width + (j)] *
                horizontalEdgeImage->data[(i)*horizontalEdgeImage->width + (j)];
            horizontalEdgeSq->data[(i)*horizontalEdgeSq->width + (j)] =
                horizontalEdgeImage->data[(i)*horizontalEdgeImage->width + (j)] *
                horizontalEdgeImage->data[(i)*horizontalEdgeImage->width + (j)];
        }
    }
    cummulative_verticalEdgeSq = calcAreaSum(verticalEdgeSq, cols, rows, winSize);
    cummulative_horzVertEdge = calcAreaSum(horzVertEdge, cols, rows, winSize);
    cummulative_horizontalEdgeSq = calcAreaSum(horizontalEdgeSq, cols, rows, winSize);
    fMallocHandle_rep156(rows, cols, &tr);
    fMallocHandle_rep157(rows, cols, &det);
    fMallocHandle_rep158(rows, cols, &lambda);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            tr->data[(i)*tr->width + (j)] =
                cummulative_verticalEdgeSq->data[(i)*cummulative_verticalEdgeSq->width + (j)] +
                cummulative_horizontalEdgeSq->data[(i)*cummulative_horizontalEdgeSq->width + (j)];
            det->data[(i)*det->width + (j)] =
                cummulative_verticalEdgeSq->data[(i)*cummulative_verticalEdgeSq->width + (j)] *
                    cummulative_horizontalEdgeSq->data[(i)*cummulative_horizontalEdgeSq->width + (j)] -
                cummulative_horzVertEdge->data[(i)*cummulative_horzVertEdge->width + (j)] *
                    cummulative_horzVertEdge->data[(i)*cummulative_horzVertEdge->width + (j)];
            lambda->data[(i)*lambda->width + (j)] =
                (det->data[(i)*det->width + (j)] / (tr->data[(i)*tr->width + (j)] + 0.00001));
        }
    }
    fFreeHandle_rep86(verticalEdgeSq);
    fFreeHandle_rep87(horzVertEdge);
    fFreeHandle_rep88(horizontalEdgeSq);
    fFreeHandle_rep89(cummulative_verticalEdgeSq);
    fFreeHandle_rep90(cummulative_horzVertEdge);
    fFreeHandle_rep91(cummulative_horizontalEdgeSq);
    fFreeHandle_rep92(tr);
    fFreeHandle_rep93(det);

    return lambda;
}

void calcPyrLKTrack_out1(I2D *imgDims, F2D *previousImageBlur_level1, F2D *previousImageBlur_level2, int *pLevel)
{
    imgDims->data[(0) * imgDims->width + (0)] = previousImageBlur_level1->height;
    imgDims->data[(0) * imgDims->width + (1)] = previousImageBlur_level1->width;
    imgDims->data[(1) * imgDims->width + (0)] = previousImageBlur_level2->height;
    imgDims->data[(1) * imgDims->width + (1)] = previousImageBlur_level2->width;
    (*pLevel) = 2;
}

void calcPyrLKTrack_out2(F2D *rate, int *winSizeSq, int *winSize)
{
    rate->data[0] = 1;
    rate->data[1] = 0.5;
    rate->data[2] = 0.25;
    rate->data[3] = 0.125;
    rate->data[4] = 0.0625;
    rate->data[5] = 0.03125;
    (*winSizeSq) = 4 * (*winSize) * (*winSize);
}

void calcPyrLKTrack_out3_out0(float *dX, float *dY, float *x, F2D *previousFrameFeatures, int *i, F2D *rate,
                              int *pLevel, float *y, float *c_det)
{
    (*dX) = 0;
    (*dY) = 0;
    (*x) = previousFrameFeatures->data[(0) * previousFrameFeatures->width + ((*i))] * rate->data[(*pLevel)];
    (*y) = previousFrameFeatures->data[(1) * previousFrameFeatures->width + ((*i))] * rate->data[(*pLevel)];
    (*c_det) = 0;
}

void calcPyrLKTrack_out3_out1_out0(float *x, float *y, float *dX, float *dY, int *imgSize_1, I2D *imgDims, int *level,
                                   int *imgSize_2, float *c_xx, float *c_xy, float *c_yy, int *winSize, I2D *valid,
                                   int *i, int *__premExitParam0, int *decomp_7, int *__premExitParam2)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_6;
    (*x) = (*x) + (*x);
    (*y) = (*y) + (*y);
    (*dX) = (*dX) + (*dX);
    (*dY) = (*dY) + (*dY);
    (*imgSize_1) = imgDims->data[((*level)) * imgDims->width + (0)];
    (*imgSize_2) = imgDims->data[((*level)) * imgDims->width + (1)];
    (*c_xx) = 0;
    (*c_xy) = 0;
    (*c_yy) = 0;
    decomp_0 = ((*x) - (*winSize)) < 0;
    decomp_1 = ((*y) - (*winSize)) < 0;
    decomp_2 = decomp_0 || decomp_1;
    decomp_3 = ((*y) + (*winSize) + 1) >= (*imgSize_1);
    decomp_4 = decomp_2 || decomp_3;
    decomp_5 = ((*x) + (*winSize) + 1) >= (*imgSize_2);
    decomp_6 = decomp_4 || decomp_5;
    if (decomp_6)
    {
        valid->data[(*i)] = 0;
        *__premExitParam0 = 1;
        *__premExitParam2 = 1;

        return;
    }
    (*decomp_7) = (*level) == 0;
}

void calcPyrLKTrack_out3_out1_out1(int *decomp_8, int *level)
{
    (*decomp_8) = (*level) == 1;
}

void calcPyrLKTrack_out3_out1_out2(int *idx, int *winSizeSq, float *c_xx, F2D **iDxPatch, float *c_xy, F2D **iDyPatch,
                                   float *c_yy, float *c_det, float *tr, int *decomp_9, float *accuracy)
{
    for ((*idx) = 0; (*idx) < (*winSizeSq); (*idx)++)
    {
#pragma HLS loop_tripcount max = 9216 min = 9216
        (*c_xx) = (*c_xx) + (*iDxPatch)->data[(*idx)] * (*iDxPatch)->data[(*idx)];
        (*c_xy) = (*c_xy) + (*iDxPatch)->data[(*idx)] * (*iDyPatch)->data[(*idx)];
        (*c_yy) = (*c_yy) + (*iDyPatch)->data[(*idx)] * (*iDyPatch)->data[(*idx)];
    }
    (*c_det) = ((*c_xx) * (*c_yy) - (*c_xy) * (*c_xy));
    (*tr) = (*c_xx) + (*c_yy);
    (*decomp_9) = ((*c_det) / ((*tr) + 0.00001)) < (*accuracy);
}

void calcPyrLKTrack_out3_out1_out4(float *c_det)
{
    (*c_det) = 1 / (*c_det);
}

void calcPyrLKTrack_out3_out1_out5_out0(float *x, float *dX, int *winSize, float *y, float *dY, int *imgSize_1,
                                        int *imgSize_2, I2D *valid, int *i, int *__premExitParam3, int *decomp_17,
                                        int *level, int *__premExitParam6)
{
    int decomp_10;
    int decomp_11;
    int decomp_12;
    int decomp_13;
    int decomp_14;
    int decomp_15;
    int decomp_16;
    decomp_10 = ((*x) + (*dX) - (*winSize)) < 0;
    decomp_11 = ((*y) + (*dY) - (*winSize)) < 0;
    decomp_12 = decomp_10 || decomp_11;
    decomp_13 = ((*y) + (*dY) + (*winSize) + 1) >= (*imgSize_1);
    decomp_14 = decomp_12 || decomp_13;
    decomp_15 = ((*x) + (*dX) + (*winSize) + 1) >= (*imgSize_2);
    decomp_16 = decomp_14 || decomp_15;
    if (decomp_16)
    {
        valid->data[(*i)] = 0;
        *__premExitParam3 = 1;
        *__premExitParam6 = 1;

        return;
    }
    (*decomp_17) = (*level) == 0;
}

void calcPyrLKTrack_out3_out1_out5_out1(int *decomp_18, int *level)
{
    (*decomp_18) = (*level) == 1;
}

void calcPyrLKTrack_out3_out1_out5_out2_out0(float *eX, float *eY, int *idx, int *winSizeSq, float *dIt, F2D **iPatch,
                                             F2D **jPatch, F2D **iDxPatch, F2D **iDyPatch, float *mX, float *c_det,
                                             float *c_yy, float *c_xy, float *mY, float *c_xx, float *dX, float *dY,
                                             int *decomp_19, float *accuracy)
{
    (*eX) = 0;
    (*eY) = 0;
    for ((*idx) = 0; (*idx) < (*winSizeSq); (*idx)++)
    {
#pragma HLS loop_tripcount max = 9216 min = 9216
        (*dIt) = (*iPatch)->data[(*idx)] - (*jPatch)->data[(*idx)];
        (*eX) = (*eX) + (*dIt) * (*iDxPatch)->data[(*idx)];
        (*eY) = (*eY) + (*dIt) * (*iDyPatch)->data[(*idx)];
    }
    (*mX) = (*c_det) * ((*eX) * (*c_yy) - (*eY) * (*c_xy));
    (*mY) = (*c_det) * (-(*eX) * (*c_xy) + (*eY) * (*c_xx));
    (*dX) = (*dX) + (*mX);
    (*dY) = (*dY) + (*mY);
    (*decomp_19) = ((*mX) * (*mX) + (*mY) * (*mY)) < (*accuracy);
}

void calcPyrLKTrack_out3_out1_out5_out2(float *eX, float *eY, int *idx, int *winSizeSq, float *dIt, F2D **iPatch,
                                        F2D **jPatch, F2D **iDxPatch, F2D **iDyPatch, float *mX, float *c_det,
                                        float *c_yy, float *c_xy, float *mY, float *c_xx, float *dX, float *dY,
                                        float *accuracy, int *__premExitParam3, int *__premExitParam7)
{
    int decomp_19;
    calcPyrLKTrack_out3_out1_out5_out2_out0(eX, eY, idx, winSizeSq, dIt, iPatch, jPatch, iDxPatch, iDyPatch, mX, c_det,
                                            c_yy, c_xy, mY, c_xx, dX, dY, &decomp_19, accuracy);
    if (decomp_19)
    {
        fFreeHandle_rep94((*jPatch));
        *__premExitParam3 = 1;
        *__premExitParam7 = 1;

        return;
    }
}

void calcPyrLKTrack_out3_out1_out5(float *x, float *dX, int *winSize, float *y, float *dY, int *imgSize_1,
                                   int *imgSize_2, I2D *valid, int *i, int *level, F2D **jPatch,
                                   F2D *currentImageBlur_level1, F2D *currentImageBlur_level2, float *eX, float *eY,
                                   int *idx, int *winSizeSq, float *dIt, F2D **iPatch, F2D **iDxPatch, F2D **iDyPatch,
                                   float *mX, float *c_det, float *c_yy, float *c_xy, float *mY, float *c_xx,
                                   float *accuracy, int *__premExitParam3)
{
    int __prematureExit6 = 0;
    int decomp_17;
    int decomp_18;
    int __prematureExit7 = 0;
    calcPyrLKTrack_out3_out1_out5_out0(x, dX, winSize, y, dY, imgSize_1, imgSize_2, valid, i, __premExitParam3,
                                       &decomp_17, level, &__prematureExit6);
    if (__prematureExit6 == 1)
    {

        return;
    }
    if (decomp_17)
    {
        getInterpolatePatch_rep0(currentImageBlur_level1, (*imgSize_2), (*x) + (*dX), (*y) + (*dY), (*winSize), jPatch);
    }
    calcPyrLKTrack_out3_out1_out5_out1(&decomp_18, level);
    if (decomp_18)
    {
        getInterpolatePatch_rep1(currentImageBlur_level2, (*imgSize_2), (*x) + (*dX), (*y) + (*dY), (*winSize), jPatch);
    }
    calcPyrLKTrack_out3_out1_out5_out2(eX, eY, idx, winSizeSq, dIt, iPatch, jPatch, iDxPatch, iDyPatch, mX, c_det, c_yy,
                                       c_xy, mY, c_xx, dX, dY, accuracy, __premExitParam3, &__prematureExit7);
    if (__prematureExit7 == 1)
    {

        return;
    }
    fFreeHandle_rep95((*jPatch));
}

void calcPyrLKTrack_out3_out1_out10(float *x, float *dX, int *winSize, float *y, float *dY, int *imgSize_1,
                                    int *imgSize_2, I2D *valid, int *i, int *level, F2D **jPatch,
                                    F2D *currentImageBlur_level1, F2D *currentImageBlur_level2, float *eX, float *eY,
                                    int *idx, int *winSizeSq, float *dIt, F2D **iPatch, F2D **iDxPatch, F2D **iDyPatch,
                                    float *mX, float *c_det, float *c_yy, float *c_xy, float *mY, float *c_xx,
                                    float *accuracy, int *__premExitParam5)
{
    int __prematureExit3 = 0;
    calcPyrLKTrack_out3_out1_out5(x, dX, winSize, y, dY, imgSize_1, imgSize_2, valid, i, level, jPatch,
                                  currentImageBlur_level1, currentImageBlur_level2, eX, eY, idx, winSizeSq, dIt, iPatch,
                                  iDxPatch, iDyPatch, mX, c_det, c_yy, c_xy, mY, c_xx, accuracy, &__prematureExit3);
    if (__prematureExit3 == 1)
    {
        *__premExitParam5 = 1;

        return;
    }
}

void calcPyrLKTrack_out3_out1_out15(float *x, float *dX, int *winSize, float *y, float *dY, int *imgSize_1,
                                    int *imgSize_2, I2D *valid, int *i, int *level, F2D **jPatch,
                                    F2D *currentImageBlur_level1, F2D *currentImageBlur_level2, float *eX, float *eY,
                                    int *idx, int *winSizeSq, float *dIt, F2D **iPatch, F2D **iDxPatch, F2D **iDyPatch,
                                    float *mX, float *c_det, float *c_yy, float *c_xy, float *mY, float *c_xx,
                                    float *accuracy, int *__premExitParam9)
{
    int __prematureExit5 = 0;
    calcPyrLKTrack_out3_out1_out10(x, dX, winSize, y, dY, imgSize_1, imgSize_2, valid, i, level, jPatch,
                                   currentImageBlur_level1, currentImageBlur_level2, eX, eY, idx, winSizeSq, dIt,
                                   iPatch, iDxPatch, iDyPatch, mX, c_det, c_yy, c_xy, mY, c_xx, accuracy,
                                   &__prematureExit5);
    if (__prematureExit5 == 1)
    {
        *__premExitParam9 = 1;

        return;
    }
}

void calcPyrLKTrack_out3_out1_out20(float *x, float *dX, int *winSize, float *y, float *dY, int *imgSize_1,
                                    int *imgSize_2, I2D *valid, int *i, int *level, F2D **jPatch,
                                    F2D *currentImageBlur_level1, F2D *currentImageBlur_level2, float *eX, float *eY,
                                    int *idx, int *winSizeSq, float *dIt, F2D **iPatch, F2D **iDxPatch, F2D **iDyPatch,
                                    float *mX, float *c_det, float *c_yy, float *c_xy, float *mY, float *c_xx,
                                    float *accuracy, int *__premExitParam11)
{
    int __prematureExit9 = 0;
    calcPyrLKTrack_out3_out1_out15(x, dX, winSize, y, dY, imgSize_1, imgSize_2, valid, i, level, jPatch,
                                   currentImageBlur_level1, currentImageBlur_level2, eX, eY, idx, winSizeSq, dIt,
                                   iPatch, iDxPatch, iDyPatch, mX, c_det, c_yy, c_xy, mY, c_xx, accuracy,
                                   &__prematureExit9);
    if (__prematureExit9 == 1)
    {
        *__premExitParam11 = 1;

        return;
    }
}

void calcPyrLKTrack_out3_out1_out25(float *x, float *dX, int *winSize, float *y, float *dY, int *imgSize_1,
                                    int *imgSize_2, I2D *valid, int *i, int *level, F2D **jPatch,
                                    F2D *currentImageBlur_level1, F2D *currentImageBlur_level2, float *eX, float *eY,
                                    int *idx, int *winSizeSq, float *dIt, F2D **iPatch, F2D **iDxPatch, F2D **iDyPatch,
                                    float *mX, float *c_det, float *c_yy, float *c_xy, float *mY, float *c_xx,
                                    float *accuracy, int *__premExitParam13)
{
    int __prematureExit11 = 0;
    calcPyrLKTrack_out3_out1_out20(x, dX, winSize, y, dY, imgSize_1, imgSize_2, valid, i, level, jPatch,
                                   currentImageBlur_level1, currentImageBlur_level2, eX, eY, idx, winSizeSq, dIt,
                                   iPatch, iDxPatch, iDyPatch, mX, c_det, c_yy, c_xy, mY, c_xx, accuracy,
                                   &__prematureExit11);
    if (__prematureExit11 == 1)
    {
        *__premExitParam13 = 1;

        return;
    }
}

void calcPyrLKTrack_out3_out1(float *x, float *y, float *dX, float *dY, int *imgSize_1, I2D *imgDims, int *level,
                              int *imgSize_2, float *c_xx, float *c_xy, float *c_yy, int *winSize, I2D *valid, int *i,
                              F2D **iPatch, F2D *previousImageBlur_level1, F2D **iDxPatch, F2D *vertEdge_level1,
                              F2D **iDyPatch, F2D *horzEdge_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level2,
                              F2D *horzEdge_level2, int *idx, int *winSizeSq, float *c_det, float *tr, float *accuracy,
                              int *k, int *max_iter, F2D **jPatch, F2D *currentImageBlur_level1,
                              F2D *currentImageBlur_level2, float *eX, float *eY, float *dIt, float *mX, float *mY,
                              int *__premExitParam0)
{
    int decomp_7;
    int __prematureExit2 = 0;
    int decomp_8;
    int decomp_9;
    calcPyrLKTrack_out3_out1_out0(x, y, dX, dY, imgSize_1, imgDims, level, imgSize_2, c_xx, c_xy, c_yy, winSize, valid,
                                  i, __premExitParam0, &decomp_7, &__prematureExit2);
    if (__prematureExit2 == 1)
    {

        return;
    }
    if (decomp_7)
    {
        getInterpolatePatch_rep2(previousImageBlur_level1, (*imgSize_2), (*x), (*y), (*winSize), iPatch);
        getInterpolatePatch_rep3(vertEdge_level1, (*imgSize_2), (*x), (*y), (*winSize), iDxPatch);
        getInterpolatePatch_rep4(horzEdge_level1, (*imgSize_2), (*x), (*y), (*winSize), iDyPatch);
    }
    calcPyrLKTrack_out3_out1_out1(&decomp_8, level);
    if (decomp_8)
    {
        getInterpolatePatch_rep5(previousImageBlur_level2, (*imgSize_2), (*x), (*y), (*winSize), iPatch);
        getInterpolatePatch_rep6(vertEdge_level2, (*imgSize_2), (*x), (*y), (*winSize), iDxPatch);
        getInterpolatePatch_rep7(horzEdge_level2, (*imgSize_2), (*x), (*y), (*winSize), iDyPatch);
    }
    calcPyrLKTrack_out3_out1_out2(idx, winSizeSq, c_xx, iDxPatch, c_xy, iDyPatch, c_yy, c_det, tr, &decomp_9, accuracy);
    if (decomp_9)
    {
        valid->data[(*i)] = 0;
        fFreeHandle_rep96((*iPatch));
        fFreeHandle_rep97((*iDxPatch));
        fFreeHandle_rep98((*iDyPatch));
        *__premExitParam0 = 1;

        return;
    }
    calcPyrLKTrack_out3_out1_out4(c_det);
    for ((*k) = 0; (*k) < (*max_iter); (*k)++)
    {
#pragma HLS loop_tripcount max = 1 min = 20
        int __prematureExit13 = 0;
        calcPyrLKTrack_out3_out1_out25(x, dX, winSize, y, dY, imgSize_1, imgSize_2, valid, i, level, jPatch,
                                       currentImageBlur_level1, currentImageBlur_level2, eX, eY, idx, winSizeSq, dIt,
                                       iPatch, iDxPatch, iDyPatch, mX, c_det, c_yy, c_xy, mY, c_xx, accuracy,
                                       &__prematureExit13);
        if (__prematureExit13 == 1)
        {
            break;
        }
    }
    fFreeHandle_rep99((*iPatch));
    fFreeHandle_rep100((*iDxPatch));
    fFreeHandle_rep101((*iDyPatch));
}

void calcPyrLKTrack_out3_out2(F2D *currentFrameFeatures, int *i, F2D *previousFrameFeatures, float *dX, float *dY)
{
    currentFrameFeatures->data[(0) * currentFrameFeatures->width + ((*i))] =
        previousFrameFeatures->data[(0) * previousFrameFeatures->width + ((*i))] + (*dX);
    currentFrameFeatures->data[(1) * currentFrameFeatures->width + ((*i))] =
        previousFrameFeatures->data[(1) * previousFrameFeatures->width + ((*i))] + (*dY);
}

void calcPyrLKTrack_out3_out3(float *x, float *y, float *dX, float *dY, int *imgSize_1, I2D *imgDims, int *level,
                              int *imgSize_2, float *c_xx, float *c_xy, float *c_yy, int *winSize, I2D *valid, int *i,
                              F2D **iPatch, F2D *previousImageBlur_level1, F2D **iDxPatch, F2D *vertEdge_level1,
                              F2D **iDyPatch, F2D *horzEdge_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level2,
                              F2D *horzEdge_level2, int *idx, int *winSizeSq, float *c_det, float *tr, float *accuracy,
                              int *k, int *max_iter, F2D **jPatch, F2D *currentImageBlur_level1,
                              F2D *currentImageBlur_level2, float *eX, float *eY, float *dIt, float *mX, float *mY,
                              int *__premExitParam1)
{
    int __prematureExit0 = 0;
    calcPyrLKTrack_out3_out1(x, y, dX, dY, imgSize_1, imgDims, level, imgSize_2, c_xx, c_xy, c_yy, winSize, valid, i,
                             iPatch, previousImageBlur_level1, iDxPatch, vertEdge_level1, iDyPatch, horzEdge_level1,
                             previousImageBlur_level2, vertEdge_level2, horzEdge_level2, idx, winSizeSq, c_det, tr,
                             accuracy, k, max_iter, jPatch, currentImageBlur_level1, currentImageBlur_level2, eX, eY,
                             dIt, mX, mY, &__prematureExit0);
    if (__prematureExit0 == 1)
    {
        *__premExitParam1 = 1;

        return;
    }
}

void calcPyrLKTrack_out3_out4(float *x, float *y, float *dX, float *dY, int *imgSize_1, I2D *imgDims, int *level,
                              int *imgSize_2, float *c_xx, float *c_xy, float *c_yy, int *winSize, I2D *valid, int *i,
                              F2D **iPatch, F2D *previousImageBlur_level1, F2D **iDxPatch, F2D *vertEdge_level1,
                              F2D **iDyPatch, F2D *horzEdge_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level2,
                              F2D *horzEdge_level2, int *idx, int *winSizeSq, float *c_det, float *tr, float *accuracy,
                              int *k, int *max_iter, F2D **jPatch, F2D *currentImageBlur_level1,
                              F2D *currentImageBlur_level2, float *eX, float *eY, float *dIt, float *mX, float *mY,
                              int *__premExitParam4)
{
    int __prematureExit1 = 0;
    calcPyrLKTrack_out3_out3(x, y, dX, dY, imgSize_1, imgDims, level, imgSize_2, c_xx, c_xy, c_yy, winSize, valid, i,
                             iPatch, previousImageBlur_level1, iDxPatch, vertEdge_level1, iDyPatch, horzEdge_level1,
                             previousImageBlur_level2, vertEdge_level2, horzEdge_level2, idx, winSizeSq, c_det, tr,
                             accuracy, k, max_iter, jPatch, currentImageBlur_level1, currentImageBlur_level2, eX, eY,
                             dIt, mX, mY, &__prematureExit1);
    if (__prematureExit1 == 1)
    {
        *__premExitParam4 = 1;

        return;
    }
}

void calcPyrLKTrack_out3_out5(float *x, float *y, float *dX, float *dY, int *imgSize_1, I2D *imgDims, int *level,
                              int *imgSize_2, float *c_xx, float *c_xy, float *c_yy, int *winSize, I2D *valid, int *i,
                              F2D **iPatch, F2D *previousImageBlur_level1, F2D **iDxPatch, F2D *vertEdge_level1,
                              F2D **iDyPatch, F2D *horzEdge_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level2,
                              F2D *horzEdge_level2, int *idx, int *winSizeSq, float *c_det, float *tr, float *accuracy,
                              int *k, int *max_iter, F2D **jPatch, F2D *currentImageBlur_level1,
                              F2D *currentImageBlur_level2, float *eX, float *eY, float *dIt, float *mX, float *mY,
                              int *__premExitParam8)
{
    int __prematureExit4 = 0;
    calcPyrLKTrack_out3_out4(x, y, dX, dY, imgSize_1, imgDims, level, imgSize_2, c_xx, c_xy, c_yy, winSize, valid, i,
                             iPatch, previousImageBlur_level1, iDxPatch, vertEdge_level1, iDyPatch, horzEdge_level1,
                             previousImageBlur_level2, vertEdge_level2, horzEdge_level2, idx, winSizeSq, c_det, tr,
                             accuracy, k, max_iter, jPatch, currentImageBlur_level1, currentImageBlur_level2, eX, eY,
                             dIt, mX, mY, &__prematureExit4);
    if (__prematureExit4 == 1)
    {
        *__premExitParam8 = 1;

        return;
    }
}

void calcPyrLKTrack_out3_out6(float *x, float *y, float *dX, float *dY, int *imgSize_1, I2D *imgDims, int *level,
                              int *imgSize_2, float *c_xx, float *c_xy, float *c_yy, int *winSize, I2D *valid, int *i,
                              F2D **iPatch, F2D *previousImageBlur_level1, F2D **iDxPatch, F2D *vertEdge_level1,
                              F2D **iDyPatch, F2D *horzEdge_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level2,
                              F2D *horzEdge_level2, int *idx, int *winSizeSq, float *c_det, float *tr, float *accuracy,
                              int *k, int *max_iter, F2D **jPatch, F2D *currentImageBlur_level1,
                              F2D *currentImageBlur_level2, float *eX, float *eY, float *dIt, float *mX, float *mY,
                              int *__premExitParam10)
{
    int __prematureExit8 = 0;
    calcPyrLKTrack_out3_out5(x, y, dX, dY, imgSize_1, imgDims, level, imgSize_2, c_xx, c_xy, c_yy, winSize, valid, i,
                             iPatch, previousImageBlur_level1, iDxPatch, vertEdge_level1, iDyPatch, horzEdge_level1,
                             previousImageBlur_level2, vertEdge_level2, horzEdge_level2, idx, winSizeSq, c_det, tr,
                             accuracy, k, max_iter, jPatch, currentImageBlur_level1, currentImageBlur_level2, eX, eY,
                             dIt, mX, mY, &__prematureExit8);
    if (__prematureExit8 == 1)
    {
        *__premExitParam10 = 1;

        return;
    }
}

void calcPyrLKTrack_out3_out7(float *x, float *y, float *dX, float *dY, int *imgSize_1, I2D *imgDims, int *level,
                              int *imgSize_2, float *c_xx, float *c_xy, float *c_yy, int *winSize, I2D *valid, int *i,
                              F2D **iPatch, F2D *previousImageBlur_level1, F2D **iDxPatch, F2D *vertEdge_level1,
                              F2D **iDyPatch, F2D *horzEdge_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level2,
                              F2D *horzEdge_level2, int *idx, int *winSizeSq, float *c_det, float *tr, float *accuracy,
                              int *k, int *max_iter, F2D **jPatch, F2D *currentImageBlur_level1,
                              F2D *currentImageBlur_level2, float *eX, float *eY, float *dIt, float *mX, float *mY,
                              int *__premExitParam12)
{
    int __prematureExit10 = 0;
    calcPyrLKTrack_out3_out6(x, y, dX, dY, imgSize_1, imgDims, level, imgSize_2, c_xx, c_xy, c_yy, winSize, valid, i,
                             iPatch, previousImageBlur_level1, iDxPatch, vertEdge_level1, iDyPatch, horzEdge_level1,
                             previousImageBlur_level2, vertEdge_level2, horzEdge_level2, idx, winSizeSq, c_det, tr,
                             accuracy, k, max_iter, jPatch, currentImageBlur_level1, currentImageBlur_level2, eX, eY,
                             dIt, mX, mY, &__prematureExit10);
    if (__prematureExit10 == 1)
    {
        *__premExitParam12 = 1;

        return;
    }
}

void calcPyrLKTrack_out3(float *dX, float *dY, float *x, F2D *previousFrameFeatures, int *i, F2D *rate, int *pLevel,
                         float *y, float *c_det, int *level, int *imgSize_1, I2D *imgDims, int *imgSize_2, float *c_xx,
                         float *c_xy, float *c_yy, int *winSize, I2D *valid, F2D **iPatch,
                         F2D *previousImageBlur_level1, F2D **iDxPatch, F2D *vertEdge_level1, F2D **iDyPatch,
                         F2D *horzEdge_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level2,
                         F2D *horzEdge_level2, int *idx, int *winSizeSq, float *tr, float *accuracy, int *k,
                         int *max_iter, F2D **jPatch, F2D *currentImageBlur_level1, F2D *currentImageBlur_level2,
                         float *eX, float *eY, float *dIt, float *mX, float *mY, F2D *currentFrameFeatures)
{
    calcPyrLKTrack_out3_out0(dX, dY, x, previousFrameFeatures, i, rate, pLevel, y, c_det);
    for ((*level) = (*pLevel) - 1; (*level) >= 0; (*level)--)
    {
#pragma HLS loop_tripcount max = 2 min = 2
        int __prematureExit12 = 0;
        calcPyrLKTrack_out3_out7(x, y, dX, dY, imgSize_1, imgDims, level, imgSize_2, c_xx, c_xy, c_yy, winSize, valid,
                                 i, iPatch, previousImageBlur_level1, iDxPatch, vertEdge_level1, iDyPatch,
                                 horzEdge_level1, previousImageBlur_level2, vertEdge_level2, horzEdge_level2, idx,
                                 winSizeSq, c_det, tr, accuracy, k, max_iter, jPatch, currentImageBlur_level1,
                                 currentImageBlur_level2, eX, eY, dIt, mX, mY, &__prematureExit12);
        if (__prematureExit12 == 1)
        {
            break;
        }
    }
    calcPyrLKTrack_out3_out2(currentFrameFeatures, i, previousFrameFeatures, dX, dY);
}

void calcPyrLKTrack(F2D *previousImageBlur_level1, F2D *previousImageBlur_level2, F2D *vertEdge_level1,
                    F2D *vertEdge_level2, F2D *horzEdge_level1, F2D *horzEdge_level2, F2D *currentImageBlur_level1,
                    F2D *currentImageBlur_level2, F2D *previousFrameFeatures, int nFeatures, int winSize,
                    float accuracy, int max_iter, F2D *currentFrameFeatures, I2D **rtr_val)
{
    int idx;
    int level;
    int pLevel;
    int i;
    int j;
    int k;
    int winSizeSq;
    I2D *valid;
    F2D *rate;
    F2D *iPatch;
    F2D *jPatch;
    F2D *iDxPatch;
    F2D *iDyPatch;
    float tr;
    float x;
    float y;
    float dX;
    float dY;
    float c_xx;
    float c_yy;
    float c_xy;
    int imgSize_1;
    int imgSize_2;
    float mX;
    float mY;
    float dIt;
    float eX;
    float eY;
    float c_det;
    I2D *imgDims;
    iMallocHandle_rep63(2, 2, &imgDims);
    calcPyrLKTrack_out1(imgDims, previousImageBlur_level1, previousImageBlur_level2, &pLevel);
    fMallocHandle_rep159(1, 6, &rate);
    calcPyrLKTrack_out2(rate, &winSizeSq, &winSize);
    iSetArray(1, nFeatures, 1, &valid);
    for (i = 0; i < nFeatures; i++)
    {
#pragma HLS loop_tripcount max = 5 min = 5
        calcPyrLKTrack_out3(&dX, &dY, &x, previousFrameFeatures, &i, rate, &pLevel, &y, &c_det, &level, &imgSize_1,
                            imgDims, &imgSize_2, &c_xx, &c_xy, &c_yy, &winSize, valid, &(iPatch),
                            previousImageBlur_level1, &(iDxPatch), vertEdge_level1, &(iDyPatch), horzEdge_level1,
                            previousImageBlur_level2, vertEdge_level2, horzEdge_level2, &idx, &winSizeSq, &tr,
                            &accuracy, &k, &max_iter, &(jPatch), currentImageBlur_level1, currentImageBlur_level2, &eX,
                            &eY, &dIt, &mX, &mY, currentFrameFeatures);
    }
    fFreeHandle_rep102(rate);
    iFreeHandle_rep35(imgDims);
    *rtr_val = valid;
}

void calcSobel_dX_out0(int *rows, F2D *imageIn, int *cols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
}

void calcSobel_dX_out0_rep3(int *rows, F2D *imageIn, int *cols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
}

void calcSobel_dX_out0_rep2(int *rows, F2D *imageIn, int *cols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
}

void calcSobel_dX_out0_rep1(int *rows, F2D *imageIn, int *cols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
}

void calcSobel_dX_out0_rep0(int *rows, F2D *imageIn, int *cols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
}

void calcSobel_dX_out1(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2, int *startCol,
                       int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow, int *rows, int *i, int *j,
                       float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 2;
    kernel_1->data[2] = 1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 4;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 0;
    kernel_2->data[2] = -1;
    (*kernelSum_2) = 2;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) +
                          imageIn->data[((*i)) * imageIn->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_2);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) + tempOut->data[(((*i) + (*k))) * tempOut->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_1);
        }
    }
}

void calcSobel_dX_out1_rep3(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 2;
    kernel_1->data[2] = 1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 4;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 0;
    kernel_2->data[2] = -1;
    (*kernelSum_2) = 2;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 1078 min = 1078
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 1918 min = 1918
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) +
                          imageIn->data[((*i)) * imageIn->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_2);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 1078 min = 1078
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 1918 min = 1918
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) + tempOut->data[(((*i) + (*k))) * tempOut->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_1);
        }
    }
}

void calcSobel_dX_out1_rep2(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 2;
    kernel_1->data[2] = 1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 4;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 0;
    kernel_2->data[2] = -1;
    (*kernelSum_2) = 2;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 538 min = 538
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 958 min = 958
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) +
                          imageIn->data[((*i)) * imageIn->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_2);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 538 min = 538
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 958 min = 958
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) + tempOut->data[(((*i) + (*k))) * tempOut->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_1);
        }
    }
}

void calcSobel_dX_out1_rep1(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 2;
    kernel_1->data[2] = 1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 4;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 0;
    kernel_2->data[2] = -1;
    (*kernelSum_2) = 2;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) +
                          imageIn->data[((*i)) * imageIn->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_2);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) + tempOut->data[(((*i) + (*k))) * tempOut->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_1);
        }
    }
}

void calcSobel_dX_out1_rep0(F2D *kernel_1, int *kernelSize, int *kernelSum_1, F2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 2;
    kernel_1->data[2] = 1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 4;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 0;
    kernel_2->data[2] = -1;
    (*kernelSum_2) = 2;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) +
                          imageIn->data[((*i)) * imageIn->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_2);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) + tempOut->data[(((*i) + (*k))) * tempOut->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_1);
        }
    }
}

void calcSobel_dX(F2D *imageIn, F2D **rtr_val)
{
    F2D *tempOut;
    F2D *imageOut;
    int kernelSum_2;
    int kernelSum_1;
    int k;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    float temp;
    F2D *kernel_2;
    F2D *kernel_1;
    int cols;
    int rows;
    calcSobel_dX_out0_rep0(&rows, imageIn, &cols);
    fSetArray_rep60(rows, cols, 0, &imageOut);
    fSetArray_rep64(rows, cols, 0, &tempOut);
    fMallocHandle_rep206(1, 3, &kernel_1);
    fMallocHandle_rep210(1, 3, &kernel_2);
    calcSobel_dX_out1_rep0(kernel_1, &kernelSize, &kernelSum_1, kernel_2, &kernelSum_2, &startCol, &endCol, &cols,
                           &halfKernel, &startRow, &endRow, &rows, &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep140(tempOut);
    fFreeHandle_rep144(kernel_1);
    fFreeHandle_rep148(kernel_2);
    *rtr_val = imageOut;
}

void calcSobel_dX_rep2(F2D *imageIn, F2D **rtr_val)
{
    F2D *tempOut;
    F2D *imageOut;
    int kernelSum_2;
    int kernelSum_1;
    int k;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    float temp;
    F2D *kernel_2;
    F2D *kernel_1;
    int cols;
    int rows;
    calcSobel_dX_out0_rep1(&rows, imageIn, &cols);
    fSetArray_rep61(rows, cols, 0, &imageOut);
    fSetArray_rep65(rows, cols, 0, &tempOut);
    fMallocHandle_rep207(1, 3, &kernel_1);
    fMallocHandle_rep211(1, 3, &kernel_2);
    calcSobel_dX_out1_rep1(kernel_1, &kernelSize, &kernelSum_1, kernel_2, &kernelSum_2, &startCol, &endCol, &cols,
                           &halfKernel, &startRow, &endRow, &rows, &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep141(tempOut);
    fFreeHandle_rep145(kernel_1);
    fFreeHandle_rep149(kernel_2);
    *rtr_val = imageOut;
}

void calcSobel_dX_rep1(F2D *imageIn, F2D **rtr_val)
{
    F2D *tempOut;
    F2D *imageOut;
    int kernelSum_2;
    int kernelSum_1;
    int k;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    float temp;
    F2D *kernel_2;
    F2D *kernel_1;
    int cols;
    int rows;
    calcSobel_dX_out0_rep2(&rows, imageIn, &cols);
    fSetArray_rep62(rows, cols, 0, &imageOut);
    fSetArray_rep66(rows, cols, 0, &tempOut);
    fMallocHandle_rep208(1, 3, &kernel_1);
    fMallocHandle_rep212(1, 3, &kernel_2);
    calcSobel_dX_out1_rep2(kernel_1, &kernelSize, &kernelSum_1, kernel_2, &kernelSum_2, &startCol, &endCol, &cols,
                           &halfKernel, &startRow, &endRow, &rows, &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep142(tempOut);
    fFreeHandle_rep146(kernel_1);
    fFreeHandle_rep150(kernel_2);
    *rtr_val = imageOut;
}

void calcSobel_dX_rep0(F2D *imageIn, F2D **rtr_val)
{
    F2D *tempOut;
    F2D *imageOut;
    int kernelSum_2;
    int kernelSum_1;
    int k;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    float temp;
    F2D *kernel_2;
    F2D *kernel_1;
    int cols;
    int rows;
    calcSobel_dX_out0_rep3(&rows, imageIn, &cols);
    fSetArray_rep63(rows, cols, 0, &imageOut);
    fSetArray_rep67(rows, cols, 0, &tempOut);
    fMallocHandle_rep209(1, 3, &kernel_1);
    fMallocHandle_rep213(1, 3, &kernel_2);
    calcSobel_dX_out1_rep3(kernel_1, &kernelSize, &kernelSum_1, kernel_2, &kernelSum_2, &startCol, &endCol, &cols,
                           &halfKernel, &startRow, &endRow, &rows, &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep143(tempOut);
    fFreeHandle_rep147(kernel_1);
    fFreeHandle_rep151(kernel_2);
    *rtr_val = imageOut;
}

void calcSobel_dY_out0(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
    (*outputRows) = (*rows);
    (*outputCols) = (*cols);
}

void calcSobel_dY_out0_rep3(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
    (*outputRows) = (*rows);
    (*outputCols) = (*cols);
}

void calcSobel_dY_out0_rep2(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
    (*outputRows) = (*rows);
    (*outputCols) = (*cols);
}

void calcSobel_dY_out0_rep1(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
    (*outputRows) = (*rows);
    (*outputCols) = (*cols);
}

void calcSobel_dY_out0_rep0(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols)
{
    int kernelSum;
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
    (*outputRows) = (*rows);
    (*outputCols) = (*cols);
}

void calcSobel_dY_out1(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                       int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow, int *rows,
                       int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 0;
    kernel_1->data[2] = -1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 2.0;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 2;
    kernel_2->data[2] = 1;
    (*kernelSum_2) = 4;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) + imageIn->data[(((*i) + (*k))) * imageIn->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_1);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) +
                          tempOut->data[((*i)) * tempOut->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_2);
        }
    }
}

void calcSobel_dY_out1_rep3(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 0;
    kernel_1->data[2] = -1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 2.0;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 2;
    kernel_2->data[2] = 1;
    (*kernelSum_2) = 4;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 1078 min = 1078
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 1918 min = 1918
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) + imageIn->data[(((*i) + (*k))) * imageIn->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_1);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 1078 min = 1078
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 1918 min = 1918
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) +
                          tempOut->data[((*i)) * tempOut->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_2);
        }
    }
}

void calcSobel_dY_out1_rep2(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 0;
    kernel_1->data[2] = -1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 2.0;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 2;
    kernel_2->data[2] = 1;
    (*kernelSum_2) = 4;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 538 min = 538
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 958 min = 958
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) + imageIn->data[(((*i) + (*k))) * imageIn->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_1);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 538 min = 538
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 958 min = 958
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) +
                          tempOut->data[((*i)) * tempOut->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_2);
        }
    }
}

void calcSobel_dY_out1_rep1(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 0;
    kernel_1->data[2] = -1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 2.0;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 2;
    kernel_2->data[2] = 1;
    (*kernelSum_2) = 4;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) + imageIn->data[(((*i) + (*k))) * imageIn->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_1);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) +
                          tempOut->data[((*i)) * tempOut->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_2);
        }
    }
}

void calcSobel_dY_out1_rep0(I2D *kernel_1, int *kernelSize, float *kernelSum_1, I2D *kernel_2, int *kernelSum_2,
                            int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow,
                            int *rows, int *i, int *j, float *temp, int *k, F2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel_1->data[0] = 1;
    kernel_1->data[1] = 0;
    kernel_1->data[2] = -1;
    (*kernelSize) = 3;
    (*kernelSum_1) = 2.0;
    kernel_2->data[0] = 1;
    kernel_2->data[1] = 2;
    kernel_2->data[2] = 1;
    (*kernelSum_2) = 4;
    (*startCol) = 1;
    (*endCol) = (*cols) - 1;
    (*halfKernel) = 1;
    (*startRow) = 1;
    (*endRow) = (*rows) - 1;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) + imageIn->data[(((*i) + (*k))) * imageIn->width + ((*j))] *
                                        kernel_1->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum_1);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
                (*temp) = (*temp) +
                          tempOut->data[((*i)) * tempOut->width + ((*j) + (*k))] * kernel_2->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (float)(*kernelSum_2);
        }
    }
}

void calcSobel_dY(F2D *imageIn, F2D **rtr_val)
{
    float kernelSum_1;
    F2D *tempOut;
    F2D *imageOut;
    int outputCols;
    int outputRows;
    int kernelSum_2;
    int k;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    float temp;
    I2D *kernel_2;
    I2D *kernel_1;
    int cols;
    int rows;
    calcSobel_dY_out0_rep0(&rows, imageIn, &cols, &outputRows, &outputCols);
    fSetArray_rep68(outputRows, outputCols, 0, &imageOut);
    fSetArray_rep72(outputRows, outputCols, 0, &tempOut);
    iMallocHandle_rep73(1, 3, &kernel_1);
    iMallocHandle_rep77(1, 3, &kernel_2);
    calcSobel_dY_out1_rep0(kernel_1, &kernelSize, &kernelSum_1, kernel_2, &kernelSum_2, &startCol, &endCol, &cols,
                           &halfKernel, &startRow, &endRow, &rows, &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep152(tempOut);
    iFreeHandle_rep46(kernel_1);
    iFreeHandle_rep50(kernel_2);
    *rtr_val = imageOut;
}

void calcSobel_dY_rep2(F2D *imageIn, F2D **rtr_val)
{
    float kernelSum_1;
    F2D *tempOut;
    F2D *imageOut;
    int outputCols;
    int outputRows;
    int kernelSum_2;
    int k;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    float temp;
    I2D *kernel_2;
    I2D *kernel_1;
    int cols;
    int rows;
    calcSobel_dY_out0_rep1(&rows, imageIn, &cols, &outputRows, &outputCols);
    fSetArray_rep69(outputRows, outputCols, 0, &imageOut);
    fSetArray_rep73(outputRows, outputCols, 0, &tempOut);
    iMallocHandle_rep74(1, 3, &kernel_1);
    iMallocHandle_rep78(1, 3, &kernel_2);
    calcSobel_dY_out1_rep1(kernel_1, &kernelSize, &kernelSum_1, kernel_2, &kernelSum_2, &startCol, &endCol, &cols,
                           &halfKernel, &startRow, &endRow, &rows, &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep153(tempOut);
    iFreeHandle_rep47(kernel_1);
    iFreeHandle_rep51(kernel_2);
    *rtr_val = imageOut;
}

void calcSobel_dY_rep1(F2D *imageIn, F2D **rtr_val)
{
    float kernelSum_1;
    F2D *tempOut;
    F2D *imageOut;
    int outputCols;
    int outputRows;
    int kernelSum_2;
    int k;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    float temp;
    I2D *kernel_2;
    I2D *kernel_1;
    int cols;
    int rows;
    calcSobel_dY_out0_rep2(&rows, imageIn, &cols, &outputRows, &outputCols);
    fSetArray_rep70(outputRows, outputCols, 0, &imageOut);
    fSetArray_rep74(outputRows, outputCols, 0, &tempOut);
    iMallocHandle_rep75(1, 3, &kernel_1);
    iMallocHandle_rep79(1, 3, &kernel_2);
    calcSobel_dY_out1_rep2(kernel_1, &kernelSize, &kernelSum_1, kernel_2, &kernelSum_2, &startCol, &endCol, &cols,
                           &halfKernel, &startRow, &endRow, &rows, &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep154(tempOut);
    iFreeHandle_rep48(kernel_1);
    iFreeHandle_rep52(kernel_2);
    *rtr_val = imageOut;
}

void calcSobel_dY_rep0(F2D *imageIn, F2D **rtr_val)
{
    float kernelSum_1;
    F2D *tempOut;
    F2D *imageOut;
    int outputCols;
    int outputRows;
    int kernelSum_2;
    int k;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    float temp;
    I2D *kernel_2;
    I2D *kernel_1;
    int cols;
    int rows;
    calcSobel_dY_out0_rep3(&rows, imageIn, &cols, &outputRows, &outputCols);
    fSetArray_rep71(outputRows, outputCols, 0, &imageOut);
    fSetArray_rep75(outputRows, outputCols, 0, &tempOut);
    iMallocHandle_rep76(1, 3, &kernel_1);
    iMallocHandle_rep80(1, 3, &kernel_2);
    calcSobel_dY_out1_rep3(kernel_1, &kernelSize, &kernelSum_1, kernel_2, &kernelSum_2, &startCol, &endCol, &cols,
                           &halfKernel, &startRow, &endRow, &rows, &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep155(tempOut);
    iFreeHandle_rep49(kernel_1);
    iFreeHandle_rep53(kernel_2);
    *rtr_val = imageOut;
}

void fDeepCopy_out18(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out18_rep8(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out18_rep7(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out18_rep6(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out18_rep5(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out18_rep4(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out18_rep3(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out18_rep2(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out18_rep1(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out18_rep0(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out19(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out19_rep8(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out19_rep7(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out19_rep6(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out19_rep5(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out19_rep4(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1080 min = 1080
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1920 min = 1920
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out19_rep3(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 540 min = 540
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 960 min = 960
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out19_rep2(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2 min = 2
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 5 min = 5
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out19_rep1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2 min = 2
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 5
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out19_rep0(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out18_rep0(&rows, in, &cols);
    fMallocHandle_rep187(rows, cols, &out);
    fDeepCopy_out19_rep0(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep18(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out18_rep1(&rows, in, &cols);
    fMallocHandle_rep188(rows, cols, &out);
    fDeepCopy_out19_rep1(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep17(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out18_rep2(&rows, in, &cols);
    fMallocHandle_rep189(rows, cols, &out);
    fDeepCopy_out19_rep2(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep16(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out18_rep3(&rows, in, &cols);
    fMallocHandle_rep190(rows, cols, &out);
    fDeepCopy_out19_rep3(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep15(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out18_rep4(&rows, in, &cols);
    fMallocHandle_rep191(rows, cols, &out);
    fDeepCopy_out19_rep4(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep14(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out18_rep5(&rows, in, &cols);
    fMallocHandle_rep192(rows, cols, &out);
    fDeepCopy_out19_rep5(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep13(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out18_rep6(&rows, in, &cols);
    fMallocHandle_rep193(rows, cols, &out);
    fDeepCopy_out19_rep6(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep12(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out18_rep7(&rows, in, &cols);
    fMallocHandle_rep194(rows, cols, &out);
    fDeepCopy_out19_rep7(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep11(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out18_rep8(&rows, in, &cols);
    fMallocHandle_rep195(rows, cols, &out);
    fDeepCopy_out19_rep8(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fFreeHandle_out17(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep56(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep55(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep54(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep53(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep52(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep51(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep50(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep49(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep48(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep47(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep46(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep45(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep44(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep43(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep42(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep41(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep40(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep39(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep38(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep37(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep61(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep60(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep59(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep58(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep57(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep36(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep66(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep65(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep64(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep63(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep62(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep35(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep71(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep70(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep69(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep68(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep67(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep34(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep76(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep75(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep74(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep73(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep72(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep33(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep32(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep31(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep30(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep29(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep28(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep27(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep26(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep25(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep24(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep23(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep22(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep21(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep20(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep19(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep18(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep17(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep16(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep15(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep14(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep13(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep12(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep11(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep10(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep9(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep8(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep7(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep6(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep5(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep4(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep3(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep2(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep1(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out17_rep0(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep0(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep139(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep1(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep138(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep2(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep137(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep3(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep136(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep4(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep135(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep5(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep134(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep6(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep133(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep7(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep132(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep8(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep131(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep9(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep130(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep10(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep129(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep11(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep128(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep12(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep127(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep13(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep126(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep14(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep125(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep15(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep124(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep16(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep123(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep17(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep122(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep18(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep121(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep19(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep120(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep20(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep119(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep21(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep118(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep22(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep117(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep23(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep116(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep24(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep115(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep25(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep114(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep26(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep113(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep27(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep112(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep28(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep111(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep29(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep110(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep30(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep109(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep31(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep108(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep32(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep107(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep33(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep106(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep72(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep155(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep73(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep154(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep74(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep153(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep75(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep152(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep76(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep105(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep67(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep151(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep68(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep150(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep69(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep149(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep70(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep148(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep71(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep104(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep62(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep147(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep63(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep146(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep64(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep145(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep65(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep144(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep66(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep103(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep57(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep143(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep58(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep142(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep59(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep141(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep60(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep140(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep61(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep102(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep38(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep101(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep39(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep100(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep40(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep99(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep41(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep98(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep42(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep97(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep43(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep96(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep44(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep95(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep45(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep94(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep46(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep93(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep47(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep92(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep48(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep91(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep49(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep90(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep50(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep89(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep51(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep88(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep52(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep87(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep53(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep86(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep54(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep85(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep55(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep84(F2D *out)
{
    int decomp_0;
    fFreeHandle_out17_rep56(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fMallocHandle_out22(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep35(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep34(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep33(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep32(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep31(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep30(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep29(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep28(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep27(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep62(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep61(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep60(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep59(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep58(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep26(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep67(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep66(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep65(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep64(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep63(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep25(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep45(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep44(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep43(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep42(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep41(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep40(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep39(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep38(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep37(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep36(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep24(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep23(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep22(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep21(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep20(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep19(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep18(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep17(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep16(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep15(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep90(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep89(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep88(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep87(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep86(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep85(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep84(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep83(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep82(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep81(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep80(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep14(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep13(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep12(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep11(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep79(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep78(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep77(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep76(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep75(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep74(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep10(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep73(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep72(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep71(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep70(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep69(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep68(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep9(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep57(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep56(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep55(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep54(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep53(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep52(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep8(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep51(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep50(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep49(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep48(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep47(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep46(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep7(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep6(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep5(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep4(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep3(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep2(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep1(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out22_rep0(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep0(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep186(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8 min = 2004 avg = 849
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep1(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep185(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8 min = 5996 avg = 2530
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep2(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep184(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 6008 min = 6008 avg = 6008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep3(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep183(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32 min = 68 avg = 50
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep4(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep182(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 6008 min = 6008 avg = 6008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep5(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep181(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 7880 min = 7880 avg = 7880
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep6(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep180(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 4520 min = 4520 avg = 4520
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep7(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep179(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep46(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep200(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep47(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep199(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep48(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep198(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep49(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep197(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep50(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep196(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep51(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep178(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep52(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep205(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep53(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep204(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep54(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep203(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep55(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep202(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep56(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep201(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep57(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep177(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep68(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep218(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep69(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep217(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep70(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep216(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep71(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep215(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep72(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep214(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep73(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep176(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep74(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep223(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep75(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep222(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep76(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep221(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep77(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep220(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep78(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep219(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep79(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep175(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 6008 min = 6008 avg = 6008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep12(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep174(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep13(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep173(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 2008 min = 2008 avg = 2008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep14(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep172(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep80(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep233(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep81(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep232(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep82(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep231(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep83(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep230(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep84(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep229(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep85(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep228(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep86(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep227(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep87(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep226(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep88(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep225(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 36872 min = 36872 avg = 36872
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep89(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep224(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep90(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep171(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep16(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep170(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep17(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep169(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 4147208 min = 4147208 avg = 4147208
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep18(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep168(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep19(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep167(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 40 min = 48 avg = 46
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep20(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep166(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 48 min = 48 avg = 48
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep21(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep165(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 48 min = 48 avg = 48
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep22(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep164(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep23(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep163(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep24(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep162(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep36(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep195(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep37(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep194(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 56 avg = 38
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep38(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep193(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 1496 min = 6008 avg = 3730
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep39(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep192(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 504 min = 2008 avg = 1249
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep40(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep191(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep41(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep190(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 2073608 min = 2073608 avg = 2073608
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep42(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep189(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 48 min = 48 avg = 48
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep43(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep188(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 40 min = 48 avg = 46
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep44(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep187(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep45(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep161(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep63(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep213(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep64(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep212(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep65(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep211(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep66(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep210(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep67(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep160(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep58(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep209(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep59(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep208(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep60(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep207(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep61(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep206(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep62(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep159(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32 min = 32 avg = 32
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep28(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep158(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep29(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep157(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep30(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep156(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep31(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep155(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep32(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep154(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep33(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep153(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep34(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep152(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out22_rep35(out, &rows, &cols);
    *rtr_val = out;
}

F2D *fReshape(F2D *in, int rows, int cols)
{
    F2D *out;
    int i, j, k;
    int r, c;
    r = in->height;
    c = in->width;
    fMallocHandle_rep163(rows, cols, &out);
    k = 0;
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            out->data[k++] = in->data[(j)*in->width + (i)];
        }
    }

    return out;
}

int fSelfCheck(F2D *in1, char *path, float tol)
{
    int r1, c1, ret = 1;
    float *buffer;
    FILE *fd;
    int count = 0, i, j;
    char file[256];
    r1 = in1->height;
    c1 = in1->width;
#pragma clava malloc_size max = 32 min = 32 avg = 32
    buffer = (float *)malloc(sizeof(float) * r1 * c1);
    sprintf(file, "%s/expected_C.txt", path);
    fd = fopen(file, "r");
    if (fd == ((void *)0))
    {
        printf("Error: Expected file not opened %s\n", file);

        return -1;
    }
    while (!feof(fd))
    {
        fscanf(fd, "%f", &buffer[count]);
        count++;
    }
    count--;
    if (count != (r1 * c1))
    {
        printf("Checking error: dimensions mismatch. Expected = %d, Observed = %d \n", count, (r1 * c1));

        return -1;
    }
    for (i = 0; i < r1 * c1; i++)
    {
        float inVal = in1->data[i];
        if ((inVal - buffer[i]) > tol || (buffer[i] - inVal) > tol)
        {
            printf("Mismatch %d: (%f, %f)\n", i, buffer[i], inVal);

            return -1;
        }
    }
    fclose(fd);
    printf("Verification\t\t- Successful\n");
    free(buffer);

    return ret;
}

void fSetArray_out22(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep17(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep16(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep15(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep22(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep21(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep20(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 540 min = 540
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 960 min = 960
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep19(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1080 min = 1080
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1920 min = 1920
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep18(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep14(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep27(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep26(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep25(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 540 min = 540
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 960 min = 960
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep24(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1080 min = 1080
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1920 min = 1920
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep23(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep13(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep32(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep31(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep30(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 540 min = 540
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 960 min = 960
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep29(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1080 min = 1080
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1920 min = 1920
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep28(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep12(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep37(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep36(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep35(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 540 min = 540
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 960 min = 960
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep34(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1080 min = 1080
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1920 min = 1920
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep33(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep11(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep10(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep9(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep8(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep47(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep46(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 9216 min = 9216
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep45(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 9216 min = 9216
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep44(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 9216 min = 9216
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep43(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 9216 min = 9216
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep42(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 9216 min = 9216
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep41(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 9216 min = 9216
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep40(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 9216 min = 9216
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep39(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 9216 min = 9216
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep38(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep7(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1080 min = 1080
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1920 min = 1920
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep6(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1080 min = 1080
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1920 min = 1920
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep5(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1080 min = 1080
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 960 min = 960
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep4(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 540 min = 540
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 960 min = 960
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep3(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2 min = 2
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 5
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep2(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2 min = 2
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 5 min = 5
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep1(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out22_rep0(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep164(rows, cols, &out);
    fSetArray_out22_rep0(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep59(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep165(rows, cols, &out);
    fSetArray_out22_rep1(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep58(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep166(rows, cols, &out);
    fSetArray_out22_rep2(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep57(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep167(rows, cols, &out);
    fSetArray_out22_rep3(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep56(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep168(rows, cols, &out);
    fSetArray_out22_rep4(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep55(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep169(rows, cols, &out);
    fSetArray_out22_rep5(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep54(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep170(rows, cols, &out);
    fSetArray_out22_rep6(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep53(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep171(rows, cols, &out);
    fSetArray_out22_rep7(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep52(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep224(rows, cols, &out);
    fSetArray_out22_rep38(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep84(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep225(rows, cols, &out);
    fSetArray_out22_rep39(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep83(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep226(rows, cols, &out);
    fSetArray_out22_rep40(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep82(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep227(rows, cols, &out);
    fSetArray_out22_rep41(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep81(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep228(rows, cols, &out);
    fSetArray_out22_rep42(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep80(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep229(rows, cols, &out);
    fSetArray_out22_rep43(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep79(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep230(rows, cols, &out);
    fSetArray_out22_rep44(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep78(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep231(rows, cols, &out);
    fSetArray_out22_rep45(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep77(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep232(rows, cols, &out);
    fSetArray_out22_rep46(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep76(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep233(rows, cols, &out);
    fSetArray_out22_rep47(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep51(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep173(rows, cols, &out);
    fSetArray_out22_rep9(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep50(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep174(rows, cols, &out);
    fSetArray_out22_rep10(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep49(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep175(rows, cols, &out);
    fSetArray_out22_rep11(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep48(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep219(rows, cols, &out);
    fSetArray_out22_rep33(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep75(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep220(rows, cols, &out);
    fSetArray_out22_rep34(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep74(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep221(rows, cols, &out);
    fSetArray_out22_rep35(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep73(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep222(rows, cols, &out);
    fSetArray_out22_rep36(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep72(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep223(rows, cols, &out);
    fSetArray_out22_rep37(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep47(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep214(rows, cols, &out);
    fSetArray_out22_rep28(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep71(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep215(rows, cols, &out);
    fSetArray_out22_rep29(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep70(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep216(rows, cols, &out);
    fSetArray_out22_rep30(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep69(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep217(rows, cols, &out);
    fSetArray_out22_rep31(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep68(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep218(rows, cols, &out);
    fSetArray_out22_rep32(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep46(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep201(rows, cols, &out);
    fSetArray_out22_rep23(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep67(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep202(rows, cols, &out);
    fSetArray_out22_rep24(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep66(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep203(rows, cols, &out);
    fSetArray_out22_rep25(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep65(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep204(rows, cols, &out);
    fSetArray_out22_rep26(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep64(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep205(rows, cols, &out);
    fSetArray_out22_rep27(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep45(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep196(rows, cols, &out);
    fSetArray_out22_rep18(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep63(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep197(rows, cols, &out);
    fSetArray_out22_rep19(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep62(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep198(rows, cols, &out);
    fSetArray_out22_rep20(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep61(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep199(rows, cols, &out);
    fSetArray_out22_rep21(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep60(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep200(rows, cols, &out);
    fSetArray_out22_rep22(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep44(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep180(rows, cols, &out);
    fSetArray_out22_rep16(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep43(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep181(rows, cols, &out);
    fSetArray_out22_rep17(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

F2D *fTranspose(F2D *a)
{
    F2D *out;
    int m, p, p1, n, i, j, k;
    float temp;
    m = a->height;
    n = a->width;
    fMallocHandle_rep182(n, m, &out);
    k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            out->data[k++] = a->data[(j)*a->width + (i)];
        }
    }

    return out;
}

void fWriteMatrix(F2D *input, char *inpath)
{
    FILE *fp;
    char im[100];
    int rows, cols, i, j;
    sprintf(im, "%s/expected_C.txt", inpath);
    fp = fopen(im, "w");
    rows = input->height;
    cols = input->width;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            fprintf(fp, "%f\t", input->data[(i)*input->width + (j)]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}

F2D *ffVertcat(F2D *matrix1, F2D *matrix2)
{
    F2D *outMatrix;
    int row1, col1, row2, col2, i, j, k;
    row1 = matrix1->height;
    col1 = matrix1->width;
    row2 = matrix2->height;
    col2 = matrix2->width;
    fMallocHandle_rep183(row1 + row2, col1, &outMatrix);
    for (i = 0; i < col1; i++)
    {
        for (j = 0; j < row1; j++)
        {
            outMatrix->data[(j)*outMatrix->width + (i)] = matrix1->data[(j)*matrix1->width + (i)];
        }
        for (k = 0; k < row2; k++)
        {
            outMatrix->data[((k + row1)) * outMatrix->width + (i)] = matrix2->data[(k)*matrix2->width + (i)];
        }
    }

    return outMatrix;
}

F2D *fillFeatures(F2D *lambda, int N_FEA, int win)
{
    int i, j, k, l;
    int rows = lambda->height;
    int cols = lambda->width;
    F2D *features;
    fSetArray_rep49(3, N_FEA, 0, &features);
    for (i = 0; i < N_FEA; i++)
    {
        features->data[(0) * features->width + (i)] = -1.0;
        features->data[(1) * features->width + (i)] = -1.0;
        features->data[(2) * features->width + (i)] = 0.0;
    }
    for (i = win; i < rows - win; i++)
    {
        for (j = win; j < cols - win; j++)
        {
            float currLambdaVal = lambda->data[(i)*lambda->width + (j)];
            if (features->data[(2) * features->width + (N_FEA - 1)] > currLambdaVal)
            {
                continue;
            }
            for (k = 0; k < N_FEA; k++)
            {
                if (features->data[(2) * features->width + (k)] < currLambdaVal)
                {
                    for (l = N_FEA - 1; l > k; l--)
                    {
                        features->data[(0) * features->width + (l)] = features->data[(0) * features->width + (l - 1)];
                        features->data[(1) * features->width + (l)] = features->data[(1) * features->width + (l - 1)];
                        features->data[(2) * features->width + (l)] = features->data[(2) * features->width + (l - 1)];
                    }
                    features->data[(0) * features->width + (k)] = j * 1.0;
                    features->data[(1) * features->width + (k)] = i * 1.0;
                    features->data[(2) * features->width + (k)] = currLambdaVal;
                    break;
                }
            }
        }
    }

    return features;
}

F2D *getANMS(F2D *points, float r)
{
    float MAX_LIMIT = 100000;
    F2D *suppressR;
    float C_ROBUST = 1.0;
    F2D *srtdPnts;
    int n;
    I2D *srtdVIdx, *supId;
    float t, t1, r_sq;
    F2D *tempF, *srtdV, *interestPnts;
    int i, j, validCount, cnt, end, k;
    int iter, rows, cols;
    F2D *temp;
    int supIdPtr = 0;
    r_sq = r * r;
    n = points->height;
    iMallocHandle_rep66(points->height, 1, &srtdVIdx);
    for (i = 0; i < srtdVIdx->height; i++)
    {
        srtdVIdx->data[i] = i;
    }
    fMallocHandle_rep184(srtdVIdx->height, points->width, &srtdPnts);
    for (i = 0; i < srtdVIdx->height; i++)
    {
        for (j = 0; j < points->width; j++)
        {
            srtdPnts->data[(i)*srtdPnts->width + (j)] = points->data[(srtdVIdx->data[i]) * points->width + (j)];
        }
    }
    fSetArray_rep50(1, 3, 0, &temp);
    fSetArray_rep51(n, 1, MAX_LIMIT, &suppressR);
    validCount = n;
    iter = 0;
    k = 0;
    iMallocHandle_rep67(validCount, 1, &supId);
    for (i = 0; i < (suppressR->height * suppressR->width); i++)
    {
        if (suppressR->data[i] > r_sq)
        {
            supId->data[k++] = i;
        }
    }
    while (validCount > 0)
    {
        F2D *tempp, *temps;
        temp->data[0] = srtdPnts->data[(supId->data[0]) * srtdPnts->width + (0)];
        temp->data[1] = srtdPnts->data[(supId->data[0]) * srtdPnts->width + (1)];
        temp->data[2] = srtdPnts->data[(supId->data[0]) * srtdPnts->width + (2)];
        if (iter == 0)
        {
            fDeepCopy_rep11(temp, &interestPnts);
        }
        else
        {
            fDeepCopy_rep12(interestPnts, &tempp);
            fFreeHandle_rep107(interestPnts);
            interestPnts = ffVertcat(tempp, temp);
            fFreeHandle_rep108(tempp);
        }
        iter++;
        fDeepCopy_rep13(srtdPnts, &tempp);
        fDeepCopy_rep14(suppressR, &temps);
        fFreeHandle_rep109(srtdPnts);
        fFreeHandle_rep110(suppressR);
        fMallocHandle_rep185(supId->height - 1, 3, &srtdPnts);
        fMallocHandle_rep186(supId->height - 1, 1, &suppressR);
        k = 0;
        for (i = 1; i < (supId->height); i++)
        {
            srtdPnts->data[((i - 1)) * srtdPnts->width + (0)] = tempp->data[(supId->data[i]) * tempp->width + (0)];
            srtdPnts->data[((i - 1)) * srtdPnts->width + (1)] = tempp->data[(supId->data[i]) * tempp->width + (1)];
            srtdPnts->data[((i - 1)) * srtdPnts->width + (2)] = tempp->data[(supId->data[i]) * tempp->width + (2)];
            suppressR->data[((i - 1)) * suppressR->width + (0)] = temps->data[(supId->data[i]) * temps->width + (0)];
        }
        fFreeHandle_rep111(tempp);
        fFreeHandle_rep112(temps);
        rows = interestPnts->height - 1;
        cols = interestPnts->width;
        for (i = 0; i < srtdPnts->height; i++)
        {
            t = 0;
            t1 = 0;
            if ((C_ROBUST * interestPnts->data[(rows)*interestPnts->width + (2)]) >=
                srtdPnts->data[(i)*srtdPnts->width + (2)])
            {
                t = srtdPnts->data[(i)*srtdPnts->width + (0)] - interestPnts->data[(rows)*interestPnts->width + (0)];
                t1 = srtdPnts->data[(i)*srtdPnts->width + (1)] - interestPnts->data[(rows)*interestPnts->width + (1)];
                t = t * t + t1 * t1;
                t1 = 0;
            }
            if ((C_ROBUST * interestPnts->data[(rows)*interestPnts->width + (2)]) <
                srtdPnts->data[(i)*srtdPnts->width + (2)])
            {
                t1 = 1 * MAX_LIMIT;
            }
            if (suppressR->data[i] > (t + t1))
            {
                suppressR->data[i] = t + t1;
            }
        }
        validCount = 0;
        for (i = 0; i < suppressR->height; i++)
        {
            if (suppressR->data[i] > r_sq)
            {
                validCount++;
            }
        }
        k = 0;
        iFreeHandle_rep38(supId);
        iMallocHandle_rep68(validCount, 1, &supId);
        for (i = 0; i < suppressR->height * suppressR->width; i++)
        {
            if (suppressR->data[i] > r_sq)
            {
                supId->data[k++] = i;
            }
        }
    }
    iFreeHandle_rep39(supId);
    iFreeHandle_rep40(srtdVIdx);
    fFreeHandle_rep113(srtdPnts);
    fFreeHandle_rep114(temp);
    fFreeHandle_rep115(suppressR);

    return interestPnts;
}

void getInterpolatePatch_out0(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out0_rep8(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out0_rep7(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out0_rep6(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out0_rep5(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out0_rep4(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out0_rep3(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out0_rep2(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out0_rep1(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out0_rep0(float *centerX, float *centerY, float *a11, float *a12, float *a21, float *a22)
{
    float a;
    float b;
    int k;
    float _d0_0;
    float _d0_1;
    float _d1_0;
    float _d1_1;
    _d0_0 = floor((*centerX));
    _d0_1 = (*centerX) - _d0_0;
    a = _d0_1;
    _d1_0 = floor((*centerY));
    _d1_1 = (*centerY) - _d1_0;
    b = _d1_1;
    (*a11) = (1 - a) * (1 - b);
    (*a12) = a * (1 - b);
    (*a21) = (1 - a) * b;
    (*a22) = a * b;
}

void getInterpolatePatch_out1(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                              float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                              float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch_out1_rep8(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
#pragma HLS loop_tripcount max = 96 min = 96
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
#pragma HLS loop_tripcount max = 96 min = 96
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch_out1_rep7(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
#pragma HLS loop_tripcount max = 96 min = 96
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
#pragma HLS loop_tripcount max = 96 min = 96
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch_out1_rep6(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
#pragma HLS loop_tripcount max = 96 min = 96
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
#pragma HLS loop_tripcount max = 96 min = 96
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch_out1_rep5(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
#pragma HLS loop_tripcount max = 96 min = 96
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
#pragma HLS loop_tripcount max = 96 min = 96
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch_out1_rep4(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
#pragma HLS loop_tripcount max = 96 min = 96
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
#pragma HLS loop_tripcount max = 96 min = 96
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch_out1_rep3(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
#pragma HLS loop_tripcount max = 96 min = 96
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
#pragma HLS loop_tripcount max = 96 min = 96
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch_out1_rep2(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
#pragma HLS loop_tripcount max = 96 min = 96
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
#pragma HLS loop_tripcount max = 96 min = 96
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch_out1_rep1(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
#pragma HLS loop_tripcount max = 96 min = 96
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
#pragma HLS loop_tripcount max = 96 min = 96
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch_out1_rep0(int *i, int *winSize, float *centerY, int *srcIdxx, int *dstIdxx, int *j, int *cols,
                                   float *centerX, int *srcIdx, int *dstIdx, F2D *dst, F2D *src, float *a11, float *a12,
                                   float *a21, float *a22)
{
    for ((*i) = -(*winSize); (*i) < (*winSize); (*i)++)
    {
        float _d2_0;
        float _d2_1;
        _d2_0 = floor((*centerY));
        _d2_1 = _d2_0 + (*i);
        (*srcIdxx) = _d2_1;
        (*dstIdxx) = (*i) + (*winSize);
        for ((*j) = -(*winSize); (*j) < ((*winSize)); (*j)++)
        {
            int _d3_0;
            float _d3_1;
            float _d3_2;
            float _d3_3;
            _d3_0 = (*srcIdxx) * (*cols);
            _d3_1 = floor((*centerX));
            _d3_2 = _d3_0 + _d3_1;
            _d3_3 = _d3_2 + (*j);
            (*srcIdx) = _d3_3;
            (*dstIdx) = (*dstIdxx) * 2 * (*winSize) + (*j) + (*winSize);
            dst->data[(*dstIdx)] = src->data[(*srcIdx)] * (*a11) + src->data[(*srcIdx) + 1] * (*a12) +
                                   src->data[(*srcIdx) + (*cols)] * (*a21) +
                                   src->data[(*srcIdx) + 1 + (*cols)] * (*a22);
        }
    }
}

void getInterpolatePatch(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val)
{
    int dstIdxx;
    int srcIdxx;
    int dstIdx;
    int srcIdx;
    int j;
    int i;
    float a22;
    float a21;
    float a12;
    float a11;
    F2D *dst;
    getInterpolatePatch_out0_rep0(&centerX, &centerY, &a11, &a12, &a21, &a22);
    fSetArray_rep76(1, 2 * winSize * 2 * winSize, 0, &dst);
    getInterpolatePatch_out1_rep0(&i, &winSize, &centerY, &srcIdxx, &dstIdxx, &j, &cols, &centerX, &srcIdx, &dstIdx,
                                  dst, src, &a11, &a12, &a21, &a22);
    *rtr_val = dst;
}

void getInterpolatePatch_rep7(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val)
{
    int dstIdxx;
    int srcIdxx;
    int dstIdx;
    int srcIdx;
    int j;
    int i;
    float a22;
    float a21;
    float a12;
    float a11;
    F2D *dst;
    getInterpolatePatch_out0_rep1(&centerX, &centerY, &a11, &a12, &a21, &a22);
    fSetArray_rep77(1, 2 * winSize * 2 * winSize, 0, &dst);
    getInterpolatePatch_out1_rep1(&i, &winSize, &centerY, &srcIdxx, &dstIdxx, &j, &cols, &centerX, &srcIdx, &dstIdx,
                                  dst, src, &a11, &a12, &a21, &a22);
    *rtr_val = dst;
}

void getInterpolatePatch_rep6(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val)
{
    int dstIdxx;
    int srcIdxx;
    int dstIdx;
    int srcIdx;
    int j;
    int i;
    float a22;
    float a21;
    float a12;
    float a11;
    F2D *dst;
    getInterpolatePatch_out0_rep2(&centerX, &centerY, &a11, &a12, &a21, &a22);
    fSetArray_rep78(1, 2 * winSize * 2 * winSize, 0, &dst);
    getInterpolatePatch_out1_rep2(&i, &winSize, &centerY, &srcIdxx, &dstIdxx, &j, &cols, &centerX, &srcIdx, &dstIdx,
                                  dst, src, &a11, &a12, &a21, &a22);
    *rtr_val = dst;
}

void getInterpolatePatch_rep5(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val)
{
    int dstIdxx;
    int srcIdxx;
    int dstIdx;
    int srcIdx;
    int j;
    int i;
    float a22;
    float a21;
    float a12;
    float a11;
    F2D *dst;
    getInterpolatePatch_out0_rep3(&centerX, &centerY, &a11, &a12, &a21, &a22);
    fSetArray_rep79(1, 2 * winSize * 2 * winSize, 0, &dst);
    getInterpolatePatch_out1_rep3(&i, &winSize, &centerY, &srcIdxx, &dstIdxx, &j, &cols, &centerX, &srcIdx, &dstIdx,
                                  dst, src, &a11, &a12, &a21, &a22);
    *rtr_val = dst;
}

void getInterpolatePatch_rep4(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val)
{
    int dstIdxx;
    int srcIdxx;
    int dstIdx;
    int srcIdx;
    int j;
    int i;
    float a22;
    float a21;
    float a12;
    float a11;
    F2D *dst;
    getInterpolatePatch_out0_rep4(&centerX, &centerY, &a11, &a12, &a21, &a22);
    fSetArray_rep80(1, 2 * winSize * 2 * winSize, 0, &dst);
    getInterpolatePatch_out1_rep4(&i, &winSize, &centerY, &srcIdxx, &dstIdxx, &j, &cols, &centerX, &srcIdx, &dstIdx,
                                  dst, src, &a11, &a12, &a21, &a22);
    *rtr_val = dst;
}

void getInterpolatePatch_rep3(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val)
{
    int dstIdxx;
    int srcIdxx;
    int dstIdx;
    int srcIdx;
    int j;
    int i;
    float a22;
    float a21;
    float a12;
    float a11;
    F2D *dst;
    getInterpolatePatch_out0_rep5(&centerX, &centerY, &a11, &a12, &a21, &a22);
    fSetArray_rep81(1, 2 * winSize * 2 * winSize, 0, &dst);
    getInterpolatePatch_out1_rep5(&i, &winSize, &centerY, &srcIdxx, &dstIdxx, &j, &cols, &centerX, &srcIdx, &dstIdx,
                                  dst, src, &a11, &a12, &a21, &a22);
    *rtr_val = dst;
}

void getInterpolatePatch_rep2(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val)
{
    int dstIdxx;
    int srcIdxx;
    int dstIdx;
    int srcIdx;
    int j;
    int i;
    float a22;
    float a21;
    float a12;
    float a11;
    F2D *dst;
    getInterpolatePatch_out0_rep6(&centerX, &centerY, &a11, &a12, &a21, &a22);
    fSetArray_rep82(1, 2 * winSize * 2 * winSize, 0, &dst);
    getInterpolatePatch_out1_rep6(&i, &winSize, &centerY, &srcIdxx, &dstIdxx, &j, &cols, &centerX, &srcIdx, &dstIdx,
                                  dst, src, &a11, &a12, &a21, &a22);
    *rtr_val = dst;
}

void getInterpolatePatch_rep1(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val)
{
    int dstIdxx;
    int srcIdxx;
    int dstIdx;
    int srcIdx;
    int j;
    int i;
    float a22;
    float a21;
    float a12;
    float a11;
    F2D *dst;
    getInterpolatePatch_out0_rep7(&centerX, &centerY, &a11, &a12, &a21, &a22);
    fSetArray_rep83(1, 2 * winSize * 2 * winSize, 0, &dst);
    getInterpolatePatch_out1_rep7(&i, &winSize, &centerY, &srcIdxx, &dstIdxx, &j, &cols, &centerX, &srcIdx, &dstIdx,
                                  dst, src, &a11, &a12, &a21, &a22);
    *rtr_val = dst;
}

void getInterpolatePatch_rep0(F2D *src, int cols, float centerX, float centerY, int winSize, F2D **rtr_val)
{
    int dstIdxx;
    int srcIdxx;
    int dstIdx;
    int srcIdx;
    int j;
    int i;
    float a22;
    float a21;
    float a12;
    float a11;
    F2D *dst;
    getInterpolatePatch_out0_rep8(&centerX, &centerY, &a11, &a12, &a21, &a22);
    fSetArray_rep84(1, 2 * winSize * 2 * winSize, 0, &dst);
    getInterpolatePatch_out1_rep8(&i, &winSize, &centerY, &srcIdxx, &dstIdxx, &j, &cols, &centerX, &srcIdx, &dstIdx,
                                  dst, src, &a11, &a12, &a21, &a22);
    *rtr_val = dst;
}

void iFreeHandle_out17(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep11(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep10(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep16(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep15(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep14(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep13(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep12(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep9(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep21(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep20(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep19(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep18(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep17(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep8(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep7(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep6(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep5(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep4(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep3(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep2(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep1(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out17_rep0(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep0(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep45(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep1(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep44(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep2(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep43(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep3(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep42(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep4(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep41(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep5(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep40(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep6(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep39(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep7(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep38(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep8(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep37(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep17(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep53(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep18(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep52(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep19(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep51(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep20(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep50(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep21(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep36(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep12(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep49(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep13(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep48(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep14(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep47(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep15(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep46(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep16(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep35(I2D *out)
{
    int decomp_0;
    iFreeHandle_out17_rep11(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iMallocHandle_out29(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep10(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep9(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep15(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep14(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep13(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep12(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep11(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep8(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep20(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep19(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep18(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep17(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep16(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep7(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep6(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep5(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep4(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep3(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep2(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep1(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out29_rep0(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep0(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep72(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep1(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep71(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 28 min = 28 avg = 28
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep2(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep70(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 28 min = 28 avg = 28
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep3(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep69(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 28 min = 28 avg = 28
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep4(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep68(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 8 min = 1128 avg = 453
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep5(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep67(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 2008 min = 2008 avg = 2008
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep6(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep66(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 2008 min = 2008 avg = 2008
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep7(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep65(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep16(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep80(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep17(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep79(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep18(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep78(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep19(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep77(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep20(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep64(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep11(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep76(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep12(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep75(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep13(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep74(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep14(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep73(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep15(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep63(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 24 min = 24 avg = 24
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out29_rep10(out, &rows, &cols);
    *rtr_val = out;
}

void iSetArray_out16(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 5 min = 5
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep69(rows, cols, &out);
    iSetArray_out16(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void imageBlur_out6(int *rows, I2D *imageIn, int *cols)
{
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
}

void imageBlur_out7(I2D *kernel, int *kernelSize, int *kernelSum, int *startCol, int *endCol, int *cols,
                    int *halfKernel, int *startRow, int *endRow, int *rows, int *i, int *j, float *temp, int *k,
                    I2D *imageIn, F2D *tempOut, F2D *imageOut)
{
    kernel->data[0] = 1;
    kernel->data[1] = 4;
    kernel->data[2] = 6;
    kernel->data[3] = 4;
    kernel->data[4] = 1;
    (*kernelSize) = 5;
    (*kernelSum) = 16;
    (*startCol) = 2;
    (*endCol) = (*cols) - 2;
    (*halfKernel) = 2;
    (*startRow) = 2;
    (*endRow) = (*rows) - 2;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 1076 min = 1076
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 1916 min = 1916
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 5 min = 5
                (*temp) = (*temp) +
                          imageIn->data[((*i)) * imageIn->width + ((*j) + (*k))] * kernel->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 1076 min = 1076
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 1916 min = 1916
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 5 min = 5
                (*temp) = (*temp) +
                          tempOut->data[(((*i) + (*k))) * tempOut->width + ((*j))] * kernel->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*i)) * imageOut->width + ((*j))] = (*temp) / (*kernelSum);
        }
    }
}

void imageBlur(I2D *imageIn, F2D **rtr_val)
{
    int kernelSum;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    int k;
    I2D *kernel;
    float temp;
    F2D *tempOut;
    F2D *imageOut;
    int cols;
    int rows;
    imageBlur_out6(&rows, imageIn, &cols);
    fSetArray_rep53(rows, cols, 0, &imageOut);
    fSetArray_rep54(rows, cols, 0, &tempOut);
    iMallocHandle_rep70(1, 5, &kernel);
    imageBlur_out7(kernel, &kernelSize, &kernelSum, &startCol, &endCol, &cols, &halfKernel, &startRow, &endRow, &rows,
                   &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep116(tempOut);
    iFreeHandle_rep41(kernel);
    *rtr_val = imageOut;
}

void imageResize_out0(int *rows, F2D *imageIn, int *cols, int *outputRows, int *outputCols)
{
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
    (*outputRows) = floor(((*rows) + 1) / 2);
    (*outputCols) = floor(((*cols) + 1) / 2);
}

void imageResize_out1(I2D *kernel, int *kernelSize, int *kernelSum, int *startCol, int *endCol, int *cols,
                      int *halfKernel, int *startRow, int *endRow, int *rows, int *i, int *m, int *j, float *tempVal,
                      int *k, F2D *imageIn, F2D *temp, int *outputCols, F2D *imageOut)
{
    kernel->data[0] = 1;
    kernel->data[1] = 4;
    kernel->data[2] = 6;
    kernel->data[3] = 4;
    kernel->data[4] = 1;
    (*kernelSize) = 5;
    (*kernelSum) = 16;
    (*startCol) = 2;
    (*endCol) = (*cols) - 2;
    (*halfKernel) = 2;
    (*startRow) = 2;
    (*endRow) = (*rows) - 2;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 1076 min = 1076
        (*m) = 0;
        for ((*j) = (*startCol); (*j) < (*endCol); (*j) = (*j) + 2)
        {
#pragma HLS loop_tripcount max = 958 min = 958
            (*tempVal) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 5 min = 5
                (*tempVal) = (*tempVal) + imageIn->data[((*i)) * imageIn->width + ((*j) + (*k))] *
                                              kernel->data[(*k) + (*halfKernel)];
            }
            temp->data[((*i)) * temp->width + ((*m))] = (*tempVal) / (*kernelSum);
            (*m) = (*m) + 1;
        }
    }
    (*m) = 0;
    for ((*i) = (*startRow); (*i) < (*endRow); (*i) = (*i) + 2)
    {
#pragma HLS loop_tripcount max = 538 min = 538
        for ((*j) = 0; (*j) < (*outputCols); (*j)++)
        {
#pragma HLS loop_tripcount max = 960 min = 960
            (*tempVal) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 5 min = 5
                (*tempVal) = (*tempVal) +
                             temp->data[(((*i) + (*k))) * temp->width + ((*j))] * kernel->data[(*k) + (*halfKernel)];
            }
            imageOut->data[((*m)) * imageOut->width + ((*j))] = ((*tempVal) / (*kernelSum));
        }
        (*m) = (*m) + 1;
    }
}

void imageResize(F2D *imageIn, F2D **rtr_val)
{
    F2D *temp;
    int outputCols;
    int outputRows;
    int kernelSum;
    int j;
    int i;
    int endRow;
    int startRow;
    int halfKernel;
    int endCol;
    int startCol;
    int kernelSize;
    float tempVal;
    I2D *kernel;
    F2D *imageOut;
    int cols;
    int rows;
    int k;
    int m;
    imageResize_out0(&rows, imageIn, &cols, &outputRows, &outputCols);
    fSetArray_rep55(rows, outputCols, 0, &temp);
    fSetArray_rep56(outputRows, outputCols, 0, &imageOut);
    iMallocHandle_rep71(1, 5, &kernel);
    imageResize_out1(kernel, &kernelSize, &kernelSum, &startCol, &endCol, &cols, &halfKernel, &startRow, &endRow, &rows,
                     &i, &m, &j, &tempVal, &k, imageIn, temp, &outputCols, imageOut);
    fFreeHandle_rep117(temp);
    iFreeHandle_rep42(kernel);
    *rtr_val = imageOut;
}

static void magic_timing_begin(unsigned int *cycles)
{
    struct timespec ts;
    clock_gettime(4, &ts);
    cycles[0] = ts.tv_nsec;
    cycles[1] = ts.tv_sec;
}

unsigned int *photonEndTiming()
{
    unsigned int *array;
#pragma clava malloc_size max = 8 min = 8 avg = 8
    array = (unsigned int *)malloc(sizeof(unsigned int) * 2);
    magic_timing_begin(array);

    return array;
}

void photonPrintTiming(unsigned int *elapsed)
{
    if (elapsed[1] == 0)
    {
        printf("Cycles elapsed\t\t- %u\n\n", elapsed[0]);
    }
    else
    {
        printf("Cycles elapsed\t\t- %u%u\n\n", elapsed[1], elapsed[0]);
    }
}

unsigned int *photonReportTiming(unsigned int *startCycles, unsigned int *endCycles)
{
    unsigned int *elapsed;
#pragma clava malloc_size max = 8 min = 8 avg = 8
    elapsed = (unsigned int *)malloc(sizeof(unsigned int) * 2);
    unsigned long long start = (((unsigned long long)0x0) | startCycles[0]) << 32 | startCycles[1];
    unsigned long long end = (((unsigned long long)0x0) | endCycles[0]) << 32 | endCycles[1];
    unsigned long long diff = end - start;
    elapsed[0] = (unsigned int)(diff >> 32);
    elapsed[1] = (unsigned int)(diff & 0xffffffff);

    return elapsed;
}

unsigned int *photonStartTiming()
{
    unsigned int *array;
#pragma clava malloc_size max = 8 min = 8 avg = 8
    array = (unsigned int *)malloc(sizeof(unsigned int) * 2);
    magic_timing_begin(array);

    return array;
}

I2D *readImage(char const *pathName)
{
    char signature[2];
    int file_size;
    short reserved1;
    short reserved2;
    int loc_of_bitmap;
    int size_of_infoheader;
    int width;
    int height;
    short number_of_planes;
    short bits_per_pixel;
    int compression_method;
    int bytes_of_bitmap;
    int hori_reso;
    int vert_reso;
    int no_of_colors;
    int no_of_imp_colors;
    int nI, nJ;
    int pixSize;
    unsigned char tempb;
    unsigned char tempg;
    unsigned char tempr;
    unsigned char tempjunk[12];
    int ta;
    I2D *srcImage;
    FILE *input;
    input = fopen(pathName, "rb");
    if (input == ((void *)0))
    {
        perror("File pointer error");

        return nullptr;
    }
    else
    {
      fread(&signature, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((signature))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&file_size, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((file_size))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&reserved1, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((reserved1))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&reserved2, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((reserved2))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&loc_of_bitmap, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((loc_of_bitmap))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&size_of_infoheader, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((size_of_infoheader))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&width, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((width))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input); // Reads the width of the image
      fread(&height, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((height))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input); // Reads the height of the image
      fread(&number_of_planes, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((number_of_planes))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&bits_per_pixel, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((bits_per_pixel))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&compression_method, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((compression_method))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&bytes_of_bitmap, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((bytes_of_bitmap))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&hori_reso, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((hori_reso))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&vert_reso, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vert_reso))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&no_of_colors, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((no_of_colors))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&no_of_imp_colors, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((no_of_imp_colors))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      iMallocHandle_rep72(height, width, &srcImage);
      if (srcImage->height <= 0 || srcImage->width <= 0 || signature[0] != 'B' || signature[1] != 'M' ||
          (bits_per_pixel != 24 && bits_per_pixel != 8))
      {
          printf("ERROR in BMP read: The input file is not in standard BMP format");

          return nullptr;
      }
      fseek(input, loc_of_bitmap, 0);
      if (bits_per_pixel == 8)
      {
          for (nI = (height - 1); nI >= 0; nI--)
          {
              for (nJ = 0; nJ < width; nJ++)
              {
                  fread(&tempg, sizeof(unsigned char), 1, input);
                  srcImage->data[(nI)*srcImage->width + (nJ)] = (int)tempg;
              }
          }
      }
      else
      {
          if (bits_per_pixel == 24)
          {
              for (nI = (height - 1); nI >= 0; nI--)
              {
                  for (nJ = 0; nJ < width; nJ++)
                  {
                      fread(&tempb, sizeof(unsigned char), 1, input);
                      fread(&tempg, sizeof(unsigned char), 1, input);
                      fread(&tempr, sizeof(unsigned char), 1, input);
                      ta = (3 * tempr + 6 * tempg + tempb) / 10;
                      ta = tempg;
                      srcImage->data[(nI)*srcImage->width + (nJ)] = (int)ta;
                  }
              }
          }
          else
          {

              return nullptr;
          }
      }
      fclose(input);

      return srcImage;
    }
}

void trackFeaturesPyramidalLK_out0(F2D **blurred_level1, F2D **blurredImage)
{
    (*blurred_level1) = (*blurredImage);
}

void trackFeaturesPyramidalLK_out1(int *decomp_0, I2D **status)
{
    (*decomp_0) = (*status)->width > 0;
}

void trackFeaturesPyramidalLK_out2_out0(int *k, int *numFind, int *i, I2D **status)
{
    (*k) = 0;
    (*numFind) = 0;
    for ((*i) = 0; (*i) < (*status)->width; (*i)++)
    {
#pragma HLS loop_tripcount max = 5 min = 5
        int decomp_1;
        decomp_1 = (*status)->data[(*i)] == 1;
        if (decomp_1)
        {
            (*numFind)++;
        }
    }
}

void trackFeaturesPyramidalLK_out2_out1(int *i, I2D **status, F2D **newpoints, int *k, F2D **np_temp)
{
    for ((*i) = 0; (*i) < (*status)->width; (*i)++)
    {
#pragma HLS loop_tripcount max = 5 min = 5
        int decomp_2;
        decomp_2 = (*status)->data[(*i)] == 1;
        if (decomp_2)
        {
            (*newpoints)->data[(0) * (*newpoints)->width + ((*k))] = (*np_temp)->data[(0) * (*np_temp)->width + ((*i))];
            (*newpoints)->data[(1) * (*newpoints)->width + ((*k)++)] =
                (*np_temp)->data[(1) * (*np_temp)->width + ((*i))];
        }
    }
}

void trackFeaturesPyramidalLK_out2(int *k, int *numFind, int *i, I2D **status, F2D **newpoints, F2D **np_temp)
{
    trackFeaturesPyramidalLK_out2_out0(k, numFind, i, status);
    fFreeHandle_rep118((*newpoints));
    fSetArray_rep57(2, (*numFind), 0, newpoints);
    trackFeaturesPyramidalLK_out2_out1(i, status, newpoints, k, np_temp);
}

void trackFeaturesPyramidalLK_sw(F2D **blurredImage, I2D *Ic, F2D **previousFrameBlurred_level1, F2D **blurred_level1,
                                 F2D **previousFrameBlurred_level2, F2D **blurred_level2, F2D **verticalEdge_level1,
                                 F2D **horizontalEdge_level1, F2D **verticalEdge_level2, F2D **horizontalEdge_level2,
                                 F2D **newpoints, F2D **features, I2D **status, int *WINSZ, float *accuracy,
                                 int *LK_ITER, F2D **np_temp, int *k, int *numFind, int *i)
{
    int decomp_0;
    imageBlur(Ic, blurredImage);
    fDeepCopy_rep15((*blurred_level1), previousFrameBlurred_level1);
    fDeepCopy_rep16((*blurred_level2), previousFrameBlurred_level2);
    fFreeHandle_rep119((*blurred_level1));
    fFreeHandle_rep120((*blurred_level2));
    trackFeaturesPyramidalLK_out0(blurred_level1, blurredImage);
    imageResize((*blurredImage), blurred_level2);
    calcSobel_dX_rep0((*blurred_level1), verticalEdge_level1);
    calcSobel_dY_rep0((*blurred_level1), horizontalEdge_level1);
    calcSobel_dX_rep1((*blurred_level2), verticalEdge_level2);
    calcSobel_dY_rep1((*blurred_level2), horizontalEdge_level2);
    fSetArray_rep58(2, (*features)->width, 0, newpoints);
    calcPyrLKTrack((*previousFrameBlurred_level1), (*previousFrameBlurred_level2), (*verticalEdge_level1),
                   (*verticalEdge_level2), (*horizontalEdge_level1), (*horizontalEdge_level2), (*blurred_level1),
                   (*blurred_level2), (*features), (*features)->width, (*WINSZ), (*accuracy), (*LK_ITER), (*newpoints),
                   status);
    fFreeHandle_rep121((*verticalEdge_level1));
    fFreeHandle_rep122((*verticalEdge_level2));
    fFreeHandle_rep123((*horizontalEdge_level1));
    fFreeHandle_rep124((*horizontalEdge_level2));
    fFreeHandle_rep125((*previousFrameBlurred_level1));
    fFreeHandle_rep126((*previousFrameBlurred_level2));
    fDeepCopy_rep17((*newpoints), np_temp);
    trackFeaturesPyramidalLK_out1(&decomp_0, status);
    if (decomp_0)
    {
        trackFeaturesPyramidalLK_out2(k, numFind, i, status, newpoints, np_temp);
    }
    iFreeHandle_rep43((*status));
    iFreeHandle_rep44(Ic);
    fFreeHandle_rep127((*np_temp));
    fFreeHandle_rep128((*features));
    fDeepCopy_rep18((*newpoints), features);
    fFreeHandle_rep129((*newpoints));
}

void imagePreprocessing(F2D **blurredImage, I2D *Ic, F2D **blurred_level1, F2D **blurred_level2,
                        F2D **verticalEdgeImage, F2D **horizontalEdgeImage, F2D **lambda, int *WINSZ, int *endR,
                        int *endC, F2D **lambdaTemp, int *N_FEA, F2D **features, F2D **interestPnt,
                        float *SUPPRESION_RADIUS, int *i, int *j)
{
    imageBlur(Ic, blurredImage);
    (*blurred_level1) = (*blurredImage);
    imageResize((*blurredImage), blurred_level2);
    calcSobel_dX_rep2((*blurredImage), verticalEdgeImage);
    calcSobel_dY_rep2((*blurredImage), horizontalEdgeImage);
    (*lambda) = calcGoodFeature((*verticalEdgeImage), (*horizontalEdgeImage), (*verticalEdgeImage)->width,
                                (*verticalEdgeImage)->height, (*WINSZ));
    (*endR) = (*lambda)->height;
    (*endC) = (*lambda)->width;
    (*lambdaTemp) = fReshape((*lambda), (*endR) * (*endC), 1);
    fFreeHandle_rep130((*lambdaTemp));
    (*lambdaTemp) = fillFeatures((*lambda), (*N_FEA), (*WINSZ));
    (*features) = fTranspose((*lambdaTemp));
    (*interestPnt) = getANMS((*features), (*SUPPRESION_RADIUS));
    fFreeHandle_rep131((*features));
    fSetArray_rep59(2, (*interestPnt)->height, 0, features);
    for ((*i) = 0; (*i) < 2; (*i)++)
    {
        for ((*j) = 0; (*j) < (*interestPnt)->height; (*j)++)
        {
            (*features)->data[((*i)) * (*features)->width + ((*j))] =
                (*interestPnt)->data[((*j)) * (*interestPnt)->width + ((*i))];
        }
    }
}

void trackFeaturesPyramidalLK_hw_bridge(F2D **blurredImage, I2D *Ic, F2D **previousFrameBlurred_level1,
                                        F2D **blurred_level1, F2D **previousFrameBlurred_level2, F2D **blurred_level2,
                                        F2D **verticalEdge_level1, F2D **horizontalEdge_level1,
                                        F2D **verticalEdge_level2, F2D **horizontalEdge_level2, F2D **newpoints,
                                        F2D **features, I2D **status, int *WINSZ, float *accuracy, int *LK_ITER,
                                        F2D **np_temp, int *k, int *numFind, int *i);
int main(int argc, char *argv[])
{
    int i, j, k, N_FEA, WINSZ, LK_ITER, rows, cols;
    int endR, endC;
    F2D *blurredImage, *previousFrameBlurred_level1, *previousFrameBlurred_level2, *blurred_level1, *blurred_level2;
    F2D *verticalEdgeImage, *horizontalEdgeImage, *verticalEdge_level1, *verticalEdge_level2, *horizontalEdge_level1,
        *horizontalEdge_level2, *interestPnt;
    F2D *lambda, *lambdaTemp, *features;
    I2D *Ic, *status;
    float SUPPRESION_RADIUS;
    F2D *newpoints;
    int numFind, m, n;
    F2D *np_temp;
//  // unsigned int *start, *end, *elapsed, *elt;
    char im1[100];
    int counter = 2;
    float accuracy = 0.03;
    int count;
    if (argc < 2)
    {
        printf("We need input image path\n");

        return -1;
    }
    sprintf(im1, "%s/1.bmp", argv[1]);
    N_FEA = 1600;
    WINSZ = 4;
    SUPPRESION_RADIUS = 10.0;
    LK_ITER = 20;
    WINSZ = 48;
    N_FEA = 500;
    LK_ITER = 20;
    counter = 4;
    Ic = readImage(im1);
    rows = Ic->height;
    cols = Ic->width;
    printf("Input size\t\t- (%dx%d)\n", rows, cols);
//  // start = photonStartTiming();
    imagePreprocessing(&(blurredImage), Ic, &(blurred_level1), &(blurred_level2), &(verticalEdgeImage),
                       &(horizontalEdgeImage), &(lambda), &WINSZ, &endR, &endC, &(lambdaTemp), &N_FEA, &(features),
                       &(interestPnt), &SUPPRESION_RADIUS, &i, &j);
// end = photonEndTiming();
// elapsed = photonReportTiming(start, end);
    fFreeHandle_rep132(verticalEdgeImage);
    fFreeHandle_rep133(horizontalEdgeImage);
    fFreeHandle_rep134(interestPnt);
    fFreeHandle_rep135(lambda);
    fFreeHandle_rep136(lambdaTemp);
    iFreeHandle_rep45(Ic);
// free(start);
// free(end);
    for (count = 1; count <= counter; count++)
    {
        sprintf(im1, "%s/%d.bmp", argv[1], count);
        Ic = readImage(im1);
        rows = Ic->height;
        cols = Ic->width;
//  // start = photonStartTiming();
        // Selector between SW and HW bridge calls based on OFFLOAD getenv variable
        if (getenv("OFFLOAD") != ((void *)0))
        {
            trackFeaturesPyramidalLK_hw_bridge(&(blurredImage), Ic, &(previousFrameBlurred_level1), &(blurred_level1),
                                               &(previousFrameBlurred_level2), &(blurred_level2),
                                               &(verticalEdge_level1), &(horizontalEdge_level1), &(verticalEdge_level2),
                                               &(horizontalEdge_level2), &(newpoints), &(features), &(status), &WINSZ,
                                               &accuracy, &LK_ITER, &(np_temp), &k, &numFind, &i);
        }
        else
        {
            trackFeaturesPyramidalLK_sw(&(blurredImage), Ic, &(previousFrameBlurred_level1), &(blurred_level1),
                                        &(previousFrameBlurred_level2), &(blurred_level2), &(verticalEdge_level1),
                                        &(horizontalEdge_level1), &(verticalEdge_level2), &(horizontalEdge_level2),
                                        &(newpoints), &(features), &(status), &WINSZ, &accuracy, &LK_ITER, &(np_temp),
                                        &k, &numFind, &i);
        }
//  // elapsed[0] += elt[0];
//  // elapsed[1] += elt[1];
// free(start);
//  // free(elt);
// free(end);
    }
    int _scope29_ret = 0;
    float _scope29_tol = 2.0;
    //fWriteMatrix(features, argv[1]);
    _scope29_ret = fSelfCheck(features, argv[1], _scope29_tol);
    if (_scope29_ret == -1)
    {
        printf("Error in Tracking Map\n");
    }
//  // photonPrintTiming(elapsed);
    fFreeHandle_rep137(blurred_level1);
    fFreeHandle_rep138(blurred_level2);
    fFreeHandle_rep139(features);
// free(elapsed);

    return 0;
}
