#include "localization.h"
#include "sdvbs_common.h"
#include "timingUtils.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void fDeepCopy_out0_rep7(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep13(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep12(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out0_rep12(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep11(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep10(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep9(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep8(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep6(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep5(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep4(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep3(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out0_rep3(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep2(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out0_rep2(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep1(int *rows, F2D *in, int *cols);
void cluster_fDeepCopy_out0_rep1(int *rows, F2D *in, int *cols);
void fDeepCopy_out0_rep0(int *rows, F2D *in, int *cols);
void fDeepCopy_out1_rep7(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep13(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep12(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out1_rep12(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep11(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep10(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep9(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep8(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep6(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep5(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep4(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep3(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out1_rep3(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep2(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out1_rep2(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void cluster_fDeepCopy_out1_rep1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_out1_rep0(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in);
void fDeepCopy_rep6(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep6(F2D *in, F2D **rtr_val);
void fDeepCopy_rep5(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep5(F2D *in, F2D **rtr_val);
void fDeepCopy_rep4(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep4(F2D *in, F2D **rtr_val);
void fDeepCopy_rep3(F2D *in, F2D **rtr_val);
void fDeepCopy_rep2(F2D *in, F2D **rtr_val);
void fDeepCopy_rep1(F2D *in, F2D **rtr_val);
void fDeepCopy_rep0(F2D *in, F2D **rtr_val);
void fDeepCopy_rep11(F2D *in, F2D **rtr_val);
void fDeepCopy_rep10(F2D *in, F2D **rtr_val);
void fDeepCopy_rep9(F2D *in, F2D **rtr_val);
void fDeepCopy_rep8(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy_rep8(F2D *in, F2D **rtr_val);
void fDeepCopy_rep7(F2D *in, F2D **rtr_val);
void fDeepCopyRange_out0_rep7(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol);
void fDeepCopyRange_out0_rep6(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol);
void fDeepCopyRange_out0_rep5(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol);
void fDeepCopyRange_out0_rep4(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol);
void fDeepCopyRange_out0_rep3(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol);
void fDeepCopyRange_out0_rep2(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol);
void fDeepCopyRange_out0_rep1(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol);
void cluster_fDeepCopyRange_out0_rep1(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols,
                                      int *startCol);
void fDeepCopyRange_out0_rep0(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol);
void fDeepCopyRange_out1_rep7(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in);
void fDeepCopyRange_out1_rep6(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in);
void fDeepCopyRange_out1_rep5(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in);
void fDeepCopyRange_out1_rep4(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in);
void fDeepCopyRange_out1_rep3(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in);
void fDeepCopyRange_out1_rep2(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in);
void fDeepCopyRange_out1_rep1(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in);
void cluster_fDeepCopyRange_out1_rep1(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols,
                                      F2D *out, F2D *in);
void fDeepCopyRange_out1_rep0(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in);
void fDeepCopyRange_rep6(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val);
void cluster_fDeepCopyRange_rep6(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val);
void fDeepCopyRange_rep5(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val);
void fDeepCopyRange_rep4(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val);
void fDeepCopyRange_rep3(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val);
void fDeepCopyRange_rep2(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val);
void fDeepCopyRange_rep1(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val);
void fDeepCopyRange_rep0(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val);
void fFreeHandle_out0_rep86(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep85(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep84(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep83(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep132(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep131(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep131(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep130(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep129(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep128(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep127(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep82(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep138(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep137(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep137(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep136(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep135(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep134(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep133(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep81(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep144(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep143(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep143(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep142(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep141(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep140(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep139(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep80(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep93(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep92(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep91(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep90(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep89(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep89(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep88(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep87(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep79(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep100(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep99(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep98(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep97(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep96(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep96(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep95(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep94(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep78(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep107(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep106(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep105(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep104(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep103(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep103(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep102(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep101(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep77(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep114(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep113(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep112(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep111(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep110(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep110(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep109(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep108(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep76(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep120(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep119(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep119(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep118(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep117(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep116(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep115(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep75(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep126(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep125(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep125(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep124(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep123(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep122(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep121(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep74(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep150(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep149(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep149(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep148(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep148(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep147(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep147(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep146(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep145(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep73(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep156(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep155(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep155(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep154(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep154(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep153(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep153(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep152(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep151(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep72(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep162(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep161(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep161(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep160(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep160(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep159(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep159(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep158(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep157(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep71(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep168(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep167(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep167(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep166(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep166(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep165(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep165(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep164(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep163(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep70(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep174(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep173(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep173(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep172(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep172(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep171(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep171(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep170(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep169(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep69(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep68(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep67(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep66(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep65(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep64(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep63(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep62(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep61(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep60(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep59(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep58(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep57(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep56(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep55(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep54(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep53(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep52(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep51(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep50(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep49(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep48(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep47(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep46(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep45(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep44(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep43(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep42(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep41(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep40(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep39(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep38(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep37(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep37(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep36(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep36(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep35(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep35(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep34(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep34(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep33(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep33(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep32(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep32(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep31(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep31(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep30(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep30(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep29(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep29(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep28(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep28(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep27(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep27(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep26(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep26(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep25(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep25(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep24(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep24(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep23(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep23(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep22(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep22(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep21(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep21(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep20(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep20(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep19(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep19(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep18(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep18(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep17(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep17(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep16(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out0_rep16(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep15(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep14(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep13(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep12(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep11(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep10(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep9(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep8(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep7(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep6(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep5(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep4(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep3(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep2(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep1(int *decomp_0, F2D *out);
void fFreeHandle_out0_rep0(int *decomp_0, F2D *out);
void fFreeHandle_rep85(F2D *out);
void fFreeHandle_rep84(F2D *out);
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
void cluster_fFreeHandle_rep70(F2D *out);
void fFreeHandle_rep69(F2D *out);
void cluster_fFreeHandle_rep69(F2D *out);
void fFreeHandle_rep68(F2D *out);
void cluster_fFreeHandle_rep68(F2D *out);
void fFreeHandle_rep67(F2D *out);
void cluster_fFreeHandle_rep67(F2D *out);
void fFreeHandle_rep66(F2D *out);
void cluster_fFreeHandle_rep66(F2D *out);
void fFreeHandle_rep65(F2D *out);
void cluster_fFreeHandle_rep65(F2D *out);
void fFreeHandle_rep64(F2D *out);
void cluster_fFreeHandle_rep64(F2D *out);
void fFreeHandle_rep63(F2D *out);
void cluster_fFreeHandle_rep63(F2D *out);
void fFreeHandle_rep62(F2D *out);
void cluster_fFreeHandle_rep62(F2D *out);
void fFreeHandle_rep61(F2D *out);
void cluster_fFreeHandle_rep61(F2D *out);
void fFreeHandle_rep60(F2D *out);
void cluster_fFreeHandle_rep60(F2D *out);
void fFreeHandle_rep59(F2D *out);
void cluster_fFreeHandle_rep59(F2D *out);
void fFreeHandle_rep58(F2D *out);
void cluster_fFreeHandle_rep58(F2D *out);
void fFreeHandle_rep57(F2D *out);
void cluster_fFreeHandle_rep57(F2D *out);
void fFreeHandle_rep56(F2D *out);
void cluster_fFreeHandle_rep56(F2D *out);
void fFreeHandle_rep55(F2D *out);
void cluster_fFreeHandle_rep55(F2D *out);
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
void fFreeHandle_rep47(F2D *out);
void fFreeHandle_rep46(F2D *out);
void fFreeHandle_rep45(F2D *out);
void fFreeHandle_rep44(F2D *out);
void fFreeHandle_rep43(F2D *out);
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
void fFreeHandle_rep32(F2D *out);
void fFreeHandle_rep31(F2D *out);
void fFreeHandle_rep30(F2D *out);
void fFreeHandle_rep29(F2D *out);
void fFreeHandle_rep28(F2D *out);
void fFreeHandle_rep27(F2D *out);
void fFreeHandle_rep26(F2D *out);
void fFreeHandle_rep25(F2D *out);
void fFreeHandle_rep24(F2D *out);
void fFreeHandle_rep23(F2D *out);
void fFreeHandle_rep22(F2D *out);
void fFreeHandle_rep21(F2D *out);
void fFreeHandle_rep20(F2D *out);
void fFreeHandle_rep19(F2D *out);
void fFreeHandle_rep18(F2D *out);
void fFreeHandle_rep17(F2D *out);
void fFreeHandle_rep16(F2D *out);
void fFreeHandle_rep159(F2D *out);
void fFreeHandle_rep158(F2D *out);
void cluster_fFreeHandle_rep158(F2D *out);
void fFreeHandle_rep157(F2D *out);
void cluster_fFreeHandle_rep157(F2D *out);
void fFreeHandle_rep156(F2D *out);
void cluster_fFreeHandle_rep156(F2D *out);
void fFreeHandle_rep155(F2D *out);
void fFreeHandle_rep15(F2D *out);
void fFreeHandle_rep154(F2D *out);
void fFreeHandle_rep153(F2D *out);
void cluster_fFreeHandle_rep153(F2D *out);
void fFreeHandle_rep152(F2D *out);
void cluster_fFreeHandle_rep152(F2D *out);
void fFreeHandle_rep151(F2D *out);
void cluster_fFreeHandle_rep151(F2D *out);
void fFreeHandle_rep150(F2D *out);
void fFreeHandle_rep14(F2D *out);
void fFreeHandle_rep149(F2D *out);
void fFreeHandle_rep148(F2D *out);
void cluster_fFreeHandle_rep148(F2D *out);
void fFreeHandle_rep147(F2D *out);
void cluster_fFreeHandle_rep147(F2D *out);
void fFreeHandle_rep146(F2D *out);
void cluster_fFreeHandle_rep146(F2D *out);
void fFreeHandle_rep145(F2D *out);
void fFreeHandle_rep13(F2D *out);
void fFreeHandle_rep144(F2D *out);
void fFreeHandle_rep143(F2D *out);
void cluster_fFreeHandle_rep143(F2D *out);
void fFreeHandle_rep142(F2D *out);
void cluster_fFreeHandle_rep142(F2D *out);
void fFreeHandle_rep141(F2D *out);
void cluster_fFreeHandle_rep141(F2D *out);
void fFreeHandle_rep140(F2D *out);
void fFreeHandle_rep12(F2D *out);
void fFreeHandle_rep139(F2D *out);
void fFreeHandle_rep138(F2D *out);
void cluster_fFreeHandle_rep138(F2D *out);
void fFreeHandle_rep137(F2D *out);
void cluster_fFreeHandle_rep137(F2D *out);
void fFreeHandle_rep136(F2D *out);
void cluster_fFreeHandle_rep136(F2D *out);
void fFreeHandle_rep135(F2D *out);
void fFreeHandle_rep11(F2D *out);
void fFreeHandle_rep119(F2D *out);
void fFreeHandle_rep118(F2D *out);
void fFreeHandle_rep117(F2D *out);
void fFreeHandle_rep116(F2D *out);
void cluster_fFreeHandle_rep116(F2D *out);
void fFreeHandle_rep115(F2D *out);
void fFreeHandle_rep10(F2D *out);
void fFreeHandle_rep114(F2D *out);
void fFreeHandle_rep113(F2D *out);
void fFreeHandle_rep112(F2D *out);
void fFreeHandle_rep111(F2D *out);
void cluster_fFreeHandle_rep111(F2D *out);
void fFreeHandle_rep110(F2D *out);
void fFreeHandle_rep9(F2D *out);
void fFreeHandle_rep109(F2D *out);
void fFreeHandle_rep108(F2D *out);
void cluster_fFreeHandle_rep108(F2D *out);
void fFreeHandle_rep107(F2D *out);
void fFreeHandle_rep106(F2D *out);
void fFreeHandle_rep105(F2D *out);
void fFreeHandle_rep104(F2D *out);
void fFreeHandle_rep8(F2D *out);
void fFreeHandle_rep103(F2D *out);
void fFreeHandle_rep102(F2D *out);
void cluster_fFreeHandle_rep102(F2D *out);
void fFreeHandle_rep101(F2D *out);
void fFreeHandle_rep100(F2D *out);
void fFreeHandle_rep99(F2D *out);
void fFreeHandle_rep98(F2D *out);
void fFreeHandle_rep7(F2D *out);
void fFreeHandle_rep97(F2D *out);
void fFreeHandle_rep96(F2D *out);
void cluster_fFreeHandle_rep96(F2D *out);
void fFreeHandle_rep95(F2D *out);
void fFreeHandle_rep94(F2D *out);
void fFreeHandle_rep93(F2D *out);
void fFreeHandle_rep92(F2D *out);
void fFreeHandle_rep6(F2D *out);
void fFreeHandle_rep91(F2D *out);
void fFreeHandle_rep90(F2D *out);
void cluster_fFreeHandle_rep90(F2D *out);
void fFreeHandle_rep89(F2D *out);
void fFreeHandle_rep88(F2D *out);
void fFreeHandle_rep87(F2D *out);
void fFreeHandle_rep86(F2D *out);
void fFreeHandle_rep5(F2D *out);
void fFreeHandle_rep134(F2D *out);
void fFreeHandle_rep133(F2D *out);
void fFreeHandle_rep132(F2D *out);
void fFreeHandle_rep131(F2D *out);
void cluster_fFreeHandle_rep131(F2D *out);
void fFreeHandle_rep130(F2D *out);
void fFreeHandle_rep4(F2D *out);
void fFreeHandle_rep129(F2D *out);
void fFreeHandle_rep128(F2D *out);
void fFreeHandle_rep127(F2D *out);
void fFreeHandle_rep126(F2D *out);
void cluster_fFreeHandle_rep126(F2D *out);
void fFreeHandle_rep125(F2D *out);
void fFreeHandle_rep3(F2D *out);
void fFreeHandle_rep124(F2D *out);
void fFreeHandle_rep123(F2D *out);
void fFreeHandle_rep122(F2D *out);
void fFreeHandle_rep121(F2D *out);
void cluster_fFreeHandle_rep121(F2D *out);
void fFreeHandle_rep120(F2D *out);
void fFreeHandle_rep2(F2D *out);
void fFreeHandle_rep1(F2D *out);
void fFreeHandle_rep0(F2D *out);
void fHorzcat_out0_rep2(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void fHorzcat_out0_rep8(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void fHorzcat_out0_rep7(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void cluster_fHorzcat_out0_rep7(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void fHorzcat_out0_rep6(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void cluster_fHorzcat_out0_rep6(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void fHorzcat_out0_rep5(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void cluster_fHorzcat_out0_rep5(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void fHorzcat_out0_rep4(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void fHorzcat_out0_rep3(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void fHorzcat_out0_rep1(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void fHorzcat_out0_rep0(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b);
void fHorzcat_out1_rep2(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void fHorzcat_out1_rep8(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void fHorzcat_out1_rep7(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void cluster_fHorzcat_out1_rep7(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void fHorzcat_out1_rep6(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void cluster_fHorzcat_out1_rep6(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void fHorzcat_out1_rep5(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void cluster_fHorzcat_out1_rep5(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void fHorzcat_out1_rep4(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void fHorzcat_out1_rep3(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void fHorzcat_out1_rep1(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void fHorzcat_out1_rep0(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b);
void fHorzcat_rep1(F2D *a, F2D *b, F2D **rtr_val);
void fHorzcat_rep0(F2D *a, F2D *b, F2D **rtr_val);
void fHorzcat_rep6(F2D *a, F2D *b, F2D **rtr_val);
void fHorzcat_rep5(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fHorzcat_rep5(F2D *a, F2D *b, F2D **rtr_val);
void fHorzcat_rep4(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fHorzcat_rep4(F2D *a, F2D *b, F2D **rtr_val);
void fHorzcat_rep3(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fHorzcat_rep3(F2D *a, F2D *b, F2D **rtr_val);
void fHorzcat_rep2(F2D *a, F2D *b, F2D **rtr_val);
void fMallocHandle_out1_rep21(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep40(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep39(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep39(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep38(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep38(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep37(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep37(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep36(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep35(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep34(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep33(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep117(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep116(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep115(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep114(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep113(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep113(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep112(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep111(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep32(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep20(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep19(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep19(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep18(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep17(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep16(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep15(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep14(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep13(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep12(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep11(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep80(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep79(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep78(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep203(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep202(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep201(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep201(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep200(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep200(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep199(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep199(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep198(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep197(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep77(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep10(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep96(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep95(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep94(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep93(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep92(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep92(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep91(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep90(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep9(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep89(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep88(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep88(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep87(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep86(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep86(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep85(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep84(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep83(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep82(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep81(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep8(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep31(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep30(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep30(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep29(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep29(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep28(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep27(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep26(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep25(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep24(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep23(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep133(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep132(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep131(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep131(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep130(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep129(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep128(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep127(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep126(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep22(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep7(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep103(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep102(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep102(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep101(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep101(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep100(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep100(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep99(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep99(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep98(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep98(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep97(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep6(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep76(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep75(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep74(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep73(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep72(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep71(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep70(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep69(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep68(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep68(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep67(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep67(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep66(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep65(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep64(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep63(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep62(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep61(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep60(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep59(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep58(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep57(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep56(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep55(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep216(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep215(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep215(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep214(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep214(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep213(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep212(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep211(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep54(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep153(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep152(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep151(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep150(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep149(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep148(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep148(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep147(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep146(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep145(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep144(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep225(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep224(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep223(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep222(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep221(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep220(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep220(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep219(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep218(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep217(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep143(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep142(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep53(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep210(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep209(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep208(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep208(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep207(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep207(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep206(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep206(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep205(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep204(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep52(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep196(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep195(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep194(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep194(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep193(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep193(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep192(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep192(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep191(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep190(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep51(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep110(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep109(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep233(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep232(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep231(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep231(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep230(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep230(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep229(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep229(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep228(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep227(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep226(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep108(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep249(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep248(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep247(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep247(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep246(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep246(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep245(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep245(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep244(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep243(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep242(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep107(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep106(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep105(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep104(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep50(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep189(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep188(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep241(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep240(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep239(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep239(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep238(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep238(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep237(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep237(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep236(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep235(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep234(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep187(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep186(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep186(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep185(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep185(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep184(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep183(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep49(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep141(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep140(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep139(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep139(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep138(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep137(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep136(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep135(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep134(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep48(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep125(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep124(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep123(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep123(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep122(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep121(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep120(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep119(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep118(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep47(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep182(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep181(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep180(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep179(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep178(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep178(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep177(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep176(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep46(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep175(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep174(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep173(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep172(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep171(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep171(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep170(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep169(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep45(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep168(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep167(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep166(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep165(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep164(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep164(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep163(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep162(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep44(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep43(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep161(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep160(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep159(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out1_rep159(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep158(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep157(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep156(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep155(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep154(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep42(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep41(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep5(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep4(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep3(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep2(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep1(F2D *out, int *rows, int *cols);
void fMallocHandle_out1_rep0(F2D *out, int *rows, int *cols);
void fMallocHandle_rep20(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep19(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep18(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep17(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep16(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep15(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep72(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep71(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep146(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep145(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep144(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep143(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep142(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep142(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep141(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep140(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep70(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep69(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep152(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep151(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep151(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep150(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep149(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep148(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep147(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep68(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep158(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep157(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep157(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep156(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep155(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep154(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep153(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep67(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep164(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep163(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep163(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep162(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep161(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep160(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep159(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep66(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep114(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep113(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep112(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep111(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep110(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep110(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep109(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep108(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep65(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep128(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep127(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep126(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep125(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep124(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep124(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep123(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep122(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep64(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep170(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep169(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep169(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep168(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep168(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep167(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep166(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep215(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep214(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep213(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep213(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep212(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep212(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep211(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep211(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep210(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep209(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep165(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep63(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep101(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep100(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep99(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep98(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep222(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep221(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep220(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep220(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep219(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep219(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep218(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep218(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep217(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep216(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep97(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep208(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep207(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep206(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep206(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep205(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep205(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep204(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep204(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep203(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep202(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep96(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep62(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep176(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep175(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep175(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep174(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep174(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep173(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep173(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep172(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep171(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep61(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep188(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep187(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep187(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep186(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep186(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep185(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep185(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep184(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep183(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep60(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep139(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep138(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep201(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep200(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep199(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep199(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep198(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep197(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep196(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep195(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep194(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep137(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep136(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep135(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep134(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep134(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep133(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep132(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep131(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep130(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep129(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep59(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep193(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep192(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep191(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep191(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep190(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep190(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep189(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep58(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep57(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep56(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep55(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep54(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep53(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep52(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep51(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep50(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep49(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep48(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep47(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep47(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep46(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep46(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep45(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep44(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep43(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep42(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep41(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep40(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep39(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep38(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep14(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep95(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep95(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep94(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep94(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep93(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep93(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep92(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep92(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep91(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep91(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep90(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep13(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep29(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep121(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep120(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep119(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep118(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep117(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep117(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep116(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep115(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep28(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep27(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep26(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep25(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep24(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep23(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep23(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep22(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep22(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep21(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep12(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep83(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep82(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep81(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep80(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep79(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep79(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep78(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep77(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep77(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep76(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep11(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep89(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep88(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep88(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep87(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep86(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep85(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep84(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep10(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep75(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep182(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep181(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep181(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep180(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep180(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep179(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep179(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep178(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep177(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep74(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep73(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep9(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep8(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep7(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep6(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep5(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep4(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep3(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep2(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep2(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep1(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep0(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep37(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep107(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep106(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep106(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep105(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep104(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep103(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep102(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep36(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep35(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep34(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep33(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep33(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep32(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep32(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep31(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep31(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep30(int rows, int cols, F2D **rtr_val);
void fMdivide_out0_rep5(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2);
void fMdivide_out0_rep4(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2);
void cluster_fMdivide_out0_rep4(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2);
void fMdivide_out0_rep3(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2);
void fMdivide_out0_rep2(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2);
void fMdivide_out0_rep1(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2);
void fMdivide_out0_rep0(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2);
void fMdivide_out1_rep5(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0);
void fMdivide_out1_rep4(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0);
void cluster_fMdivide_out1_rep4(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0);
void fMdivide_out1_rep3(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0);
void fMdivide_out1_rep2(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0);
void fMdivide_out1_rep1(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0);
void fMdivide_out1_rep0(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0);
void fMdivide_out2_rep5(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMdivide_out2_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void cluster_fMdivide_out2_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMdivide_out2_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMdivide_out2_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMdivide_out2_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMdivide_out2_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMdivide_rep4(F2D *a, F2D *b, F2D **rtr_val);
void fMdivide_rep3(F2D *a, F2D *b, F2D **rtr_val);
void fMdivide_rep2(F2D *a, F2D *b, F2D **rtr_val);
void fMdivide_rep1(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fMdivide_rep1(F2D *a, F2D *b, F2D **rtr_val);
void fMdivide_rep0(F2D *a, F2D *b, F2D **rtr_val);
void fMinus_out0_rep7(int *rows, F2D *a, int *cols);
void fMinus_out0_rep6(int *rows, F2D *a, int *cols);
void fMinus_out0_rep5(int *rows, F2D *a, int *cols);
void fMinus_out0_rep4(int *rows, F2D *a, int *cols);
void fMinus_out0_rep3(int *rows, F2D *a, int *cols);
void cluster_fMinus_out0_rep3(int *rows, F2D *a, int *cols);
void fMinus_out0_rep2(int *rows, F2D *a, int *cols);
void fMinus_out0_rep1(int *rows, F2D *a, int *cols);
void cluster_fMinus_out0_rep1(int *rows, F2D *a, int *cols);
void fMinus_out0_rep0(int *rows, F2D *a, int *cols);
void fMinus_out1_rep7(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMinus_out1_rep6(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMinus_out1_rep5(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMinus_out1_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMinus_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void cluster_fMinus_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMinus_out1_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMinus_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void cluster_fMinus_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMinus_out1_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fMinus_rep6(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fMinus_rep6(F2D *a, F2D *b, F2D **rtr_val);
void fMinus_rep5(F2D *a, F2D *b, F2D **rtr_val);
void fMinus_rep4(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fMinus_rep4(F2D *a, F2D *b, F2D **rtr_val);
void fMinus_rep3(F2D *a, F2D *b, F2D **rtr_val);
void fMinus_rep2(F2D *a, F2D *b, F2D **rtr_val);
void fMinus_rep1(F2D *a, F2D *b, F2D **rtr_val);
void fMinus_rep0(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_out0_rep8(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep15(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep14(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep13(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep12(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep11(int *m, F2D *a, int *p, F2D *b, int *n);
void cluster_fMtimes_out0_rep11(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep10(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep9(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep7(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep6(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep5(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep4(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep3(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep2(int *m, F2D *a, int *p, F2D *b, int *n);
void cluster_fMtimes_out0_rep2(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep1(int *m, F2D *a, int *p, F2D *b, int *n);
void cluster_fMtimes_out0_rep1(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out0_rep0(int *m, F2D *a, int *p, F2D *b, int *n);
void fMtimes_out1_rep8(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep15(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep14(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep13(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep12(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep11(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void cluster_fMtimes_out1_rep11(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep10(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep9(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep7(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep6(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep5(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep4(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep3(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep2(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void cluster_fMtimes_out1_rep2(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep1(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void cluster_fMtimes_out1_rep1(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_out1_rep0(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out);
void fMtimes_rep7(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fMtimes_rep7(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep6(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fMtimes_rep6(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep5(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep4(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep3(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep2(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep1(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep0(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep13(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep12(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fMtimes_rep12(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep11(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep10(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep9(F2D *a, F2D *b, F2D **rtr_val);
void fMtimes_rep8(F2D *a, F2D *b, F2D **rtr_val);
void fPlus_out0_rep5(int *rows, F2D *a, int *cols);
void cluster_fPlus_out0_rep5(int *rows, F2D *a, int *cols);
void fPlus_out0_rep4(int *rows, F2D *a, int *cols);
void cluster_fPlus_out0_rep4(int *rows, F2D *a, int *cols);
void fPlus_out0_rep3(int *rows, F2D *a, int *cols);
void cluster_fPlus_out0_rep3(int *rows, F2D *a, int *cols);
void fPlus_out0_rep2(int *rows, F2D *a, int *cols);
void cluster_fPlus_out0_rep2(int *rows, F2D *a, int *cols);
void fPlus_out0_rep1(int *rows, F2D *a, int *cols);
void cluster_fPlus_out0_rep1(int *rows, F2D *a, int *cols);
void fPlus_out0_rep0(int *rows, F2D *a, int *cols);
void fPlus_out1_rep5(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void cluster_fPlus_out1_rep5(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fPlus_out1_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void cluster_fPlus_out1_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fPlus_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void cluster_fPlus_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fPlus_out1_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void cluster_fPlus_out1_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fPlus_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void cluster_fPlus_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fPlus_out1_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b);
void fPlus_rep4(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fPlus_rep4(F2D *a, F2D *b, F2D **rtr_val);
void fPlus_rep3(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fPlus_rep3(F2D *a, F2D *b, F2D **rtr_val);
void fPlus_rep2(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fPlus_rep2(F2D *a, F2D *b, F2D **rtr_val);
void fPlus_rep1(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fPlus_rep1(F2D *a, F2D *b, F2D **rtr_val);
void fPlus_rep0(F2D *a, F2D *b, F2D **rtr_val);
void cluster_fPlus_rep0(F2D *a, F2D *b, F2D **rtr_val);
void fSetArray_out1_rep34(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep33(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep72(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep71(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep70(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep69(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep68(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep68(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep67(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep66(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep32(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep31(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep78(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep77(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep77(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep76(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep75(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep74(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep73(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep30(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep84(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep83(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep83(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep82(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep81(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep80(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep79(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep29(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep90(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep89(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep89(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep88(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep87(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep86(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep85(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep28(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep47(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep46(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep45(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep44(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep43(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep43(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep42(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep41(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep27(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep54(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep53(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep52(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep51(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep50(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep50(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep49(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep48(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep26(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep96(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep95(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep95(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep94(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep94(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep93(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep92(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep135(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep134(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep133(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep133(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep132(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep132(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep131(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep131(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep130(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep129(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep91(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep25(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep40(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep39(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep38(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep37(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep142(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep141(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep140(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep140(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep139(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep139(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep138(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep138(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep137(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep136(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep36(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep128(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep127(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep126(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep126(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep125(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep125(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep124(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep124(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep123(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep122(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep35(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep24(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep102(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep101(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep101(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep100(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep100(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep99(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep99(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep98(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep97(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep23(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep108(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep107(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep107(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep106(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep106(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep105(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep105(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep104(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep103(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep22(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep65(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep64(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep121(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep120(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep119(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep119(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep118(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep117(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep116(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep115(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep114(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep63(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep62(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep61(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep60(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep60(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep59(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep58(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep57(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep56(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep55(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep21(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep113(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep112(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep111(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep111(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep110(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep110(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep109(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep20(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep19(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep18(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep17(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep16(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep15(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep14(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep13(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep12(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep11(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep10(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep9(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep9(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep8(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void cluster_fSetArray_out1_rep8(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep7(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep6(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep5(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep4(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep3(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep2(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep1(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out1_rep0(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_rep33(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep32(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep31(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep30(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep29(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep28(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep27(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep26(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep26(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep25(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep25(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep24(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep23(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep22(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep21(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep20(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep19(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep18(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep17(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep16(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep15(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep14(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep13(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep100(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep100(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep99(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep99(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep98(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep97(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep12(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep60(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep59(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep58(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep57(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep56(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep56(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep55(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep54(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep53(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep52(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep107(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep106(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep105(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep104(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep103(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep103(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep102(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep101(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep51(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep11(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep96(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep95(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep95(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep94(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep94(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep93(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep93(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep92(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep10(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep91(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep90(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep90(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep89(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep89(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep88(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep88(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep87(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep9(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep38(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep113(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep112(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep112(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep111(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep111(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep110(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep110(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep109(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep108(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep37(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep125(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep124(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep124(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep123(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep123(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep122(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep122(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep121(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep120(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep36(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep35(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep34(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep8(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep86(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep119(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep118(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep118(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep117(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep117(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep116(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep116(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep115(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep114(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep85(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep84(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep84(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep83(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep83(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep82(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep7(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep50(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep49(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep49(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep48(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep47(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep46(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep45(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep6(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep44(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep43(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep43(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep42(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep41(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep40(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep39(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep5(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep81(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep80(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep79(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep78(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep78(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep77(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep4(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep76(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep75(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep74(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep73(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep73(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep72(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep3(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep71(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep70(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep69(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep68(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep68(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep67(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep2(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep1(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep66(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep65(int rows, int cols, float val, F2D **rtr_val);
void cluster_fSetArray_rep65(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep64(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep63(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep62(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep61(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep0(int rows, int cols, float val, F2D **rtr_val);
void fSum_out0_rep5(int *rows, F2D *inMat, int *cols, int *Rcols);
void fSum_out0_rep4(int *rows, F2D *inMat, int *cols, int *Rcols);
void cluster_fSum_out0_rep4(int *rows, F2D *inMat, int *cols, int *Rcols);
void fSum_out0_rep3(int *rows, F2D *inMat, int *cols, int *Rcols);
void fSum_out0_rep2(int *rows, F2D *inMat, int *cols, int *Rcols);
void fSum_out0_rep1(int *rows, F2D *inMat, int *cols, int *Rcols);
void fSum_out0_rep0(int *rows, F2D *inMat, int *cols, int *Rcols);
void fSum_out1_rep5(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i);
void fSum_out1_rep4(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i);
void cluster_fSum_out1_rep4(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i);
void fSum_out1_rep3(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i);
void fSum_out1_rep2(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i);
void fSum_out1_rep1(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i);
void fSum_out1_rep0(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i);
void fSum_rep4(F2D *inMat, F2D **rtr_val);
void fSum_rep3(F2D *inMat, F2D **rtr_val);
void fSum_rep2(F2D *inMat, F2D **rtr_val);
void fSum_rep1(F2D *inMat, F2D **rtr_val);
void cluster_fSum_rep1(F2D *inMat, F2D **rtr_val);
void fSum_rep0(F2D *inMat, F2D **rtr_val);
void generateSample_out1_rep4(int *rows, I2D *sampleXId, int *cols, int *decomp_0);
void generateSample_out1_rep3(int *rows, I2D *sampleXId, int *cols, int *decomp_0);
void generateSample_out1_rep2(int *rows, I2D *sampleXId, int *cols, int *decomp_0);
void generateSample_out1_rep1(int *rows, I2D *sampleXId, int *cols, int *decomp_0);
void cluster_generateSample_out1_rep1(int *rows, I2D *sampleXId, int *cols, int *decomp_0);
void generateSample_out1_rep0(int *rows, I2D *sampleXId, int *cols, int *decomp_0);
void generateSample_out2_rep4(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos);
void generateSample_out2_rep3(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos);
void generateSample_out2_rep2(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos);
void generateSample_out2_rep1(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos);
void cluster_generateSample_out2_rep1(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat,
                                      F2D *vel, F2D *retVel, F2D *pos, F2D *retPos);
void generateSample_out2_rep0(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos);
void generateSample_rep3(F2D *w, F2D *quat, F2D *vel, F2D *pos);
void cluster_generateSample_rep3(F2D *w, F2D *quat, F2D *vel, F2D *pos);
void generateSample_rep2(F2D *w, F2D *quat, F2D *vel, F2D *pos);
void generateSample_rep1(F2D *w, F2D *quat, F2D *vel, F2D *pos);
void generateSample_rep0(F2D *w, F2D *quat, F2D *vel, F2D *pos);
void get3DGaussianProb_out0_rep5(float *pi, int *n_data, F2D *data, int *n_channel);
void get3DGaussianProb_out0_rep4(float *pi, int *n_data, F2D *data, int *n_channel);
void cluster_get3DGaussianProb_out0_rep4(float *pi, int *n_data, F2D *data, int *n_channel);
void get3DGaussianProb_out0_rep3(float *pi, int *n_data, F2D *data, int *n_channel);
void get3DGaussianProb_out0_rep2(float *pi, int *n_data, F2D *data, int *n_channel);
void get3DGaussianProb_out0_rep1(float *pi, int *n_data, F2D *data, int *n_channel);
void get3DGaussianProb_out0_rep0(float *pi, int *n_data, F2D *data, int *n_channel);
void get3DGaussianProb_out1_rep5(float *temp, float *pi, int *n_channel);
void get3DGaussianProb_out1_rep4(float *temp, float *pi, int *n_channel);
void cluster_get3DGaussianProb_out1_rep4(float *temp, float *pi, int *n_channel);
void get3DGaussianProb_out1_rep3(float *temp, float *pi, int *n_channel);
void get3DGaussianProb_out1_rep2(float *temp, float *pi, int *n_channel);
void get3DGaussianProb_out1_rep1(float *temp, float *pi, int *n_channel);
void get3DGaussianProb_out1_rep0(float *temp, float *pi, int *n_channel);
void get3DGaussianProb_out2_rep5(int *j, F2D *temp2, int *i, F2D *p, float *temp);
void get3DGaussianProb_out2_rep4(int *j, F2D *temp2, int *i, F2D *p, float *temp);
void cluster_get3DGaussianProb_out2_rep4(int *j, F2D *temp2, int *i, F2D *p, float *temp);
void get3DGaussianProb_out2_rep3(int *j, F2D *temp2, int *i, F2D *p, float *temp);
void get3DGaussianProb_out2_rep2(int *j, F2D *temp2, int *i, F2D *p, float *temp);
void get3DGaussianProb_out2_rep1(int *j, F2D *temp2, int *i, F2D *p, float *temp);
void get3DGaussianProb_out2_rep0(int *j, F2D *temp2, int *i, F2D *p, float *temp);
void get3DGaussianProb_rep4(F2D *data, F2D *mean, F2D *A, F2D **rtr_val);
void get3DGaussianProb_rep3(F2D *data, F2D *mean, F2D *A, F2D **rtr_val);
void get3DGaussianProb_rep2(F2D *data, F2D *mean, F2D *A, F2D **rtr_val);
void get3DGaussianProb_rep1(F2D *data, F2D *mean, F2D *A, F2D **rtr_val);
void cluster_get3DGaussianProb_rep1(F2D *data, F2D *mean, F2D *A, F2D **rtr_val);
void get3DGaussianProb_rep0(F2D *data, F2D *mean, F2D *A, F2D **rtr_val);
void iFreeHandle_out0_rep8(int *decomp_0, I2D *out);
void iFreeHandle_out0_rep7(int *decomp_0, I2D *out);
void cluster_iFreeHandle_out0_rep7(int *decomp_0, I2D *out);
void iFreeHandle_out0_rep6(int *decomp_0, I2D *out);
void iFreeHandle_out0_rep5(int *decomp_0, I2D *out);
void iFreeHandle_out0_rep4(int *decomp_0, I2D *out);
void iFreeHandle_out0_rep3(int *decomp_0, I2D *out);
void iFreeHandle_out0_rep2(int *decomp_0, I2D *out);
void iFreeHandle_out0_rep1(int *decomp_0, I2D *out);
void iFreeHandle_out0_rep0(int *decomp_0, I2D *out);
void iFreeHandle_rep7(I2D *out);
void iFreeHandle_rep6(I2D *out);
void iFreeHandle_rep5(I2D *out);
void iFreeHandle_rep4(I2D *out);
void iFreeHandle_rep3(I2D *out);
void iFreeHandle_rep2(I2D *out);
void iFreeHandle_rep1(I2D *out);
void cluster_iFreeHandle_rep1(I2D *out);
void iFreeHandle_rep0(I2D *out);
void iMallocHandle_out1_rep10(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep9(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep8(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out1_rep8(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep7(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep6(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep5(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep4(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep3(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep2(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep1(I2D *out, int *rows, int *cols);
void iMallocHandle_out1_rep0(I2D *out, int *rows, int *cols);
void iMallocHandle_rep9(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep8(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep7(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep6(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep5(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep4(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep3(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep2(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep2(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep1(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep0(int rows, int cols, I2D **rtr_val);
void iSetArray_out1_rep9(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_out1_rep8(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_out1_rep7(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_out1_rep6(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_out1_rep5(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_out1_rep4(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_out1_rep3(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_out1_rep2(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void cluster_iSetArray_out1_rep2(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_out1_rep1(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_out1_rep0(int *i, int *rows, int *j, int *cols, I2D *out, int *val);
void iSetArray_rep8(int rows, int cols, int val, I2D **rtr_val);
void iSetArray_rep7(int rows, int cols, int val, I2D **rtr_val);
void cluster_iSetArray_rep7(int rows, int cols, int val, I2D **rtr_val);
void iSetArray_rep6(int rows, int cols, int val, I2D **rtr_val);
void iSetArray_rep5(int rows, int cols, int val, I2D **rtr_val);
void iSetArray_rep4(int rows, int cols, int val, I2D **rtr_val);
void iSetArray_rep3(int rows, int cols, int val, I2D **rtr_val);
void iSetArray_rep2(int rows, int cols, int val, I2D **rtr_val);
void iSetArray_rep1(int rows, int cols, int val, I2D **rtr_val);
void iSetArray_rep0(int rows, int cols, int val, I2D **rtr_val);
void mcl_out1_rep4(F2D *sum, int *decomp_2);
void mcl_out1_rep3(F2D *sum, int *decomp_2);
void mcl_out1_rep2(F2D *sum, int *decomp_2);
void mcl_out1_rep1(F2D *sum, int *decomp_2);
void cluster_mcl_out1_rep1(F2D *sum, int *decomp_2);
void mcl_out1_rep0(F2D *sum, int *decomp_2);
void mcl_out2_rep4(float *sumVal, F2D *sum, int *i, F2D *retW, int *j);
void mcl_out2_rep3(float *sumVal, F2D *sum, int *i, F2D *retW, int *j);
void mcl_out2_rep2(float *sumVal, F2D *sum, int *i, F2D *retW, int *j);
void mcl_out2_rep1(float *sumVal, F2D *sum, int *i, F2D *retW, int *j);
void cluster_mcl_out2_rep1(float *sumVal, F2D *sum, int *i, F2D *retW, int *j);
void mcl_out2_rep0(float *sumVal, F2D *sum, int *i, F2D *retW, int *j);
void mcl_rep3(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val);
void cluster_mcl_rep3(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val);
void mcl_rep2(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val);
void mcl_rep1(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val);
void mcl_rep0(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val);
void quatConj_out0_rep4(int *rows, F2D *a);
void quatConj_out0_rep10(int *rows, F2D *a);
void quatConj_out0_rep9(int *rows, F2D *a);
void cluster_quatConj_out0_rep9(int *rows, F2D *a);
void quatConj_out0_rep8(int *rows, F2D *a);
void cluster_quatConj_out0_rep8(int *rows, F2D *a);
void quatConj_out0_rep7(int *rows, F2D *a);
void cluster_quatConj_out0_rep7(int *rows, F2D *a);
void quatConj_out0_rep6(int *rows, F2D *a);
void quatConj_out0_rep5(int *rows, F2D *a);
void quatConj_out0_rep3(int *rows, F2D *a);
void quatConj_out0_rep2(int *rows, F2D *a);
void cluster_quatConj_out0_rep2(int *rows, F2D *a);
void quatConj_out0_rep1(int *rows, F2D *a);
void cluster_quatConj_out0_rep1(int *rows, F2D *a);
void quatConj_out0_rep0(int *rows, F2D *a);
void quatConj_out1_rep4(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep10(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep9(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void cluster_quatConj_out1_rep9(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep8(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void cluster_quatConj_out1_rep8(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep7(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void cluster_quatConj_out1_rep7(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep6(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep5(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep3(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep2(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void cluster_quatConj_out1_rep2(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep1(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void cluster_quatConj_out1_rep1(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_out1_rep0(int *i, int *rows, int *k, F2D *retQuat, F2D *a);
void quatConj_rep3(F2D *a, F2D **rtr_val);
void cluster_quatConj_rep3(F2D *a, F2D **rtr_val);
void quatConj_rep2(F2D *a, F2D **rtr_val);
void cluster_quatConj_rep2(F2D *a, F2D **rtr_val);
void quatConj_rep1(F2D *a, F2D **rtr_val);
void quatConj_rep0(F2D *a, F2D **rtr_val);
void quatConj_rep8(F2D *a, F2D **rtr_val);
void quatConj_rep7(F2D *a, F2D **rtr_val);
void cluster_quatConj_rep7(F2D *a, F2D **rtr_val);
void quatConj_rep6(F2D *a, F2D **rtr_val);
void cluster_quatConj_rep6(F2D *a, F2D **rtr_val);
void quatConj_rep5(F2D *a, F2D **rtr_val);
void cluster_quatConj_rep5(F2D *a, F2D **rtr_val);
void quatConj_rep4(F2D *a, F2D **rtr_val);
void quatMul_out0_rep4(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep10(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep9(int *k, int *ra, F2D *a, int *rb, F2D *b);
void cluster_quatMul_out0_rep9(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep8(int *k, int *ra, F2D *a, int *rb, F2D *b);
void cluster_quatMul_out0_rep8(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep7(int *k, int *ra, F2D *a, int *rb, F2D *b);
void cluster_quatMul_out0_rep7(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep6(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep5(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep3(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep16(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep15(int *k, int *ra, F2D *a, int *rb, F2D *b);
void cluster_quatMul_out0_rep15(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep14(int *k, int *ra, F2D *a, int *rb, F2D *b);
void cluster_quatMul_out0_rep14(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep13(int *k, int *ra, F2D *a, int *rb, F2D *b);
void cluster_quatMul_out0_rep13(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep12(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep11(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep2(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep1(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out0_rep0(int *k, int *ra, F2D *a, int *rb, F2D *b);
void quatMul_out1_rep4(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep10(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep9(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void cluster_quatMul_out1_rep9(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep8(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void cluster_quatMul_out1_rep8(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep7(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void cluster_quatMul_out1_rep7(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep6(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep5(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep3(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep16(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep15(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void cluster_quatMul_out1_rep15(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep14(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void cluster_quatMul_out1_rep14(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep13(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void cluster_quatMul_out1_rep13(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep12(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep11(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep2(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep1(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_out1_rep0(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb);
void quatMul_rep3(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep2(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep1(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep13(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep12(F2D *a, F2D *b, F2D **rtr_val);
void cluster_quatMul_rep12(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep11(F2D *a, F2D *b, F2D **rtr_val);
void cluster_quatMul_rep11(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep10(F2D *a, F2D *b, F2D **rtr_val);
void cluster_quatMul_rep10(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep9(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep0(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep8(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep7(F2D *a, F2D *b, F2D **rtr_val);
void cluster_quatMul_rep7(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep6(F2D *a, F2D *b, F2D **rtr_val);
void cluster_quatMul_rep6(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep5(F2D *a, F2D *b, F2D **rtr_val);
void cluster_quatMul_rep5(F2D *a, F2D *b, F2D **rtr_val);
void quatMul_rep4(F2D *a, F2D *b, F2D **rtr_val);
void quatRot_out0_rep4(int *nr, F2D *vec);
void quatRot_out0_rep3(int *nr, F2D *vec);
void cluster_quatRot_out0_rep3(int *nr, F2D *vec);
void quatRot_out0_rep2(int *nr, F2D *vec);
void cluster_quatRot_out0_rep2(int *nr, F2D *vec);
void quatRot_out0_rep1(int *nr, F2D *vec);
void cluster_quatRot_out0_rep1(int *nr, F2D *vec);
void quatRot_out0_rep0(int *nr, F2D *vec);
void quatRot_out1_rep4(int *rows, F2D *retVec, int *cols);
void quatRot_out1_rep3(int *rows, F2D *retVec, int *cols);
void cluster_quatRot_out1_rep3(int *rows, F2D *retVec, int *cols);
void quatRot_out1_rep2(int *rows, F2D *retVec, int *cols);
void cluster_quatRot_out1_rep2(int *rows, F2D *retVec, int *cols);
void quatRot_out1_rep1(int *rows, F2D *retVec, int *cols);
void cluster_quatRot_out1_rep1(int *rows, F2D *retVec, int *cols);
void quatRot_out1_rep0(int *rows, F2D *retVec, int *cols);
void quatRot_out2_rep4(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec);
void quatRot_out2_rep3(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec);
void cluster_quatRot_out2_rep3(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec);
void quatRot_out2_rep2(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec);
void cluster_quatRot_out2_rep2(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec);
void quatRot_out2_rep1(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec);
void cluster_quatRot_out2_rep1(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec);
void quatRot_out2_rep0(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec);
void quatRot_rep3(F2D *vec, F2D *rQuat, F2D **rtr_val);
void cluster_quatRot_rep3(F2D *vec, F2D *rQuat, F2D **rtr_val);
void quatRot_rep2(F2D *vec, F2D *rQuat, F2D **rtr_val);
void cluster_quatRot_rep2(F2D *vec, F2D *rQuat, F2D **rtr_val);
void quatRot_rep1(F2D *vec, F2D *rQuat, F2D **rtr_val);
void cluster_quatRot_rep1(F2D *vec, F2D *rQuat, F2D **rtr_val);
void quatRot_rep0(F2D *vec, F2D *rQuat, F2D **rtr_val);
void randWrapper_out1_rep9(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep8(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep7(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep6(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep5(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void cluster_randWrapper_out1_rep5(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep4(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep3(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep2(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep1(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep16(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep15(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep14(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep13(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep12(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void cluster_randWrapper_out1_rep12(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep11(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep10(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_out1_rep0(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randWrapper_rep8(int m, int n, F2D **rtr_val);
void randWrapper_rep14(int m, int n, F2D **rtr_val);
void randWrapper_rep13(int m, int n, F2D **rtr_val);
void cluster_randWrapper_rep13(int m, int n, F2D **rtr_val);
void randWrapper_rep12(int m, int n, F2D **rtr_val);
void randWrapper_rep11(int m, int n, F2D **rtr_val);
void randWrapper_rep10(int m, int n, F2D **rtr_val);
void randWrapper_rep9(int m, int n, F2D **rtr_val);
void randWrapper_rep7(int m, int n, F2D **rtr_val);
void randWrapper_rep6(int m, int n, F2D **rtr_val);
void randWrapper_rep5(int m, int n, F2D **rtr_val);
void randWrapper_rep4(int m, int n, F2D **rtr_val);
void cluster_randWrapper_rep4(int m, int n, F2D **rtr_val);
void randWrapper_rep3(int m, int n, F2D **rtr_val);
void randWrapper_rep2(int m, int n, F2D **rtr_val);
void randWrapper_rep1(int m, int n, F2D **rtr_val);
void randWrapper_rep0(int m, int n, F2D **rtr_val);
void randnWrapper_out1_rep3(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void cluster_randnWrapper_out1_rep3(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randnWrapper_out1_rep2(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void cluster_randnWrapper_out1_rep2(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randnWrapper_out1_rep1(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randnWrapper_out1_rep0(float *seed, int *i, int *m, int *j, int *n, F2D *out);
void randnWrapper_rep2(int m, int n, F2D **rtr_val);
void randnWrapper_rep1(int m, int n, F2D **rtr_val);
void cluster_randnWrapper_rep1(int m, int n, F2D **rtr_val);
void randnWrapper_rep0(int m, int n, F2D **rtr_val);
void cluster_randnWrapper_rep0(int m, int n, F2D **rtr_val);
void weightedSample_out0_rep5(int *n, F2D *w);
void weightedSample_out0_rep4(int *n, F2D *w);
void cluster_weightedSample_out0_rep4(int *n, F2D *w);
void weightedSample_out0_rep3(int *n, F2D *w);
void weightedSample_out0_rep2(int *n, F2D *w);
void weightedSample_out0_rep1(int *n, F2D *w);
void weightedSample_out0_rep0(int *n, F2D *w);
void weightedSample_out1_rep5(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w);
void weightedSample_out1_rep4(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w);
void cluster_weightedSample_out1_rep4(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w);
void weightedSample_out1_rep3(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w);
void weightedSample_out1_rep2(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w);
void weightedSample_out1_rep1(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w);
void weightedSample_out1_rep0(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w);
void weightedSample_rep4(F2D *w, I2D **rtr_val);
void weightedSample_rep3(F2D *w, I2D **rtr_val);
void weightedSample_rep2(F2D *w, I2D **rtr_val);
void weightedSample_rep1(F2D *w, I2D **rtr_val);
void cluster_weightedSample_rep1(F2D *w, I2D **rtr_val);
void weightedSample_rep0(F2D *w, I2D **rtr_val);
F2D *readFile(char *fileName);
void fSetArray(int rows, int cols, float val, F2D **rtr_val);
void fMallocHandle(int rows, int cols, F2D **rtr_val);
void randWrapper(int m, int n, F2D **rtr_val);
void fFreeHandle(F2D *out);
unsigned int *photonStartTiming();
static void magic_timing_begin(unsigned int *cycles);
F2D *eul2quat(F2D *angle);
void fDeepCopyRange(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val);
void quatMul(F2D *a, F2D *b, F2D **rtr_val);
void iSetArray(int rows, int cols, int val, I2D **rtr_val);
void iMallocHandle(int rows, int cols, I2D **rtr_val);
unsigned int *photonEndTiming();
unsigned int *photonReportTiming(unsigned int *startCycles, unsigned int *endCycles);
void randnWrapper(int m, int n, F2D **rtr_val);
F2D *readSensorData(I2D *index, F2D *fid, I2D *type, I2D *eof);
void fMtimes(F2D *a, F2D *b, F2D **rtr_val);
void fDeepCopy(F2D *in, F2D **rtr_val);
void fSum2(F2D *inMat, int dir, F2D **rtr_val);
void ffDivide(F2D *a, F2D *b, F2D **rtr_val);
void fTimes(F2D *a, F2D *b, F2D **rtr_val);
void fHorzcat(F2D *a, F2D *b, F2D **rtr_val);
void mcl(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val);
void get3DGaussianProb(F2D *data, F2D *mean, F2D *A, F2D **rtr_val);
void fMinus(F2D *a, F2D *b, F2D **rtr_val);
void fSum(F2D *inMat, F2D **rtr_val);
void fMdivide(F2D *a, F2D *b, F2D **rtr_val);
void generateSample(F2D *w, F2D *quat, F2D *vel, F2D *pos);
void weightedSample(F2D *w, I2D **rtr_val);
void iFreeHandle(I2D *out);
void fDivide(F2D *a, float b, F2D **rtr_val);
void quatConj(F2D *a, F2D **rtr_val);
void quatRot(F2D *vec, F2D *rQuat, F2D **rtr_val);
void fPlus(F2D *a, F2D *b, F2D **rtr_val);
void fWriteMatrix(F2D *input, char *inpath);
int fSelfCheck(F2D *in1, char *path, float tol);
// void photonPrintTiming(unsigned int *elapsed);
int main(int argc, char *argv[]);
F2D *eul2quat(F2D *angle)
{
    F2D *ret;
    F2D *x, *y, *z;
    int k, i, j;
    int rows, cols;
    rows = angle->height;
    cols = angle->width;
    fDeepCopyRange_rep0(angle, 0, angle->height, 0, 1, &x);
    fDeepCopyRange_rep1(angle, 0, angle->height, 1, 1, &y);
    fDeepCopyRange_rep2(angle, 0, angle->height, 2, 1, &z);
    fSetArray_rep0(x->height, 4, 0, &ret);
    for (i = 0; i < rows; i++)
    {
        float xi, yi, zi;
        k = 0;
        xi = x->data[i];
        yi = y->data[i];
        zi = z->data[i];
        ret->data[(i)*ret->width + (k)] =
            cos(xi / 2) * cos(yi / 2) * cos(zi / 2) + sin(xi / 2) * sin(yi / 2) * sin(zi / 2);
        k++;
        ret->data[(i)*ret->width + (k)] =
            sin(xi / 2) * cos(yi / 2) * cos(zi / 2) - cos(xi / 2) * sin(yi / 2) * sin(zi / 2);
        k++;
        ret->data[(i)*ret->width + (k)] =
            cos(xi / 2) * sin(yi / 2) * cos(zi / 2) + sin(xi / 2) * cos(yi / 2) * sin(zi / 2);
        k++;
        ret->data[(i)*ret->width + (k)] =
            cos(xi / 2) * cos(yi / 2) * sin(zi / 2) - sin(xi / 2) * sin(yi / 2) * cos(zi / 2);
    }
    fFreeHandle_rep0(x);
    fFreeHandle_rep1(y);
    fFreeHandle_rep2(z);

    return ret;
}

void fDeepCopy_out0(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep7(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep13(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep12(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep11(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep10(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep9(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep8(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep6(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep5(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep4(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep3(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep2(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep1(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out0_rep0(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep7(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep13(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep12(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep11(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep10(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep9(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep8(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep6(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep5(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep4(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep3(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep2(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopy_out1_rep0(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
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
    fDeepCopy_out0_rep0(&rows, in, &cols);
    fMallocHandle_rep30(rows, cols, &out);
    fDeepCopy_out1_rep0(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep6(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep1(&rows, in, &cols);
    fMallocHandle_rep31(rows, cols, &out);
    fDeepCopy_out1_rep1(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep5(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep2(&rows, in, &cols);
    fMallocHandle_rep32(rows, cols, &out);
    fDeepCopy_out1_rep2(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep4(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep3(&rows, in, &cols);
    fMallocHandle_rep33(rows, cols, &out);
    fDeepCopy_out1_rep3(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep3(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep4(&rows, in, &cols);
    fMallocHandle_rep34(rows, cols, &out);
    fDeepCopy_out1_rep4(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep2(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep5(&rows, in, &cols);
    fMallocHandle_rep35(rows, cols, &out);
    fDeepCopy_out1_rep5(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep1(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep6(&rows, in, &cols);
    fMallocHandle_rep36(rows, cols, &out);
    fDeepCopy_out1_rep6(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep0(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep8(&rows, in, &cols);
    fMallocHandle_rep102(rows, cols, &out);
    fDeepCopy_out1_rep8(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep11(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep9(&rows, in, &cols);
    fMallocHandle_rep103(rows, cols, &out);
    fDeepCopy_out1_rep9(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep10(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep10(&rows, in, &cols);
    fMallocHandle_rep104(rows, cols, &out);
    fDeepCopy_out1_rep10(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep9(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep11(&rows, in, &cols);
    fMallocHandle_rep105(rows, cols, &out);
    fDeepCopy_out1_rep11(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep8(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep12(&rows, in, &cols);
    fMallocHandle_rep106(rows, cols, &out);
    fDeepCopy_out1_rep12(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopy_rep7(F2D *in, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int j;
    int i;
    fDeepCopy_out0_rep13(&rows, in, &cols);
    fMallocHandle_rep107(rows, cols, &out);
    fDeepCopy_out1_rep13(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopyRange_out0(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol)
{
    (*rows) = (*numberRows) + (*startRow);
    (*cols) = (*numberCols) + (*startCol);
}

void fDeepCopyRange_out0_rep7(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol)
{
    (*rows) = (*numberRows) + (*startRow);
    (*cols) = (*numberCols) + (*startCol);
}

void fDeepCopyRange_out0_rep6(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol)
{
    (*rows) = (*numberRows) + (*startRow);
    (*cols) = (*numberCols) + (*startCol);
}

void fDeepCopyRange_out0_rep5(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol)
{
    (*rows) = (*numberRows) + (*startRow);
    (*cols) = (*numberCols) + (*startCol);
}

void fDeepCopyRange_out0_rep4(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol)
{
    (*rows) = (*numberRows) + (*startRow);
    (*cols) = (*numberCols) + (*startCol);
}

void fDeepCopyRange_out0_rep3(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol)
{
    (*rows) = (*numberRows) + (*startRow);
    (*cols) = (*numberCols) + (*startCol);
}

void fDeepCopyRange_out0_rep2(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol)
{
    (*rows) = (*numberRows) + (*startRow);
    (*cols) = (*numberCols) + (*startCol);
}

void fDeepCopyRange_out0_rep1(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol)
{
    (*rows) = (*numberRows) + (*startRow);
    (*cols) = (*numberCols) + (*startCol);
}

void fDeepCopyRange_out0_rep0(int *rows, int *numberRows, int *startRow, int *cols, int *numberCols, int *startCol)
{
    (*rows) = (*numberRows) + (*startRow);
    (*cols) = (*numberCols) + (*startCol);
}

void fDeepCopyRange_out1(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out, F2D *in)
{
    (*k) = 0;
    for ((*i) = (*startRow); (*i) < (*rows); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*cols); (*j)++)
        {
            out->data[(*k)++] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopyRange_out1_rep7(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in)
{
    (*k) = 0;
    for ((*i) = (*startRow); (*i) < (*rows); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*cols); (*j)++)
        {
            out->data[(*k)++] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopyRange_out1_rep6(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in)
{
    (*k) = 0;
    for ((*i) = (*startRow); (*i) < (*rows); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*cols); (*j)++)
        {
            out->data[(*k)++] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopyRange_out1_rep5(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in)
{
    (*k) = 0;
    for ((*i) = (*startRow); (*i) < (*rows); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*cols); (*j)++)
        {
            out->data[(*k)++] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopyRange_out1_rep4(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in)
{
    (*k) = 0;
    for ((*i) = (*startRow); (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = (*startCol); (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[(*k)++] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopyRange_out1_rep3(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in)
{
    (*k) = 0;
    for ((*i) = (*startRow); (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = (*startCol); (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[(*k)++] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopyRange_out1_rep2(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in)
{
    (*k) = 0;
    for ((*i) = (*startRow); (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = (*startCol); (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[(*k)++] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopyRange_out1_rep1(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in)
{
    (*k) = 0;
    for ((*i) = (*startRow); (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = (*startCol); (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[(*k)++] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopyRange_out1_rep0(int *k, int *i, int *startRow, int *rows, int *j, int *startCol, int *cols, F2D *out,
                              F2D *in)
{
    (*k) = 0;
    for ((*i) = (*startRow); (*i) < (*rows); (*i)++)
    {
        for ((*j) = (*startCol); (*j) < (*cols); (*j)++)
        {
            out->data[(*k)++] = in->data[((*i)) * in->width + ((*j))];
        }
    }
}

void fDeepCopyRange(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int k;
    int j;
    int i;
    fDeepCopyRange_out0_rep0(&rows, &numberRows, &startRow, &cols, &numberCols, &startCol);
    fMallocHandle_rep1(numberRows, numberCols, &out);
    fDeepCopyRange_out1_rep0(&k, &i, &startRow, &rows, &j, &startCol, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopyRange_rep6(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int k;
    int j;
    int i;
    fDeepCopyRange_out0_rep1(&rows, &numberRows, &startRow, &cols, &numberCols, &startCol);
    fMallocHandle_rep2(numberRows, numberCols, &out);
    fDeepCopyRange_out1_rep1(&k, &i, &startRow, &rows, &j, &startCol, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopyRange_rep5(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int k;
    int j;
    int i;
    fDeepCopyRange_out0_rep2(&rows, &numberRows, &startRow, &cols, &numberCols, &startCol);
    fMallocHandle_rep3(numberRows, numberCols, &out);
    fDeepCopyRange_out1_rep2(&k, &i, &startRow, &rows, &j, &startCol, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopyRange_rep4(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int k;
    int j;
    int i;
    fDeepCopyRange_out0_rep3(&rows, &numberRows, &startRow, &cols, &numberCols, &startCol);
    fMallocHandle_rep4(numberRows, numberCols, &out);
    fDeepCopyRange_out1_rep3(&k, &i, &startRow, &rows, &j, &startCol, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopyRange_rep3(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int k;
    int j;
    int i;
    fDeepCopyRange_out0_rep4(&rows, &numberRows, &startRow, &cols, &numberCols, &startCol);
    fMallocHandle_rep5(numberRows, numberCols, &out);
    fDeepCopyRange_out1_rep4(&k, &i, &startRow, &rows, &j, &startCol, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopyRange_rep2(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int k;
    int j;
    int i;
    fDeepCopyRange_out0_rep5(&rows, &numberRows, &startRow, &cols, &numberCols, &startCol);
    fMallocHandle_rep6(numberRows, numberCols, &out);
    fDeepCopyRange_out1_rep5(&k, &i, &startRow, &rows, &j, &startCol, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopyRange_rep1(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int k;
    int j;
    int i;
    fDeepCopyRange_out0_rep6(&rows, &numberRows, &startRow, &cols, &numberCols, &startCol);
    fMallocHandle_rep7(numberRows, numberCols, &out);
    fDeepCopyRange_out1_rep6(&k, &i, &startRow, &rows, &j, &startCol, &cols, out, in);
    *rtr_val = out;
}

void fDeepCopyRange_rep0(F2D *in, int startRow, int numberRows, int startCol, int numberCols, F2D **rtr_val)
{
    int cols;
    int rows;
    F2D *out;
    int k;
    int j;
    int i;
    fDeepCopyRange_out0_rep7(&rows, &numberRows, &startRow, &cols, &numberCols, &startCol);
    fMallocHandle_rep8(numberRows, numberCols, &out);
    fDeepCopyRange_out1_rep7(&k, &i, &startRow, &rows, &j, &startCol, &cols, out, in);
    *rtr_val = out;
}

void fDivide_out0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fDivide_out1(int *i, int *rows, int *cols, F2D *c, F2D *a, float *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 3 min = 3
        c->data[(*i)] = a->data[(*i)] / (*b);
    }
}

void fDivide(F2D *a, float b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fDivide_out0(&rows, a, &cols);
    fMallocHandle_rep9(rows, cols, &c);
    fDivide_out1(&i, &rows, &cols, c, a, &b);
    *rtr_val = c;
}

void fFreeHandle_out0(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep86(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep85(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep84(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep83(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep132(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep131(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep130(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep129(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep128(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep127(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep82(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep138(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep137(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep136(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep135(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep134(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep133(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep81(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep144(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep143(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep142(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep141(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep140(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep139(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep80(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep93(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep92(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep91(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep90(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep89(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep88(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep87(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep79(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep100(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep99(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep98(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep97(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep96(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep95(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep94(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep78(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep107(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep106(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep105(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep104(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep103(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep102(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep101(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep77(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep114(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep113(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep112(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep111(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep110(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep109(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep108(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep76(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep120(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep119(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep118(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep117(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep116(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep115(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep75(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep126(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep125(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep124(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep123(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep122(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep121(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep74(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep150(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep149(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep148(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep147(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep146(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep145(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep73(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep156(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep155(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep154(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep153(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep152(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep151(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep72(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep162(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep161(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep160(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep159(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep158(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep157(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep71(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep168(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep167(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep166(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep165(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep164(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep163(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep70(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep174(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep173(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep172(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep171(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep170(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep169(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep69(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep68(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep67(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep66(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep65(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep64(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep63(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep62(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep61(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep60(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep59(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep58(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep57(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep56(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep55(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep54(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep53(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep52(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep51(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep50(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep49(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep48(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep47(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep46(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep45(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep44(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep43(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep42(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep41(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep40(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep39(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep38(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep37(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep36(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep35(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep34(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep33(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep32(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep31(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep30(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep29(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep28(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep27(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep26(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep25(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep24(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep23(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep22(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep21(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep20(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep19(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep18(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep17(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep16(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep15(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep14(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep13(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep12(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep11(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep10(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep9(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep8(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep7(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep6(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep5(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep4(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep3(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep2(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep1(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle_out0_rep0(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != nullptr;
}

void fFreeHandle(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep0(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep85(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep1(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep84(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep2(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep83(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep3(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep82(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep4(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep81(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep5(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep80(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep6(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep79(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep7(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep78(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep8(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep77(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep9(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep76(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep10(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep75(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep11(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep74(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep12(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep73(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep13(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep72(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep14(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep71(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep15(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep70(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep16(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep69(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep17(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep68(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep18(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep67(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep19(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep66(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep20(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep65(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep21(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep64(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep22(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep63(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep23(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep62(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep24(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep61(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep25(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep60(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep26(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep59(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep27(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep58(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep28(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep57(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep29(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep56(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep30(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep55(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep31(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep54(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep32(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep53(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep33(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep52(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep34(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep51(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep35(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep50(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep36(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep49(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep37(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep48(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep38(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep47(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep39(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep46(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep40(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep45(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep41(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep44(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep42(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep43(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep43(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep42(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep44(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep41(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep45(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep40(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep46(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep39(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep47(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep38(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep48(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep37(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep49(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep36(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep50(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep35(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep51(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep34(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep52(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep33(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep53(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep32(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep54(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep31(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep55(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep30(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep56(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep29(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep57(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep28(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep58(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep27(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep59(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep26(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep60(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep25(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep61(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep24(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep62(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep23(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep63(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep22(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep64(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep21(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep65(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep20(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep66(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep19(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep67(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep18(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep68(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep17(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep69(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep16(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep169(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep159(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep170(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep158(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep171(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep157(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep172(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep156(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep173(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep155(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep174(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep15(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep163(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep154(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep164(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep153(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep165(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep152(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep166(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep151(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep167(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep150(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep168(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep14(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep157(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep149(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep158(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep148(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep159(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep147(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep160(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep146(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep161(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep145(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep162(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep13(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep151(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep144(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep152(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep143(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep153(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep142(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep154(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep141(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep155(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep140(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep156(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep12(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep145(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep139(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep146(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep138(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep147(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep137(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep148(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep136(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep149(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep135(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep150(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep11(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep121(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep119(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep122(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep118(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep123(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep117(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep124(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep116(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep125(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep115(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep126(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep10(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep115(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep114(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep116(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep113(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep117(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep112(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep118(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep111(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep119(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep110(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep120(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep9(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep108(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep109(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep109(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep108(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep110(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep107(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep111(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep106(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep112(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep105(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep113(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep104(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep114(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep8(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep101(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep103(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep102(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep102(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep103(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep101(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep104(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep100(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep105(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep99(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep106(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep98(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep107(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep7(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep94(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep97(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep95(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep96(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep96(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep95(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep97(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep94(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep98(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep93(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep99(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep92(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep100(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep6(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep87(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep91(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep88(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep90(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep89(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep89(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep90(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep88(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep91(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep87(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep92(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep86(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep93(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep5(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep139(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep134(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep140(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep133(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep141(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep132(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep142(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep131(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep143(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep130(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep144(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep4(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep133(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep129(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep134(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep128(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep135(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep127(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep136(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep126(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep137(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep125(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep138(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep3(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep127(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep124(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep128(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep123(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep129(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep122(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep130(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep121(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep131(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep120(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep132(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep2(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep84(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep1(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep85(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep0(F2D *out)
{
    int decomp_0;
    fFreeHandle_out0_rep86(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fHorzcat_out0(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out0_rep2(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out0_rep8(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out0_rep7(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out0_rep6(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out0_rep5(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out0_rep4(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out0_rep3(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out0_rep1(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out0_rep0(int *rows, int *cols, F2D *a, int *c_1, int *c_2, F2D *b)
{
    F2D *out_;
    F2D *c;
    int r_3;
    int c_3;
    int r_1;
    (*rows) = 0;
    (*cols) = 0;
    r_1 = a->height;
    (*c_1) = a->width;
    (*cols) = (*cols) + (*c_1);
    (*c_2) = b->width;
    (*cols) = (*cols) + (*c_2);
    (*rows) = r_1;
}

void fHorzcat_out1(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat_out1_rep2(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat_out1_rep8(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat_out1_rep7(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat_out1_rep6(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat_out1_rep5(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat_out1_rep4(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat_out1_rep3(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat_out1_rep1(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat_out1_rep0(int *i, int *rows, int *k, int *j, int *c_1, F2D *out, F2D *a, int *c_2, F2D *b)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        for ((*j) = 0; (*j) < (*c_1); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = a->data[((*i)) * a->width + ((*j))];
            (*k)++;
        }
        for ((*j) = 0; (*j) < (*c_2); (*j)++)
        {
            out->data[((*i)) * out->width + ((*k))] = b->data[((*i)) * b->width + ((*j))];
            (*k)++;
        }
    }
}

void fHorzcat(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_2;
    int c_1;
    int k;
    int j;
    int i;
    int cols;
    int rows;
    F2D *out;
    fHorzcat_out0_rep0(&rows, &cols, a, &c_1, &c_2, b);
    fMallocHandle_rep73(rows, cols, &out);
    fHorzcat_out1_rep0(&i, &rows, &k, &j, &c_1, out, a, &c_2, b);
    *rtr_val = out;
}

void fHorzcat_rep1(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_2;
    int c_1;
    int k;
    int j;
    int i;
    int cols;
    int rows;
    F2D *out;
    fHorzcat_out0_rep1(&rows, &cols, a, &c_1, &c_2, b);
    fMallocHandle_rep74(rows, cols, &out);
    fHorzcat_out1_rep1(&i, &rows, &k, &j, &c_1, out, a, &c_2, b);
    *rtr_val = out;
}

void fHorzcat_rep0(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_2;
    int c_1;
    int k;
    int j;
    int i;
    int cols;
    int rows;
    F2D *out;
    fHorzcat_out0_rep3(&rows, &cols, a, &c_1, &c_2, b);
    fMallocHandle_rep177(rows, cols, &out);
    fHorzcat_out1_rep3(&i, &rows, &k, &j, &c_1, out, a, &c_2, b);
    *rtr_val = out;
}

void fHorzcat_rep6(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_2;
    int c_1;
    int k;
    int j;
    int i;
    int cols;
    int rows;
    F2D *out;
    fHorzcat_out0_rep4(&rows, &cols, a, &c_1, &c_2, b);
    fMallocHandle_rep178(rows, cols, &out);
    fHorzcat_out1_rep4(&i, &rows, &k, &j, &c_1, out, a, &c_2, b);
    *rtr_val = out;
}

void fHorzcat_rep5(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_2;
    int c_1;
    int k;
    int j;
    int i;
    int cols;
    int rows;
    F2D *out;
    fHorzcat_out0_rep5(&rows, &cols, a, &c_1, &c_2, b);
    fMallocHandle_rep179(rows, cols, &out);
    fHorzcat_out1_rep5(&i, &rows, &k, &j, &c_1, out, a, &c_2, b);
    *rtr_val = out;
}

void fHorzcat_rep4(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_2;
    int c_1;
    int k;
    int j;
    int i;
    int cols;
    int rows;
    F2D *out;
    fHorzcat_out0_rep6(&rows, &cols, a, &c_1, &c_2, b);
    fMallocHandle_rep180(rows, cols, &out);
    fHorzcat_out1_rep6(&i, &rows, &k, &j, &c_1, out, a, &c_2, b);
    *rtr_val = out;
}

void fHorzcat_rep3(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_2;
    int c_1;
    int k;
    int j;
    int i;
    int cols;
    int rows;
    F2D *out;
    fHorzcat_out0_rep7(&rows, &cols, a, &c_1, &c_2, b);
    fMallocHandle_rep181(rows, cols, &out);
    fHorzcat_out1_rep7(&i, &rows, &k, &j, &c_1, out, a, &c_2, b);
    *rtr_val = out;
}

void fHorzcat_rep2(F2D *a, F2D *b, F2D **rtr_val)
{
    int c_2;
    int c_1;
    int k;
    int j;
    int i;
    int cols;
    int rows;
    F2D *out;
    fHorzcat_out0_rep8(&rows, &cols, a, &c_1, &c_2, b);
    fMallocHandle_rep182(rows, cols, &out);
    fHorzcat_out1_rep8(&i, &rows, &k, &j, &c_1, out, a, &c_2, b);
    *rtr_val = out;
}

void fMallocHandle_out1(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep21(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep40(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep39(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep38(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep37(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep36(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep35(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep34(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep33(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep117(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep116(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep115(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep114(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep113(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep112(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep111(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep32(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep20(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep19(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep18(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep17(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep16(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep15(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep14(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep13(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep12(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep11(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep80(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep79(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep78(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep203(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep202(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep201(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep200(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep199(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep198(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep197(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep77(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep10(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep96(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep95(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep94(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep93(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep92(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep91(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep90(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep9(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep89(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep88(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep87(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep86(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep85(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep84(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep83(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep82(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep81(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep8(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep31(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep30(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep29(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep28(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep27(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep26(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep25(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep24(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep23(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep133(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep132(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep131(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep130(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep129(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep128(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep127(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep126(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep22(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep7(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep103(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep102(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep101(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep100(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep99(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep98(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep97(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep6(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep76(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep75(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep74(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep73(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep72(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep71(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep70(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep69(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep68(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep67(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep66(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep65(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep64(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep63(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep62(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep61(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep60(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep59(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep58(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep57(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep56(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep55(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep216(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep215(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep214(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep213(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep212(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep211(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep54(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep153(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep152(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep151(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep150(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep149(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep148(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep147(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep146(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep145(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep144(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep225(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep224(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep223(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep222(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep221(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep220(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep219(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep218(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep217(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep143(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep142(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep53(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep210(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep209(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep208(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep207(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep206(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep205(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep204(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep52(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep196(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep195(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep194(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep193(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep192(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep191(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep190(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep51(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep110(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep109(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep233(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep232(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep231(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep230(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep229(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep228(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep227(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep226(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep108(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep249(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep248(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep247(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep246(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep245(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep244(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep243(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep242(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep107(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep106(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep105(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep104(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep50(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep189(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep188(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep241(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep240(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep239(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep238(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep237(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep236(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep235(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep234(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep187(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep186(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep185(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep184(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep183(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep49(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep141(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep140(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep139(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep138(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep137(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep136(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep135(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep134(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep48(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep125(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep124(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep123(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep122(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep121(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep120(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep119(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep118(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep47(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep182(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep181(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep180(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep179(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep178(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep177(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep176(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep46(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep175(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep174(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep173(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep172(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep171(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep170(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep169(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep45(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep168(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep167(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep166(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep165(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep164(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep163(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep162(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep44(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep43(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep161(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep160(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep159(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep158(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep157(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep156(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep155(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep154(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep42(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep41(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep5(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep4(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep3(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep2(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep1(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out1_rep0(F2D *out, int *rows, int *cols)
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
    fMallocHandle_out1_rep0(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep20(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep1(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep19(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep2(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep18(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep3(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep17(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep4(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep16(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep5(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep15(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep41(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep72(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24 min = 32008 avg = 16016
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep42(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep71(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep154(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep146(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep155(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep145(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep156(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep144(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep157(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep143(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep158(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep142(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep159(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep141(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep160(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep140(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep161(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep70(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep44(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep69(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep162(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep152(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep163(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep151(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep164(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep150(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep165(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep149(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep166(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep148(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep167(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep147(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep168(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep68(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep169(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep158(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep170(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep157(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep171(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep156(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep172(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep155(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep173(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep154(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep174(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep153(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep175(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep67(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep176(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep164(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep177(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep163(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep178(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep162(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep179(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep161(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep180(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep160(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep181(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep159(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep182(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep66(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep118(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep114(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep119(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep113(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep120(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep112(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep121(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep111(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep122(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep110(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep123(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep109(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep124(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep108(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep125(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep65(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep134(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep128(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep135(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep127(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep136(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep126(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep137(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep125(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep138(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep124(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep139(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep123(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep140(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep122(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep141(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep64(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep183(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep170(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep184(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep169(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep185(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep168(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep186(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep167(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep187(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep166(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep234(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep215(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep235(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep214(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep236(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep213(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep237(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep212(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep238(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep211(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep239(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep210(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep240(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep209(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep241(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep165(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep189(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep63(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep104(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep101(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep105(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep100(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep106(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep99(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep107(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep98(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep242(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep222(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep243(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep221(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep244(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep220(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep245(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep219(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep246(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep218(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep247(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep217(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep248(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep216(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep249(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep97(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep226(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep208(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep227(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep207(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep228(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep206(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep229(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep205(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep230(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep204(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep231(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep203(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep232(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep202(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep233(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep96(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep110(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep62(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep190(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep176(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep191(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep175(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep192(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep174(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep193(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep173(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep194(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep172(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep195(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep171(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep196(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep61(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep204(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep188(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep205(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep187(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep206(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep186(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep207(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep185(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep208(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep184(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep209(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep183(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep210(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep60(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep142(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep139(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep143(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep138(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep217(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep201(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep218(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep200(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep219(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep199(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep220(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep198(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep221(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep197(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep222(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep196(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep223(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep195(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep224(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep194(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep225(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep137(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep145(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep136(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep146(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep135(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep147(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep134(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep148(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep133(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep149(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep132(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep150(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep131(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep151(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep130(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep152(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep129(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep153(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep59(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep211(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep193(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep212(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep192(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep213(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep191(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep214(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep190(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep215(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep189(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep216(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep58(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 1768 min = 1768 avg = 1768
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep56(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep57(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 40 min = 40 avg = 40
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep57(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep56(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep58(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep55(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep59(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep54(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep60(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep53(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep61(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep52(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep62(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep51(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 44 min = 44 avg = 44
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep63(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep50(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep64(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep49(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep65(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep48(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep66(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep47(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep67(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep46(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 44 min = 44 avg = 44
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep68(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep45(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 1064 min = 1064 avg = 1064
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep69(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep44(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep70(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep43(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep71(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep42(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep72(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep41(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep73(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep40(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep74(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep39(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 44 min = 44 avg = 44
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep75(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep38(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep76(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep14(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep97(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep95(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep98(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep94(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep99(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep93(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep100(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep92(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep101(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep91(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep102(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep90(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep103(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep13(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep22(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep29(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep126(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep121(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep127(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep120(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep128(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep119(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep129(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep118(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep130(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep117(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep131(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep116(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep132(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep115(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep133(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep28(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep24(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep27(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep25(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep26(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep26(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep25(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep27(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep24(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep28(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep23(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep29(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep22(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep30(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep21(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep31(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep12(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep81(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep83(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep82(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep82(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep83(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep81(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep84(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep80(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep85(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep79(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep86(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep78(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep87(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep77(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep88(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep76(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep89(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep11(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep90(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep89(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep91(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep88(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep92(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep87(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep93(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep86(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep94(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep85(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep95(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep84(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep96(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep10(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep77(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep75(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep197(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep182(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep198(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep181(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep199(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep180(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep200(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep179(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep201(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep178(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24 min = 24 avg = 24
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep202(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep177(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep203(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep74(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep79(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep73(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep80(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep9(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep12(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep8(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 8008 avg = 4010
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep13(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep7(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 8008 avg = 4010
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep14(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep6(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 12 min = 8008 avg = 4010
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep15(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep5(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep16(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep4(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep17(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep3(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep18(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep2(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep19(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep1(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep20(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep0(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep32(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep37(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep111(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep107(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep112(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep106(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep113(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep105(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep114(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep104(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep115(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep103(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep116(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep102(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep117(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep36(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep34(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep35(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 32008 min = 32008 avg = 32008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep35(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep34(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 20 min = 20 avg = 20
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep36(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep33(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep37(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep32(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep38(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep31(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 24008 min = 24008 avg = 24008
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep39(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep30(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out1_rep40(out, &rows, &cols);
    *rtr_val = out;
}

void fMdivide_out0(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2)
{
    int j;
    int decomp_0;
    int decomp_1;
    (*rows) = a->height;
    (*cols) = a->width;
    decomp_0 = (*rows) != b->height;
    decomp_1 = (*cols) != b->width;
    (*decomp_2) = decomp_0 || decomp_1;
}

void fMdivide_out0_rep5(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2)
{
    int j;
    int decomp_0;
    int decomp_1;
    (*rows) = a->height;
    (*cols) = a->width;
    decomp_0 = (*rows) != b->height;
    decomp_1 = (*cols) != b->width;
    (*decomp_2) = decomp_0 || decomp_1;
}

void fMdivide_out0_rep4(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2)
{
    int j;
    int decomp_0;
    int decomp_1;
    (*rows) = a->height;
    (*cols) = a->width;
    decomp_0 = (*rows) != b->height;
    decomp_1 = (*cols) != b->width;
    (*decomp_2) = decomp_0 || decomp_1;
}

void fMdivide_out0_rep3(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2)
{
    int j;
    int decomp_0;
    int decomp_1;
    (*rows) = a->height;
    (*cols) = a->width;
    decomp_0 = (*rows) != b->height;
    decomp_1 = (*cols) != b->width;
    (*decomp_2) = decomp_0 || decomp_1;
}

void fMdivide_out0_rep2(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2)
{
    int j;
    int decomp_0;
    int decomp_1;
    (*rows) = a->height;
    (*cols) = a->width;
    decomp_0 = (*rows) != b->height;
    decomp_1 = (*cols) != b->width;
    (*decomp_2) = decomp_0 || decomp_1;
}

void fMdivide_out0_rep1(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2)
{
    int j;
    int decomp_0;
    int decomp_1;
    (*rows) = a->height;
    (*cols) = a->width;
    decomp_0 = (*rows) != b->height;
    decomp_1 = (*cols) != b->width;
    (*decomp_2) = decomp_0 || decomp_1;
}

void fMdivide_out0_rep0(int *rows, F2D *a, int *cols, F2D *b, int *decomp_2)
{
    int j;
    int decomp_0;
    int decomp_1;
    (*rows) = a->height;
    (*cols) = a->width;
    decomp_0 = (*rows) != b->height;
    decomp_1 = (*cols) != b->width;
    (*decomp_2) = decomp_0 || decomp_1;
}

void fMdivide_out1(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0)
{
    printf("fMDivide Mismatch = \nrows: %d\t%d\ncols: %d\t%d\n", (*rows), b->height, (*cols), b->width);
    (*__rtr_val_0) = nullptr;
    (*__rtr_flag_0) = 1;
}

void fMdivide_out1_rep5(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0)
{
    printf("fMDivide Mismatch = \nrows: %d\t%d\ncols: %d\t%d\n", (*rows), b->height, (*cols), b->width);
    (*__rtr_val_0) = nullptr;
    (*__rtr_flag_0) = 1;
}

void fMdivide_out1_rep4(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0)
{
    printf("fMDivide Mismatch = \nrows: %d\t%d\ncols: %d\t%d\n", (*rows), b->height, (*cols), b->width);
    (*__rtr_val_0) = nullptr;
    (*__rtr_flag_0) = 1;
}

void fMdivide_out1_rep3(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0)
{
    printf("fMDivide Mismatch = \nrows: %d\t%d\ncols: %d\t%d\n", (*rows), b->height, (*cols), b->width);
    (*__rtr_val_0) = nullptr;
    (*__rtr_flag_0) = 1;
}

void fMdivide_out1_rep2(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0)
{
    printf("fMDivide Mismatch = \nrows: %d\t%d\ncols: %d\t%d\n", (*rows), b->height, (*cols), b->width);
    (*__rtr_val_0) = nullptr;
    (*__rtr_flag_0) = 1;
}

void fMdivide_out1_rep1(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0)
{
    printf("fMDivide Mismatch = \nrows: %d\t%d\ncols: %d\t%d\n", (*rows), b->height, (*cols), b->width);
    (*__rtr_val_0) = nullptr;
    (*__rtr_flag_0) = 1;
}

void fMdivide_out1_rep0(int *rows, F2D *b, int *cols, F2D **__rtr_val_0, int *__rtr_flag_0)
{
    printf("fMDivide Mismatch = \nrows: %d\t%d\ncols: %d\t%d\n", (*rows), b->height, (*cols), b->width);
    (*__rtr_val_0) = nullptr;
    (*__rtr_flag_0) = 1;
}

void fMdivide_out2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] / b->data[(*i)];
    }
}

void fMdivide_out2_rep5(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] / b->data[(*i)];
    }
}

void fMdivide_out2_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] / b->data[(*i)];
    }
}

void fMdivide_out2_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] / b->data[(*i)];
    }
}

void fMdivide_out2_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] / b->data[(*i)];
    }
}

void fMdivide_out2_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] / b->data[(*i)];
    }
}

void fMdivide_out2_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] / b->data[(*i)];
    }
}

void fMdivide(F2D *a, F2D *b, F2D **rtr_val)
{
    int decomp_2;
    int cols;
    int rows;
    int i;
    F2D *c;
    fMdivide_out0_rep0(&rows, a, &cols, b, &decomp_2);
    if (decomp_2)
    {
        F2D *__rtr_val_0;
        int __rtr_flag_0 = 0;
        fMdivide_out1_rep0(&rows, b, &cols, &__rtr_val_0, &__rtr_flag_0);
        if (__rtr_flag_0)
        {
            *rtr_val = __rtr_val_0;

            return;
        }
    }
    fMallocHandle_rep84(rows, cols, &c);
    fMdivide_out2_rep0(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMdivide_rep4(F2D *a, F2D *b, F2D **rtr_val)
{
    int decomp_2;
    int cols;
    int rows;
    int i;
    F2D *c;
    fMdivide_out0_rep1(&rows, a, &cols, b, &decomp_2);
    if (decomp_2)
    {
        F2D *__rtr_val_0;
        int __rtr_flag_0 = 0;
        fMdivide_out1_rep1(&rows, b, &cols, &__rtr_val_0, &__rtr_flag_0);
        if (__rtr_flag_0)
        {
            *rtr_val = __rtr_val_0;

            return;
        }
    }
    fMallocHandle_rep85(rows, cols, &c);
    fMdivide_out2_rep1(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMdivide_rep3(F2D *a, F2D *b, F2D **rtr_val)
{
    int decomp_2;
    int cols;
    int rows;
    int i;
    F2D *c;
    fMdivide_out0_rep2(&rows, a, &cols, b, &decomp_2);
    if (decomp_2)
    {
        F2D *__rtr_val_0;
        int __rtr_flag_0 = 0;
        fMdivide_out1_rep2(&rows, b, &cols, &__rtr_val_0, &__rtr_flag_0);
        if (__rtr_flag_0)
        {
            *rtr_val = __rtr_val_0;

            return;
        }
    }
    fMallocHandle_rep86(rows, cols, &c);
    fMdivide_out2_rep2(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMdivide_rep2(F2D *a, F2D *b, F2D **rtr_val)
{
    int decomp_2;
    int cols;
    int rows;
    int i;
    F2D *c;
    fMdivide_out0_rep3(&rows, a, &cols, b, &decomp_2);
    if (decomp_2)
    {
        F2D *__rtr_val_0;
        int __rtr_flag_0 = 0;
        fMdivide_out1_rep3(&rows, b, &cols, &__rtr_val_0, &__rtr_flag_0);
        if (__rtr_flag_0)
        {
            *rtr_val = __rtr_val_0;

            return;
        }
    }
    fMallocHandle_rep87(rows, cols, &c);
    fMdivide_out2_rep3(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMdivide_rep1(F2D *a, F2D *b, F2D **rtr_val)
{
    int decomp_2;
    int cols;
    int rows;
    int i;
    F2D *c;
    fMdivide_out0_rep4(&rows, a, &cols, b, &decomp_2);
    if (decomp_2)
    {
        F2D *__rtr_val_0;
        int __rtr_flag_0 = 0;
        fMdivide_out1_rep4(&rows, b, &cols, &__rtr_val_0, &__rtr_flag_0);
        if (__rtr_flag_0)
        {
            *rtr_val = __rtr_val_0;

            return;
        }
    }
    fMallocHandle_rep88(rows, cols, &c);
    fMdivide_out2_rep4(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMdivide_rep0(F2D *a, F2D *b, F2D **rtr_val)
{
    int decomp_2;
    int cols;
    int rows;
    int i;
    F2D *c;
    fMdivide_out0_rep5(&rows, a, &cols, b, &decomp_2);
    if (decomp_2)
    {
        F2D *__rtr_val_0;
        int __rtr_flag_0 = 0;
        fMdivide_out1_rep5(&rows, b, &cols, &__rtr_val_0, &__rtr_flag_0);
        if (__rtr_flag_0)
        {
            *rtr_val = __rtr_val_0;

            return;
        }
    }
    fMallocHandle_rep89(rows, cols, &c);
    fMdivide_out2_rep5(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMinus_out0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out0_rep7(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out0_rep6(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out0_rep5(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out0_rep4(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out0_rep3(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out0_rep2(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out0_rep1(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out0_rep0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fMinus_out1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus_out1_rep7(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus_out1_rep6(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus_out1_rep5(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus_out1_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus_out1_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus_out1_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] - b->data[(*i)];
    }
}

void fMinus(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fMinus_out0_rep0(&rows, a, &cols);
    fMallocHandle_rep76(rows, cols, &c);
    fMinus_out1_rep0(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMinus_rep6(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fMinus_out0_rep1(&rows, a, &cols);
    fMallocHandle_rep77(rows, cols, &c);
    fMinus_out1_rep1(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMinus_rep5(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fMinus_out0_rep2(&rows, a, &cols);
    fMallocHandle_rep78(rows, cols, &c);
    fMinus_out1_rep2(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMinus_rep4(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fMinus_out0_rep3(&rows, a, &cols);
    fMallocHandle_rep79(rows, cols, &c);
    fMinus_out1_rep3(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMinus_rep3(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fMinus_out0_rep4(&rows, a, &cols);
    fMallocHandle_rep80(rows, cols, &c);
    fMinus_out1_rep4(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMinus_rep2(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fMinus_out0_rep5(&rows, a, &cols);
    fMallocHandle_rep81(rows, cols, &c);
    fMinus_out1_rep5(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMinus_rep1(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fMinus_out0_rep6(&rows, a, &cols);
    fMallocHandle_rep82(rows, cols, &c);
    fMinus_out1_rep6(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMinus_rep0(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fMinus_out0_rep7(&rows, a, &cols);
    fMallocHandle_rep83(rows, cols, &c);
    fMinus_out1_rep7(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fMtimes_out0(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep8(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep15(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep14(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep13(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep12(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep11(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep10(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep9(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep7(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep6(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep5(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep4(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep3(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep2(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep1(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out0_rep0(int *m, F2D *a, int *p, F2D *b, int *n)
{
    int p1;
    (*m) = a->height;
    (*p) = a->width;
    p1 = b->height;
    (*n) = b->width;
}

void fMtimes_out1(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep8(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep15(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep14(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep13(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 1 min = 1
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep12(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 1 min = 1
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep11(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 1 min = 1
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep10(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep9(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep7(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 1 min = 1
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep6(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 1 min = 1
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep5(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 1 min = 1
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep4(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep3(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 1 min = 1
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep2(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 1 min = 1
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep1(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
#pragma HLS loop_tripcount max = 1 min = 1
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes_out1_rep0(int *i, int *m, int *j, int *n, float *temp, int *k, int *p, F2D *b, F2D *a, F2D *out)
{
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            (*temp) = 0;
            for ((*k) = 0; (*k) < (*p); (*k)++)
            {
                (*temp) = (*temp) + b->data[((*k)) * b->width + ((*j))] * a->data[((*i)) * a->width + ((*k))];
            }
            out->data[((*i)) * out->width + ((*j))] = (*temp);
        }
    }
}

void fMtimes(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep0(&m, a, &p, b, &n);
    fMallocHandle_rep21(m, n, &out);
    fMtimes_out1_rep0(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep7(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep1(&m, a, &p, b, &n);
    fMallocHandle_rep22(m, n, &out);
    fMtimes_out1_rep1(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep6(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep2(&m, a, &p, b, &n);
    fMallocHandle_rep23(m, n, &out);
    fMtimes_out1_rep2(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep5(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep3(&m, a, &p, b, &n);
    fMallocHandle_rep24(m, n, &out);
    fMtimes_out1_rep3(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep4(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep4(&m, a, &p, b, &n);
    fMallocHandle_rep25(m, n, &out);
    fMtimes_out1_rep4(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep3(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep5(&m, a, &p, b, &n);
    fMallocHandle_rep26(m, n, &out);
    fMtimes_out1_rep5(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep2(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep6(&m, a, &p, b, &n);
    fMallocHandle_rep27(m, n, &out);
    fMtimes_out1_rep6(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep1(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep7(&m, a, &p, b, &n);
    fMallocHandle_rep28(m, n, &out);
    fMtimes_out1_rep7(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep0(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep9(&m, a, &p, b, &n);
    fMallocHandle_rep115(m, n, &out);
    fMtimes_out1_rep9(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep13(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep10(&m, a, &p, b, &n);
    fMallocHandle_rep116(m, n, &out);
    fMtimes_out1_rep10(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep12(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep11(&m, a, &p, b, &n);
    fMallocHandle_rep117(m, n, &out);
    fMtimes_out1_rep11(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep11(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep12(&m, a, &p, b, &n);
    fMallocHandle_rep118(m, n, &out);
    fMtimes_out1_rep12(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep10(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep13(&m, a, &p, b, &n);
    fMallocHandle_rep119(m, n, &out);
    fMtimes_out1_rep13(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep9(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep14(&m, a, &p, b, &n);
    fMallocHandle_rep120(m, n, &out);
    fMtimes_out1_rep14(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fMtimes_rep8(F2D *a, F2D *b, F2D **rtr_val)
{
    float temp;
    int k;
    int j;
    int i;
    int n;
    int p;
    int m;
    F2D *out;
    fMtimes_out0_rep15(&m, a, &p, b, &n);
    fMallocHandle_rep121(m, n, &out);
    fMtimes_out1_rep15(&i, &m, &j, &n, &temp, &k, &p, b, a, out);
    *rtr_val = out;
}

void fPlus_out0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fPlus_out0_rep5(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fPlus_out0_rep4(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fPlus_out0_rep3(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fPlus_out0_rep2(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fPlus_out0_rep1(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fPlus_out0_rep0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fPlus_out1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] + b->data[(*i)];
    }
}

void fPlus_out1_rep5(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        c->data[(*i)] = a->data[(*i)] + b->data[(*i)];
    }
}

void fPlus_out1_rep4(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        c->data[(*i)] = a->data[(*i)] + b->data[(*i)];
    }
}

void fPlus_out1_rep3(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        c->data[(*i)] = a->data[(*i)] + b->data[(*i)];
    }
}

void fPlus_out1_rep2(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        c->data[(*i)] = a->data[(*i)] + b->data[(*i)];
    }
}

void fPlus_out1_rep1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        c->data[(*i)] = a->data[(*i)] + b->data[(*i)];
    }
}

void fPlus_out1_rep0(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
        c->data[(*i)] = a->data[(*i)] + b->data[(*i)];
    }
}

void fPlus(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fPlus_out0_rep0(&rows, a, &cols);
    fMallocHandle_rep90(rows, cols, &c);
    fPlus_out1_rep0(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fPlus_rep4(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fPlus_out0_rep1(&rows, a, &cols);
    fMallocHandle_rep91(rows, cols, &c);
    fPlus_out1_rep1(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fPlus_rep3(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fPlus_out0_rep2(&rows, a, &cols);
    fMallocHandle_rep92(rows, cols, &c);
    fPlus_out1_rep2(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fPlus_rep2(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fPlus_out0_rep3(&rows, a, &cols);
    fMallocHandle_rep93(rows, cols, &c);
    fPlus_out1_rep3(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fPlus_rep1(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fPlus_out0_rep4(&rows, a, &cols);
    fMallocHandle_rep94(rows, cols, &c);
    fPlus_out1_rep4(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void fPlus_rep0(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fPlus_out0_rep5(&rows, a, &cols);
    fMallocHandle_rep95(rows, cols, &c);
    fPlus_out1_rep5(&i, &rows, &cols, c, a, b);
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
#pragma clava malloc_size max = 1056 min = 1056 avg = 1056
    buffer = (float *)malloc(sizeof(float) * r1 * c1);
    sprintf(file, "%s/expected_C.txt", path);
    fd = fopen(file, "r");
    if (fd == nullptr)
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

void fSetArray_out1(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep34(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep33(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep72(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep71(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep70(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep69(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep68(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep67(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep66(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep32(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep31(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep78(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep77(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep76(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep75(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep74(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep73(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep30(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep84(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep83(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep82(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep81(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep80(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep79(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep29(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep90(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep89(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep88(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep87(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep86(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep85(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep28(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep47(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep46(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep45(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep44(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep43(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep42(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep41(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep27(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep54(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep53(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep52(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep51(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep50(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep49(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep48(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep26(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep96(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep95(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep94(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep93(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep92(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep135(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep134(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep133(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep132(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep131(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep130(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep129(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep91(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep25(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep40(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep39(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep38(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep37(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep142(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep141(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep140(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep139(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep138(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep137(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep136(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep36(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep128(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep127(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep126(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep125(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep124(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep123(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep122(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep35(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep24(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep102(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep101(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep100(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep99(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep98(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep97(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep23(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep108(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep107(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep106(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep105(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep104(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep103(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep22(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep65(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep64(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep121(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep120(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep119(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep118(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep117(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep116(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep115(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep114(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep63(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep62(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep61(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep60(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep59(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep58(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep57(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep56(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep55(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep21(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep113(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep112(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep111(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep110(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep109(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep20(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep19(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep18(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep17(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep16(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep15(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep14(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep13(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 3 min = 3
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep12(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep11(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep10(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep9(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1 min = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep8(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 3 min = 3
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep7(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep6(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep5(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep4(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep3(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep2(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep1(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out1_rep0(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
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
    fMallocHandle_rep38(rows, cols, &out);
    fSetArray_out1_rep0(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep33(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep39(rows, cols, &out);
    fSetArray_out1_rep1(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep32(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep40(rows, cols, &out);
    fSetArray_out1_rep2(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep31(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep41(rows, cols, &out);
    fSetArray_out1_rep3(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep30(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep42(rows, cols, &out);
    fSetArray_out1_rep4(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep29(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep43(rows, cols, &out);
    fSetArray_out1_rep5(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep28(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep44(rows, cols, &out);
    fSetArray_out1_rep6(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep27(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep45(rows, cols, &out);
    fSetArray_out1_rep7(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep26(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep46(rows, cols, &out);
    fSetArray_out1_rep8(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep25(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep47(rows, cols, &out);
    fSetArray_out1_rep9(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep24(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep48(rows, cols, &out);
    fSetArray_out1_rep10(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep23(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep49(rows, cols, &out);
    fSetArray_out1_rep11(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep22(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep50(rows, cols, &out);
    fSetArray_out1_rep12(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep21(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep51(rows, cols, &out);
    fSetArray_out1_rep13(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep20(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep52(rows, cols, &out);
    fSetArray_out1_rep14(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep19(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep53(rows, cols, &out);
    fSetArray_out1_rep15(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep18(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep54(rows, cols, &out);
    fSetArray_out1_rep16(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep17(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep55(rows, cols, &out);
    fSetArray_out1_rep17(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep16(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep56(rows, cols, &out);
    fSetArray_out1_rep18(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep15(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep57(rows, cols, &out);
    fSetArray_out1_rep19(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep14(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep58(rows, cols, &out);
    fSetArray_out1_rep20(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep13(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep189(rows, cols, &out);
    fSetArray_out1_rep109(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep100(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep190(rows, cols, &out);
    fSetArray_out1_rep110(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep99(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep191(rows, cols, &out);
    fSetArray_out1_rep111(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep98(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep192(rows, cols, &out);
    fSetArray_out1_rep112(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep97(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep193(rows, cols, &out);
    fSetArray_out1_rep113(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep12(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep129(rows, cols, &out);
    fSetArray_out1_rep55(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep60(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep130(rows, cols, &out);
    fSetArray_out1_rep56(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep59(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep131(rows, cols, &out);
    fSetArray_out1_rep57(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep58(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep132(rows, cols, &out);
    fSetArray_out1_rep58(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep57(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep133(rows, cols, &out);
    fSetArray_out1_rep59(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep56(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep134(rows, cols, &out);
    fSetArray_out1_rep60(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep55(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep135(rows, cols, &out);
    fSetArray_out1_rep61(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep54(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep136(rows, cols, &out);
    fSetArray_out1_rep62(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep53(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep137(rows, cols, &out);
    fSetArray_out1_rep63(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep52(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep194(rows, cols, &out);
    fSetArray_out1_rep114(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep107(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep195(rows, cols, &out);
    fSetArray_out1_rep115(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep106(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep196(rows, cols, &out);
    fSetArray_out1_rep116(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep105(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep197(rows, cols, &out);
    fSetArray_out1_rep117(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep104(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep198(rows, cols, &out);
    fSetArray_out1_rep118(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep103(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep199(rows, cols, &out);
    fSetArray_out1_rep119(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep102(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep200(rows, cols, &out);
    fSetArray_out1_rep120(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep101(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep201(rows, cols, &out);
    fSetArray_out1_rep121(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep51(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep139(rows, cols, &out);
    fSetArray_out1_rep65(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep11(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep183(rows, cols, &out);
    fSetArray_out1_rep103(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep96(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep184(rows, cols, &out);
    fSetArray_out1_rep104(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep95(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep185(rows, cols, &out);
    fSetArray_out1_rep105(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep94(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep186(rows, cols, &out);
    fSetArray_out1_rep106(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep93(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep187(rows, cols, &out);
    fSetArray_out1_rep107(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep92(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep188(rows, cols, &out);
    fSetArray_out1_rep108(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep10(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep171(rows, cols, &out);
    fSetArray_out1_rep97(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep91(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep172(rows, cols, &out);
    fSetArray_out1_rep98(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep90(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep173(rows, cols, &out);
    fSetArray_out1_rep99(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep89(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep174(rows, cols, &out);
    fSetArray_out1_rep100(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep88(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep175(rows, cols, &out);
    fSetArray_out1_rep101(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep87(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep176(rows, cols, &out);
    fSetArray_out1_rep102(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep9(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep96(rows, cols, &out);
    fSetArray_out1_rep35(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep38(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep202(rows, cols, &out);
    fSetArray_out1_rep122(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep113(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep203(rows, cols, &out);
    fSetArray_out1_rep123(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep112(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep204(rows, cols, &out);
    fSetArray_out1_rep124(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep111(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep205(rows, cols, &out);
    fSetArray_out1_rep125(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep110(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep206(rows, cols, &out);
    fSetArray_out1_rep126(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep109(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep207(rows, cols, &out);
    fSetArray_out1_rep127(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep108(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep208(rows, cols, &out);
    fSetArray_out1_rep128(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep37(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep216(rows, cols, &out);
    fSetArray_out1_rep136(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep125(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep217(rows, cols, &out);
    fSetArray_out1_rep137(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep124(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep218(rows, cols, &out);
    fSetArray_out1_rep138(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep123(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep219(rows, cols, &out);
    fSetArray_out1_rep139(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep122(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep220(rows, cols, &out);
    fSetArray_out1_rep140(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep121(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep221(rows, cols, &out);
    fSetArray_out1_rep141(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep120(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep222(rows, cols, &out);
    fSetArray_out1_rep142(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep36(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep99(rows, cols, &out);
    fSetArray_out1_rep38(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep35(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep100(rows, cols, &out);
    fSetArray_out1_rep39(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep34(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep101(rows, cols, &out);
    fSetArray_out1_rep40(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep8(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep165(rows, cols, &out);
    fSetArray_out1_rep91(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep86(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep209(rows, cols, &out);
    fSetArray_out1_rep129(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep119(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep210(rows, cols, &out);
    fSetArray_out1_rep130(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep118(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep211(rows, cols, &out);
    fSetArray_out1_rep131(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep117(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep212(rows, cols, &out);
    fSetArray_out1_rep132(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep116(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep213(rows, cols, &out);
    fSetArray_out1_rep133(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep115(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep214(rows, cols, &out);
    fSetArray_out1_rep134(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep114(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep215(rows, cols, &out);
    fSetArray_out1_rep135(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep85(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep167(rows, cols, &out);
    fSetArray_out1_rep93(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep84(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep168(rows, cols, &out);
    fSetArray_out1_rep94(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep83(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep169(rows, cols, &out);
    fSetArray_out1_rep95(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep82(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep170(rows, cols, &out);
    fSetArray_out1_rep96(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep7(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep122(rows, cols, &out);
    fSetArray_out1_rep48(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep50(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep123(rows, cols, &out);
    fSetArray_out1_rep49(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep49(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep124(rows, cols, &out);
    fSetArray_out1_rep50(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep48(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep125(rows, cols, &out);
    fSetArray_out1_rep51(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep47(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep126(rows, cols, &out);
    fSetArray_out1_rep52(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep46(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep127(rows, cols, &out);
    fSetArray_out1_rep53(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep45(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep128(rows, cols, &out);
    fSetArray_out1_rep54(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep6(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep108(rows, cols, &out);
    fSetArray_out1_rep41(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep44(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep109(rows, cols, &out);
    fSetArray_out1_rep42(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep43(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep110(rows, cols, &out);
    fSetArray_out1_rep43(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep42(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep111(rows, cols, &out);
    fSetArray_out1_rep44(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep41(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep112(rows, cols, &out);
    fSetArray_out1_rep45(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep40(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep113(rows, cols, &out);
    fSetArray_out1_rep46(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep39(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep114(rows, cols, &out);
    fSetArray_out1_rep47(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep5(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep159(rows, cols, &out);
    fSetArray_out1_rep85(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep81(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep160(rows, cols, &out);
    fSetArray_out1_rep86(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep80(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep161(rows, cols, &out);
    fSetArray_out1_rep87(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep79(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep162(rows, cols, &out);
    fSetArray_out1_rep88(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep78(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep163(rows, cols, &out);
    fSetArray_out1_rep89(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep77(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep164(rows, cols, &out);
    fSetArray_out1_rep90(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep4(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep153(rows, cols, &out);
    fSetArray_out1_rep79(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep76(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep154(rows, cols, &out);
    fSetArray_out1_rep80(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep75(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep155(rows, cols, &out);
    fSetArray_out1_rep81(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep74(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep156(rows, cols, &out);
    fSetArray_out1_rep82(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep73(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep157(rows, cols, &out);
    fSetArray_out1_rep83(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep72(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep158(rows, cols, &out);
    fSetArray_out1_rep84(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep3(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep147(rows, cols, &out);
    fSetArray_out1_rep73(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep71(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep148(rows, cols, &out);
    fSetArray_out1_rep74(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep70(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep149(rows, cols, &out);
    fSetArray_out1_rep75(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep69(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep150(rows, cols, &out);
    fSetArray_out1_rep76(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep68(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep151(rows, cols, &out);
    fSetArray_out1_rep77(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep67(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep152(rows, cols, &out);
    fSetArray_out1_rep78(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep2(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep70(rows, cols, &out);
    fSetArray_out1_rep32(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep1(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep140(rows, cols, &out);
    fSetArray_out1_rep66(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep66(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep141(rows, cols, &out);
    fSetArray_out1_rep67(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep65(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep142(rows, cols, &out);
    fSetArray_out1_rep68(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep64(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep143(rows, cols, &out);
    fSetArray_out1_rep69(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep63(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep144(rows, cols, &out);
    fSetArray_out1_rep70(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep62(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep145(rows, cols, &out);
    fSetArray_out1_rep71(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep61(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep146(rows, cols, &out);
    fSetArray_out1_rep72(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep0(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep72(rows, cols, &out);
    fSetArray_out1_rep34(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSum_out0(int *rows, F2D *inMat, int *cols, int *Rcols)
{
    int k;
    int newRow;
    int newCols;
    int decomp_0;
    int decomp_1;
    int decomp_2;
    (*rows) = inMat->height;
    (*cols) = inMat->width;
    decomp_0 = (*cols) == 1;
    decomp_1 = (*rows) == 1;
    decomp_2 = decomp_0 || decomp_1;
    if (decomp_2)
    {
        (*Rcols) = 1;
    }
    else
    {
        (*Rcols) = (*cols);
    }
}

void fSum_out0_rep5(int *rows, F2D *inMat, int *cols, int *Rcols)
{
    int k;
    int newRow;
    int newCols;
    int decomp_0;
    int decomp_1;
    int decomp_2;
    (*rows) = inMat->height;
    (*cols) = inMat->width;
    decomp_0 = (*cols) == 1;
    decomp_1 = (*rows) == 1;
    decomp_2 = decomp_0 || decomp_1;
    if (decomp_2)
    {
        (*Rcols) = 1;
    }
    else
    {
        (*Rcols) = (*cols);
    }
}

void fSum_out0_rep4(int *rows, F2D *inMat, int *cols, int *Rcols)
{
    int k;
    int newRow;
    int newCols;
    int decomp_0;
    int decomp_1;
    int decomp_2;
    (*rows) = inMat->height;
    (*cols) = inMat->width;
    decomp_0 = (*cols) == 1;
    decomp_1 = (*rows) == 1;
    decomp_2 = decomp_0 || decomp_1;
    if (decomp_2)
    {
        (*Rcols) = 1;
    }
    else
    {
        (*Rcols) = (*cols);
    }
}

void fSum_out0_rep3(int *rows, F2D *inMat, int *cols, int *Rcols)
{
    int k;
    int newRow;
    int newCols;
    int decomp_0;
    int decomp_1;
    int decomp_2;
    (*rows) = inMat->height;
    (*cols) = inMat->width;
    decomp_0 = (*cols) == 1;
    decomp_1 = (*rows) == 1;
    decomp_2 = decomp_0 || decomp_1;
    if (decomp_2)
    {
        (*Rcols) = 1;
    }
    else
    {
        (*Rcols) = (*cols);
    }
}

void fSum_out0_rep2(int *rows, F2D *inMat, int *cols, int *Rcols)
{
    int k;
    int newRow;
    int newCols;
    int decomp_0;
    int decomp_1;
    int decomp_2;
    (*rows) = inMat->height;
    (*cols) = inMat->width;
    decomp_0 = (*cols) == 1;
    decomp_1 = (*rows) == 1;
    decomp_2 = decomp_0 || decomp_1;
    if (decomp_2)
    {
        (*Rcols) = 1;
    }
    else
    {
        (*Rcols) = (*cols);
    }
}

void fSum_out0_rep1(int *rows, F2D *inMat, int *cols, int *Rcols)
{
    int k;
    int newRow;
    int newCols;
    int decomp_0;
    int decomp_1;
    int decomp_2;
    (*rows) = inMat->height;
    (*cols) = inMat->width;
    decomp_0 = (*cols) == 1;
    decomp_1 = (*rows) == 1;
    decomp_2 = decomp_0 || decomp_1;
    if (decomp_2)
    {
        (*Rcols) = 1;
    }
    else
    {
        (*Rcols) = (*cols);
    }
}

void fSum_out0_rep0(int *rows, F2D *inMat, int *cols, int *Rcols)
{
    int k;
    int newRow;
    int newCols;
    int decomp_0;
    int decomp_1;
    int decomp_2;
    (*rows) = inMat->height;
    (*cols) = inMat->width;
    decomp_0 = (*cols) == 1;
    decomp_1 = (*rows) == 1;
    decomp_2 = decomp_0 || decomp_1;
    if (decomp_2)
    {
        (*Rcols) = 1;
    }
    else
    {
        (*Rcols) = (*cols);
    }
}

void fSum_out1(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i)
{
    int decomp_3;
    decomp_3 = (*cols) == 1;
    if (decomp_3)
    {
        (*temp) = 0;
        for ((*j) = 0; (*j) < (*rows); (*j)++)
        {
            (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + (0)];
        }
        outMat->data[0] = (*temp);
    }
    else
    {
        int decomp_4;
        decomp_4 = (*rows) == 1;
        if (decomp_4)
        {
            (*temp) = 0;
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
                (*temp) = (*temp) + inMat->data[(*j)];
            }
            outMat->data[0] = (*temp);
        }
        else
        {
            for ((*i) = 0; (*i) < (*cols); (*i)++)
            {
                (*temp) = 0;
                for ((*j) = 0; (*j) < (*rows); (*j)++)
                {
                    (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + ((*i))];
                }
                outMat->data[(*i)] = (*temp);
            }
        }
    }
}

void fSum_out1_rep5(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i)
{
    int decomp_3;
    decomp_3 = (*cols) == 1;
    if (decomp_3)
    {
        (*temp) = 0;
        for ((*j) = 0; (*j) < (*rows); (*j)++)
        {
            (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + (0)];
        }
        outMat->data[0] = (*temp);
    }
    else
    {
        int decomp_4;
        decomp_4 = (*rows) == 1;
        if (decomp_4)
        {
            (*temp) = 0;
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
                (*temp) = (*temp) + inMat->data[(*j)];
            }
            outMat->data[0] = (*temp);
        }
        else
        {
            for ((*i) = 0; (*i) < (*cols); (*i)++)
            {
                (*temp) = 0;
                for ((*j) = 0; (*j) < (*rows); (*j)++)
                {
                    (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + ((*i))];
                }
                outMat->data[(*i)] = (*temp);
            }
        }
    }
}

void fSum_out1_rep4(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i)
{
    int decomp_3;
    decomp_3 = (*cols) == 1;
    if (decomp_3)
    {
        (*temp) = 0;
        for ((*j) = 0; (*j) < (*rows); (*j)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + (0)];
        }
        outMat->data[0] = (*temp);
    }
    else
    {
        int decomp_4;
        decomp_4 = (*rows) == 1;
        if (decomp_4)
        {
            (*temp) = 0;
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
                (*temp) = (*temp) + inMat->data[(*j)];
            }
            outMat->data[0] = (*temp);
        }
        else
        {
            for ((*i) = 0; (*i) < (*cols); (*i)++)
            {
                (*temp) = 0;
                for ((*j) = 0; (*j) < (*rows); (*j)++)
                {
                    (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + ((*i))];
                }
                outMat->data[(*i)] = (*temp);
            }
        }
    }
}

void fSum_out1_rep3(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i)
{
    int decomp_3;
    decomp_3 = (*cols) == 1;
    if (decomp_3)
    {
        (*temp) = 0;
        for ((*j) = 0; (*j) < (*rows); (*j)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + (0)];
        }
        outMat->data[0] = (*temp);
    }
    else
    {
        int decomp_4;
        decomp_4 = (*rows) == 1;
        if (decomp_4)
        {
            (*temp) = 0;
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
                (*temp) = (*temp) + inMat->data[(*j)];
            }
            outMat->data[0] = (*temp);
        }
        else
        {
            for ((*i) = 0; (*i) < (*cols); (*i)++)
            {
                (*temp) = 0;
                for ((*j) = 0; (*j) < (*rows); (*j)++)
                {
                    (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + ((*i))];
                }
                outMat->data[(*i)] = (*temp);
            }
        }
    }
}

void fSum_out1_rep2(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i)
{
    int decomp_3;
    decomp_3 = (*cols) == 1;
    if (decomp_3)
    {
        (*temp) = 0;
        for ((*j) = 0; (*j) < (*rows); (*j)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + (0)];
        }
        outMat->data[0] = (*temp);
    }
    else
    {
        int decomp_4;
        decomp_4 = (*rows) == 1;
        if (decomp_4)
        {
            (*temp) = 0;
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
                (*temp) = (*temp) + inMat->data[(*j)];
            }
            outMat->data[0] = (*temp);
        }
        else
        {
            for ((*i) = 0; (*i) < (*cols); (*i)++)
            {
                (*temp) = 0;
                for ((*j) = 0; (*j) < (*rows); (*j)++)
                {
                    (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + ((*i))];
                }
                outMat->data[(*i)] = (*temp);
            }
        }
    }
}

void fSum_out1_rep1(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i)
{
    int decomp_3;
    decomp_3 = (*cols) == 1;
    if (decomp_3)
    {
        (*temp) = 0;
        for ((*j) = 0; (*j) < (*rows); (*j)++)
        {
            (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + (0)];
        }
        outMat->data[0] = (*temp);
    }
    else
    {
        int decomp_4;
        decomp_4 = (*rows) == 1;
        if (decomp_4)
        {
            (*temp) = 0;
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
                (*temp) = (*temp) + inMat->data[(*j)];
            }
            outMat->data[0] = (*temp);
        }
        else
        {
            for ((*i) = 0; (*i) < (*cols); (*i)++)
            {
                (*temp) = 0;
                for ((*j) = 0; (*j) < (*rows); (*j)++)
                {
                    (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + ((*i))];
                }
                outMat->data[(*i)] = (*temp);
            }
        }
    }
}

void fSum_out1_rep0(int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat, int *i)
{
    int decomp_3;
    decomp_3 = (*cols) == 1;
    if (decomp_3)
    {
        (*temp) = 0;
        for ((*j) = 0; (*j) < (*rows); (*j)++)
        {
            (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + (0)];
        }
        outMat->data[0] = (*temp);
    }
    else
    {
        int decomp_4;
        decomp_4 = (*rows) == 1;
        if (decomp_4)
        {
            (*temp) = 0;
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
                (*temp) = (*temp) + inMat->data[(*j)];
            }
            outMat->data[0] = (*temp);
        }
        else
        {
            for ((*i) = 0; (*i) < (*cols); (*i)++)
            {
                (*temp) = 0;
                for ((*j) = 0; (*j) < (*rows); (*j)++)
                {
                    (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + ((*i))];
                }
                outMat->data[(*i)] = (*temp);
            }
        }
    }
}

void fSum(F2D *inMat, F2D **rtr_val)
{
    int Rcols;
    float temp;
    int j;
    int i;
    int cols;
    int rows;
    F2D *outMat;
    fSum_out0_rep0(&rows, inMat, &cols, &Rcols);
    fSetArray_rep61(1, Rcols, 0, &outMat);
    fSum_out1_rep0(&cols, &temp, &j, &rows, inMat, outMat, &i);
    *rtr_val = outMat;
}

void fSum_rep4(F2D *inMat, F2D **rtr_val)
{
    int Rcols;
    float temp;
    int j;
    int i;
    int cols;
    int rows;
    F2D *outMat;
    fSum_out0_rep1(&rows, inMat, &cols, &Rcols);
    fSetArray_rep62(1, Rcols, 0, &outMat);
    fSum_out1_rep1(&cols, &temp, &j, &rows, inMat, outMat, &i);
    *rtr_val = outMat;
}

void fSum_rep3(F2D *inMat, F2D **rtr_val)
{
    int Rcols;
    float temp;
    int j;
    int i;
    int cols;
    int rows;
    F2D *outMat;
    fSum_out0_rep2(&rows, inMat, &cols, &Rcols);
    fSetArray_rep63(1, Rcols, 0, &outMat);
    fSum_out1_rep2(&cols, &temp, &j, &rows, inMat, outMat, &i);
    *rtr_val = outMat;
}

void fSum_rep2(F2D *inMat, F2D **rtr_val)
{
    int Rcols;
    float temp;
    int j;
    int i;
    int cols;
    int rows;
    F2D *outMat;
    fSum_out0_rep3(&rows, inMat, &cols, &Rcols);
    fSetArray_rep64(1, Rcols, 0, &outMat);
    fSum_out1_rep3(&cols, &temp, &j, &rows, inMat, outMat, &i);
    *rtr_val = outMat;
}

void fSum_rep1(F2D *inMat, F2D **rtr_val)
{
    int Rcols;
    float temp;
    int j;
    int i;
    int cols;
    int rows;
    F2D *outMat;
    fSum_out0_rep4(&rows, inMat, &cols, &Rcols);
    fSetArray_rep65(1, Rcols, 0, &outMat);
    fSum_out1_rep4(&cols, &temp, &j, &rows, inMat, outMat, &i);
    *rtr_val = outMat;
}

void fSum_rep0(F2D *inMat, F2D **rtr_val)
{
    int Rcols;
    float temp;
    int j;
    int i;
    int cols;
    int rows;
    F2D *outMat;
    fSum_out0_rep5(&rows, inMat, &cols, &Rcols);
    fSetArray_rep66(1, Rcols, 0, &outMat);
    fSum_out1_rep5(&cols, &temp, &j, &rows, inMat, outMat, &i);
    *rtr_val = outMat;
}

void fSum2_out0(int *rows, F2D *inMat, int *cols, int *dir, int *newRow, int *newCols)
{
    int k;
    int decomp_0;
    (*rows) = inMat->height;
    (*cols) = inMat->width;
    decomp_0 = (*dir) == 1;
    if (decomp_0)
    {
        (*newRow) = 1;
        (*newCols) = (*cols);
    }
    else
    {
        (*newRow) = (*rows);
        (*newCols) = 1;
    }
}

void fSum2_out1(int *dir, int *i, int *cols, float *temp, int *j, int *rows, F2D *inMat, F2D *outMat)
{
    int decomp_1;
    decomp_1 = (*dir) == 1;
    if (decomp_1)
    {
        for ((*i) = 0; (*i) < (*cols); (*i)++)
        {
            (*temp) = 0;
            for ((*j) = 0; (*j) < (*rows); (*j)++)
            {
                (*temp) = (*temp) + inMat->data[((*j)) * inMat->width + ((*i))];
            }
            outMat->data[(*i)] = (*temp);
        }
    }
    else
    {
        for ((*i) = 0; (*i) < (*rows); (*i)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            (*temp) = 0;
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
#pragma HLS loop_tripcount max = 3 min = 3
                (*temp) = (*temp) + inMat->data[((*i)) * inMat->width + ((*j))];
            }
            outMat->data[((*i)) * outMat->width + (0)] = (*temp);
        }
    }
}

void fSum2(F2D *inMat, int dir, F2D **rtr_val)
{
    int newCols;
    int newRow;
    float temp;
    int j;
    int i;
    int cols;
    int rows;
    F2D *outMat;
    fSum2_out0(&rows, inMat, &cols, &dir, &newRow, &newCols);
    fSetArray_rep2(newRow, newCols, 0, &outMat);
    fSum2_out1(&dir, &i, &cols, &temp, &j, &rows, inMat, outMat);
    *rtr_val = outMat;
}

void fTimes_out0(int *rows, F2D *a, int *cols)
{
    int j;
    (*rows) = a->height;
    (*cols) = a->width;
}

void fTimes_out1(int *i, int *rows, int *cols, F2D *c, F2D *a, F2D *b)
{
    for ((*i) = 0; (*i) < ((*rows) * (*cols)); (*i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        c->data[(*i)] = a->data[(*i)] * b->data[(*i)];
    }
}

void fTimes(F2D *a, F2D *b, F2D **rtr_val)
{
    int cols;
    int rows;
    int i;
    F2D *c;
    fTimes_out0(&rows, a, &cols);
    fMallocHandle_rep16(rows, cols, &c);
    fTimes_out1(&i, &rows, &cols, c, a, b);
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
#pragma HLS loop_tripcount max = 6000 min = 6000
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
    fMallocHandle_rep17(rows, cols, &c);
    ffDivide_out1(&i, &rows, &cols, c, a, b);
    *rtr_val = c;
}

void generateSample_out1(int *rows, I2D *sampleXId, int *cols, int *decomp_0)
{
    (*rows) = sampleXId->height;
    (*cols) = sampleXId->width;
    (*decomp_0) = (*cols) > 1;
}

void generateSample_out1_rep4(int *rows, I2D *sampleXId, int *cols, int *decomp_0)
{
    (*rows) = sampleXId->height;
    (*cols) = sampleXId->width;
    (*decomp_0) = (*cols) > 1;
}

void generateSample_out1_rep3(int *rows, I2D *sampleXId, int *cols, int *decomp_0)
{
    (*rows) = sampleXId->height;
    (*cols) = sampleXId->width;
    (*decomp_0) = (*cols) > 1;
}

void generateSample_out1_rep2(int *rows, I2D *sampleXId, int *cols, int *decomp_0)
{
    (*rows) = sampleXId->height;
    (*cols) = sampleXId->width;
    (*decomp_0) = (*cols) > 1;
}

void generateSample_out1_rep1(int *rows, I2D *sampleXId, int *cols, int *decomp_0)
{
    (*rows) = sampleXId->height;
    (*cols) = sampleXId->width;
    (*decomp_0) = (*cols) > 1;
}

void generateSample_out1_rep0(int *rows, I2D *sampleXId, int *cols, int *decomp_0)
{
    (*rows) = sampleXId->height;
    (*cols) = sampleXId->width;
    (*decomp_0) = (*cols) > 1;
}

void generateSample_out2(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                         F2D *retVel, F2D *pos, F2D *retPos)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
            retQuat->data[((*i)) * retQuat->width + ((*j))] = quat->data[((*index)) * quat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
            retVel->data[((*i)) * retVel->width + ((*j))] = vel->data[((*index)) * vel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
            retPos->data[((*i)) * retPos->width + ((*j))] = pos->data[((*index)) * pos->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < quat->height; (*i)++)
    {
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
            quat->data[((*i)) * quat->width + ((*j))] = retQuat->data[((*i)) * retQuat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < vel->height; (*i)++)
    {
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
            vel->data[((*i)) * vel->width + ((*j))] = retVel->data[((*i)) * retVel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < pos->height; (*i)++)
    {
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
            pos->data[((*i)) * pos->width + ((*j))] = retPos->data[((*i)) * retPos->width + ((*j))];
        }
    }
}

void generateSample_out2_rep4(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
            retQuat->data[((*i)) * retQuat->width + ((*j))] = quat->data[((*index)) * quat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
            retVel->data[((*i)) * retVel->width + ((*j))] = vel->data[((*index)) * vel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
            retPos->data[((*i)) * retPos->width + ((*j))] = pos->data[((*index)) * pos->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < quat->height; (*i)++)
    {
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
            quat->data[((*i)) * quat->width + ((*j))] = retQuat->data[((*i)) * retQuat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < vel->height; (*i)++)
    {
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
            vel->data[((*i)) * vel->width + ((*j))] = retVel->data[((*i)) * retVel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < pos->height; (*i)++)
    {
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
            pos->data[((*i)) * pos->width + ((*j))] = retPos->data[((*i)) * retPos->width + ((*j))];
        }
    }
}

void generateSample_out2_rep3(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            retQuat->data[((*i)) * retQuat->width + ((*j))] = quat->data[((*index)) * quat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            retVel->data[((*i)) * retVel->width + ((*j))] = vel->data[((*index)) * vel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            retPos->data[((*i)) * retPos->width + ((*j))] = pos->data[((*index)) * pos->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < quat->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            quat->data[((*i)) * quat->width + ((*j))] = retQuat->data[((*i)) * retQuat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < vel->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            vel->data[((*i)) * vel->width + ((*j))] = retVel->data[((*i)) * retVel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < pos->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            pos->data[((*i)) * pos->width + ((*j))] = retPos->data[((*i)) * retPos->width + ((*j))];
        }
    }
}

void generateSample_out2_rep2(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            retQuat->data[((*i)) * retQuat->width + ((*j))] = quat->data[((*index)) * quat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            retVel->data[((*i)) * retVel->width + ((*j))] = vel->data[((*index)) * vel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            retPos->data[((*i)) * retPos->width + ((*j))] = pos->data[((*index)) * pos->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < quat->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            quat->data[((*i)) * quat->width + ((*j))] = retQuat->data[((*i)) * retQuat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < vel->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            vel->data[((*i)) * vel->width + ((*j))] = retVel->data[((*i)) * retVel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < pos->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            pos->data[((*i)) * pos->width + ((*j))] = retPos->data[((*i)) * retPos->width + ((*j))];
        }
    }
}

void generateSample_out2_rep1(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            retQuat->data[((*i)) * retQuat->width + ((*j))] = quat->data[((*index)) * quat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            retVel->data[((*i)) * retVel->width + ((*j))] = vel->data[((*index)) * vel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            retPos->data[((*i)) * retPos->width + ((*j))] = pos->data[((*index)) * pos->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < quat->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 4 min = 4
            quat->data[((*i)) * quat->width + ((*j))] = retQuat->data[((*i)) * retQuat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < vel->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            vel->data[((*i)) * vel->width + ((*j))] = retVel->data[((*i)) * retVel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < pos->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            pos->data[((*i)) * pos->width + ((*j))] = retPos->data[((*i)) * retPos->width + ((*j))];
        }
    }
}

void generateSample_out2_rep0(int *i, int *rows, int *index, I2D *sampleXId, int *j, F2D *quat, F2D *retQuat, F2D *vel,
                              F2D *retVel, F2D *pos, F2D *retPos)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
            retQuat->data[((*i)) * retQuat->width + ((*j))] = quat->data[((*index)) * quat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
            retVel->data[((*i)) * retVel->width + ((*j))] = vel->data[((*index)) * vel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*index) = sampleXId->data[(*i)] - 1;
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
            retPos->data[((*i)) * retPos->width + ((*j))] = pos->data[((*index)) * pos->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < quat->height; (*i)++)
    {
        for ((*j) = 0; (*j) < quat->width; (*j)++)
        {
            quat->data[((*i)) * quat->width + ((*j))] = retQuat->data[((*i)) * retQuat->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < vel->height; (*i)++)
    {
        for ((*j) = 0; (*j) < vel->width; (*j)++)
        {
            vel->data[((*i)) * vel->width + ((*j))] = retVel->data[((*i)) * retVel->width + ((*j))];
        }
    }
    for ((*i) = 0; (*i) < pos->height; (*i)++)
    {
        for ((*j) = 0; (*j) < pos->width; (*j)++)
        {
            pos->data[((*i)) * pos->width + ((*j))] = retPos->data[((*i)) * retPos->width + ((*j))];
        }
    }
}

void generateSample(F2D *w, F2D *quat, F2D *vel, F2D *pos)
{
    int rows;
    int cols;
    int i;
    int j;
    int index;
    I2D *sampleXId;
    F2D *retQuat;
    F2D *retVel;
    F2D *retPos;
    int decomp_0;
    weightedSample_rep0(w, &sampleXId);
    generateSample_out1_rep0(&rows, sampleXId, &cols, &decomp_0);
    if (decomp_0)
    {
        printf("ERROR: Cols more than 1.. Handle this case \n");
    }
    fSetArray_rep67(quat->height, quat->width, 0, &retQuat);
    fSetArray_rep72(vel->height, vel->width, 0, &retVel);
    fSetArray_rep77(pos->height, pos->width, 0, &retPos);
    generateSample_out2_rep0(&i, &rows, &index, sampleXId, &j, quat, retQuat, vel, retVel, pos, retPos);
    fFreeHandle_rep120(retQuat);
    fFreeHandle_rep125(retVel);
    fFreeHandle_rep130(retPos);
    iFreeHandle_rep0(sampleXId);
}

void generateSample_rep3(F2D *w, F2D *quat, F2D *vel, F2D *pos)
{
    int rows;
    int cols;
    int i;
    int j;
    int index;
    I2D *sampleXId;
    F2D *retQuat;
    F2D *retVel;
    F2D *retPos;
    int decomp_0;
    weightedSample_rep1(w, &sampleXId);
    generateSample_out1_rep1(&rows, sampleXId, &cols, &decomp_0);
    if (decomp_0)
    {
        printf("ERROR: Cols more than 1.. Handle this case \n");
    }
    fSetArray_rep68(quat->height, quat->width, 0, &retQuat);
    fSetArray_rep73(vel->height, vel->width, 0, &retVel);
    fSetArray_rep78(pos->height, pos->width, 0, &retPos);
    generateSample_out2_rep1(&i, &rows, &index, sampleXId, &j, quat, retQuat, vel, retVel, pos, retPos);
    fFreeHandle_rep121(retQuat);
    fFreeHandle_rep126(retVel);
    fFreeHandle_rep131(retPos);
    iFreeHandle_rep1(sampleXId);
}

void generateSample_rep2(F2D *w, F2D *quat, F2D *vel, F2D *pos)
{
    int rows;
    int cols;
    int i;
    int j;
    int index;
    I2D *sampleXId;
    F2D *retQuat;
    F2D *retVel;
    F2D *retPos;
    int decomp_0;
    weightedSample_rep2(w, &sampleXId);
    generateSample_out1_rep2(&rows, sampleXId, &cols, &decomp_0);
    if (decomp_0)
    {
        printf("ERROR: Cols more than 1.. Handle this case \n");
    }
    fSetArray_rep69(quat->height, quat->width, 0, &retQuat);
    fSetArray_rep74(vel->height, vel->width, 0, &retVel);
    fSetArray_rep79(pos->height, pos->width, 0, &retPos);
    generateSample_out2_rep2(&i, &rows, &index, sampleXId, &j, quat, retQuat, vel, retVel, pos, retPos);
    fFreeHandle_rep122(retQuat);
    fFreeHandle_rep127(retVel);
    fFreeHandle_rep132(retPos);
    iFreeHandle_rep2(sampleXId);
}

void generateSample_rep1(F2D *w, F2D *quat, F2D *vel, F2D *pos)
{
    int rows;
    int cols;
    int i;
    int j;
    int index;
    I2D *sampleXId;
    F2D *retQuat;
    F2D *retVel;
    F2D *retPos;
    int decomp_0;
    weightedSample_rep3(w, &sampleXId);
    generateSample_out1_rep3(&rows, sampleXId, &cols, &decomp_0);
    if (decomp_0)
    {
        printf("ERROR: Cols more than 1.. Handle this case \n");
    }
    fSetArray_rep70(quat->height, quat->width, 0, &retQuat);
    fSetArray_rep75(vel->height, vel->width, 0, &retVel);
    fSetArray_rep80(pos->height, pos->width, 0, &retPos);
    generateSample_out2_rep3(&i, &rows, &index, sampleXId, &j, quat, retQuat, vel, retVel, pos, retPos);
    fFreeHandle_rep123(retQuat);
    fFreeHandle_rep128(retVel);
    fFreeHandle_rep133(retPos);
    iFreeHandle_rep3(sampleXId);
}

void generateSample_rep0(F2D *w, F2D *quat, F2D *vel, F2D *pos)
{
    int rows;
    int cols;
    int i;
    int j;
    int index;
    I2D *sampleXId;
    F2D *retQuat;
    F2D *retVel;
    F2D *retPos;
    int decomp_0;
    weightedSample_rep4(w, &sampleXId);
    generateSample_out1_rep4(&rows, sampleXId, &cols, &decomp_0);
    if (decomp_0)
    {
        printf("ERROR: Cols more than 1.. Handle this case \n");
    }
    fSetArray_rep71(quat->height, quat->width, 0, &retQuat);
    fSetArray_rep76(vel->height, vel->width, 0, &retVel);
    fSetArray_rep81(pos->height, pos->width, 0, &retPos);
    generateSample_out2_rep4(&i, &rows, &index, sampleXId, &j, quat, retQuat, vel, retVel, pos, retPos);
    fFreeHandle_rep124(retQuat);
    fFreeHandle_rep129(retVel);
    fFreeHandle_rep134(retPos);
    iFreeHandle_rep4(sampleXId);
}

void get3DGaussianProb_out0(float *pi, int *n_data, F2D *data, int *n_channel)
{
    F2D *temp1;
    int k;
    (*pi) = 3.1412;
    (*n_data) = data->height;
    (*n_channel) = data->width;
}

void get3DGaussianProb_out0_rep5(float *pi, int *n_data, F2D *data, int *n_channel)
{
    F2D *temp1;
    int k;
    (*pi) = 3.1412;
    (*n_data) = data->height;
    (*n_channel) = data->width;
}

void get3DGaussianProb_out0_rep4(float *pi, int *n_data, F2D *data, int *n_channel)
{
    F2D *temp1;
    int k;
    (*pi) = 3.1412;
    (*n_data) = data->height;
    (*n_channel) = data->width;
}

void get3DGaussianProb_out0_rep3(float *pi, int *n_data, F2D *data, int *n_channel)
{
    F2D *temp1;
    int k;
    (*pi) = 3.1412;
    (*n_data) = data->height;
    (*n_channel) = data->width;
}

void get3DGaussianProb_out0_rep2(float *pi, int *n_data, F2D *data, int *n_channel)
{
    F2D *temp1;
    int k;
    (*pi) = 3.1412;
    (*n_data) = data->height;
    (*n_channel) = data->width;
}

void get3DGaussianProb_out0_rep1(float *pi, int *n_data, F2D *data, int *n_channel)
{
    F2D *temp1;
    int k;
    (*pi) = 3.1412;
    (*n_data) = data->height;
    (*n_channel) = data->width;
}

void get3DGaussianProb_out0_rep0(float *pi, int *n_data, F2D *data, int *n_channel)
{
    F2D *temp1;
    int k;
    (*pi) = 3.1412;
    (*n_data) = data->height;
    (*n_channel) = data->width;
}

void get3DGaussianProb_out1(float *temp, float *pi, int *n_channel)
{
    (*temp) = sqrt(1.0 / (pow(2 * (*pi), (*n_channel))));
}

void get3DGaussianProb_out1_rep5(float *temp, float *pi, int *n_channel)
{
    (*temp) = sqrt(1.0 / (pow(2 * (*pi), (*n_channel))));
}

void get3DGaussianProb_out1_rep4(float *temp, float *pi, int *n_channel)
{
    (*temp) = sqrt(1.0 / (pow(2 * (*pi), (*n_channel))));
}

void get3DGaussianProb_out1_rep3(float *temp, float *pi, int *n_channel)
{
    (*temp) = sqrt(1.0 / (pow(2 * (*pi), (*n_channel))));
}

void get3DGaussianProb_out1_rep2(float *temp, float *pi, int *n_channel)
{
    (*temp) = sqrt(1.0 / (pow(2 * (*pi), (*n_channel))));
}

void get3DGaussianProb_out1_rep1(float *temp, float *pi, int *n_channel)
{
    (*temp) = sqrt(1.0 / (pow(2 * (*pi), (*n_channel))));
}

void get3DGaussianProb_out1_rep0(float *temp, float *pi, int *n_channel)
{
    (*temp) = sqrt(1.0 / (pow(2 * (*pi), (*n_channel))));
}

void get3DGaussianProb_out2(int *j, F2D *temp2, int *i, F2D *p, float *temp)
{
    (*j) = (temp2->height * temp2->width);
    for ((*i) = 0; (*i) < (*j); (*i)++)
    {
        float temp2i;
        temp2i = temp2->data[(*i)];
        temp2i = exp(-0.5 * temp2i);
        p->data[(*i)] = temp2i * (*temp);
    }
}

void get3DGaussianProb_out2_rep5(int *j, F2D *temp2, int *i, F2D *p, float *temp)
{
    (*j) = (temp2->height * temp2->width);
    for ((*i) = 0; (*i) < (*j); (*i)++)
    {
        float temp2i;
        temp2i = temp2->data[(*i)];
        temp2i = exp(-0.5 * temp2i);
        p->data[(*i)] = temp2i * (*temp);
    }
}

void get3DGaussianProb_out2_rep4(int *j, F2D *temp2, int *i, F2D *p, float *temp)
{
    (*j) = (temp2->height * temp2->width);
    for ((*i) = 0; (*i) < (*j); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float temp2i;
        temp2i = temp2->data[(*i)];
        temp2i = exp(-0.5 * temp2i);
        p->data[(*i)] = temp2i * (*temp);
    }
}

void get3DGaussianProb_out2_rep3(int *j, F2D *temp2, int *i, F2D *p, float *temp)
{
    (*j) = (temp2->height * temp2->width);
    for ((*i) = 0; (*i) < (*j); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float temp2i;
        temp2i = temp2->data[(*i)];
        temp2i = exp(-0.5 * temp2i);
        p->data[(*i)] = temp2i * (*temp);
    }
}

void get3DGaussianProb_out2_rep2(int *j, F2D *temp2, int *i, F2D *p, float *temp)
{
    (*j) = (temp2->height * temp2->width);
    for ((*i) = 0; (*i) < (*j); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float temp2i;
        temp2i = temp2->data[(*i)];
        temp2i = exp(-0.5 * temp2i);
        p->data[(*i)] = temp2i * (*temp);
    }
}

void get3DGaussianProb_out2_rep1(int *j, F2D *temp2, int *i, F2D *p, float *temp)
{
    (*j) = (temp2->height * temp2->width);
    for ((*i) = 0; (*i) < (*j); (*i)++)
    {
        float temp2i;
        temp2i = temp2->data[(*i)];
        temp2i = exp(-0.5 * temp2i);
        p->data[(*i)] = temp2i * (*temp);
    }
}

void get3DGaussianProb_out2_rep0(int *j, F2D *temp2, int *i, F2D *p, float *temp)
{
    (*j) = (temp2->height * temp2->width);
    for ((*i) = 0; (*i) < (*j); (*i)++)
    {
        float temp2i;
        temp2i = temp2->data[(*i)];
        temp2i = exp(-0.5 * temp2i);
        p->data[(*i)] = temp2i * (*temp);
    }
}

void get3DGaussianProb(F2D *data, F2D *mean, F2D *A, F2D **rtr_val)
{
    float pi;
    F2D *t;
    int j;
    int i;
    int n_channel;
    int n_data;
    float temp;
    F2D *mt;
    F2D *temp2;
    F2D *diff;
    F2D *p;
    get3DGaussianProb_out0_rep0(&pi, &n_data, data, &n_channel);
    fSetArray_rep39(n_data, 1, 1, &t);
    fMtimes_rep8(t, mean, &mt);
    fMinus_rep0(data, mt, &diff);
    fSetArray_rep45(diff->height, 1, 0, &p);
    get3DGaussianProb_out1_rep0(&temp, &pi, &n_channel);
    randWrapper_rep0(diff->height, 1, &temp2);
    get3DGaussianProb_out2_rep0(&j, temp2, &i, p, &temp);
    fFreeHandle_rep86(t);
    fFreeHandle_rep92(temp2);
    fFreeHandle_rep98(mt);
    fFreeHandle_rep104(diff);
    *rtr_val = p;
}

void get3DGaussianProb_rep4(F2D *data, F2D *mean, F2D *A, F2D **rtr_val)
{
    float pi;
    F2D *t;
    int j;
    int i;
    int n_channel;
    int n_data;
    float temp;
    F2D *mt;
    F2D *temp2;
    F2D *diff;
    F2D *p;
    get3DGaussianProb_out0_rep1(&pi, &n_data, data, &n_channel);
    fSetArray_rep40(n_data, 1, 1, &t);
    fMtimes_rep9(t, mean, &mt);
    fMinus_rep1(data, mt, &diff);
    fSetArray_rep46(diff->height, 1, 0, &p);
    get3DGaussianProb_out1_rep1(&temp, &pi, &n_channel);
    randWrapper_rep1(diff->height, 1, &temp2);
    get3DGaussianProb_out2_rep1(&j, temp2, &i, p, &temp);
    fFreeHandle_rep87(t);
    fFreeHandle_rep93(temp2);
    fFreeHandle_rep99(mt);
    fFreeHandle_rep105(diff);
    *rtr_val = p;
}

void get3DGaussianProb_rep3(F2D *data, F2D *mean, F2D *A, F2D **rtr_val)
{
    float pi;
    F2D *t;
    int j;
    int i;
    int n_channel;
    int n_data;
    float temp;
    F2D *mt;
    F2D *temp2;
    F2D *diff;
    F2D *p;
    get3DGaussianProb_out0_rep2(&pi, &n_data, data, &n_channel);
    fSetArray_rep41(n_data, 1, 1, &t);
    fMtimes_rep10(t, mean, &mt);
    fMinus_rep2(data, mt, &diff);
    fSetArray_rep47(diff->height, 1, 0, &p);
    get3DGaussianProb_out1_rep2(&temp, &pi, &n_channel);
    randWrapper_rep2(diff->height, 1, &temp2);
    get3DGaussianProb_out2_rep2(&j, temp2, &i, p, &temp);
    fFreeHandle_rep88(t);
    fFreeHandle_rep94(temp2);
    fFreeHandle_rep100(mt);
    fFreeHandle_rep106(diff);
    *rtr_val = p;
}

void get3DGaussianProb_rep2(F2D *data, F2D *mean, F2D *A, F2D **rtr_val)
{
    float pi;
    F2D *t;
    int j;
    int i;
    int n_channel;
    int n_data;
    float temp;
    F2D *mt;
    F2D *temp2;
    F2D *diff;
    F2D *p;
    get3DGaussianProb_out0_rep3(&pi, &n_data, data, &n_channel);
    fSetArray_rep42(n_data, 1, 1, &t);
    fMtimes_rep11(t, mean, &mt);
    fMinus_rep3(data, mt, &diff);
    fSetArray_rep48(diff->height, 1, 0, &p);
    get3DGaussianProb_out1_rep3(&temp, &pi, &n_channel);
    randWrapper_rep3(diff->height, 1, &temp2);
    get3DGaussianProb_out2_rep3(&j, temp2, &i, p, &temp);
    fFreeHandle_rep89(t);
    fFreeHandle_rep95(temp2);
    fFreeHandle_rep101(mt);
    fFreeHandle_rep107(diff);
    *rtr_val = p;
}

void get3DGaussianProb_rep1(F2D *data, F2D *mean, F2D *A, F2D **rtr_val)
{
    float pi;
    F2D *t;
    int j;
    int i;
    int n_channel;
    int n_data;
    float temp;
    F2D *mt;
    F2D *temp2;
    F2D *diff;
    F2D *p;
    get3DGaussianProb_out0_rep4(&pi, &n_data, data, &n_channel);
    fSetArray_rep43(n_data, 1, 1, &t);
    fMtimes_rep12(t, mean, &mt);
    fMinus_rep4(data, mt, &diff);
    fSetArray_rep49(diff->height, 1, 0, &p);
    get3DGaussianProb_out1_rep4(&temp, &pi, &n_channel);
    randWrapper_rep4(diff->height, 1, &temp2);
    get3DGaussianProb_out2_rep4(&j, temp2, &i, p, &temp);
    fFreeHandle_rep90(t);
    fFreeHandle_rep96(temp2);
    fFreeHandle_rep102(mt);
    fFreeHandle_rep108(diff);
    *rtr_val = p;
}

void get3DGaussianProb_rep0(F2D *data, F2D *mean, F2D *A, F2D **rtr_val)
{
    float pi;
    F2D *t;
    int j;
    int i;
    int n_channel;
    int n_data;
    float temp;
    F2D *mt;
    F2D *temp2;
    F2D *diff;
    F2D *p;
    get3DGaussianProb_out0_rep5(&pi, &n_data, data, &n_channel);
    fSetArray_rep44(n_data, 1, 1, &t);
    fMtimes_rep13(t, mean, &mt);
    fMinus_rep5(data, mt, &diff);
    fSetArray_rep50(diff->height, 1, 0, &p);
    get3DGaussianProb_out1_rep5(&temp, &pi, &n_channel);
    randWrapper_rep5(diff->height, 1, &temp2);
    get3DGaussianProb_out2_rep5(&j, temp2, &i, p, &temp);
    fFreeHandle_rep91(t);
    fFreeHandle_rep97(temp2);
    fFreeHandle_rep103(mt);
    fFreeHandle_rep109(diff);
    *rtr_val = p;
}

void iFreeHandle_out0(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle_out0_rep8(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle_out0_rep7(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle_out0_rep6(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle_out0_rep5(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle_out0_rep4(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle_out0_rep3(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle_out0_rep2(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle_out0_rep1(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle_out0_rep0(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != nullptr;
}

void iFreeHandle(I2D *out)
{
    int decomp_0;
    iFreeHandle_out0_rep0(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep7(I2D *out)
{
    int decomp_0;
    iFreeHandle_out0_rep1(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep6(I2D *out)
{
    int decomp_0;
    iFreeHandle_out0_rep2(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep5(I2D *out)
{
    int decomp_0;
    iFreeHandle_out0_rep3(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep4(I2D *out)
{
    int decomp_0;
    iFreeHandle_out0_rep4(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep3(I2D *out)
{
    int decomp_0;
    iFreeHandle_out0_rep5(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep2(I2D *out)
{
    int decomp_0;
    iFreeHandle_out0_rep6(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep1(I2D *out)
{
    int decomp_0;
    iFreeHandle_out0_rep7(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep0(I2D *out)
{
    int decomp_0;
    iFreeHandle_out0_rep8(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iMallocHandle_out1(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep10(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep9(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep8(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep7(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep6(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep5(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep4(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep3(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep2(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep1(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out1_rep0(I2D *out, int *rows, int *cols)
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
    iMallocHandle_out1_rep0(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep9(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep1(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep8(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep2(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep7(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 12 min = 12 avg = 12
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep3(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep6(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep4(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep5(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep5(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep4(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep6(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep3(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep7(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep2(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 8008 min = 8008 avg = 8008
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep8(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep1(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep9(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep0(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out1_rep10(out, &rows, &cols);
    *rtr_val = out;
}

void iSetArray_out1(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep9(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep8(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep7(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep6(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep5(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep4(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep3(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep2(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep1(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray_out1_rep0(int *i, int *rows, int *j, int *cols, I2D *out, int *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void iSetArray(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep0(rows, cols, &out);
    iSetArray_out1_rep0(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void iSetArray_rep8(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep1(rows, cols, &out);
    iSetArray_out1_rep1(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void iSetArray_rep7(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep2(rows, cols, &out);
    iSetArray_out1_rep2(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void iSetArray_rep6(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep3(rows, cols, &out);
    iSetArray_out1_rep3(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void iSetArray_rep5(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep4(rows, cols, &out);
    iSetArray_out1_rep4(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void iSetArray_rep4(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep5(rows, cols, &out);
    iSetArray_out1_rep5(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void iSetArray_rep3(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep6(rows, cols, &out);
    iSetArray_out1_rep6(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void iSetArray_rep2(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep7(rows, cols, &out);
    iSetArray_out1_rep7(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void iSetArray_rep1(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep8(rows, cols, &out);
    iSetArray_out1_rep8(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void iSetArray_rep0(int rows, int cols, int val, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
    iMallocHandle_rep9(rows, cols, &out);
    iSetArray_out1_rep9(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void mcl_out1(F2D *sum, int *decomp_2)
{
    int decomp_0;
    int decomp_1;
    decomp_0 = sum->height == 1;
    decomp_1 = sum->width == 1;
    (*decomp_2) = decomp_0 && decomp_1;
}

void mcl_out1_rep4(F2D *sum, int *decomp_2)
{
    int decomp_0;
    int decomp_1;
    decomp_0 = sum->height == 1;
    decomp_1 = sum->width == 1;
    (*decomp_2) = decomp_0 && decomp_1;
}

void mcl_out1_rep3(F2D *sum, int *decomp_2)
{
    int decomp_0;
    int decomp_1;
    decomp_0 = sum->height == 1;
    decomp_1 = sum->width == 1;
    (*decomp_2) = decomp_0 && decomp_1;
}

void mcl_out1_rep2(F2D *sum, int *decomp_2)
{
    int decomp_0;
    int decomp_1;
    decomp_0 = sum->height == 1;
    decomp_1 = sum->width == 1;
    (*decomp_2) = decomp_0 && decomp_1;
}

void mcl_out1_rep1(F2D *sum, int *decomp_2)
{
    int decomp_0;
    int decomp_1;
    decomp_0 = sum->height == 1;
    decomp_1 = sum->width == 1;
    (*decomp_2) = decomp_0 && decomp_1;
}

void mcl_out1_rep0(F2D *sum, int *decomp_2)
{
    int decomp_0;
    int decomp_1;
    decomp_0 = sum->height == 1;
    decomp_1 = sum->width == 1;
    (*decomp_2) = decomp_0 && decomp_1;
}

void mcl_out2(float *sumVal, F2D *sum, int *i, F2D *retW, int *j)
{
    (*sumVal) = sum->data[0];
    for ((*i) = 0; (*i) < retW->height; (*i)++)
    {
        for ((*j) = 0; (*j) < retW->width; (*j)++)
        {
            retW->data[((*i)) * retW->width + ((*j))] = retW->data[((*i)) * retW->width + ((*j))] / (*sumVal);
        }
    }
}

void mcl_out2_rep4(float *sumVal, F2D *sum, int *i, F2D *retW, int *j)
{
    (*sumVal) = sum->data[0];
    for ((*i) = 0; (*i) < retW->height; (*i)++)
    {
        for ((*j) = 0; (*j) < retW->width; (*j)++)
        {
            retW->data[((*i)) * retW->width + ((*j))] = retW->data[((*i)) * retW->width + ((*j))] / (*sumVal);
        }
    }
}

void mcl_out2_rep3(float *sumVal, F2D *sum, int *i, F2D *retW, int *j)
{
    (*sumVal) = sum->data[0];
    for ((*i) = 0; (*i) < retW->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < retW->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            retW->data[((*i)) * retW->width + ((*j))] = retW->data[((*i)) * retW->width + ((*j))] / (*sumVal);
        }
    }
}

void mcl_out2_rep2(float *sumVal, F2D *sum, int *i, F2D *retW, int *j)
{
    (*sumVal) = sum->data[0];
    for ((*i) = 0; (*i) < retW->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < retW->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            retW->data[((*i)) * retW->width + ((*j))] = retW->data[((*i)) * retW->width + ((*j))] / (*sumVal);
        }
    }
}

void mcl_out2_rep1(float *sumVal, F2D *sum, int *i, F2D *retW, int *j)
{
    (*sumVal) = sum->data[0];
    for ((*i) = 0; (*i) < retW->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < retW->width; (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            retW->data[((*i)) * retW->width + ((*j))] = retW->data[((*i)) * retW->width + ((*j))] / (*sumVal);
        }
    }
}

void mcl_out2_rep0(float *sumVal, F2D *sum, int *i, F2D *retW, int *j)
{
    (*sumVal) = sum->data[0];
    for ((*i) = 0; (*i) < retW->height; (*i)++)
    {
        for ((*j) = 0; (*j) < retW->width; (*j)++)
        {
            retW->data[((*i)) * retW->width + ((*j))] = retW->data[((*i)) * retW->width + ((*j))] / (*sumVal);
        }
    }
}

void mcl(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val)
{
    int i;
    int j;
    F2D *retW;
    F2D *retX;
    F2D *sum;
    float sumVal;
    int decomp_2;
    fDeepCopy_rep7(x, &retX);
    get3DGaussianProb_rep0(retX, sData, invConv, &retW);
    fSum_rep0(retW, &sum);
    mcl_out1_rep0(sum, &decomp_2);
    if (decomp_2)
    {
        mcl_out2_rep0(&sumVal, sum, &i, retW, &j);
    }
    else
    {
        fMdivide_rep0(retW, sum, &retW);
    }
    fFreeHandle_rep110(retX);
    fFreeHandle_rep115(sum);
    *rtr_val = retW;
}

void mcl_rep3(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val)
{
    int i;
    int j;
    F2D *retW;
    F2D *retX;
    F2D *sum;
    float sumVal;
    int decomp_2;
    fDeepCopy_rep8(x, &retX);
    get3DGaussianProb_rep1(retX, sData, invConv, &retW);
    fSum_rep1(retW, &sum);
    mcl_out1_rep1(sum, &decomp_2);
    if (decomp_2)
    {
        mcl_out2_rep1(&sumVal, sum, &i, retW, &j);
    }
    else
    {
        fMdivide_rep1(retW, sum, &retW);
    }
    fFreeHandle_rep111(retX);
    fFreeHandle_rep116(sum);
    *rtr_val = retW;
}

void mcl_rep2(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val)
{
    int i;
    int j;
    F2D *retW;
    F2D *retX;
    F2D *sum;
    float sumVal;
    int decomp_2;
    fDeepCopy_rep9(x, &retX);
    get3DGaussianProb_rep2(retX, sData, invConv, &retW);
    fSum_rep2(retW, &sum);
    mcl_out1_rep2(sum, &decomp_2);
    if (decomp_2)
    {
        mcl_out2_rep2(&sumVal, sum, &i, retW, &j);
    }
    else
    {
        fMdivide_rep2(retW, sum, &retW);
    }
    fFreeHandle_rep112(retX);
    fFreeHandle_rep117(sum);
    *rtr_val = retW;
}

void mcl_rep1(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val)
{
    int i;
    int j;
    F2D *retW;
    F2D *retX;
    F2D *sum;
    float sumVal;
    int decomp_2;
    fDeepCopy_rep10(x, &retX);
    get3DGaussianProb_rep3(retX, sData, invConv, &retW);
    fSum_rep3(retW, &sum);
    mcl_out1_rep3(sum, &decomp_2);
    if (decomp_2)
    {
        mcl_out2_rep3(&sumVal, sum, &i, retW, &j);
    }
    else
    {
        fMdivide_rep3(retW, sum, &retW);
    }
    fFreeHandle_rep113(retX);
    fFreeHandle_rep118(sum);
    *rtr_val = retW;
}

void mcl_rep0(F2D *x, F2D *sData, F2D *invConv, F2D **rtr_val)
{
    int i;
    int j;
    F2D *retW;
    F2D *retX;
    F2D *sum;
    float sumVal;
    int decomp_2;
    fDeepCopy_rep11(x, &retX);
    get3DGaussianProb_rep4(retX, sData, invConv, &retW);
    fSum_rep4(retW, &sum);
    mcl_out1_rep4(sum, &decomp_2);
    if (decomp_2)
    {
        mcl_out2_rep4(&sumVal, sum, &i, retW, &j);
    }
    else
    {
        fMdivide_rep4(retW, sum, &retW);
    }
    fFreeHandle_rep114(retX);
    fFreeHandle_rep119(sum);
    *rtr_val = retW;
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

void quatConj_out0(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep4(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep10(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep9(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep8(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep7(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep6(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep5(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep3(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep2(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep1(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out0_rep0(int *rows, F2D *a)
{
    int cols;
    int j;
    (*rows) = a->height;
    cols = a->width;
}

void quatConj_out1(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep4(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep10(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep9(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep8(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep7(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep6(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep5(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep3(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep2(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep1(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj_out1_rep0(int *i, int *rows, int *k, F2D *retQuat, F2D *a)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = a->data[((*i)) * a->width + (0)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (1)];
        retQuat->data[((*i)) * retQuat->width + ((*k)++)] = -a->data[((*i)) * a->width + (2)];
        retQuat->data[((*i)) * retQuat->width + ((*k))] = -a->data[((*i)) * a->width + (3)];
    }
}

void quatConj(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep0(&rows, a);
    fSetArray_rep82(rows, 4, 0, &retQuat);
    quatConj_out1_rep0(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatConj_rep3(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep1(&rows, a);
    fSetArray_rep83(rows, 4, 0, &retQuat);
    quatConj_out1_rep1(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatConj_rep2(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep2(&rows, a);
    fSetArray_rep84(rows, 4, 0, &retQuat);
    quatConj_out1_rep2(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatConj_rep1(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep3(&rows, a);
    fSetArray_rep85(rows, 4, 0, &retQuat);
    quatConj_out1_rep3(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatConj_rep0(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep5(&rows, a);
    fSetArray_rep114(rows, 4, 0, &retQuat);
    quatConj_out1_rep5(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatConj_rep8(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep6(&rows, a);
    fSetArray_rep115(rows, 4, 0, &retQuat);
    quatConj_out1_rep6(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatConj_rep7(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep7(&rows, a);
    fSetArray_rep116(rows, 4, 0, &retQuat);
    quatConj_out1_rep7(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatConj_rep6(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep8(&rows, a);
    fSetArray_rep117(rows, 4, 0, &retQuat);
    quatConj_out1_rep8(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatConj_rep5(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep9(&rows, a);
    fSetArray_rep118(rows, 4, 0, &retQuat);
    quatConj_out1_rep9(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatConj_rep4(F2D *a, F2D **rtr_val)
{
    int k;
    int i;
    int rows;
    F2D *retQuat;
    quatConj_out0_rep10(&rows, a);
    fSetArray_rep119(rows, 4, 0, &retQuat);
    quatConj_out1_rep10(&i, &rows, &k, retQuat, a);
    *rtr_val = retQuat;
}

void quatMul_out0(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep4(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep10(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep9(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep8(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep7(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep6(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep5(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep3(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep16(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep15(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep14(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep13(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep12(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep11(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep2(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep1(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out0_rep0(int *k, int *ra, F2D *a, int *rb, F2D *b)
{
    int ca;
    int cb;
    (*k) = 0;
    (*ra) = a->height;
    ca = a->width;
    (*rb) = b->height;
    cb = b->width;
}

void quatMul_out1(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep4(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep10(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep9(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep8(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep7(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep6(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep5(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep3(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep16(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep15(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep14(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep13(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep12(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep11(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep2(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep1(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul_out1_rep0(int *j, int *i, int *ra, int *k, F2D *a, F2D *b, F2D *ret, int *rb)
{
    (*j) = 0;
    for ((*i) = 0; (*i) < (*ra); (*i)++)
    {
        float ai0;
        float ai1;
        float ai2;
        float ai3;
        float bj0;
        float bj1;
        float bj2;
        float bj3;
        int decomp_0;
        (*k) = 0;
        ai0 = a->data[((*i)) * a->width + (0)];
        ai1 = a->data[((*i)) * a->width + (1)];
        ai2 = a->data[((*i)) * a->width + (2)];
        ai3 = a->data[((*i)) * a->width + (3)];
        bj0 = b->data[((*j)) * b->width + (0)];
        bj1 = b->data[((*j)) * b->width + (1)];
        bj2 = b->data[((*j)) * b->width + (2)];
        bj3 = b->data[((*j)) * b->width + (3)];
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj0 - ai1 * bj1 - ai2 * bj2 - ai3 * bj3;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj1 + ai1 * bj0 + ai2 * bj3 - ai3 * bj2;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj2 - ai1 * bj3 + ai2 * bj0 + ai3 * bj1;
        ret->data[((*i)) * ret->width + ((*k)++)] = ai0 * bj3 + ai1 * bj2 - ai2 * bj1 + ai3 * bj0;
        decomp_0 = (*rb) == (*ra);
        if (decomp_0)
        {
            (*j)++;
        }
    }
}

void quatMul(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep0(&k, &ra, a, &rb, b);
    fSetArray_rep34(ra, 4, 0, &ret);
    quatMul_out1_rep0(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep3(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep1(&k, &ra, a, &rb, b);
    fSetArray_rep35(ra, 4, 0, &ret);
    quatMul_out1_rep1(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep2(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep2(&k, &ra, a, &rb, b);
    fSetArray_rep36(ra, 4, 0, &ret);
    quatMul_out1_rep2(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep1(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep11(&k, &ra, a, &rb, b);
    fSetArray_rep120(ra, 4, 0, &ret);
    quatMul_out1_rep11(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep13(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep12(&k, &ra, a, &rb, b);
    fSetArray_rep121(ra, 4, 0, &ret);
    quatMul_out1_rep12(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep12(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep13(&k, &ra, a, &rb, b);
    fSetArray_rep122(ra, 4, 0, &ret);
    quatMul_out1_rep13(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep11(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep14(&k, &ra, a, &rb, b);
    fSetArray_rep123(ra, 4, 0, &ret);
    quatMul_out1_rep14(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep10(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep15(&k, &ra, a, &rb, b);
    fSetArray_rep124(ra, 4, 0, &ret);
    quatMul_out1_rep15(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep9(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep16(&k, &ra, a, &rb, b);
    fSetArray_rep125(ra, 4, 0, &ret);
    quatMul_out1_rep16(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep0(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep5(&k, &ra, a, &rb, b);
    fSetArray_rep108(ra, 4, 0, &ret);
    quatMul_out1_rep5(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep8(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep6(&k, &ra, a, &rb, b);
    fSetArray_rep109(ra, 4, 0, &ret);
    quatMul_out1_rep6(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep7(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep7(&k, &ra, a, &rb, b);
    fSetArray_rep110(ra, 4, 0, &ret);
    quatMul_out1_rep7(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep6(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep8(&k, &ra, a, &rb, b);
    fSetArray_rep111(ra, 4, 0, &ret);
    quatMul_out1_rep8(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep5(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep9(&k, &ra, a, &rb, b);
    fSetArray_rep112(ra, 4, 0, &ret);
    quatMul_out1_rep9(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatMul_rep4(F2D *a, F2D *b, F2D **rtr_val)
{
    int k;
    int j;
    int i;
    F2D *ret;
    int rb;
    int ra;
    quatMul_out0_rep10(&k, &ra, a, &rb, b);
    fSetArray_rep113(ra, 4, 0, &ret);
    quatMul_out1_rep10(&j, &i, &ra, &k, a, b, ret, &rb);
    *rtr_val = ret;
}

void quatRot_out0(int *nr, F2D *vec)
{
    (*nr) = vec->height;
}

void quatRot_out0_rep4(int *nr, F2D *vec)
{
    (*nr) = vec->height;
}

void quatRot_out0_rep3(int *nr, F2D *vec)
{
    (*nr) = vec->height;
}

void quatRot_out0_rep2(int *nr, F2D *vec)
{
    (*nr) = vec->height;
}

void quatRot_out0_rep1(int *nr, F2D *vec)
{
    (*nr) = vec->height;
}

void quatRot_out0_rep0(int *nr, F2D *vec)
{
    (*nr) = vec->height;
}

void quatRot_out1(int *rows, F2D *retVec, int *cols)
{
    (*rows) = retVec->height;
    (*cols) = retVec->width;
}

void quatRot_out1_rep4(int *rows, F2D *retVec, int *cols)
{
    (*rows) = retVec->height;
    (*cols) = retVec->width;
}

void quatRot_out1_rep3(int *rows, F2D *retVec, int *cols)
{
    (*rows) = retVec->height;
    (*cols) = retVec->width;
}

void quatRot_out1_rep2(int *rows, F2D *retVec, int *cols)
{
    (*rows) = retVec->height;
    (*cols) = retVec->width;
}

void quatRot_out1_rep1(int *rows, F2D *retVec, int *cols)
{
    (*rows) = retVec->height;
    (*cols) = retVec->width;
}

void quatRot_out1_rep0(int *rows, F2D *retVec, int *cols)
{
    (*rows) = retVec->height;
    (*cols) = retVec->width;
}

void quatRot_out2(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        for ((*j) = 1; (*j) < 4; (*j)++)
        {
            ret->data[((*i)) * ret->width + ((*k))] = retVec->data[((*i)) * retVec->width + ((*j))];
            (*k)++;
        }
    }
}

void quatRot_out2_rep4(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        for ((*j) = 1; (*j) < 4; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            ret->data[((*i)) * ret->width + ((*k))] = retVec->data[((*i)) * retVec->width + ((*j))];
            (*k)++;
        }
    }
}

void quatRot_out2_rep3(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        for ((*j) = 1; (*j) < 4; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            ret->data[((*i)) * ret->width + ((*k))] = retVec->data[((*i)) * retVec->width + ((*j))];
            (*k)++;
        }
    }
}

void quatRot_out2_rep2(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        for ((*j) = 1; (*j) < 4; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            ret->data[((*i)) * ret->width + ((*k))] = retVec->data[((*i)) * retVec->width + ((*j))];
            (*k)++;
        }
    }
}

void quatRot_out2_rep1(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*k) = 0;
        for ((*j) = 1; (*j) < 4; (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            ret->data[((*i)) * ret->width + ((*k))] = retVec->data[((*i)) * retVec->width + ((*j))];
            (*k)++;
        }
    }
}

void quatRot_out2_rep0(int *i, int *rows, int *k, int *j, F2D *ret, F2D *retVec)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        (*k) = 0;
        for ((*j) = 1; (*j) < 4; (*j)++)
        {
            ret->data[((*i)) * ret->width + ((*k))] = retVec->data[((*i)) * retVec->width + ((*j))];
            (*k)++;
        }
    }
}

void quatRot(F2D *vec, F2D *rQuat, F2D **rtr_val)
{
    F2D *retVec;
    F2D *temp1;
    F2D *temp;
    F2D *vQuat;
    F2D *tv;
    int cols;
    int rows;
    int k;
    int j;
    int i;
    int nr;
    F2D *ret;
    quatRot_out0_rep0(&nr, vec);
    fSetArray_rep87(nr, 1, 0, &tv);
    fHorzcat_rep2(tv, vec, &vQuat);
    quatMul_rep4(rQuat, vQuat, &temp);
    quatConj_rep4(rQuat, &temp1);
    quatMul_rep9(temp, temp1, &retVec);
    quatRot_out1_rep0(&rows, retVec, &cols);
    fSetArray_rep92(rows, 3, 0, &ret);
    quatRot_out2_rep0(&i, &rows, &k, &j, ret, retVec);
    fFreeHandle_rep135(tv);
    fFreeHandle_rep140(vQuat);
    fFreeHandle_rep145(temp);
    fFreeHandle_rep150(temp1);
    fFreeHandle_rep155(retVec);
    *rtr_val = ret;
}

void quatRot_rep3(F2D *vec, F2D *rQuat, F2D **rtr_val)
{
    F2D *retVec;
    F2D *temp1;
    F2D *temp;
    F2D *vQuat;
    F2D *tv;
    int cols;
    int rows;
    int k;
    int j;
    int i;
    int nr;
    F2D *ret;
    quatRot_out0_rep1(&nr, vec);
    fSetArray_rep88(nr, 1, 0, &tv);
    fHorzcat_rep3(tv, vec, &vQuat);
    quatMul_rep5(rQuat, vQuat, &temp);
    quatConj_rep5(rQuat, &temp1);
    quatMul_rep10(temp, temp1, &retVec);
    quatRot_out1_rep1(&rows, retVec, &cols);
    fSetArray_rep93(rows, 3, 0, &ret);
    quatRot_out2_rep1(&i, &rows, &k, &j, ret, retVec);
    fFreeHandle_rep136(tv);
    fFreeHandle_rep141(vQuat);
    fFreeHandle_rep146(temp);
    fFreeHandle_rep151(temp1);
    fFreeHandle_rep156(retVec);
    *rtr_val = ret;
}

void quatRot_rep2(F2D *vec, F2D *rQuat, F2D **rtr_val)
{
    F2D *retVec;
    F2D *temp1;
    F2D *temp;
    F2D *vQuat;
    F2D *tv;
    int cols;
    int rows;
    int k;
    int j;
    int i;
    int nr;
    F2D *ret;
    quatRot_out0_rep2(&nr, vec);
    fSetArray_rep89(nr, 1, 0, &tv);
    fHorzcat_rep4(tv, vec, &vQuat);
    quatMul_rep6(rQuat, vQuat, &temp);
    quatConj_rep6(rQuat, &temp1);
    quatMul_rep11(temp, temp1, &retVec);
    quatRot_out1_rep2(&rows, retVec, &cols);
    fSetArray_rep94(rows, 3, 0, &ret);
    quatRot_out2_rep2(&i, &rows, &k, &j, ret, retVec);
    fFreeHandle_rep137(tv);
    fFreeHandle_rep142(vQuat);
    fFreeHandle_rep147(temp);
    fFreeHandle_rep152(temp1);
    fFreeHandle_rep157(retVec);
    *rtr_val = ret;
}

void quatRot_rep1(F2D *vec, F2D *rQuat, F2D **rtr_val)
{
    F2D *retVec;
    F2D *temp1;
    F2D *temp;
    F2D *vQuat;
    F2D *tv;
    int cols;
    int rows;
    int k;
    int j;
    int i;
    int nr;
    F2D *ret;
    quatRot_out0_rep3(&nr, vec);
    fSetArray_rep90(nr, 1, 0, &tv);
    fHorzcat_rep5(tv, vec, &vQuat);
    quatMul_rep7(rQuat, vQuat, &temp);
    quatConj_rep7(rQuat, &temp1);
    quatMul_rep12(temp, temp1, &retVec);
    quatRot_out1_rep3(&rows, retVec, &cols);
    fSetArray_rep95(rows, 3, 0, &ret);
    quatRot_out2_rep3(&i, &rows, &k, &j, ret, retVec);
    fFreeHandle_rep138(tv);
    fFreeHandle_rep143(vQuat);
    fFreeHandle_rep148(temp);
    fFreeHandle_rep153(temp1);
    fFreeHandle_rep158(retVec);
    *rtr_val = ret;
}

void quatRot_rep0(F2D *vec, F2D *rQuat, F2D **rtr_val)
{
    F2D *retVec;
    F2D *temp1;
    F2D *temp;
    F2D *vQuat;
    F2D *tv;
    int cols;
    int rows;
    int k;
    int j;
    int i;
    int nr;
    F2D *ret;
    quatRot_out0_rep4(&nr, vec);
    fSetArray_rep91(nr, 1, 0, &tv);
    fHorzcat_rep6(tv, vec, &vQuat);
    quatMul_rep8(rQuat, vQuat, &temp);
    quatConj_rep8(rQuat, &temp1);
    quatMul_rep13(temp, temp1, &retVec);
    quatRot_out1_rep4(&rows, retVec, &cols);
    fSetArray_rep96(rows, 3, 0, &ret);
    quatRot_out2_rep4(&i, &rows, &k, &j, ret, retVec);
    fFreeHandle_rep139(tv);
    fFreeHandle_rep144(vQuat);
    fFreeHandle_rep149(temp);
    fFreeHandle_rep154(temp1);
    fFreeHandle_rep159(retVec);
    *rtr_val = ret;
}

void randWrapper_out1(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep9(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep8(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep7(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep6(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep5(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep4(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep3(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep2(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep1(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep16(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep15(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep14(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep13(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep12(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 1 min = 1
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep11(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep10(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper_out1_rep0(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
}

void randWrapper(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep51(m, n, 0, &out);
    randWrapper_out1_rep0(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep8(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep101(m, n, 0, &out);
    randWrapper_out1_rep10(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep14(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep102(m, n, 0, &out);
    randWrapper_out1_rep11(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep13(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep103(m, n, 0, &out);
    randWrapper_out1_rep12(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep12(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep104(m, n, 0, &out);
    randWrapper_out1_rep13(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep11(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep105(m, n, 0, &out);
    randWrapper_out1_rep14(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep10(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep106(m, n, 0, &out);
    randWrapper_out1_rep15(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep9(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep107(m, n, 0, &out);
    randWrapper_out1_rep16(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep7(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep53(m, n, 0, &out);
    randWrapper_out1_rep2(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep6(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep54(m, n, 0, &out);
    randWrapper_out1_rep3(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep5(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep55(m, n, 0, &out);
    randWrapper_out1_rep4(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep4(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep56(m, n, 0, &out);
    randWrapper_out1_rep5(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep3(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep57(m, n, 0, &out);
    randWrapper_out1_rep6(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep2(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep58(m, n, 0, &out);
    randWrapper_out1_rep7(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep1(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep59(m, n, 0, &out);
    randWrapper_out1_rep8(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randWrapper_rep0(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep60(m, n, 0, &out);
    randWrapper_out1_rep9(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randnWrapper_out1(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            float w;
            w = out->data[((*i)) * out->width + ((*j))];
            w = ((-2.0 * log(w)) / w);
            out->data[((*i)) * out->width + ((*j))] = w;
        }
    }
}

void randnWrapper_out1_rep3(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            float w;
            w = out->data[((*i)) * out->width + ((*j))];
            w = ((-2.0 * log(w)) / w);
            out->data[((*i)) * out->width + ((*j))] = w;
        }
    }
}

void randnWrapper_out1_rep2(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 3 min = 3
            float w;
            w = out->data[((*i)) * out->width + ((*j))];
            w = ((-2.0 * log(w)) / w);
            out->data[((*i)) * out->width + ((*j))] = w;
        }
    }
}

void randnWrapper_out1_rep1(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            float w;
            w = out->data[((*i)) * out->width + ((*j))];
            w = ((-2.0 * log(w)) / w);
            out->data[((*i)) * out->width + ((*j))] = w;
        }
    }
}

void randnWrapper_out1_rep0(float *seed, int *i, int *m, int *j, int *n, F2D *out)
{
    (*seed) = 0.9;
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = (*i) < (*j);
            if (decomp_0)
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*i) + 1.0) / ((*j) + 1.0));
            }
            else
            {
                out->data[((*i)) * out->width + ((*j))] = (*seed) * (((*j) + 1.0) / ((*i) + 1.0));
            }
        }
    }
    for ((*i) = 0; (*i) < (*m); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            float w;
            w = out->data[((*i)) * out->width + ((*j))];
            w = ((-2.0 * log(w)) / w);
            out->data[((*i)) * out->width + ((*j))] = w;
        }
    }
}

void randnWrapper(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep97(m, n, 0, &out);
    randnWrapper_out1_rep0(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randnWrapper_rep2(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep98(m, n, 0, &out);
    randnWrapper_out1_rep1(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randnWrapper_rep1(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep99(m, n, 0, &out);
    randnWrapper_out1_rep2(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

void randnWrapper_rep0(int m, int n, F2D **rtr_val)
{
    F2D *out;
    float seed;
    int i;
    int j;
    fSetArray_rep100(m, n, 0, &out);
    randnWrapper_out1_rep3(&seed, &i, &m, &j, &n, out);
    *rtr_val = out;
}

F2D *readFile(char *fileName)
{
    FILE *fp;
    F2D *fill;
    float temp;
    int rows, cols;
    int i, j;
    fp = fopen(fileName, "r");
    if (fp == nullptr)
    {
        printf("Error in file %s\n", fileName);

        return nullptr;
    }
    fscanf(fp, "%d", &cols);
    fscanf(fp, "%d", &rows);
    fSetArray_rep14(rows, cols, 0, &fill);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            fscanf(fp, "%f", &(fill->data[(i)*fill->width + (j)]));
        }
    }
    fclose(fp);

    return fill;
}

F2D *readSensorData(I2D *index, F2D *fid, I2D *type, I2D *eof)
{
    F2D *retData;
    int rows, i, j, k;
    int atype = -1, aindex;
    aindex = index->data[0];
    index->data[0] = index->data[0] + 1;
    rows = fid->height;
    type->data[0] = 0;
    fSetArray_rep15(1, 8, 0, &retData);
    if (index->data[0] > (rows - 1))
    {
        eof->data[0] = 1;
    }
    else
    {
        if (index->data[0] == rows)
        {
            eof->data[0] = 1;
        }
        else
        {
            eof->data[0] = 0;
        }
        k = index->data[0];
        atype = fid->data[(k)*fid->width + (1)];
        if ((atype == 1) || (atype == 2) || (atype == 3))
        {
            for (i = 0; i < 3; i++)
            {
                retData->data[i] = fid->data[(k)*fid->width + ((i + 2))];
            }
        }
        if (atype == 4)
        {
            for (i = 0; i < 3; i++)
            {
                retData->data[i] = fid->data[(k)*fid->width + ((i + 2))];
            }
            for (i = 3; i < 8; i++)
            {
                retData->data[i] = fid->data[(k + 1) * fid->width + ((i - 3))];
            }
            aindex = aindex + 1;
        }
        aindex = aindex + 1;
    }
    index->data[0] = aindex;
    type->data[0] = atype;

    return retData;
}

void updateState_out0(int *decomp_0, I2D *sType)
{
    (*decomp_0) = sType->data[0] == 2;
}

void updateState_out1_out0(int *_scope2_qD_r, int *_scope2_qD_c)
{
    (*_scope2_qD_r) = 0;
    (*_scope2_qD_c) = 0;
}

void updateState_out1_out1(int *_scope2_i, int *n, F2D *_scope2_t1, F2D *randW, float *M_STDDEV_GYRO, F2D **gyro,
                           F2D *_scope2_abc)
{
    for ((*_scope2_i) = 0; (*_scope2_i) < ((*n) * 3); (*_scope2_i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        _scope2_t1->data[(*_scope2_i)] = randW->data[(*_scope2_i)] * (*M_STDDEV_GYRO);
        (*gyro)->data[(*_scope2_i)] = (*gyro)->data[(*_scope2_i)] + _scope2_t1->data[(*_scope2_i)];
        _scope2_abc->data[(*_scope2_i)] = pow((*gyro)->data[(*_scope2_i)], 2);
    }
}

void updateState_out1_out2(int *_scope2_i, F2D *_scope2_abcd, F2D **norm_gyro, F2D **angleAlpha,
                           float *gyroTimeInterval, int *_scope2_qD_r, F2D **gyro, int *_scope2_qD_c)
{
    for ((*_scope2_i) = 0; (*_scope2_i) < (_scope2_abcd->height * _scope2_abcd->width); (*_scope2_i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        (*norm_gyro)->data[(*_scope2_i)] = sqrt(_scope2_abcd->data[(*_scope2_i)]);
        (*angleAlpha)->data[(*_scope2_i)] = (*norm_gyro)->data[(*_scope2_i)] * (*gyroTimeInterval);
    }
    (*_scope2_qD_r) = (*_scope2_qD_r) + (*angleAlpha)->height + (*gyro)->height;
    (*_scope2_qD_c) = (*_scope2_qD_c) + (*angleAlpha)->width + 3;
}

void updateState_out1_out3(int *_scope2_i, F2D *_scope2_cosA, F2D **angleAlpha, F2D *_scope2_sinA)
{
    for ((*_scope2_i) = 0; (*_scope2_i) < (_scope2_cosA->height * _scope2_cosA->width); (*_scope2_i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        _scope2_cosA->data[(*_scope2_i)] = cos((*angleAlpha)->data[(*_scope2_i)] / 2);
    }
    for ((*_scope2_i) = 0; (*_scope2_i) < (_scope2_sinA->height * _scope2_sinA->width); (*_scope2_i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        _scope2_sinA->data[(*_scope2_i)] = sin((*angleAlpha)->data[(*_scope2_i)] / 2);
    }
}

void updateState_out1(F2D *sData, F2D **gyro, F2D *ones, F2D *randW, int *n, float *M_STDDEV_GYRO, F2D **norm_gyro,
                      F2D **angleAlpha, float *gyroTimeInterval, F2D **quatDelta, F2D **quat)
{
    F2D *_scope2_sinA;
    F2D *_scope2_cosA;
    int _scope2_qD_c;
    int _scope2_qD_r;
    F2D *_scope2_abcd;
    F2D *_scope2_abc;
    F2D *_scope2_t1;
    F2D *_scope2_t;
    int _scope2_i;
    updateState_out1_out0(&_scope2_qD_r, &_scope2_qD_c);
    fDeepCopyRange_rep3(sData, 0, 1, 0, 3, &_scope2_t);
    fMtimes_rep1(ones, _scope2_t, gyro);
    fMallocHandle_rep18((*gyro)->height, (*gyro)->width, &_scope2_abc);
    fDeepCopy_rep1(randW, &_scope2_t1);
    updateState_out1_out1(&_scope2_i, n, _scope2_t1, randW, M_STDDEV_GYRO, gyro, _scope2_abc);
    fFreeHandle_rep17(_scope2_t1);
    fSum2(_scope2_abc, 2, &_scope2_abcd);
    fMallocHandle_rep19(_scope2_abcd->height, _scope2_abcd->width, norm_gyro);
    fMallocHandle_rep20(_scope2_abcd->height, _scope2_abcd->width, angleAlpha);
    updateState_out1_out2(&_scope2_i, _scope2_abcd, norm_gyro, angleAlpha, gyroTimeInterval, &_scope2_qD_r, gyro,
                          &_scope2_qD_c);
    fFreeHandle_rep18(_scope2_t);
    fFreeHandle_rep19(_scope2_abcd);
    fSetArray_rep16((*angleAlpha)->height, (*angleAlpha)->width, 0, &_scope2_cosA);
    fSetArray_rep17((*angleAlpha)->height, (*angleAlpha)->width, 0, &_scope2_sinA);
    updateState_out1_out3(&_scope2_i, _scope2_cosA, angleAlpha, _scope2_sinA);
    fFreeHandle_rep20(_scope2_abc);
    fSetArray_rep18(1, 3, 1, &_scope2_abc);
    fMtimes_rep2((*norm_gyro), _scope2_abc, &_scope2_t1);
    ffDivide((*gyro), _scope2_t1, &_scope2_t);
    fFreeHandle_rep21(_scope2_t1);
    fMtimes_rep3(_scope2_sinA, _scope2_abc, &_scope2_abcd);
    fTimes(_scope2_t, _scope2_abcd, &_scope2_t1);
    fHorzcat_rep1(_scope2_cosA, _scope2_t1, quatDelta);
    fFreeHandle_rep22(_scope2_abcd);
    fFreeHandle_rep23(_scope2_t);
    fFreeHandle_rep24(_scope2_t1);
    fFreeHandle_rep25(_scope2_abc);
    quatMul_rep2((*quat), (*quatDelta), &_scope2_t);
    fFreeHandle_rep26((*quat));
    fFreeHandle_rep27((*quatDelta));
    fDeepCopy_rep2(_scope2_t, quat);
    fFreeHandle_rep28(_scope2_t);
    fFreeHandle_rep29((*norm_gyro));
    fFreeHandle_rep30((*gyro));
    fFreeHandle_rep31((*angleAlpha));
    fFreeHandle_rep32(_scope2_cosA);
    fFreeHandle_rep33(_scope2_sinA);
}

void updateState_out2(int *decomp_1, I2D *sType)
{
    (*decomp_1) = sType->data[0] == 4;
}

void updateState_out3_out0(float *tempSum, F2D *STDDEV_GPSPos, F2D *sData)
{
    (*tempSum) = 0;
    STDDEV_GPSPos->data[0] = sData->data[6];
    STDDEV_GPSPos->data[4] = sData->data[7];
    STDDEV_GPSPos->data[8] = 15;
}

void updateState_out3_out1(int *ii, F2D **pos, float *tempSum, int *decomp_2)
{
    for ((*ii) = 0; (*ii) < ((*pos)->height * (*pos)->width); (*ii)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        (*tempSum) = (*tempSum) + (*pos)->data[(*ii)];
    }
    (*decomp_2) = (*tempSum) == 0;
}

void updateState_out3_out2_out1(int *ii, F2D **pos, F2D **t, F2D *t1)
{
    for ((*ii) = 0; (*ii) < ((*pos)->height * (*pos)->width); (*ii)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        (*pos)->data[(*ii)] = (*t)->data[(*ii)] + t1->data[(*ii)];
    }
}

void updateState_out3_out2(F2D **t, F2D *randW, F2D *STDDEV_GPSPos, F2D *ones, F2D **Opos, int *ii, F2D **pos)
{
    F2D *t1;
    fMtimes_rep4(randW, STDDEV_GPSPos, t);
    fMtimes_rep5(ones, (*Opos), &t1);
    updateState_out3_out2_out1(ii, pos, t, t1);
    fFreeHandle_rep34((*t));
    fFreeHandle_rep35(t1);
}

void updateState_out3_out3_out0(int *rows, F2D *STDDEV_GPSPos, int *cols)
{
    (*rows) = STDDEV_GPSPos->height;
    (*cols) = STDDEV_GPSPos->width;
}

void updateState_out3_out3_out1(int *mnrows, int *rows, int *mncols, int *cols, F2D **temp_STDDEV_GPSPos,
                                F2D *STDDEV_GPSPos)
{
    for ((*mnrows) = 0; (*mnrows) < (*rows); (*mnrows)++)
    {
        for ((*mncols) = 0; (*mncols) < (*cols); (*mncols)++)
        {
            (*temp_STDDEV_GPSPos)->data[((*mnrows)) * (*temp_STDDEV_GPSPos)->width + ((*mncols))] =
                pow(STDDEV_GPSPos->data[((*mnrows)) * STDDEV_GPSPos->width + ((*mncols))], -1);
        }
    }
}

void updateState_out3_out3(F2D *STDDEV_GPSPos, F2D **temp_STDDEV_GPSPos, F2D **w, F2D **pos, F2D **Opos, F2D **quat,
                           F2D **vel)
{
    int mncols;
    int mnrows;
    int cols;
    int rows;
    updateState_out3_out3_out0(&rows, STDDEV_GPSPos, &cols);
    fSetArray_rep19(rows, cols, 1, temp_STDDEV_GPSPos);
    updateState_out3_out3_out1(&mnrows, &rows, &mncols, &cols, temp_STDDEV_GPSPos, STDDEV_GPSPos);
    mcl_rep0((*pos), (*Opos), (*temp_STDDEV_GPSPos), w);
    generateSample_rep0((*w), (*quat), (*vel), (*pos));
}

void updateState_out3_out4(float *OvelNorm, int *decomp_3)
{
    (*OvelNorm) = 2; // 1.1169e+09;
    (*decomp_3) = (*OvelNorm) > 0.5;
}

void updateState_out3_out5_out1(F2D *t)
{
    t->data[(0) * t->width + (0)] = 1;
}

void updateState_out3_out5_out2(F2D *t, float *STDDEV_GPSVel)
{
    int _scope4__scope3_i;
    t->data[0] = 1;
    t->data[4] = 1;
    t->data[8] = 1;
    for (_scope4__scope3_i = 0; _scope4__scope3_i < (t->height * t->width); _scope4__scope3_i++)
    {
#pragma HLS loop_tripcount max = 9 min = 9
        t->data[_scope4__scope3_i] = t->data[_scope4__scope3_i] / (*STDDEV_GPSVel);
    }
}

void updateState_out3_out5(F2D **Ovel, float *OvelNorm, F2D **qConj, F2D **quat, F2D **orgWorld, float *STDDEV_GPSVel,
                           F2D **w, F2D **vel, F2D **pos)
{
    F2D *t;
    fDeepCopy_rep3((*Ovel), &t);
    fFreeHandle_rep36((*Ovel));
    fDivide(t, (*OvelNorm), Ovel);
    quatConj_rep1((*quat), qConj);
    fFreeHandle_rep37(t);
    fSetArray_rep20(1, 3, 0, &t);
    updateState_out3_out5_out1(t);
    quatRot_rep0(t, (*qConj), orgWorld);
    fFreeHandle_rep38(t);
    fFreeHandle_rep39((*qConj));
    fSetArray_rep21(3, 3, 0, &t);
    updateState_out3_out5_out2(t, STDDEV_GPSVel);
    mcl_rep1((*orgWorld), (*Ovel), t, w);
    generateSample_rep1((*w), (*quat), (*vel), (*pos));
    fFreeHandle_rep40(t);
    fFreeHandle_rep41((*w));
    fFreeHandle_rep42((*orgWorld));
}

void updateState_out3(F2D *STDDEV_GPSPos, F2D *sData, F2D **Opos, F2D **pos, F2D *randW, F2D *ones,
                      F2D **temp_STDDEV_GPSPos, F2D **w, F2D **quat, F2D **vel, F2D **Ovel, F2D **qConj, F2D **orgWorld,
                      float *STDDEV_GPSVel)
{
    int ii;
    float OvelNorm;
    float tempSum;
    int decomp_2;
    int decomp_3;
    updateState_out3_out0(&tempSum, STDDEV_GPSPos, sData);
    fDeepCopyRange_rep4(sData, 0, 1, 0, 3, Opos);
    updateState_out3_out1(&ii, pos, &tempSum, &decomp_2);
    if (decomp_2)
    {
        F2D *t;
        updateState_out3_out2(&(t), randW, STDDEV_GPSPos, ones, Opos, &ii, pos);
    }
    else
    {
        updateState_out3_out3(STDDEV_GPSPos, temp_STDDEV_GPSPos, w, pos, Opos, quat, vel);
    }
    fFreeHandle_rep43((*Opos));
    fDeepCopyRange_rep5(sData, 0, 1, 3, 3, Ovel);
    updateState_out3_out4(&OvelNorm, &decomp_3);
    if (decomp_3)
    {
        updateState_out3_out5(Ovel, &OvelNorm, qConj, quat, orgWorld, STDDEV_GPSVel, w, vel, pos);
    }
    fFreeHandle_rep44((*Ovel));
}

void updateState_out4(int *decomp_4, I2D *sType)
{
    (*decomp_4) = sType->data[0] == 1;
}

void updateState_out5_out1(int *i, F2D **vel, F2D **t)
{
    for ((*i) = 0; (*i) < (*vel)->height; (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        double _d0_0;
        double _d0_1;
        double _d0_2;
        double _d0_3;
        double _d0_4;
        double _d0_5;
        _d0_0 = pow((*vel)->data[((*i)) * (*vel)->width + (0)], 2);
        _d0_1 = pow((*vel)->data[((*i)) * (*vel)->width + (1)], 2);
        _d0_2 = _d0_0 + _d0_1;
        _d0_3 = pow((*vel)->data[((*i)) * (*vel)->width + (2)], 2);
        _d0_4 = _d0_2 + _d0_3;
        _d0_5 = sqrt(_d0_4);
        (*t)->data[((*i)) * (*t)->width + (0)] = _d0_5;
    }
}

void updateState_out5_out2(float *valVel, float *STDDEV_ODOVel)
{
    (*valVel) = 1.0 / (*STDDEV_ODOVel);
}

void updateState_out5(F2D **t, F2D **vel, int *i, F2D *sData, float *STDDEV_ODOVel, F2D **w, F2D **quat, F2D **pos)
{
    F2D *Ovel;
    F2D *t1;
    F2D *t2;
    float valVel;
    fSetArray_rep22((*vel)->height, 1, 0, t);
    updateState_out5_out1(i, vel, t);
    fSetArray_rep23(1, 1, sData->data[0], &Ovel);
    updateState_out5_out2(&valVel, STDDEV_ODOVel);
    fSetArray_rep24(1, 1, (1.0 / (*STDDEV_ODOVel)), &t1);
    mcl_rep2((*t), Ovel, t1, w);
    generateSample_rep2((*w), (*quat), (*vel), (*pos));
    fFreeHandle_rep45((*w));
    fFreeHandle_rep46((*t));
    fFreeHandle_rep47(t1);
    fFreeHandle_rep48(Ovel);
}

void updateState_out6(int *decomp_5, I2D *sType)
{
    (*decomp_5) = sType->data[0] == 3;
}

void updateState_out7_out1(F2D *t)
{
    t->data[2] = -9.8;
}

void updateState_out7_out2(F2D *t, float *STDDEV_ACCL)
{
    int _scope5_i;
    t->data[0] = 1;
    t->data[4] = 1;
    t->data[8] = 1;
    for (_scope5_i = 0; _scope5_i < (t->height * t->width); _scope5_i++)
    {
#pragma HLS loop_tripcount max = 9 min = 9
        t->data[_scope5_i] = t->data[_scope5_i] / (*STDDEV_ACCL);
    }
}

void updateState_out7_out4(int *_scope6_i, F2D *_scope6_s, float *acclTimeInterval)
{
    for ((*_scope6_i) = 0; (*_scope6_i) < (_scope6_s->height * _scope6_s->width); (*_scope6_i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        _scope6_s->data[(*_scope6_i)] = _scope6_s->data[(*_scope6_i)] * (*acclTimeInterval); //+(1/2);
    }
}

void updateState_out7_out5(int *_scope6_i, F2D *_scope6_s, F2D *t, float *acclTimeInterval)
{
    for ((*_scope6_i) = 0; (*_scope6_i) < (_scope6_s->height * _scope6_s->width); (*_scope6_i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        t->data[(*_scope6_i)] = 1 / 2 * _scope6_s->data[(*_scope6_i)] * (*acclTimeInterval) * (*acclTimeInterval);
    }
}

void updateState_out7_out6(int *_scope6_i, F2D *_scope6_s, float *M_STDDEV_POS)
{
    for ((*_scope6_i) = 0; (*_scope6_i) < (_scope6_s->height * _scope6_s->width); (*_scope6_i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        _scope6_s->data[(*_scope6_i)] = _scope6_s->data[(*_scope6_i)] * (*M_STDDEV_POS);
    }
}

void updateState_out7_out7(int *_scope6_i, F2D **accl, F2D *t, float *acclTimeInterval)
{
    for ((*_scope6_i) = 0; (*_scope6_i) < ((*accl)->height * (*accl)->width); (*_scope6_i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        t->data[(*_scope6_i)] = (*accl)->data[(*_scope6_i)] * (*acclTimeInterval);
    }
}

void updateState_out7_out8(int *_scope6_i, F2D *_scope6_s, float *M_STDDEV_VEL)
{
    for ((*_scope6_i) = 0; (*_scope6_i) < (_scope6_s->height * _scope6_s->width); (*_scope6_i)++)
    {
#pragma HLS loop_tripcount max = 6000 min = 6000
        _scope6_s->data[(*_scope6_i)] = _scope6_s->data[(*_scope6_i)] * (*M_STDDEV_VEL);
    }
}

void updateState_out7_sw(F2D **accl, F2D *sData, F2D **gtemp, F2D *ones, F2D **gravity, F2D **quat, float *STDDEV_ACCL,
                         F2D **w, F2D **vel, F2D **pos, float *acclTimeInterval, int *n, float *M_STDDEV_POS,
                         float *M_STDDEV_VEL)
{
    F2D *t;
    F2D *_scope6_s;
    F2D *_scope6_is;
    int _scope6_i;
    fSetArray_rep25(1, 3, 0, &t);
    updateState_out7_out1(t);
    fDeepCopyRange_rep6(sData, 0, 1, 0, 3, accl);
    fMtimes_rep6(ones, t, gtemp);
    quatRot_rep1((*gtemp), (*quat), gravity);
    fFreeHandle_rep49((*gtemp));
    fFreeHandle_rep50(t);
    fSetArray_rep26(3, 3, 0, &t);
    updateState_out7_out2(t, STDDEV_ACCL);
    mcl_rep3((*gravity), (*accl), t, w);
    generateSample_rep3((*w), (*quat), (*vel), (*pos));
    fFreeHandle_rep51(t);
    fMtimes_rep7(ones, (*accl), &t);
    fFreeHandle_rep52((*accl));
    fMinus_rep6(t, (*gravity), accl);
    fFreeHandle_rep53((*w));
    fFreeHandle_rep54((*gravity));
    fFreeHandle_rep55(t);
    quatConj_rep2((*quat), &_scope6_is);
    quatRot_rep2((*vel), _scope6_is, &_scope6_s);
    fFreeHandle_rep56(_scope6_is);
    updateState_out7_out4(&_scope6_i, _scope6_s, acclTimeInterval);
    fPlus_rep0((*pos), _scope6_s, &_scope6_is);
    fFreeHandle_rep57((*pos));
    fDeepCopy_rep4(_scope6_is, pos);
    fFreeHandle_rep58(_scope6_is);
    fFreeHandle_rep59(_scope6_s);
    quatConj_rep3((*quat), &_scope6_is);
    quatRot_rep3((*accl), _scope6_is, &_scope6_s);
    fDeepCopy_rep5(_scope6_s, &t);
    updateState_out7_out5(&_scope6_i, _scope6_s, t, acclTimeInterval);
    fFreeHandle_rep60(_scope6_s);
    fFreeHandle_rep61(_scope6_is);
    randnWrapper_rep0((*n), 3, &_scope6_s);
    updateState_out7_out6(&_scope6_i, _scope6_s, M_STDDEV_POS);
    fPlus_rep1((*pos), t, &_scope6_is);
    fFreeHandle_rep62((*pos));
    fPlus_rep2(_scope6_is, _scope6_s, pos);
    fFreeHandle_rep63(_scope6_s);
    fFreeHandle_rep64(t);
    fFreeHandle_rep65(_scope6_is);
    fDeepCopy_rep6((*accl), &t);
    updateState_out7_out7(&_scope6_i, accl, t, acclTimeInterval);
    fPlus_rep3((*vel), t, &_scope6_is);
    fFreeHandle_rep66((*accl));
    fFreeHandle_rep67(t);
    randnWrapper_rep1((*n), 3, &_scope6_s);
    updateState_out7_out8(&_scope6_i, _scope6_s, M_STDDEV_VEL);
    fFreeHandle_rep68((*vel));
    fPlus_rep4(_scope6_is, _scope6_s, vel);
    fFreeHandle_rep69(_scope6_is);
    fFreeHandle_rep70(_scope6_s);
}

void kernel_hw_bridge(F2D **accl, F2D *sData, F2D **gtemp, F2D *ones, F2D **gravity, F2D **quat,
                                float *STDDEV_ACCL, F2D **w, F2D **vel, F2D **pos, float *acclTimeInterval, int *n,
                                float *M_STDDEV_POS, float *M_STDDEV_VEL);
void updateState(I2D *sType, F2D *sData, F2D **gyro, F2D *ones, F2D *randW, int *n, float *M_STDDEV_GYRO,
                 F2D **norm_gyro, F2D **angleAlpha, float *gyroTimeInterval, F2D **quatDelta, F2D **quat,
                 F2D *STDDEV_GPSPos, F2D **Opos, F2D **pos, F2D **temp_STDDEV_GPSPos, F2D **w, F2D **vel, F2D **qConj,
                 F2D **orgWorld, float *STDDEV_GPSVel, int *i, float *STDDEV_ODOVel, F2D **accl, F2D **gtemp,
                 F2D **gravity, float *STDDEV_ACCL, float *acclTimeInterval, float *M_STDDEV_POS, float *M_STDDEV_VEL)
{
    int decomp_0;
    int decomp_1;
    int decomp_4;
    int decomp_5;
    updateState_out0(&decomp_0, sType);
    if (decomp_0)
    {
        updateState_out1(sData, gyro, ones, randW, n, M_STDDEV_GYRO, norm_gyro, angleAlpha, gyroTimeInterval, quatDelta,
                         quat);
    }
    updateState_out2(&decomp_1, sType);
    if (decomp_1)
    {
        F2D *Ovel;
        updateState_out3(STDDEV_GPSPos, sData, Opos, pos, randW, ones, temp_STDDEV_GPSPos, w, quat, vel, &(Ovel), qConj,
                         orgWorld, STDDEV_GPSVel);
    }
    updateState_out4(&decomp_4, sType);
    if (decomp_4)
    {
        F2D *t;
        updateState_out5(&(t), vel, i, sData, STDDEV_ODOVel, w, quat, pos);
    }
    updateState_out6(&decomp_5, sType);
    if (decomp_5)
    {
        // Selector between SW and HW bridge calls based on OFFLOAD getenv variable
        if (getenv("OFFLOAD") != nullptr || getenv("OFFLOAD_SIM") != nullptr)
        {
            kernel_hw_bridge(accl, sData, gtemp, ones, gravity, quat, STDDEV_ACCL, w, vel, pos,
                                       acclTimeInterval, n, M_STDDEV_POS, M_STDDEV_VEL);
        }
        else
        {
            updateState_out7_sw(accl, sData, gtemp, ones, gravity, quat, STDDEV_ACCL, w, vel, pos, acclTimeInterval, n,
                                M_STDDEV_POS, M_STDDEV_VEL);
        }
    }
}

void initQuartenion(F2D **quat, F2D *eul1, F2D *eul2, int *i, I2D **index, I2D **sType, I2D **isEOF)
{
    quatMul_rep3(eul1, eul2, quat);
    fFreeHandle_rep71(eul1);
    fFreeHandle_rep72(eul2);
    (*i) = 0;
    iSetArray_rep0(1, 1, -1, index);
    iSetArray_rep1(1, 1, -1, sType);
    iSetArray_rep2(1, 1, -1, isEOF);
}

int main(int argc, char *argv[])
{
    int n, i, j, k, icount = -1;
    F2D *fid;
    float gyroTimeInterval = 0.01;
    float acclTimeInterval = 0.01;
    float STDDEV_GPSVel = 0.5;
    float STDDEV_ODOVel = 0.1;
    float STDDEV_ACCL = 1;
    float M_STDDEV_GYRO = 0.1;
    float M_STDDEV_POS = 0.1;
    float M_STDDEV_VEL = 0.02;
    F2D *pos, *vel;
    float pi = 3.1416;
    F2D *eul1 = nullptr, *eul2 = nullptr, *quat = nullptr;
    F2D *sData = nullptr, *gyro = nullptr, *norm_gyro = nullptr, *angleAlpha = nullptr;
    F2D *quatDelta = nullptr, *Opos = nullptr, *temp_STDDEV_GPSPos = nullptr, *w = nullptr;
    F2D *qConj = nullptr, *orgWorld = nullptr, *accl = nullptr, *gtemp = nullptr;
    F2D *gravity = nullptr, *t1 = nullptr;
    I2D *tStamp, *sType, *isEOF;
    I2D *index;
    int rows, cols;
    F2D *resultMat;
    F2D *STDDEV_GPSPos;
    F2D *ones, *randW;
//  //  unsigned int *start, *endC, *elapsed, *elt;
    char im1[100];
    if (argc < 2)
    {
        printf("We need input image path\n");

        return -1;
    }
    sprintf(im1, "%s/1.txt", argv[1]);
    fid = readFile(im1);
    n = 1000;
    n = 2000;
    fSetArray_rep27(3, fid->height, 0, &resultMat);
    fSetArray_rep28(n, 3, 0, &pos);
    fSetArray_rep29(n, 3, 0, &vel);
    fSetArray_rep30(n, 1, 1, &ones);
    int _scope0_j;
    F2D *_scope0_randn;
    randWrapper_rep6(n, 3, &_scope0_randn);
    for (i = 0; i < n; i++)
    {
        for (_scope0_j = 0; _scope0_j < 3; _scope0_j++)
        {
            vel->data[(i)*vel->width + (_scope0_j)] +=
                _scope0_randn->data[(i)*_scope0_randn->width + (_scope0_j)] * STDDEV_ODOVel;
        }
    }
    fFreeHandle_rep73(_scope0_randn);
//  // start = photonStartTiming();
    F2D *_scope1_eulAngle, *_scope1_randn;
    fSetArray_rep31(n, 3, 0, &_scope1_eulAngle);
    randWrapper_rep7(n, 1, &_scope1_randn);
    for (i = 0; i < n; i++)
    {
        _scope1_eulAngle->data[(i)*_scope1_eulAngle->width + (2)] =
            _scope1_randn->data[(i)*_scope1_randn->width + (0)] * 2 * pi;
    }
    eul1 = eul2quat(_scope1_eulAngle);
    fFreeHandle_rep74(_scope1_eulAngle);
    fSetArray_rep32(1, 3, 0, &_scope1_eulAngle);
    _scope1_eulAngle->data[(0) * _scope1_eulAngle->width + (0)] = pi;
    eul2 = eul2quat(_scope1_eulAngle);
    fFreeHandle_rep75(_scope1_randn);
    fFreeHandle_rep76(_scope1_eulAngle);
    initQuartenion(&(quat), eul1, eul2, &i, &(index), &(sType), &(isEOF));
//  // endC = photonEndTiming();
//  // elapsed = photonReportTiming(start, endC);
// free(start);
// free(endC);
    rows = 0;
    cols = 5;
    fSetArray_rep33(3, 3, 0, &STDDEV_GPSPos);
    randnWrapper_rep2(n, 3, &randW);
    while (1)
    {
        icount = icount + 1;
        sData = readSensorData(index, fid, sType, isEOF);
        rows++;
//  // start = photonStartTiming();
        updateState(sType, sData, &(gyro), ones, randW, &n, &M_STDDEV_GYRO, &(norm_gyro), &(angleAlpha),
                    &gyroTimeInterval, &(quatDelta), &(quat), STDDEV_GPSPos, &(Opos), &(pos), &(temp_STDDEV_GPSPos),
                    &(w), &(vel), &(qConj), &(orgWorld), &STDDEV_GPSVel, &i, &STDDEV_ODOVel, &(accl), &(gtemp),
                    &(gravity), &STDDEV_ACCL, &acclTimeInterval, &M_STDDEV_POS, &M_STDDEV_VEL);
//  // endC = photonEndTiming();
// elt = photonReportTiming(start, endC);
//  // elapsed[0] += elt[0];
//  // elapsed[1] += elt[1];
// free(start);
// free(endC);
//  // free(elt);
        F2D *_scope7_temp;
        float _scope7_quatOut = 0, _scope7_velOut = 0, _scope7_posOut = 0;
        int _scope7_i;
        for (_scope7_i = 0; _scope7_i < (quat->height * quat->width); _scope7_i++)
        {
            _scope7_quatOut += quat->data[_scope7_i];
        }
        for (_scope7_i = 0; _scope7_i < (vel->height * vel->width); _scope7_i++)
        {
            _scope7_velOut += vel->data[_scope7_i];
        }
        for (_scope7_i = 0; _scope7_i < (pos->height * pos->width); _scope7_i++)
        {
            _scope7_posOut += pos->data[_scope7_i];
        }
        resultMat->data[(0) * resultMat->width + (icount)] = _scope7_quatOut;
        resultMat->data[(1) * resultMat->width + (icount)] = _scope7_velOut;
        resultMat->data[(2) * resultMat->width + (icount)] = _scope7_posOut;
        fFreeHandle_rep77(sData);
        if (isEOF->data[0] == 1)
        {
            break;
        }
    }
    printf("Input size\t\t- (%dx%dx%d)\n", rows, cols, n);
    int _scope8_ret = 0;
    float _scope8_tol = 2.0;
    // fWriteMatrix(resultMat, argv[1]); // Do not overwrite ground truth!
    _scope8_ret = fSelfCheck(resultMat, argv[1], _scope8_tol);
    if (_scope8_ret == -1)
    {
        printf("Error in Localization\n");
    }
//  // photonPrintTiming(elapsed);
    fFreeHandle_rep78(STDDEV_GPSPos);
// free(elapsed);
    iFreeHandle_rep5(index);
    iFreeHandle_rep6(sType);
    iFreeHandle_rep7(isEOF);
    fFreeHandle_rep79(fid);
    fFreeHandle_rep80(resultMat);
    fFreeHandle_rep81(pos);
    fFreeHandle_rep82(vel);
    fFreeHandle_rep83(quat);
    fFreeHandle_rep84(ones);
    fFreeHandle_rep85(randW);

    return 0;
}

void weightedSample_out0(int *n, F2D *w)
{
    (*n) = w->height;
}

void weightedSample_out0_rep5(int *n, F2D *w)
{
    (*n) = w->height;
}

void weightedSample_out0_rep4(int *n, F2D *w)
{
    (*n) = w->height;
}

void weightedSample_out0_rep3(int *n, F2D *w)
{
    (*n) = w->height;
}

void weightedSample_out0_rep2(int *n, F2D *w)
{
    (*n) = w->height;
}

void weightedSample_out0_rep1(int *n, F2D *w)
{
    (*n) = w->height;
}

void weightedSample_out0_rep0(int *n, F2D *w)
{
    (*n) = w->height;
}

void weightedSample_out1(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w)
{
    for ((*i) = 0; (*i) < (*n); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = seed->data[(*j)] > 0;
            if (decomp_0)
            {
                bin->data[(*j)] = bin->data[(*j)] + 1;
            }
        }
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            seed->data[(*j)] = seed->data[(*j)] - w->data[(*i)];
        }
    }
}

void weightedSample_out1_rep5(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w)
{
    for ((*i) = 0; (*i) < (*n); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = seed->data[(*j)] > 0;
            if (decomp_0)
            {
                bin->data[(*j)] = bin->data[(*j)] + 1;
            }
        }
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            seed->data[(*j)] = seed->data[(*j)] - w->data[(*i)];
        }
    }
}

void weightedSample_out1_rep4(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w)
{
    for ((*i) = 0; (*i) < (*n); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            int decomp_0;
            decomp_0 = seed->data[(*j)] > 0;
            if (decomp_0)
            {
                bin->data[(*j)] = bin->data[(*j)] + 1;
            }
        }
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            seed->data[(*j)] = seed->data[(*j)] - w->data[(*i)];
        }
    }
}

void weightedSample_out1_rep3(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w)
{
    for ((*i) = 0; (*i) < (*n); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            int decomp_0;
            decomp_0 = seed->data[(*j)] > 0;
            if (decomp_0)
            {
                bin->data[(*j)] = bin->data[(*j)] + 1;
            }
        }
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            seed->data[(*j)] = seed->data[(*j)] - w->data[(*i)];
        }
    }
}

void weightedSample_out1_rep2(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w)
{
    for ((*i) = 0; (*i) < (*n); (*i)++)
    {
#pragma HLS loop_tripcount max = 2000 min = 2000
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            int decomp_0;
            decomp_0 = seed->data[(*j)] > 0;
            if (decomp_0)
            {
                bin->data[(*j)] = bin->data[(*j)] + 1;
            }
        }
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
#pragma HLS loop_tripcount max = 2000 min = 2000
            seed->data[(*j)] = seed->data[(*j)] - w->data[(*i)];
        }
    }
}

void weightedSample_out1_rep1(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w)
{
    for ((*i) = 0; (*i) < (*n); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = seed->data[(*j)] > 0;
            if (decomp_0)
            {
                bin->data[(*j)] = bin->data[(*j)] + 1;
            }
        }
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            seed->data[(*j)] = seed->data[(*j)] - w->data[(*i)];
        }
    }
}

void weightedSample_out1_rep0(int *i, int *n, int *j, F2D *seed, I2D *bin, F2D *w)
{
    for ((*i) = 0; (*i) < (*n); (*i)++)
    {
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            int decomp_0;
            decomp_0 = seed->data[(*j)] > 0;
            if (decomp_0)
            {
                bin->data[(*j)] = bin->data[(*j)] + 1;
            }
        }
        for ((*j) = 0; (*j) < (*n); (*j)++)
        {
            seed->data[(*j)] = seed->data[(*j)] - w->data[(*i)];
        }
    }
}

void weightedSample(F2D *w, I2D **rtr_val)
{
    int j;
    int i;
    int n;
    F2D *seed;
    I2D *bin;
    weightedSample_out0_rep0(&n, w);
    randWrapper_rep9(n, 1, &seed);
    iSetArray_rep3(n, 1, 0, &bin);
    weightedSample_out1_rep0(&i, &n, &j, seed, bin, w);
    free(seed);
    *rtr_val = bin;
}

void weightedSample_rep4(F2D *w, I2D **rtr_val)
{
    int j;
    int i;
    int n;
    F2D *seed;
    I2D *bin;
    weightedSample_out0_rep1(&n, w);
    randWrapper_rep10(n, 1, &seed);
    iSetArray_rep4(n, 1, 0, &bin);
    weightedSample_out1_rep1(&i, &n, &j, seed, bin, w);
    free(seed);
    *rtr_val = bin;
}

void weightedSample_rep3(F2D *w, I2D **rtr_val)
{
    int j;
    int i;
    int n;
    F2D *seed;
    I2D *bin;
    weightedSample_out0_rep2(&n, w);
    randWrapper_rep11(n, 1, &seed);
    iSetArray_rep5(n, 1, 0, &bin);
    weightedSample_out1_rep2(&i, &n, &j, seed, bin, w);
    free(seed);
    *rtr_val = bin;
}

void weightedSample_rep2(F2D *w, I2D **rtr_val)
{
    int j;
    int i;
    int n;
    F2D *seed;
    I2D *bin;
    weightedSample_out0_rep3(&n, w);
    randWrapper_rep12(n, 1, &seed);
    iSetArray_rep6(n, 1, 0, &bin);
    weightedSample_out1_rep3(&i, &n, &j, seed, bin, w);
    free(seed);
    *rtr_val = bin;
}

void weightedSample_rep1(F2D *w, I2D **rtr_val)
{
    int j;
    int i;
    int n;
    F2D *seed;
    I2D *bin;
    weightedSample_out0_rep4(&n, w);
    randWrapper_rep13(n, 1, &seed);
    iSetArray_rep7(n, 1, 0, &bin);
    weightedSample_out1_rep4(&i, &n, &j, seed, bin, w);
    free(seed);
    *rtr_val = bin;
}

void weightedSample_rep0(F2D *w, I2D **rtr_val)
{
    int j;
    int i;
    int n;
    F2D *seed;
    I2D *bin;
    weightedSample_out0_rep5(&n, w);
    randWrapper_rep14(n, 1, &seed);
    iSetArray_rep8(n, 1, 0, &bin);
    weightedSample_out1_rep5(&i, &n, &j, seed, bin, w);
    free(seed);
    *rtr_val = bin;
}
