#include "stitch.h"
#include "sdvbs_common.h"
#include "timingUtils.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void fDeepCopy_out14_rep7(int *rows, F2D *in, int *cols);
void fDeepCopy_out14_rep6(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out14_rep6(int *rows, F2D *in, int *cols);
void fDeepCopy_out14_rep5(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out14_rep5(int *rows, F2D *in, int *cols);
void fDeepCopy_out14_rep4(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out14_rep4(int *rows, F2D *in, int *cols);
void fDeepCopy_out14_rep3(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out14_rep3(int *rows, F2D *in, int *cols);
void fDeepCopy_out14_rep2(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out14_rep2(int *rows, F2D *in, int *cols);
void fDeepCopy_out14_rep1(int *rows, F2D *in, int *cols);
void fDeepCopy_out14_rep0(int *rows, F2D *in, int *cols);
void fDeepCopy_out15_rep7(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out15_rep6(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out15_rep6(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out15_rep5(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out15_rep5(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out15_rep4(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out15_rep4(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out15_rep3(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out15_rep3(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out15_rep2(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out15_rep2(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out15_rep1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out15_rep0(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_rep10(F2D *in, F2D **rtr_val);
void fDeepCopy_rep9(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep9(F2D *in, F2D **rtr_val);
void fDeepCopy_rep8(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep8(F2D *in, F2D **rtr_val);
void fDeepCopy_rep7(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep7(F2D *in, F2D **rtr_val);
void fDeepCopy_rep6(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep6(F2D *in, F2D **rtr_val);
void fDeepCopy_rep5(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep5(F2D *in, F2D **rtr_val);
void fDeepCopy_rep4(F2D *in, F2D **rtr_val);
void fDivide_out0_rep3(int *rows, F2D *a, int *cols);
void fDivide_out0_rep2(int *rows, F2D *a, int *cols);
void fDivide_out0_rep1(int *rows, F2D *a, int *cols);
void fDivide_out0_rep0(int *rows, F2D *a, int *cols);
void fDivide_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b);
void fDivide_out1_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b);
void fDivide_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b);
void fDivide_out1_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b);
void fDivide_rep2(F2D *a, float b, F2D **rtr_val);
void fDivide_rep1(F2D *a, float b, F2D **rtr_val);
void fDivide_rep0(F2D *a, float b, F2D **rtr_val);
void fFreeHandle_out14_rep51(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep50(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep49(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep48(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep47(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep46(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep45(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep44(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep43(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep42(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep41(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep41(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep40(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep40(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep39(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep39(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep38(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep38(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep37(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep37(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep36(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep36(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep35(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep35(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep34(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep34(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep33(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep33(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep32(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep32(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep31(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep31(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep30(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out14_rep30(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep29(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep28(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep27(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep26(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep25(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep24(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep23(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep22(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep21(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep20(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep19(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep18(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep17(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep16(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep15(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep14(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep13(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep12(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep11(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep10(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep9(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep8(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep7(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep6(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep5(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep4(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep3(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep2(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep1(int *decomp_0, F2D *out);
void fFreeHandle_out14_rep0(int *decomp_0, F2D *out);
void fFreeHandle_rep83(F2D *out);
void fFreeHandle_rep82(F2D *out);
void fFreeHandle_rep81(F2D *out);
void fFreeHandle_rep80(F2D *out);
void fFreeHandle_rep79(F2D *out);
void fFreeHandle_rep78(F2D *out);
void fFreeHandle_rep77(F2D *out);
void fFreeHandle_rep76(F2D *out);
void fFreeHandle_rep75(F2D *out);
void fFreeHandle_rep74(F2D *out);
void fFreeHandle_rep73(F2D *out);
void fFreeHandle_rep72(F2D *out);
void fFreeHandle_rep71(F2D *out);
void fFreeHandle_rep70(F2D *out);
void fFreeHandle_rep69(F2D *out);
void fFreeHandle_rep68(F2D *out);
void fFreeHandle_rep67(F2D *out);
void fFreeHandle_rep66(F2D *out);
void fFreeHandle_rep65(F2D *out);
void fFreeHandle_rep64(F2D *out);
void fFreeHandle_rep63(F2D *out);
void fFreeHandle_rep62(F2D *out);
void fFreeHandle_rep61(F2D *out);
void fFreeHandle_rep60(F2D *out);
void fFreeHandle_rep59(F2D *out);
void fFreeHandle_rep58(F2D *out);
void fFreeHandle_rep57(F2D *out);
void fFreeHandle_rep56(F2D *out);
void fFreeHandle_rep55(F2D *out);
void fFreeHandle_rep54(F2D *out);
void cluster_fFreeHandle_rep54(F2D *out);
void fFreeHandle_rep53(F2D *out);
void cluster_fFreeHandle_rep53(F2D *out);
void fFreeHandle_rep52(F2D *out);
void cluster_fFreeHandle_rep52(F2D *out);
void fFreeHandle_rep51(F2D *out);
void cluster_fFreeHandle_rep51(F2D *out);
void fFreeHandle_rep50(F2D *out);
void cluster_fFreeHandle_rep50(F2D *out);
void fFreeHandle_rep49(F2D *out);
void cluster_fFreeHandle_rep49(F2D *out);
void fFreeHandle_rep48(F2D *out);
void cluster_fFreeHandle_rep48(F2D *out);
void fFreeHandle_rep47(F2D *out);
void cluster_fFreeHandle_rep47(F2D *out);
void fFreeHandle_rep46(F2D *out);
void cluster_fFreeHandle_rep46(F2D *out);
void fFreeHandle_rep45(F2D *out);
void cluster_fFreeHandle_rep45(F2D *out);
void fFreeHandle_rep44(F2D *out);
void cluster_fFreeHandle_rep44(F2D *out);
void fFreeHandle_rep43(F2D *out);
void cluster_fFreeHandle_rep43(F2D *out);
void fFreeHandle_rep42(F2D *out);
void fFreeHandle_rep41(F2D *out);
void fFreeHandle_rep40(F2D *out);
void fFreeHandle_rep39(F2D *out);
void fFreeHandle_rep38(F2D *out);
void fFreeHandle_rep37(F2D *out);
void fFreeHandle_rep36(F2D *out);
void fFreeHandle_rep35(F2D *out);
void fFreeHandle_rep34(F2D *out);
void fFreeHandle_rep33(F2D *out);
void fMallocHandle_out18_rep30(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep29(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep28(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep27(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep66(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep65(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep64(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep64(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep63(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep63(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep62(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep62(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep61(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep61(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep60(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep60(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep59(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep58(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep26(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep35(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep34(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep33(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep32(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep31(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep25(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep24(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep23(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep22(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep21(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep20(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep19(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep18(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep18(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep17(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep17(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep16(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep50(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep49(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep48(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep47(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep46(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep45(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep44(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep43(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep42(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep41(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep40(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep15(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep14(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep13(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep12(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep57(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep56(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep55(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep54(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep53(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep52(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep51(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep11(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep10(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep10(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep9(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep39(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep38(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep37(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep36(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep8(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep8(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep7(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep7(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep6(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep6(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep5(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out18_rep5(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep4(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep3(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep2(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep1(F2D *out, int *rows, int *cols);
void fMallocHandle_out18_rep0(F2D *out, int *rows, int *cols);
void fMallocHandle_rep120(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep119(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep118(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep117(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep116(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep116(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep115(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep115(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep114(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep114(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep113(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep113(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep112(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep127(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep126(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep125(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep111(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep111(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep110(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep109(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep143(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep142(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep141(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep140(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep139(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep138(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep108(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep107(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep106(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep105(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep137(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep136(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep135(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep134(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep133(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep132(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep131(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep130(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep129(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep128(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep104(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep104(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep103(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep103(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep102(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep101(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep100(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep99(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep98(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep97(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep96(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep95(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep124(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep123(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep122(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep121(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep94(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep151(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep150(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep150(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep149(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep149(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep148(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep148(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep147(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep147(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep146(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep146(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep145(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep144(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep93(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep92(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep91(int rows, int cols, F2D **rtr_val);
void fSetArray_out18_rep10(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep9(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep8(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep7(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep20(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep19(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep18(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep17(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep16(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep15(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep14(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep13(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep12(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep11(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep6(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out18_rep6(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep5(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out18_rep5(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep4(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep3(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep2(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep1(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out18_rep0(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_rep33(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep32(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep31(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep30(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep29(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep29(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep28(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep28(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep27(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep42(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep41(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep40(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep39(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep38(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep37(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep36(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep35(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep34(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep26(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep25(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep24(int rows, int cols, float val, F2D **rtr_val);
void fTimes_out0_rep5(int *rows, F2D *a, int *cols);
void fTimes_out0_rep4(int *rows, F2D *a, int *cols);
void fTimes_out0_rep3(int *rows, F2D *a, int *cols);
void fTimes_out0_rep2(int *rows, F2D *a, int *cols);
void fTimes_out0_rep1(int *rows, F2D *a, int *cols);
void fTimes_out0_rep0(int *rows, F2D *a, int *cols);
void fTimes_out1_rep5(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fTimes_out1_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fTimes_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fTimes_out1_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fTimes_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fTimes_out1_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fTimes_rep4(F2D *a, F2D *b, F2D **rtr_val);
void fTimes_rep3(F2D *a, F2D *b, F2D **rtr_val);
void fTimes_rep2(F2D *a, F2D *b, F2D **rtr_val);
void fTimes_rep1(F2D *a, F2D *b, F2D **rtr_val);
void fTimes_rep0(F2D *a, F2D *b, F2D **rtr_val);
void ffConv2_out0_rep8(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj);
void ffConv2_out0_rep7(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj);
void ffConv2_out0_rep6(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj);
void ffConv2_out0_rep5(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj);
void ffConv2_out0_rep4(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj);
void ffConv2_out0_rep3(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj);
void ffConv2_out0_rep2(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj);
void ffConv2_out0_rep1(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj);
void ffConv2_out0_rep0(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj);
void ffConv2_out1_rep8(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b);
void ffConv2_out1_rep7(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b);
void ffConv2_out1_rep6(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b);
void ffConv2_out1_rep5(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b);
void ffConv2_out1_rep4(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b);
void ffConv2_out1_rep3(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b);
void ffConv2_out1_rep2(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b);
void ffConv2_out1_rep1(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b);
void ffConv2_out1_rep0(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b);
void ffConv2_rep7(F2D *a, F2D *b, F2D **rtr_val);
void ffConv2_rep6(F2D *a, F2D *b, F2D **rtr_val);
void ffConv2_rep5(F2D *a, F2D *b, F2D **rtr_val);
void ffConv2_rep4(F2D *a, F2D *b, F2D **rtr_val);
void ffConv2_rep3(F2D *a, F2D *b, F2D **rtr_val);
void ffConv2_rep2(F2D *a, F2D *b, F2D **rtr_val);
void ffConv2_rep1(F2D *a, F2D *b, F2D **rtr_val);
void ffConv2_rep0(F2D *a, F2D *b, F2D **rtr_val);
void fiDeepCopy_out8_rep2(int *rows, I2D *in, int *cols);
void fiDeepCopy_out8_rep1(int *rows, I2D *in, int *cols);
void fiDeepCopy_out8_rep0(int *rows, I2D *in, int *cols);
void fiDeepCopy_out9_rep2(int *i, int *rows, int *j, int *cols, F2D *out, I2D *in);
void fiDeepCopy_out9_rep1(int *i, int *rows, int *j, int *cols, F2D *out, I2D *in);
void fiDeepCopy_out9_rep0(int *i, int *rows, int *j, int *cols, F2D *out, I2D *in);
void fiDeepCopy_rep1(I2D *in, F2D **rtr_val);
void fiDeepCopy_rep0(I2D *in, F2D **rtr_val);
void iFreeHandle_out14_rep9(int *decomp_0, I2D *out);
void iFreeHandle_out14_rep8(int *decomp_0, I2D *out);
void iFreeHandle_out14_rep7(int *decomp_0, I2D *out);
void iFreeHandle_out14_rep6(int *decomp_0, I2D *out);
void iFreeHandle_out14_rep5(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out14_rep5(int *decomp_0, I2D *out);
void iFreeHandle_out14_rep4(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out14_rep4(int *decomp_0, I2D *out);
void iFreeHandle_out14_rep3(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out14_rep3(int *decomp_0, I2D *out);
void iFreeHandle_out14_rep2(int *decomp_0, I2D *out);
void iFreeHandle_out14_rep1(int *decomp_0, I2D *out);
void iFreeHandle_out14_rep0(int *decomp_0, I2D *out);
void iFreeHandle_rep34(I2D *out);
void iFreeHandle_rep33(I2D *out);
void iFreeHandle_rep32(I2D *out);
void cluster_iFreeHandle_rep32(I2D *out);
void iFreeHandle_rep31(I2D *out);
void cluster_iFreeHandle_rep31(I2D *out);
void iFreeHandle_rep30(I2D *out);
void cluster_iFreeHandle_rep30(I2D *out);
void iFreeHandle_rep29(I2D *out);
void iFreeHandle_rep28(I2D *out);
void iFreeHandle_rep27(I2D *out);
void iFreeHandle_rep26(I2D *out);
void iMallocHandle_out25_rep7(I2D *out, int *rows, int *cols);
void iMallocHandle_out25_rep6(I2D *out, int *rows, int *cols);
void iMallocHandle_out25_rep5(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out25_rep5(I2D *out, int *rows, int *cols);
void iMallocHandle_out25_rep4(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out25_rep4(I2D *out, int *rows, int *cols);
void iMallocHandle_out25_rep3(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out25_rep3(I2D *out, int *rows, int *cols);
void iMallocHandle_out25_rep2(I2D *out, int *rows, int *cols);
void iMallocHandle_out25_rep1(I2D *out, int *rows, int *cols);
void iMallocHandle_out25_rep0(I2D *out, int *rows, int *cols);
void iMallocHandle_rep62(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep61(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep60(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep60(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep59(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep59(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep58(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep58(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep57(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep56(int rows, int cols, I2D **rtr_val);
I2D *readImage(char const *pathName);
void iMallocHandle(int rows, int cols, I2D **rtr_val);
unsigned int *photonStartTiming();
static void magic_timing_begin(unsigned int *cycles);
void harris(I2D *im, F2D **rtr_val);
void fSetArray(int rows, int cols, float val, F2D **rtr_val);
void fMallocHandle(int rows, int cols, F2D **rtr_val);
void fDivide(F2D *a, float b, F2D **rtr_val);
void fiDeepCopy(I2D *in, F2D **rtr_val);
void ffConv2(F2D *a, F2D *b, F2D **rtr_val);
void fFreeHandle(F2D *out);
void fTimes(F2D *a, F2D *b, F2D **rtr_val);
void fMinus(F2D *a, F2D *b, F2D **rtr_val);
void fPlus(F2D *a, F2D *b, F2D **rtr_val);
void ffDivide(F2D *a, F2D *b, F2D **rtr_val);
void iSetArray(int rows, int cols, int val, I2D **rtr_val);
void maxWindow(F2D *im, I2D *window, F2D **rtr_val);
void fDeepCopy(F2D *in, F2D **rtr_val);
void supress(F2D *im, F2D *im1, F2D **rtr_val);
void fFind3(F2D *in, F2D **rtr_val);
void iFreeHandle(I2D *out);
void getANMS_sw(F2D *points, int r, F2D **rtr_val);
void getANMS_hw_bridge(F2D *points, int r, F2D **rtr_val);
void fSortIndices(F2D *input, int dim, I2D **rtr_val);
void cluster_fSortIndices(F2D *input, int dim, I2D **rtr_val);
void ffVertcat(F2D *matrix1, F2D *matrix2, F2D **rtr_val);
void cluster_ffVertcat(F2D *matrix1, F2D *matrix2, F2D **rtr_val);
void extractFeatures(I2D *I, F2D *x, F2D *y, F2D **rtr_val);
unsigned int *photonEndTiming();
unsigned int *photonReportTiming(unsigned int *startCycles, unsigned int *endCycles);
void fWriteMatrix(F2D *input, char *inpath);
int fSelfCheck(F2D *in1, char *path, float tol);
void photonPrintTiming(unsigned int *elapsed);
int main(int argc, char *argv[]);
void extractFeatures_out1(F2D *g1)
{
    g1->data[0] = 1;
    g1->data[1] = 4;
    g1->data[2] = 6;
    g1->data[3] = 4;
    g1->data[4] = 1;
    g1->data[5] = 4;
    g1->data[6] = 16;
    g1->data[7] = 24;
    g1->data[8] = 16;
    g1->data[9] = 4;
    g1->data[10] = 6;
    g1->data[11] = 24;
    g1->data[12] = 36;
    g1->data[13] = 24;
    g1->data[14] = 6;
    g1->data[15] = 4;
    g1->data[16] = 16;
    g1->data[17] = 24;
    g1->data[18] = 16;
    g1->data[19] = 4;
    g1->data[20] = 1;
    g1->data[21] = 4;
    g1->data[22] = 6;
    g1->data[23] = 4;
    g1->data[24] = 1;
}

void extractFeatures_out2(int *n, F2D *x)
{
    (*n) = x->height;
}

void extractFeatures_out3(int *_scope23_i, F2D *Iconv, int *_scope23_j)
{
    (*_scope23_i) = (Iconv->height / 5);
    (*_scope23_j) = (Iconv->width / 5);
}

void extractFeatures_out4(int *i, int *m, F2D *Isub, int *j, int *k, F2D *Iconv)
{
    for ((*i) = 0, (*m) = 0; (*m) < Isub->height; (*i) = (*i) + 5, (*m)++)
    {
#pragma HLS loop_tripcount max = 384
        for ((*j) = 0, (*k) = 0; (*k) < Isub->width; (*j) = (*j) + 5, (*k)++)
        {
#pragma HLS loop_tripcount max = 216
            Isub->data[((*m)) * Isub->width + ((*k))] = Iconv->data[((*i)) * Iconv->width + ((*j))];
        }
    }
}

void extractFeatures_out5(int *nr, F2D *Isub, int *nc)
{
    (*nr) = Isub->height;
    (*nc) = Isub->width;
}

void extractFeatures_out6(int *i, F2D *x, I2D *Xsub, int *nc, I2D *Ysub, F2D *y, int *nr, int *decomp_2)
{
    int _scope24_maxX;
    int _scope24_maxY;
    int decomp_0;
    int decomp_1;
    for ((*i) = 0; (*i) < (x->height * x->width); (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        Xsub->data[(*i)] = ((x->data[(*i)] / 5) < (*nc) - 4) ? (x->data[(*i)] / 5) : (*nc) - 4;
        Ysub->data[(*i)] = ((y->data[(*i)] / 5) < (*nr) - 4) ? (y->data[(*i)] / 5) : (*nr) - 4;
    }
    _scope24_maxX = Xsub->height > Xsub->width ? Xsub->height : Xsub->width;
    _scope24_maxY = Ysub->height > Ysub->width ? Ysub->height : Ysub->width;
    decomp_0 = _scope24_maxX < 6;
    decomp_1 = _scope24_maxY < 10;
    (*decomp_2) = decomp_0 || decomp_1;
}

void extractFeatures_out7_out0(int *i, F2D *x, F2D **vecF, I2D *Xsub, I2D *Ysub)
{
    for ((*i) = 0; (*i) < (x->height); (*i)++)
    {
        (*vecF)->data[((*i)) * (*vecF)->width + (0)] = Xsub->data[(*i)] * 1.0;
        (*vecF)->data[((*i)) * (*vecF)->width + (1)] = Ysub->data[(*i)] * 1.0;
    }
}

void extractFeatures_out7(F2D **vecF, int *n, int *i, F2D *x, I2D *Xsub, I2D *Ysub, F2D *Isub, F2D **__rtr_val_18, int *__rtr_flag_18)
{
    fFreeHandle_rep33((*vecF));
    fSetArray_rep24((*n), 2, 0, vecF);
    extractFeatures_out7_out0(i, x, vecF, Xsub, Ysub);
    fFreeHandle_rep34(Isub);
    iFreeHandle_rep26(Xsub);
    iFreeHandle_rep27(Ysub);
    (*__rtr_val_18) = (*vecF);
    (*__rtr_flag_18) = 1;
}

void extractFeatures_out8(int *_scope25_newSize, I2D *I)
{
    int decomp_3;
    int decomp_4;
    int decomp_5;
    (*_scope25_newSize) = 4;
    decomp_3 = I->height > 32;
    decomp_4 = I->width > 32;
    decomp_5 = decomp_3 && decomp_4;
    if (decomp_5)
    {
        (*_scope25_newSize) = 64;
    }
}

void extractFeatures_out9(int *i, int *n, I2D *Ysub, I2D *Xsub, F2D *Isub, int *m, float *temp, int *k, int *j, F2D *vecF, float *mean, float *std)
{
    for ((*i) = 0; (*i) < (*n); (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        int decomp_6;
        int decomp_7;
        int decomp_8;
        int decomp_9;
        decomp_6 = Ysub->data[(*i)] < 3;
        if (decomp_6)
        {
            Ysub->data[(*i)] = 3;
        }
        decomp_7 = Xsub->data[(*i)] < 3;
        if (decomp_7)
        {
            Xsub->data[(*i)] = 3;
        }
        decomp_8 = Ysub->data[(*i)] >= (Isub->height - 4);
        if (decomp_8)
        {
            Ysub->data[(*i)] = Isub->height - 5;
        }
        decomp_9 = Xsub->data[(*i)] >= (Isub->width - 4);
        if (decomp_9)
        {
            Xsub->data[(*i)] = Isub->width - 5;
        }
        (*m) = 0;
        (*temp) = 0;
        for ((*k) = Xsub->data[(*i)] - 3; (*k) <= (Xsub->data[(*i)] + 4); (*k)++)
        {
#pragma HLS loop_tripcount max = 8
            for ((*j) = Ysub->data[(*i)] - 3; (*j) <= (Ysub->data[(*i)] + 4); (*j)++)
            {
#pragma HLS loop_tripcount max = 8
                vecF->data[((*i)) * vecF->width + ((*m))] = Isub->data[((*j)) * Isub->width + ((*k))];
                (*temp) = (*temp) + vecF->data[((*i)) * vecF->width + ((*m))];
                (*m)++;
            }
        }
        (*mean) = (*temp) / 64.0;
        (*std) = 0;
        for ((*j) = 0; (*j) < 64; (*j)++)
        {
#pragma HLS loop_tripcount max = 64
            vecF->data[((*i)) * vecF->width + ((*j))] = vecF->data[((*i)) * vecF->width + ((*j))] - (*mean);
            (*std) = (*std) + vecF->data[((*i)) * vecF->width + ((*j))] * vecF->data[((*i)) * vecF->width + ((*j))];
        }
        (*std) = (*std) / 64;
        (*std) = sqrt((*std));
        for ((*j) = 0; (*j) < 64; (*j)++)
        {
#pragma HLS loop_tripcount max = 64
            vecF->data[((*i)) * vecF->width + ((*j))] = vecF->data[((*i)) * vecF->width + ((*j))] / (*std);
        }
    }
}

void extractFeatures(I2D *I, F2D *x, F2D *y, F2D **rtr_val)
{
    int n;
    int i;
    int j;
    int k;
    F2D *I1;
    F2D *Iconv;
    F2D *Isub;
    int nr;
    int nc;
    F2D *w;
    F2D *wt;
    F2D *vecF;
    I2D *Xsub;
    I2D *Ysub;
    float temp;
    float mean;
    float std;
    int m;
    F2D *g1;
    F2D *g;
    int _scope23_j;
    int _scope23_i;
    int decomp_2;
    int _scope25_newSize;
    fSetArray_rep25(5, 5, 0, &g1);
    extractFeatures_out1(g1);
    fDivide_rep0(g1, 256, &g);
    extractFeatures_out2(&n, x);
    fMallocHandle_rep91(n, 64, &vecF);
    fiDeepCopy_rep0(I, &I1);
    ffConv2_rep0(I1, g, &Iconv);
    fFreeHandle_rep35(I1);
    ffConv2_rep1(Iconv, g, &I1);
    fFreeHandle_rep36(Iconv);
    fDeepCopy_rep4(I1, &Iconv);
    extractFeatures_out3(&_scope23_i, Iconv, &_scope23_j);
    fMallocHandle_rep92(_scope23_i, _scope23_j, &Isub);
    extractFeatures_out4(&i, &m, Isub, &j, &k, Iconv);
    fFreeHandle_rep37(Iconv);
    fFreeHandle_rep38(g1);
    fFreeHandle_rep39(g);
    fFreeHandle_rep40(I1);
    extractFeatures_out5(&nr, Isub, &nc);
    iMallocHandle_rep56(x->height, x->width, &Xsub);
    iMallocHandle_rep57(y->height, y->width, &Ysub);
    extractFeatures_out6(&i, x, Xsub, &nc, Ysub, y, &nr, &decomp_2);
    if (decomp_2)
    {
        F2D *__rtr_val_18;
        int __rtr_flag_18 = 0;
        extractFeatures_out7(&(vecF), &n, &i, x, Xsub, Ysub, Isub, &__rtr_val_18, &__rtr_flag_18);
        if (__rtr_flag_18)
        {
            *rtr_val = __rtr_val_18;

            return;
        }
    }
    extractFeatures_out8(&_scope25_newSize, I);
    fFreeHandle_rep41(vecF);
    fMallocHandle_rep93(n, _scope25_newSize, &vecF);
    extractFeatures_out9(&i, &n, Ysub, Xsub, Isub, &m, &temp, &k, &j, vecF, &mean, &std);
    iFreeHandle_rep28(Xsub);
    fFreeHandle_rep42(Isub);
    iFreeHandle_rep29(Ysub);
    *rtr_val = vecF;
}

void fDeepCopy_out14(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out14_rep7(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out14_rep6(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out14_rep5(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out14_rep4(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out14_rep3(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out14_rep2(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out14_rep1(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out14_rep0(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out15(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out15_rep7(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out15_rep6(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out15_rep5(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out15_rep4(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount min = 1 max = 55610
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out15_rep3(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount min = 1 max = 55611
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out15_rep2(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount min = 1 max = 55611
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out15_rep1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out15_rep0(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
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
    fDeepCopy_out14_rep0(&rows, in, &cols);
    fMallocHandle_rep144(rows, cols, &out);
    fDeepCopy_out15_rep0(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep10(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out14_rep1(&rows, in, &cols);
    fMallocHandle_rep145(rows, cols, &out);
    fDeepCopy_out15_rep1(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep9(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out14_rep2(&rows, in, &cols);
    fMallocHandle_rep146(rows, cols, &out);
    fDeepCopy_out15_rep2(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep8(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out14_rep3(&rows, in, &cols);
    fMallocHandle_rep147(rows, cols, &out);
    fDeepCopy_out15_rep3(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep7(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out14_rep4(&rows, in, &cols);
    fMallocHandle_rep148(rows, cols, &out);
    fDeepCopy_out15_rep4(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep6(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out14_rep5(&rows, in, &cols);
    fMallocHandle_rep149(rows, cols, &out);
    fDeepCopy_out15_rep5(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep5(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out14_rep6(&rows, in, &cols);
    fMallocHandle_rep150(rows, cols, &out);
    fDeepCopy_out15_rep6(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep4(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out14_rep7(&rows, in, &cols);
    fMallocHandle_rep151(rows, cols, &out);
    fDeepCopy_out15_rep7(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDivide_out0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fDivide_out0_rep3(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fDivide_out0_rep2(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fDivide_out0_rep1(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fDivide_out0_rep0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fDivide_out1(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] / (*b);
    }
}

void fDivide_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 25
        c->data[(*i)] = a->data[(*i)] / (*b);
    }
}

void fDivide_out1_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 25
        c->data[(*i)] = a->data[(*i)] / (*b);
    }
}

void fDivide_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 9
        c->data[(*i)] = a->data[(*i)] / (*b);
    }
}

void fDivide_out1_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] / (*b);
    }
}

void fDivide(F2D *a, float b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fDivide_out0_rep0(&rows, a, &cols);
    fMallocHandle_rep121(rows, cols, &c);
    fDivide_out1_rep0(&i, &rows, &cols, c, a, &b);
    *rtr_val = c;
}

void fDivide_rep2(F2D *a, float b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fDivide_out0_rep1(&rows, a, &cols);
    fMallocHandle_rep122(rows, cols, &c);
    fDivide_out1_rep1(&i, &rows, &cols, c, a, &b);
    *rtr_val = c;
}

void fDivide_rep1(F2D *a, float b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fDivide_out0_rep2(&rows, a, &cols);
    fMallocHandle_rep123(rows, cols, &c);
    fDivide_out1_rep2(&i, &rows, &cols, c, a, &b);
    *rtr_val = c;
}

void fDivide_rep0(F2D *a, float b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fDivide_out0_rep3(&rows, a, &cols);
    fMallocHandle_rep124(rows, cols, &c);
    fDivide_out1_rep3(&i, &rows, &cols, c, a, &b);
    *rtr_val = c;
}

void fFind3_out0(int *y, F2D *in, int *x, int *r, int *i, int *j)
{
    (*y) = in->height;
    (*x) = in->width;
    (*r) = 0;
    for ((*i) = 0; (*i) < (*y); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*x); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            int decomp_0;
            decomp_0 = in->data[((*i)) * in->width + ((*j))] != 0;
            if (decomp_0)
            {
                (*r)++;
            }
        }
    }
}

void fFind3_out1(int *k, int *j, int *x, int *i, int *y, F2D *in, F2D *points)
{
    (*k) = 0;
    for ((*j) = 0; (*j) < (*x); (*j)++)
    {
#pragma HLS loop_tripcount max = 1080
        for ((*i) = 0; (*i) < (*y); (*i)++)
        {
#pragma HLS loop_tripcount max = 1920
            int decomp_1;
            decomp_1 = in->data[((*i)) * in->width + ((*j))] != 0;
            if (decomp_1)
            {
                points->data[((*k)) * points->width + (0)] = (*j) * 1.0;
                points->data[((*k)) * points->width + (1)] = (*i) * 1.0;
                points->data[((*k)) * points->width + (2)] = in->data[((*i)) * in->width + ((*j))];
                (*k)++;
            }
        }
    }
}

void fFind3(F2D *in, F2D **rtr_val)
{
    F2D *points;
    int j;
    int i;
    int x;
    int y;
    int k;
    int r;
    fFind3_out0(&y, in, &x, &r, &i, &j);
    fSetArray_rep26(r, 3, 0, &points);
    fFind3_out1(&k, &j, &x, &i, &y, in, points);
    *rtr_val = points;
}

void fFreeHandle_out14(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep51(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep50(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep49(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep48(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep47(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep46(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep45(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep44(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep43(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep42(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep41(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep40(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep39(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep38(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep37(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep36(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep35(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep34(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep33(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep32(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep31(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep30(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep29(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep28(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep27(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep26(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep25(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep24(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep23(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep22(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep21(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep20(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep19(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep18(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep17(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep16(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep15(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep14(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep13(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep12(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep11(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep10(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep9(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep8(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep7(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep6(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep5(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep4(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep3(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep2(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep1(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle_out14_rep0(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void fFreeHandle(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep0(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep83(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep1(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep82(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep2(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep81(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep3(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep80(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep4(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep79(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep5(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep78(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep6(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep77(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep7(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep76(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep8(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep75(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep9(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep74(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep10(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep73(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep11(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep72(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep12(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep71(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep13(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep70(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep14(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep69(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep15(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep68(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep16(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep67(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep17(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep66(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep18(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep65(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep19(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep64(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep20(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep63(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep21(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep62(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep22(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep61(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep23(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep60(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep24(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep59(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep25(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep58(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep26(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep57(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep27(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep56(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep28(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep55(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep29(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep54(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep30(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep53(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep31(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep52(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep32(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep51(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep33(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep50(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep34(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep49(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep35(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep48(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep36(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep47(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep37(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep46(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep38(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep45(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep39(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep44(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep40(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep43(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep41(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep42(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep42(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep41(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep43(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep40(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep44(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep39(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep45(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep38(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep46(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep37(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep47(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep36(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep48(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep35(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep49(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep34(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep50(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep33(F2D *out)
{
    int decomp_0;
    fFreeHandle_out14_rep51(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fMallocHandle_out18(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep30(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep29(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep28(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep27(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep66(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep65(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep64(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep63(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep62(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep61(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep60(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep59(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep58(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep26(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep35(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep34(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep33(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep32(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep31(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep25(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep24(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep23(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep22(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep21(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep20(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep19(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep18(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep17(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep16(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep50(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep49(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep48(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep47(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep46(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep45(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep44(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep43(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep42(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep41(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep40(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep15(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep14(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep13(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep12(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep57(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep56(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep55(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep54(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep53(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep52(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep51(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep11(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep10(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep9(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep39(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep38(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep37(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep36(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep8(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep7(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep6(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep5(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep4(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep3(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep2(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep1(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out18_rep0(F2D *out, int *rows, int *cols)
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
    fMallocHandle_out18_rep0(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep120(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep1(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep119(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep2(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep118(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep3(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep117(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep4(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep116(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 667340 min = 667340 avg = 667340
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep5(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep115(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep6(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep114(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8 min = 222448 avg = 111228
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep7(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep113(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8 min = 667328 avg = 333668
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep8(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep112(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep36(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep127(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep37(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep126(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep38(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep125(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep39(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep111(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32 min = 667340 avg = 333686
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep10(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep110(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep11(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep109(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep51(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep143(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep52(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep142(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep53(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep141(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep54(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep140(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep55(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep139(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep56(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep138(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep57(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep108(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep13(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep107(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 108 min = 108 avg = 108
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep14(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep106(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 667340 min = 667340 avg = 667340
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep15(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep105(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep40(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep137(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep41(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep136(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep42(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep135(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep43(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep134(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep44(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep133(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep45(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep132(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep46(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep131(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep47(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep130(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep48(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep129(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep49(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep128(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep50(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep104(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep17(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep103(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep18(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep102(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 108 min = 108 avg = 108
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep19(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep101(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 44 min = 44 avg = 44
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep20(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep100(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep21(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep99(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep22(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep98(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep23(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep97(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep24(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep96(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep25(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep95(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep31(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep124(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 108 min = 108 avg = 108
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep32(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep123(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 108 min = 108 avg = 108
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep33(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep122(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 44 min = 44 avg = 44
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep34(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep121(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep35(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep94(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep58(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep151(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep59(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep150(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep60(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep149(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep61(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep148(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 667328 avg = 333674
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep62(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep147(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 667340 avg = 333680
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep63(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep146(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 222452 avg = 111232
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep64(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep145(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep65(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep144(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep66(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep93(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 14236424 min = 14236424 avg = 14236424
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep28(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep92(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 331784 min = 331784 avg = 331784
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep29(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep91(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 14236424 min = 14236424 avg = 14236424
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out18_rep30(out, &rows, &cols);
    *rtr_val = out;
}

void fMinus_out0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 2073600
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fMinus_out0(&rows, a, &cols);
    fMallocHandle_rep96(rows, cols, &c);
    fMinus_out1(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fPlus_out0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fPlus_out1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 2073600
        c->data[(*i)] = a->data[(*i)] + b->data[(*i)];
    }
}

void fPlus(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fPlus_out0(&rows, a, &cols);
    fMallocHandle_rep97(rows, cols, &c);
    fPlus_out1(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
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
#pragma clava malloc_size max = 14236416 min = 14236416 avg = 14236416
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

void fSetArray_out18(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep10(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep9(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 5
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 5
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep8(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep7(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep20(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep19(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep18(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep17(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep16(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep15(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep14(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep13(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep12(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep11(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep6(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep5(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep4(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 5
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 5
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep3(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 3
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep2(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep1(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out18_rep0(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
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
    fMallocHandle_rep98(rows, cols, &out);
    fSetArray_out18_rep0(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep33(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep99(rows, cols, &out);
    fSetArray_out18_rep1(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep32(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep100(rows, cols, &out);
    fSetArray_out18_rep2(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep31(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep101(rows, cols, &out);
    fSetArray_out18_rep3(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep30(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep102(rows, cols, &out);
    fSetArray_out18_rep4(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep29(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep103(rows, cols, &out);
    fSetArray_out18_rep5(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep28(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep104(rows, cols, &out);
    fSetArray_out18_rep6(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep27(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep128(rows, cols, &out);
    fSetArray_out18_rep11(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep42(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep129(rows, cols, &out);
    fSetArray_out18_rep12(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep41(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep130(rows, cols, &out);
    fSetArray_out18_rep13(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep40(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep131(rows, cols, &out);
    fSetArray_out18_rep14(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep39(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep132(rows, cols, &out);
    fSetArray_out18_rep15(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep38(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep133(rows, cols, &out);
    fSetArray_out18_rep16(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep37(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep134(rows, cols, &out);
    fSetArray_out18_rep17(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep36(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep135(rows, cols, &out);
    fSetArray_out18_rep18(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep35(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep136(rows, cols, &out);
    fSetArray_out18_rep19(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep34(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep137(rows, cols, &out);
    fSetArray_out18_rep20(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep26(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep106(rows, cols, &out);
    fSetArray_out18_rep8(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep25(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep107(rows, cols, &out);
    fSetArray_out18_rep9(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep24(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep108(rows, cols, &out);
    fSetArray_out18_rep10(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSortIndices_out12(int *rows, F2D *input, int *cols)
{
    (*rows) = input->height;
    (*cols) = input->width;
}

void fSortIndices_out13(int *i, int *cols, int *j, int *rows, I2D *ind, int *decomp_0, int *dim)
{
    for ((*i) = 0; (*i) < (*cols); (*i)++)
    {
#pragma HLS loop_tripcount max = 1
        for ((*j) = 0; (*j) < (*rows); (*j)++)
        {
#pragma HLS loop_tripcount max = 55611
            ind->data[((*j)) * ind->width + ((*i))] = 0;
        }
    }
    (*decomp_0) = (*dim) == 1;
}

void fSortIndices_out14_out0(int *k, int *rows, int *i, int *cols, F2D *in, I2D *ind, int *j)
{
    for ((*k) = 0; (*k) < (*rows); (*k)++)
    {
#pragma HLS loop_tripcount max = 55611
        for ((*i) = 0; (*i) < (*cols); (*i)++)
        {
#pragma HLS loop_tripcount max = 1
            float localMax;
            int localIndex;
            localMax = in->data[((*k)) * in->width + ((*i))];
            localIndex = (*i);
            ind->data[((*k)) * ind->width + ((*i))] = (*i);
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
#pragma HLS loop_tripcount max = 1
                int decomp_1;
                decomp_1 = localMax < in->data[((*k)) * in->width + ((*j))];
                if (decomp_1)
                {
                    ind->data[((*k)) * ind->width + ((*i))] = (*j);
                    localMax = in->data[((*k)) * in->width + ((*j))];
                    localIndex = (*j);
                }
            }
            in->data[((*k)) * in->width + (localIndex)] = 0;
        }
    }
}

void fSortIndices_out14(int *k, int *rows, int *i, int *cols, F2D *in, I2D *ind, int *j, I2D **__rtr_val_17, int *__rtr_flag_17)
{
    fSortIndices_out14_out0(k, rows, i, cols, in, ind, j);
    fFreeHandle_rep43(in);
    (*__rtr_val_17) = ind;
    (*__rtr_flag_17) = 1;
}

void fSortIndices_out15(int *k, int *cols, int *i, int *rows, F2D *in, I2D *ind, int *j)
{
    for ((*k) = 0; (*k) < (*cols); (*k)++)
    {
        for ((*i) = 0; (*i) < (*rows); (*i)++)
        {
            float localMax;
            int localIndex;
            localMax = in->data[((*i)) * in->width + ((*k))];
            localIndex = (*i);
            ind->data[((*i)) * ind->width + ((*k))] = (*i);
            for ((*j) = 0; (*j) < (*rows); (*j)++)
            {
                int decomp_2;
                decomp_2 = localMax < in->data[((*j)) * in->width + ((*k))];
                if (decomp_2)
                {
                    ind->data[((*i)) * ind->width + ((*k))] = (*j);
                    localMax = in->data[((*j)) * in->width + ((*k))];
                    localIndex = (*j);
                }
            }
            in->data[(localIndex)*in->width + ((*k))] = 0;
        }
    }
}

void fSortIndices(F2D *input, int dim, I2D **rtr_val)
{
    I2D *ind;
    int k;
    int j;
    int i;
    F2D *in;
    int cols;
    int rows;
    int decomp_0;
    fSortIndices_out12(&rows, input, &cols);
    fDeepCopy_rep5(input, &in);
    iMallocHandle_rep58(rows, cols, &ind);
    fSortIndices_out13(&i, &cols, &j, &rows, ind, &decomp_0, &dim);
    if (decomp_0)
    {
        I2D *__rtr_val_17;
        int __rtr_flag_17 = 0;
        fSortIndices_out14(&k, &rows, &i, &cols, in, ind, &j, &__rtr_val_17, &__rtr_flag_17);
        if (__rtr_flag_17)
        {
            *rtr_val = __rtr_val_17;

            return;
        }
    }
    fSortIndices_out15(&k, &cols, &i, &rows, in, ind, &j);
    fFreeHandle_rep44(in);
    *rtr_val = ind;
}

void fTimes_out0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fTimes_out0_rep5(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fTimes_out0_rep4(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fTimes_out0_rep3(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fTimes_out0_rep2(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fTimes_out0_rep1(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fTimes_out0_rep0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fTimes_out1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] * b->data[(*i)];
    }
}

void fTimes_out1_rep5(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 2073600
        c->data[(*i)] = a->data[(*i)] * b->data[(*i)];
    }
}

void fTimes_out1_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 2073600
        c->data[(*i)] = a->data[(*i)] * b->data[(*i)];
    }
}

void fTimes_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 2073600
        c->data[(*i)] = a->data[(*i)] * b->data[(*i)];
    }
}

void fTimes_out1_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 2073600
        c->data[(*i)] = a->data[(*i)] * b->data[(*i)];
    }
}

void fTimes_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 2073600
        c->data[(*i)] = a->data[(*i)] * b->data[(*i)];
    }
}

void fTimes_out1_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] * b->data[(*i)];
    }
}

void fTimes(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fTimes_out0_rep0(&rows, a, &cols);
    fMallocHandle_rep138(rows, cols, &c);
    fTimes_out1_rep0(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fTimes_rep4(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fTimes_out0_rep1(&rows, a, &cols);
    fMallocHandle_rep139(rows, cols, &c);
    fTimes_out1_rep1(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fTimes_rep3(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fTimes_out0_rep2(&rows, a, &cols);
    fMallocHandle_rep140(rows, cols, &c);
    fTimes_out1_rep2(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fTimes_rep2(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fTimes_out0_rep3(&rows, a, &cols);
    fMallocHandle_rep141(rows, cols, &c);
    fTimes_out1_rep3(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fTimes_rep1(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fTimes_out0_rep4(&rows, a, &cols);
    fMallocHandle_rep142(rows, cols, &c);
    fTimes_out1_rep4(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fTimes_rep0(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fTimes_out0_rep5(&rows, a, &cols);
    fMallocHandle_rep143(rows, cols, &c);
    fTimes_out1_rep5(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
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

void ffConv2_out0(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out0_rep8(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out0_rep7(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out0_rep6(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out0_rep5(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out0_rep4(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out0_rep3(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out0_rep2(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out0_rep1(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out0_rep0(int *ma, F2D *a, int *na, int *mb, F2D *b, int *nb, int *ci, int *cj)
{
    F2D *out;
    (*ma) = a->height;
    (*na) = a->width;
    (*mb) = b->height;
    (*nb) = b->width;
    (*ci) = (*ma);
    (*cj) = (*na);
}

void ffConv2_out1(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2_out1_rep8(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
#pragma HLS loop_tripcount max = 5
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
#pragma HLS loop_tripcount max = 5
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2_out1_rep7(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
#pragma HLS loop_tripcount max = 5
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
#pragma HLS loop_tripcount max = 5
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2_out1_rep6(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
#pragma HLS loop_tripcount max = 5
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
#pragma HLS loop_tripcount max = 5
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2_out1_rep5(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
#pragma HLS loop_tripcount max = 1
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
#pragma HLS loop_tripcount max = 3
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2_out1_rep4(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
#pragma HLS loop_tripcount max = 3
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
#pragma HLS loop_tripcount max = 1
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2_out1_rep3(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
#pragma HLS loop_tripcount max = 3
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
#pragma HLS loop_tripcount max = 3
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2_out1_rep2(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
#pragma HLS loop_tripcount max = 3
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
#pragma HLS loop_tripcount max = 3
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2_out1_rep1(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
#pragma HLS loop_tripcount max = 3
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
#pragma HLS loop_tripcount max = 3
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2_out1_rep0(int *r_index, int *mb, int *c_index, int *nb, int *i, int *ma, int *j, int *na, int *m, int *mm, int *n, int *nn, int *ri, int *ci, F2D *c, F2D *a, F2D *b)
{
    (*r_index) = (*mb) / 2;
    (*c_index) = (*nb) / 2;
    for ((*i) = 0; (*i) < (*ma); (*i)++)
    {
        for ((*j) = 0; (*j) < (*na); (*j)++)
        {
            for ((*m) = 0; (*m) < (*mb); (*m)++)
            {
                (*mm) = (*mb) - 1 - (*m);
                for ((*n) = 0; (*n) < (*nb); (*n)++)
                {
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    (*nn) = (*nb) - 1 - (*n);
                    (*ri) = (*i) + (*m) - (*r_index);
                    (*ci) = (*j) + (*n) - (*c_index);
                    decomp_0 = (*ri) >= 0;
                    decomp_1 = (*ri) < (*ma);
                    decomp_2 = decomp_0 && decomp_1;
                    decomp_3 = (*ci) >= 0;
                    decomp_4 = decomp_2 && decomp_3;
                    decomp_5 = (*ci) < (*na);
                    decomp_6 = decomp_4 && decomp_5;
                    if (decomp_6)
                    {
                        c->data[((*i)) * c->width + ((*j))] = c->data[((*i)) * c->width + ((*j))] + a->data[((*ri)) * a->width + ((*ci))] * b->data[((*mm)) * b->width + ((*nn))];
                    }
                }
            }
        }
    }
}

void ffConv2(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_index;
    int r_index;
    int nn;
    int mm;
    int ri;
    int n;
    int m;
    int j;
    int i;
    int cj;
    int ci;
    int nb;
    int mb;
    int na;
    int ma;
    F2D *c;
    ffConv2_out0_rep0(&ma, a, &na, &mb, b, &nb, &ci, &cj);
    fSetArray_rep34(ci, cj, 0, &c);
    ffConv2_out1_rep0(&r_index, &mb, &c_index, &nb, &i, &ma, &j, &na, &m, &mm, &n, &nn, &ri, &ci, c, a, b);
    *rtr_val = c;
}

void ffConv2_rep7(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_index;
    int r_index;
    int nn;
    int mm;
    int ri;
    int n;
    int m;
    int j;
    int i;
    int cj;
    int ci;
    int nb;
    int mb;
    int na;
    int ma;
    F2D *c;
    ffConv2_out0_rep1(&ma, a, &na, &mb, b, &nb, &ci, &cj);
    fSetArray_rep35(ci, cj, 0, &c);
    ffConv2_out1_rep1(&r_index, &mb, &c_index, &nb, &i, &ma, &j, &na, &m, &mm, &n, &nn, &ri, &ci, c, a, b);
    *rtr_val = c;
}

void ffConv2_rep6(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_index;
    int r_index;
    int nn;
    int mm;
    int ri;
    int n;
    int m;
    int j;
    int i;
    int cj;
    int ci;
    int nb;
    int mb;
    int na;
    int ma;
    F2D *c;
    ffConv2_out0_rep2(&ma, a, &na, &mb, b, &nb, &ci, &cj);
    fSetArray_rep36(ci, cj, 0, &c);
    ffConv2_out1_rep2(&r_index, &mb, &c_index, &nb, &i, &ma, &j, &na, &m, &mm, &n, &nn, &ri, &ci, c, a, b);
    *rtr_val = c;
}

void ffConv2_rep5(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_index;
    int r_index;
    int nn;
    int mm;
    int ri;
    int n;
    int m;
    int j;
    int i;
    int cj;
    int ci;
    int nb;
    int mb;
    int na;
    int ma;
    F2D *c;
    ffConv2_out0_rep3(&ma, a, &na, &mb, b, &nb, &ci, &cj);
    fSetArray_rep37(ci, cj, 0, &c);
    ffConv2_out1_rep3(&r_index, &mb, &c_index, &nb, &i, &ma, &j, &na, &m, &mm, &n, &nn, &ri, &ci, c, a, b);
    *rtr_val = c;
}

void ffConv2_rep4(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_index;
    int r_index;
    int nn;
    int mm;
    int ri;
    int n;
    int m;
    int j;
    int i;
    int cj;
    int ci;
    int nb;
    int mb;
    int na;
    int ma;
    F2D *c;
    ffConv2_out0_rep4(&ma, a, &na, &mb, b, &nb, &ci, &cj);
    fSetArray_rep38(ci, cj, 0, &c);
    ffConv2_out1_rep4(&r_index, &mb, &c_index, &nb, &i, &ma, &j, &na, &m, &mm, &n, &nn, &ri, &ci, c, a, b);
    *rtr_val = c;
}

void ffConv2_rep3(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_index;
    int r_index;
    int nn;
    int mm;
    int ri;
    int n;
    int m;
    int j;
    int i;
    int cj;
    int ci;
    int nb;
    int mb;
    int na;
    int ma;
    F2D *c;
    ffConv2_out0_rep5(&ma, a, &na, &mb, b, &nb, &ci, &cj);
    fSetArray_rep39(ci, cj, 0, &c);
    ffConv2_out1_rep5(&r_index, &mb, &c_index, &nb, &i, &ma, &j, &na, &m, &mm, &n, &nn, &ri, &ci, c, a, b);
    *rtr_val = c;
}

void ffConv2_rep2(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_index;
    int r_index;
    int nn;
    int mm;
    int ri;
    int n;
    int m;
    int j;
    int i;
    int cj;
    int ci;
    int nb;
    int mb;
    int na;
    int ma;
    F2D *c;
    ffConv2_out0_rep6(&ma, a, &na, &mb, b, &nb, &ci, &cj);
    fSetArray_rep40(ci, cj, 0, &c);
    ffConv2_out1_rep6(&r_index, &mb, &c_index, &nb, &i, &ma, &j, &na, &m, &mm, &n, &nn, &ri, &ci, c, a, b);
    *rtr_val = c;
}

void ffConv2_rep1(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_index;
    int r_index;
    int nn;
    int mm;
    int ri;
    int n;
    int m;
    int j;
    int i;
    int cj;
    int ci;
    int nb;
    int mb;
    int na;
    int ma;
    F2D *c;
    ffConv2_out0_rep7(&ma, a, &na, &mb, b, &nb, &ci, &cj);
    fSetArray_rep41(ci, cj, 0, &c);
    ffConv2_out1_rep7(&r_index, &mb, &c_index, &nb, &i, &ma, &j, &na, &m, &mm, &n, &nn, &ri, &ci, c, a, b);
    *rtr_val = c;
}

void ffConv2_rep0(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_index;
    int r_index;
    int nn;
    int mm;
    int ri;
    int n;
    int m;
    int j;
    int i;
    int cj;
    int ci;
    int nb;
    int mb;
    int na;
    int ma;
    F2D *c;
    ffConv2_out0_rep8(&ma, a, &na, &mb, b, &nb, &ci, &cj);
    fSetArray_rep42(ci, cj, 0, &c);
    ffConv2_out1_rep8(&r_index, &mb, &c_index, &nb, &i, &ma, &j, &na, &m, &mm, &n, &nn, &ri, &ci, c, a, b);
    *rtr_val = c;
}

void ffDivide_out0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void ffDivide_out1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 2073600
        c->data[(*i)] = a->data[(*i)] / b->data[(*i)];
    }
}

void ffDivide(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    ffDivide_out0(&rows, a, &cols);
    fMallocHandle_rep110(rows, cols, &c);
    ffDivide_out1(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void ffVertcat_out0(int *row1, F2D *matrix1, int *col1, int *row2, F2D *matrix2)
{
    int col2;
    (*row1) = matrix1->height;
    (*col1) = matrix1->width;
    (*row2) = matrix2->height;
    col2 = matrix2->width;
}

void ffVertcat_out1(int *i, int *col1, int *j, int *row1, F2D *outMatrix, F2D *matrix1, int *k, int *row2, F2D *matrix2)
{
    for ((*i) = 0; (*i) < (*col1); (*i)++)
    {
#pragma HLS loop_tripcount max = 3
        for ((*j) = 0; (*j) < (*row1); (*j)++)
        {
#pragma HLS loop_tripcount min = 1 max = 55610
            outMatrix->data[((*j)) * outMatrix->width + ((*i))] = matrix1->data[((*j)) * matrix1->width + ((*i))];
        }
        for ((*k) = 0; (*k) < (*row2); (*k)++)
        {
#pragma HLS loop_tripcount max = 1
            outMatrix->data[(((*k) + (*row1))) * outMatrix->width + ((*i))] = matrix2->data[((*k)) * matrix2->width + ((*i))];
        }
    }
}

void ffVertcat(F2D *matrix1, F2D *matrix2, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    int row2;
    int col1;
    int row1;
    F2D *outMatrix;
    ffVertcat_out0(&row1, matrix1, &col1, &row2, matrix2);
    fMallocHandle_rep111(row1 + row2, col1, &outMatrix);
    ffVertcat_out1(&i, &col1, &j, &row1, outMatrix, matrix1, &k, &row2, matrix2);
    *rtr_val = outMatrix;
}

void fiDeepCopy_out8(int *rows, I2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fiDeepCopy_out8_rep2(int *rows, I2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fiDeepCopy_out8_rep1(int *rows, I2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fiDeepCopy_out8_rep0(int *rows, I2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fiDeepCopy_out9(int *i, int *rows, int *j, int *cols, F2D *out, I2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))] + 0.0;
        }
    }
}

void fiDeepCopy_out9_rep2(int *i, int *rows, int *j, int *cols, F2D *out, I2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))] + 0.0;
        }
    }
}

void fiDeepCopy_out9_rep1(int *i, int *rows, int *j, int *cols, F2D *out, I2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))] + 0.0;
        }
    }
}

void fiDeepCopy_out9_rep0(int *i, int *rows, int *j, int *cols, F2D *out, I2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))] + 0.0;
        }
    }
}

void fiDeepCopy(I2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fiDeepCopy_out8_rep0(&rows, in, &cols);
    fMallocHandle_rep125(rows, cols, &out);
    fiDeepCopy_out9_rep0(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fiDeepCopy_rep1(I2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fiDeepCopy_out8_rep1(&rows, in, &cols);
    fMallocHandle_rep126(rows, cols, &out);
    fiDeepCopy_out9_rep1(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fiDeepCopy_rep0(I2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fiDeepCopy_out8_rep2(&rows, in, &cols);
    fMallocHandle_rep127(rows, cols, &out);
    fiDeepCopy_out9_rep2(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void getANMS_out0(unsigned int *MAX_LIMIT, float *C_ROBUST, int *validCount)
{
    F2D *tempF;
    F2D *srtdV;
    int cnt;
    int end;
    int supIdPtr;
    (*MAX_LIMIT) = 10000000;
    (*C_ROBUST) = 0.9;
    (*validCount) = 0;
    supIdPtr = 0;
}

void getANMS_out1(int *i, F2D *v, F2D *points, float *r_sq, int *r, int *n)
{
    for ((*i) = 0; (*i) < v->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        v->data[(*i)] = points->data[((*i)) * points->width + (2)];
    }
    (*r_sq) = (*r) * (*r) * 1.0;
    (*n) = v->height;
}

void getANMS_out2(int *i, I2D *srtdVIdx, int *j, F2D *points, F2D *srtdPnts)
{
    for ((*i) = 0; (*i) < srtdVIdx->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        for ((*j) = 0; (*j) < points->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3
            srtdPnts->data[((*i)) * srtdPnts->width + ((*j))] = points->data[(srtdVIdx->data[(*i)]) * points->width + ((*j))];
        }
    }
}

void getANMS_out3(int *validCount, int *iter, int *i, F2D *suppressR, float *r_sq, int *k)
{
    (*validCount) = 0;
    (*iter) = 0;
    for ((*i) = 0; (*i) < suppressR->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        int decomp_0;
        decomp_0 = suppressR->data[(*i)] > (*r_sq);
        if (decomp_0)
        {
            (*validCount)++;
        }
    }
    (*k) = 0;
}

void getANMS_out4(int *i, F2D *suppressR, float *r_sq, I2D *supId, int *k)
{
    for ((*i) = 0; (*i) < (suppressR->height * suppressR->width); (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        int decomp_1;
        decomp_1 = suppressR->data[(*i)] > (*r_sq);
        if (decomp_1)
        {
            supId->data[(*k)++] = (*i);
        }
    }
}

void getANMS_out5_out0(F2D *temp, F2D **srtdPnts, I2D **supId, int *decomp_2, int *iter)
{
    temp->data[0] = (*srtdPnts)->data[((*supId)->data[0]) * (*srtdPnts)->width + (0)];
    temp->data[1] = (*srtdPnts)->data[((*supId)->data[0]) * (*srtdPnts)->width + (1)];
    temp->data[2] = (*srtdPnts)->data[((*supId)->data[0]) * (*srtdPnts)->width + (2)];
    (*decomp_2) = (*iter) == 0;
}

void getANMS_out5_out1(int *iter)
{
    (*iter)++;
}

void getANMS_out5_out2(int *k, int *i, I2D **supId, F2D **srtdPnts, F2D *tempp, F2D **suppressR, F2D *temps)
{
    (*k) = 0;
    for ((*i) = 1; (*i) < (*supId)->height; (*i)++)
    {
#pragma HLS loop_tripcount min = 0 max = 55610
        (*srtdPnts)->data[((*k)) * (*srtdPnts)->width + (0)] = tempp->data[((*supId)->data[(*i)]) * tempp->width + (0)];
        (*srtdPnts)->data[((*k)) * (*srtdPnts)->width + (1)] = tempp->data[((*supId)->data[(*i)]) * tempp->width + (1)];
        (*srtdPnts)->data[((*k)) * (*srtdPnts)->width + (2)] = tempp->data[((*supId)->data[(*i)]) * tempp->width + (2)];
        (*suppressR)->data[((*k)) * (*suppressR)->width + (0)] = temps->data[((*supId)->data[(*i)]) * temps->width + (0)];
        (*k)++;
    }
}

void getANMS_out5_out3(int *rows, F2D **interestPnts, int *cols, int *i, F2D **srtdPnts, float *t, float *t1, float *C_ROBUST, unsigned int *MAX_LIMIT, F2D **suppressR, int *validCount, float *r_sq, int *k)
{
    (*rows) = (*interestPnts)->height - 1;
    (*cols) = (*interestPnts)->width;
    for ((*i) = 0; (*i) < (*srtdPnts)->height; (*i)++)
    {
#pragma HLS loop_tripcount min = 0 max = 55610
        int decomp_3;
        int decomp_4;
        int decomp_5;
        (*t) = 0;
        (*t1) = 0;
        decomp_3 = ((*C_ROBUST) * (*interestPnts)->data[((*rows)) * (*interestPnts)->width + (2)]) >= (*srtdPnts)->data[((*i)) * (*srtdPnts)->width + (2)];
        if (decomp_3)
        {
            (*t) = (*srtdPnts)->data[((*i)) * (*srtdPnts)->width + (0)] - (*interestPnts)->data[((*rows)) * (*interestPnts)->width + (0)];
            (*t1) = (*srtdPnts)->data[((*i)) * (*srtdPnts)->width + (1)] - (*interestPnts)->data[((*rows)) * (*interestPnts)->width + (1)];
            (*t) = (*t) * (*t) + (*t1) * (*t1);
            (*t1) = 0;
        }
        decomp_4 = ((*C_ROBUST) * (*interestPnts)->data[((*rows)) * (*interestPnts)->width + (2)]) < (*srtdPnts)->data[((*i)) * (*srtdPnts)->width + (2)];
        if (decomp_4)
        {
            (*t1) = 1 * (*MAX_LIMIT);
        }
        decomp_5 = (*suppressR)->data[(*i)] > ((*t) + (*t1));
        if (decomp_5)
        {
            (*suppressR)->data[(*i)] = (*t) + (*t1);
        }
    }
    (*validCount) = 0;
    for ((*i) = 0; (*i) < (*suppressR)->height; (*i)++)
    {
#pragma HLS loop_tripcount min = 0 max = 55610
        int decomp_6;
        decomp_6 = (*suppressR)->data[(*i)] > (*r_sq);
        if (decomp_6)
        {
            (*validCount)++;
        }
    }
    (*k) = 0;
}

void getANMS_out5_out4(int *i, F2D **suppressR, float *r_sq, I2D **supId, int *k)
{
    for ((*i) = 0; (*i) < (*suppressR)->height * (*suppressR)->width; (*i)++)
    {
#pragma HLS loop_tripcount min = 0 max = 55610
        int decomp_7;
        decomp_7 = (*suppressR)->data[(*i)] > (*r_sq);
        if (decomp_7)
        {
            (*supId)->data[(*k)++] = (*i);
        }
    }
}

void getANMS_out5(F2D *temp, F2D **srtdPnts, I2D **supId, int *iter, F2D **interestPnts, F2D **suppressR, int *k, int *i, int *rows, int *cols, float *t, float *t1, float *C_ROBUST, unsigned int *MAX_LIMIT, int *validCount, float *r_sq)
{
    int decomp_2;
    F2D *temps;
    F2D *tempp;
    getANMS_out5_out0(temp, srtdPnts, supId, &decomp_2, iter);
    if (decomp_2)
    {
        fDeepCopy_rep6(temp, interestPnts);
    }
    else
    {
        fDeepCopy_rep7((*interestPnts), &tempp);
        fFreeHandle_rep45((*interestPnts));
        ffVertcat(tempp, temp, interestPnts);
        fFreeHandle_rep46(tempp);
    }
    getANMS_out5_out1(iter);
    fDeepCopy_rep8((*srtdPnts), &tempp);
    fDeepCopy_rep9((*suppressR), &temps);
    fFreeHandle_rep47((*srtdPnts));
    fFreeHandle_rep48((*suppressR));
    fMallocHandle_rep113((*supId)->height - 1, 3, srtdPnts);
    fMallocHandle_rep114((*supId)->height - 1, 1, suppressR);
    getANMS_out5_out2(k, i, supId, srtdPnts, tempp, suppressR, temps);
    fFreeHandle_rep49(tempp);
    fFreeHandle_rep50(temps);
    getANMS_out5_out3(rows, interestPnts, cols, i, srtdPnts, t, t1, C_ROBUST, MAX_LIMIT, suppressR, validCount, r_sq, k);
    iFreeHandle_rep30((*supId));
    iMallocHandle_rep59((*validCount), 1, supId);
    getANMS_out5_out4(i, suppressR, r_sq, supId, k);
}

void getANMS_sw(F2D *points, int r, F2D **rtr_val)
{
    F2D *temp;
    int cols;
    int rows;
    int iter;
    F2D *v;
    int validCount;
    int j;
    int i;
    F2D *interestPnts;
    float t1;
    float t;
    float r_sq;
    I2D *supId;
    I2D *srtdVIdx;
    int k;
    int n;
    F2D *srtdPnts;
    float C_ROBUST;
    F2D *suppressR;
    unsigned int MAX_LIMIT;
    getANMS_out0(&MAX_LIMIT, &C_ROBUST, &validCount);
    fMallocHandle_rep115(points->height, 1, &v);
    getANMS_out1(&i, v, points, &r_sq, &r, &n);
    fSortIndices(v, 1, &srtdVIdx);
    fMallocHandle_rep116(srtdVIdx->height, points->width, &srtdPnts);
    getANMS_out2(&i, srtdVIdx, &j, points, srtdPnts);
    fSetArray_rep28(1, 3, 0, &temp);
    fSetArray_rep29(n, 1, MAX_LIMIT, &suppressR);
    getANMS_out3(&validCount, &iter, &i, suppressR, &r_sq, &k);
    iMallocHandle_rep60(validCount, 1, &supId);
    getANMS_out4(&i, suppressR, &r_sq, supId, &k);
    while (validCount > 0)
    {
#pragma HLS loop_tripcount max = 55611
        getANMS_out5(temp, &(srtdPnts), &(supId), &iter, &(interestPnts), &(suppressR), &k, &i, &rows, &cols, &t, &t1, &C_ROBUST, &MAX_LIMIT, &validCount, &r_sq);
    }
    iFreeHandle_rep31(supId);
    iFreeHandle_rep32(srtdVIdx);
    fFreeHandle_rep51(srtdPnts);
    fFreeHandle_rep52(temp);
    fFreeHandle_rep53(suppressR);
    fFreeHandle_rep54(v);
    *rtr_val = interestPnts;
}

void harris_out1(F2D *g1, F2D *g2)
{
    g1->data[0] = 1;
    g1->data[1] = 4;
    g1->data[2] = 6;
    g1->data[3] = 4;
    g1->data[4] = 1;
    g1->data[5] = 4;
    g1->data[6] = 16;
    g1->data[7] = 24;
    g1->data[8] = 16;
    g1->data[9] = 4;
    g1->data[10] = 6;
    g1->data[11] = 24;
    g1->data[12] = 36;
    g1->data[13] = 24;
    g1->data[14] = 6;
    g1->data[15] = 4;
    g1->data[16] = 16;
    g1->data[17] = 24;
    g1->data[18] = 16;
    g1->data[19] = 4;
    g1->data[20] = 1;
    g1->data[21] = 4;
    g1->data[22] = 6;
    g1->data[23] = 4;
    g1->data[24] = 1;
    g2->data[0] = 1;
    g2->data[1] = 2;
    g2->data[2] = 1;
    g2->data[3] = 2;
    g2->data[4] = 4;
    g2->data[5] = 2;
    g2->data[6] = 1;
    g2->data[7] = 2;
    g2->data[8] = 1;
}

void harris_out2(F2D *sob)
{
    sob->data[0] = -0.5;
    sob->data[1] = 0;
    sob->data[2] = 0.5;
}

void harris_out3(F2D *sob)
{
    sob->data[0] = -0.5;
    sob->data[1] = 0;
    sob->data[2] = 0.5;
}

void harris_out4(float *eps)
{
    (*eps) = 2.2204e-16;
}

void harris_out5(int *i, F2D *temp, float *eps)
{
    for ((*i) = 0; (*i) < (temp->height * temp->width); (*i)++)
    {
#pragma HLS loop_tripcount max = 2073600
        temp->data[(*i)] = temp->data[(*i)] + (*eps);
    }
}

void harris(I2D *im, F2D **rtr_val)
{
    F2D *img1;
    F2D *g1;
    F2D *g2;
    F2D *g;
    F2D *Ix;
    F2D *Iy;
    F2D *Ix2;
    F2D *Iy2;
    F2D *IxIy;
    F2D *v;
    F2D *R;
    F2D *Rmax;
    F2D *Rnm;
    float eps;
    F2D *sobel;
    F2D *sob;
    F2D *temp;
    F2D *temp1;
    I2D *win;
    I2D *x;
    I2D *y;
    int i;
    F2D *_scope26_imf;
    fSetArray_rep30(5, 5, 0, &g1);
    fSetArray_rep31(3, 3, 0, &g2);
    harris_out1(g1, g2);
    fDivide_rep1(g1, 256, &g);
    fMallocHandle_rep117(1, 3, &sob);
    harris_out2(sob);
    fiDeepCopy_rep1(im, &_scope26_imf);
    ffConv2_rep2(_scope26_imf, g, &img1);
    fFreeHandle_rep55(_scope26_imf);
    ffConv2_rep3(img1, sob, &Ix);
    fFreeHandle_rep56(sob);
    fMallocHandle_rep118(3, 1, &sob);
    harris_out3(sob);
    ffConv2_rep4(img1, sob, &Iy);
    fFreeHandle_rep57(g);
    fDivide_rep2(g2, 16, &g);
    harris_out4(&eps);
    fTimes_rep0(Ix, Ix, &sobel);
    ffConv2_rep5(sobel, g, &Ix2);
    fFreeHandle_rep58(sobel);
    fTimes_rep1(Iy, Iy, &sobel);
    ffConv2_rep6(sobel, g, &Iy2);
    fFreeHandle_rep59(sobel);
    fTimes_rep2(Ix, Iy, &sobel);
    ffConv2_rep7(sobel, g, &IxIy);
    fFreeHandle_rep60(sobel);
    fTimes_rep3(Ix2, Iy2, &temp);
    fTimes_rep4(IxIy, IxIy, &temp1);
    fMinus(temp, temp1, &sobel);
    fFreeHandle_rep61(temp);
    fPlus(Ix2, Iy2, &temp);
    harris_out5(&i, temp, &eps);
    ffDivide(sobel, temp, &R);
    iSetArray(1, 2, 3, &win);
    maxWindow(R, win, &Rmax);
    supress(R, Rmax, &Rnm);
    fFind3(Rnm, &v);
    iFreeHandle_rep33(win);
    fFreeHandle_rep62(Rmax);
    fFreeHandle_rep63(Rnm);
    fFreeHandle_rep64(R);
    fFreeHandle_rep65(img1);
    fFreeHandle_rep66(g1);
    fFreeHandle_rep67(g2);
    fFreeHandle_rep68(g);
    fFreeHandle_rep69(Ix);
    fFreeHandle_rep70(Iy);
    fFreeHandle_rep71(Ix2);
    fFreeHandle_rep72(Iy2);
    fFreeHandle_rep73(IxIy);
    fFreeHandle_rep74(sobel);
    fFreeHandle_rep75(sob);
    fFreeHandle_rep76(temp);
    fFreeHandle_rep77(temp1);
    *rtr_val = v;
}

void iFreeHandle_out14(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep9(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep8(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep7(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep6(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep5(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep4(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep3(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep2(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep1(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle_out14_rep0(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != ((void *)0);
}

void iFreeHandle(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep0(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep34(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep1(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep33(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep2(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep32(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep3(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep31(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep4(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep30(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep5(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep29(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep6(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep28(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep7(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep27(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep8(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep26(I2D *out)
{
    int decomp_0;
    iFreeHandle_out14_rep9(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iMallocHandle_out25(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out25_rep7(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out25_rep6(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out25_rep5(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out25_rep4(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out25_rep3(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out25_rep2(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out25_rep1(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out25_rep0(I2D *out, int *rows, int *cols)
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
    iMallocHandle_out25_rep0(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep62(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 8294408 min = 8294408 avg = 8294408
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out25_rep1(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep61(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 16 min = 16 avg = 16
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out25_rep2(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep60(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out25_rep3(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep59(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 8 min = 222448 avg = 111228
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out25_rep4(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep58(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out25_rep5(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep57(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out25_rep6(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep56(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 222452 min = 222452 avg = 222452
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out25_rep7(out, &rows, &cols);
    *rtr_val = out;
}

void iSetArray_out12(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 2
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep61(rows, cols, &out);
    iSetArray_out12(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void maxWindow_out0(int *exR, I2D *window, int *exC, int *rows, F2D *im, int *cols)
{
    int tr;
    int tc;
    (*exR) = window->data[0] / 2;
    (*exC) = window->data[1] / 2;
    (*rows) = im->height;
    (*cols) = im->width;
    tr = (*rows) + (*exR) - 1;
    tc = (*cols) + (*exC) - 1;
}

void maxWindow_out1(int *i, int *rows, int *j, int *cols, float *t, int *k, int *exR, int *m, int *exC, F2D *temp, F2D *out)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            (*t) = 0;
            for ((*k) = -(*exR); (*k) <= (*exR); (*k)++)
            {
#pragma HLS loop_tripcount max = 3
                for ((*m) = -(*exC); (*m) <= (*exC); (*m)++)
                {
#pragma HLS loop_tripcount max = 3
                    int decomp_0;
                    int decomp_1;
                    int decomp_2;
                    int decomp_3;
                    int decomp_4;
                    int decomp_5;
                    int decomp_6;
                    int decomp_7;
                    decomp_0 = ((*i) + (*k)) < 0;
                    decomp_1 = ((*i) + (*k)) >= (*rows);
                    decomp_2 = decomp_0 || decomp_1;
                    decomp_3 = ((*j) + (*m)) < 0;
                    decomp_4 = decomp_2 || decomp_3;
                    decomp_5 = ((*j) + (*m)) >= (*cols);
                    decomp_6 = decomp_4 || decomp_5;
                    if (decomp_6)
                    {
                        continue;
                    }
                    decomp_7 = temp->data[(((*i) + (*k))) * temp->width + (((*j) + (*m)))] > (*t);
                    if (decomp_7)
                    {
                        (*t) = temp->data[(((*i) + (*k))) * temp->width + (((*j) + (*m)))];
                    }
                }
            }
            out->data[((*i)) * out->width + ((*j))] = (*t);
        }
    }
}

void maxWindow(F2D *im, I2D *window, F2D **rtr_val)
{
    int m;
    float t;
    F2D *temp;
    F2D *out;
    int k;
    int j;
    int i;
    int cols;
    int rows;
    int exC;
    int exR;
    maxWindow_out0(&exR, window, &exC, &rows, im, &cols);
    fDeepCopy_rep10(im, &temp);
    fMallocHandle_rep119(rows, cols, &out);
    maxWindow_out1(&i, &rows, &j, &cols, &t, &k, &exR, &m, &exC, temp, out);
    fFreeHandle_rep78(temp);
    *rtr_val = out;
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
    if (input == nullptr)
    {
        perror("File pointer error");

        return nullptr;
    }
    else
    {
        fread(&signature, sizeof(((((((((((((((((((((((((((((((((signature))))))))))))))))))))))))))))))))), 1, input);
        fread(&file_size, sizeof(((((((((((((((((((((((((((((((((file_size))))))))))))))))))))))))))))))))), 1, input);
        fread(&reserved1, sizeof(((((((((((((((((((((((((((((((((reserved1))))))))))))))))))))))))))))))))), 1, input);
        fread(&reserved2, sizeof(((((((((((((((((((((((((((((((((reserved2))))))))))))))))))))))))))))))))), 1, input);
        fread(&loc_of_bitmap, sizeof(((((((((((((((((((((((((((((((((loc_of_bitmap))))))))))))))))))))))))))))))))), 1, input);
        fread(&size_of_infoheader, sizeof(((((((((((((((((((((((((((((((((size_of_infoheader))))))))))))))))))))))))))))))))), 1, input);
        fread(&width, sizeof(((((((((((((((((((((((((((((((((width))))))))))))))))))))))))))))))))), 1, input);   // Reads the width of the image
        fread(&height, sizeof(((((((((((((((((((((((((((((((((height))))))))))))))))))))))))))))))))), 1, input); // Reads the height of the image
        fread(&number_of_planes, sizeof(((((((((((((((((((((((((((((((((number_of_planes))))))))))))))))))))))))))))))))), 1, input);
        fread(&bits_per_pixel, sizeof(((((((((((((((((((((((((((((((((bits_per_pixel))))))))))))))))))))))))))))))))), 1, input);
        fread(&compression_method, sizeof(((((((((((((((((((((((((((((((((compression_method))))))))))))))))))))))))))))))))), 1, input);
        fread(&bytes_of_bitmap, sizeof(((((((((((((((((((((((((((((((((bytes_of_bitmap))))))))))))))))))))))))))))))))), 1, input);
        fread(&hori_reso, sizeof(((((((((((((((((((((((((((((((((hori_reso))))))))))))))))))))))))))))))))), 1, input);
        fread(&vert_reso, sizeof(((((((((((((((((((((((((((((((((vert_reso))))))))))))))))))))))))))))))))), 1, input);
        fread(&no_of_colors, sizeof(((((((((((((((((((((((((((((((((no_of_colors))))))))))))))))))))))))))))))))), 1, input);
        fread(&no_of_imp_colors, sizeof(((((((((((((((((((((((((((((((((no_of_imp_colors))))))))))))))))))))))))))))))))), 1, input);
        iMallocHandle_rep62(height, width, &srcImage);
        if (srcImage->height <= 0 || srcImage->width <= 0 || signature[0] != 'B' || signature[1] != 'M' || (bits_per_pixel != 24 && bits_per_pixel != 8))
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

void stitch_out0(int *i, F2D **int1, F2D **interestPnts, F2D **int2)
{
    for ((*i) = 0; (*i) < (*int1)->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 55611
        (*int1)->data[(*i)] = (*interestPnts)->data[((*i)) * (*interestPnts)->width + (0)];
        (*int2)->data[(*i)] = (*interestPnts)->data[((*i)) * (*interestPnts)->width + (1)];
    }
}

void getANMS_hw_bridge(F2D *points, int r, F2D **rtr_val);
void stitch(F2D **v, I2D *Icur, F2D **interestPnts, F2D **int1, F2D **int2, int *i, F2D **Fcur)
{
    harris(Icur, v);
    // Selector between SW and HW bridge calls based on OFFLOAD getenv variable
    if (getenv("OFFLOAD") != ((void *)0) || getenv("OFFLOAD_SIM") != ((void *)0))
    {
        getANMS_hw_bridge((*v), 24, interestPnts);
    }
    else
    {
        getANMS_sw((*v), 24, interestPnts);
    }
    fMallocHandle_rep120((*interestPnts)->height, 1, int1);
    fSetArray_rep32((*interestPnts)->height, 1, 0, int2);
    stitch_out0(i, int1, interestPnts, int2);
    extractFeatures(Icur, (*int1), (*int2), Fcur);
}

int main(int argc, char *argv[])
{
    int rows, cols;
    F2D *x, *y, *v, *interestPnts, *Fcur, *int1, *int2;
    I2D *Icur;
    int i, j;
    unsigned int *start, *endC, *elapsed;
    char im1[100];
    char im2[100];
    if (argc < 2)
    {
        printf("We need input image path\n");

        return -1;
    }
    sprintf(im1, "%s/1.bmp", argv[1]);
    sprintf(im2, "%s/2.bmp", argv[1]);
    Icur = readImage(im1);
    if (!Icur) {
        printf("Error: Could not load input image from %s. Please provide the dataset.\n", argv[1]);
        return -1;
    }
    rows = Icur->height;
    cols = Icur->width;
    printf("Input size\t\t- (%dx%d)\n", rows, cols);
    start = photonStartTiming();
    stitch(&(v), Icur, &(interestPnts), &(int1), &(int2), &i, &(Fcur));
    endC = photonEndTiming();
    elapsed = photonReportTiming(start, endC);
    int _scope27_ret = 0;
    float _scope27_tol = 0.02;
    // fWriteMatrix(Fcur, argv[1]); // Removed to prevent overwriting ground truth
    _scope27_ret = fSelfCheck(Fcur, argv[1], _scope27_tol);
    if (_scope27_ret == -1)
    {
        printf("Error in Stitch\n");
    }
    iFreeHandle_rep34(Icur);
    fFreeHandle_rep79(v);
    fFreeHandle_rep80(interestPnts);
    fFreeHandle_rep81(int1);
    fFreeHandle_rep82(int2);
    fFreeHandle_rep83(Fcur);
    free(start);
    free(endC);
    photonPrintTiming(elapsed);
    free(elapsed);

    return 0;
}

void supress_out0(int *rows, F2D *im, int *cols)
{
    (*rows) = im->height;
    (*cols) = im->width;
}

void supress_out1(int *i, int *rows, int *j, int *cols, F2D *im, F2D *im1, F2D *out)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1920
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1080
            int decomp_0;
            decomp_0 = im->data[((*i)) * im->width + ((*j))] == im1->data[((*i)) * im1->width + ((*j))];
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = im->data[((*i)) * im->width + ((*j))];
            }
        }
    }
}

void supress(F2D *im, F2D *im1, F2D **rtr_val)
{
    F2D *out;
    int j;
    int i;
    int cols;
    int rows;
    supress_out0(&rows, im, &cols);
    fSetArray_rep33(rows, cols, 0, &out);
    supress_out1(&i, &rows, &j, &cols, im, im1, out);
    *rtr_val = out;
}
