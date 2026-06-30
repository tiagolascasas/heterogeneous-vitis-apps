#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include "sdvbs_common.h"
#include "segment.h"
#include "timingUtils.h"

void fFreeHandle_out2_rep4(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out2_rep4(int *decomp_0, F2D *out);
void fFreeHandle_out2_rep3(int *decomp_0, F2D *out);
void cluster_fFreeHandle_out2_rep3(int *decomp_0, F2D *out);
void fFreeHandle_out2_rep2(int *decomp_0, F2D *out);
void fFreeHandle_out2_rep1(int *decomp_0, F2D *out);
void fFreeHandle_out2_rep0(int *decomp_0, F2D *out);
void fFreeHandle_rep7(F2D *out);
void fFreeHandle_rep6(F2D *out);
void fFreeHandle_rep5(F2D *out);
void cluster_fFreeHandle_rep5(F2D *out);
void fFreeHandle_rep4(F2D *out);
void cluster_fFreeHandle_rep4(F2D *out);
void fMallocHandle_out4_rep5(F2D *out, int *rows, int *cols);
void cluster_fMallocHandle_out4_rep5(F2D *out, int *rows, int *cols);
void fMallocHandle_out4_rep4(F2D *out, int *rows, int *cols);
void fMallocHandle_out4_rep3(F2D *out, int *rows, int *cols);
void fMallocHandle_out4_rep2(F2D *out, int *rows, int *cols);
void fMallocHandle_out4_rep1(F2D *out, int *rows, int *cols);
void fMallocHandle_out4_rep0(F2D *out, int *rows, int *cols);
void fMallocHandle_rep9(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep8(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep7(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep6(int rows, int cols, F2D **rtr_val);
void fMallocHandle_rep5(int rows, int cols, F2D **rtr_val);
void cluster_fMallocHandle_rep5(int rows, int cols, F2D **rtr_val);
void fSetArray_out4_rep2(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out4_rep1(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_out4_rep0(int *i, int *rows, int *j, int *cols, F2D *out, float *val);
void fSetArray_rep4(int rows, int cols, float val, F2D **rtr_val);
void fSetArray_rep3(int rows, int cols, float val, F2D **rtr_val);
void iFreeHandle_out2_rep4(int *decomp_0, I2D *out);
void iFreeHandle_out2_rep3(int *decomp_0, I2D *out);
void iFreeHandle_out2_rep2(int *decomp_0, I2D *out);
void iFreeHandle_out2_rep1(int *decomp_0, I2D *out);
void iFreeHandle_out2_rep0(int *decomp_0, I2D *out);
void iFreeHandle_rep11(I2D *out);
void iFreeHandle_rep10(I2D *out);
void iFreeHandle_rep9(I2D *out);
void iFreeHandle_rep8(I2D *out);
void iMallocHandle_out11_rep4(I2D *out, int *rows, int *cols);
void cluster_iMallocHandle_out11_rep4(I2D *out, int *rows, int *cols);
void iMallocHandle_out11_rep3(I2D *out, int *rows, int *cols);
void iMallocHandle_out11_rep2(I2D *out, int *rows, int *cols);
void iMallocHandle_out11_rep1(I2D *out, int *rows, int *cols);
void iMallocHandle_out11_rep0(I2D *out, int *rows, int *cols);
void iMallocHandle_rep14(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep13(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep12(int rows, int cols, I2D **rtr_val);
void iMallocHandle_rep11(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle_rep11(int rows, int cols, I2D **rtr_val);
void find_rep5(universe *u, int x, int *rtr_val);
void find_rep4(universe *u, int x, int *rtr_val);
void find_rep3(universe *u, int x, int *rtr_val);
void find_rep2(universe *u, int x, int *rtr_val);
void find_rep1(universe *u, int x, int *rtr_val);
void find_rep0(universe *u, int x, int *rtr_val);
void join_rep1(universe *u, int x, int y);
void join_rep0(universe *u, int x, int y);
void diff_rep3(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val);
void diff_rep2(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val);
void diff_rep1(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val);
void diff_rep0(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val);
I2D *readImage(char const *pathName);
void iMallocHandle(int rows, int cols, I2D **rtr_val);
unsigned int *photonStartTiming();
static void magic_timing_begin(unsigned int *cycles);
void segment_image(I2D *im, float sigma, float c, int min_size, int *num_ccs, I2D **rtr_val);
void imageBlur(I2D *imageIn, F2D **rtr_val);
void fSetArray(int rows, int cols, float val, F2D **rtr_val);
void fMallocHandle(int rows, int cols, F2D **rtr_val);
void fFreeHandle(F2D *out);
void iFreeHandle(I2D *out);
void diff(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val);
void segment_graph(int num_vertices, int num_edges, edge *edges, float c, universe **rtr_val);
void fSortIndices_sw(F2D *input, int dim, I2D **rtr_val);
void fSortIndices_hw_bridge(F2D *input, int dim, I2D **rtr_val);
void fDeepCopy(F2D *in, F2D **rtr_val);
void cluster_fDeepCopy(F2D *in, F2D **rtr_val);
void find(universe *u, int x, int *rtr_val);
void join(universe *u, int x, int y);
unsigned int *photonEndTiming();
unsigned int *photonReportTiming(unsigned int *startCycles, unsigned int *endCycles);
void writeMatrix(I2D *input, char *inpath);
int selfCheck(I2D *in1, char *path, int tol);
void photonPrintTiming(unsigned int *elapsed);
int main(int argc, char *argv[]);
void fDeepCopy_out0(int *rows, F2D *in, int *cols)
{
    (*rows) = in->height;
    (*cols) = in->width;
}

void fDeepCopy_out1(int *i, int *rows, int *j, int *cols, F2D *out, F2D *in)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 1
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 92006
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
    fDeepCopy_out0(&rows, in, &cols);
    fMallocHandle_rep5(rows, cols, &out);
    fDeepCopy_out1(&i, &rows, &j, &cols, out, in);
    *rtr_val = out;
}

void fFreeHandle_out2(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != NULL;
}

void fFreeHandle_out2_rep4(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != NULL;
}

void fFreeHandle_out2_rep3(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != NULL;
}

void fFreeHandle_out2_rep2(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != NULL;
}

void fFreeHandle_out2_rep1(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != NULL;
}

void fFreeHandle_out2_rep0(int *decomp_0, F2D *out)
{
    (*decomp_0) = out != NULL;
}

void fFreeHandle(F2D *out)
{
    int decomp_0;
    fFreeHandle_out2_rep0(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep7(F2D *out)
{
    int decomp_0;
    fFreeHandle_out2_rep1(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep6(F2D *out)
{
    int decomp_0;
    fFreeHandle_out2_rep2(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep5(F2D *out)
{
    int decomp_0;
    fFreeHandle_out2_rep3(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fFreeHandle_rep4(F2D *out)
{
    int decomp_0;
    fFreeHandle_out2_rep4(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void fMallocHandle_out4(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out4_rep5(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out4_rep4(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out4_rep3(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out4_rep2(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out4_rep1(F2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void fMallocHandle_out4_rep0(F2D *out, int *rows, int *cols)
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
    fMallocHandle_out4_rep0(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep9(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 368032 min = 368032 avg = 368032
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out4_rep1(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep8(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 92936 min = 92936 avg = 92936
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out4_rep2(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep7(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 92936 min = 92936 avg = 92936
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out4_rep3(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep6(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out4_rep4(out, &rows, &cols);
    *rtr_val = out;
}

void fMallocHandle_rep5(int rows, int cols, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
#pragma clava malloc_size max = 368032 min = 368032 avg = 368032
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    fMallocHandle_out4_rep5(out, &rows, &cols);
    *rtr_val = out;
}

void fSetArray_out4(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out4_rep2(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 132
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 176
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out4_rep1(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
{
    for ((*i) = 0; (*i) < (*rows); (*i)++)
    {
#pragma HLS loop_tripcount max = 132
        for ((*j) = 0; (*j) < (*cols); (*j)++)
        {
#pragma HLS loop_tripcount max = 176
            out->data[((*i)) * out->width + ((*j))] = (*val);
        }
    }
}

void fSetArray_out4_rep0(int *i, int *rows, int *j, int *cols, F2D *out, float *val)
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
    fMallocHandle_rep6(rows, cols, &out);
    fSetArray_out4_rep0(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep4(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep7(rows, cols, &out);
    fSetArray_out4_rep1(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSetArray_rep3(int rows, int cols, float val, F2D **rtr_val)
{
    int i;
    int j;
    F2D *out;
    fMallocHandle_rep8(rows, cols, &out);
    fSetArray_out4_rep2(&i, &rows, &j, &cols, out, &val);
    *rtr_val = out;
}

void fSortIndices_out0(int *rows, F2D *input, int *cols)
{
    (*rows) = input->height;
    (*cols) = input->width;
}

void fSortIndices_out1(int *i, int *cols, int *j, int *rows, I2D *ind, int *decomp_0, int *dim)
{
    for ((*i) = 0; (*i) < (*cols); (*i)++)
    {
#pragma HLS loop_tripcount max = 92006
        for ((*j) = 0; (*j) < (*rows); (*j)++)
        {
#pragma HLS loop_tripcount max = 1
            ind->data[((*j)) * ind->width + ((*i))] = 0;
        }
    }
    (*decomp_0) = (*dim) == 1;
}

void fSortIndices_out2_out0(int *k, int *rows, int *i, int *cols, F2D *in, I2D *ind, int *j)
{
    for ((*k) = 0; (*k) < (*rows); (*k)++)
    {
#pragma HLS loop_tripcount max = 1
        for ((*i) = 0; (*i) < (*cols); (*i)++)
        {
#pragma HLS loop_tripcount max = 92006
            float localMax;
            int localIndex;
            localMax = in->data[((*k)) * in->width + ((*i))];
            localIndex = (*i);
            ind->data[((*k)) * ind->width + ((*i))] = (*i);
            for ((*j) = 0; (*j) < (*cols); (*j)++)
            {
#pragma HLS loop_tripcount max = 92006
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

void fSortIndices_out2(int *k, int *rows, int *i, int *cols, F2D *in, I2D *ind, int *j, I2D **__rtr_val_0, int *__rtr_flag_0)
{
    fSortIndices_out2_out0(k, rows, i, cols, in, ind, j);
    fFreeHandle_rep4(in);
    (*__rtr_val_0) = ind;
    (*__rtr_flag_0) = 1;
}

void fSortIndices_out3(int *k, int *cols, int *i, int *rows, F2D *in, I2D *ind, int *j)
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

void fSortIndices_sw(F2D *input, int dim, I2D **rtr_val)
{
    I2D *ind;
    int k;
    int j;
    int i;
    F2D *in;
    int cols;
    int rows;
    int decomp_0;
    fSortIndices_out0(&rows, input, &cols);
    fDeepCopy(input, &in);
    iMallocHandle_rep11(rows, cols, &ind);
    fSortIndices_out1(&i, &cols, &j, &rows, ind, &decomp_0, &dim);
    if (decomp_0)
    {
        I2D *__rtr_val_0;
        int __rtr_flag_0 = 0;
        fSortIndices_out2(&k, &rows, &i, &cols, in, ind, &j, &__rtr_val_0, &__rtr_flag_0);
        if (__rtr_flag_0)
        {
            *rtr_val = __rtr_val_0;

            return;
        }
    }
    fSortIndices_out3(&k, &cols, &i, &rows, in, ind, &j);
    fFreeHandle_rep5(in);
    *rtr_val = ind;
}

void iFreeHandle_out2(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != NULL;
}

void iFreeHandle_out2_rep4(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != NULL;
}

void iFreeHandle_out2_rep3(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != NULL;
}

void iFreeHandle_out2_rep2(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != NULL;
}

void iFreeHandle_out2_rep1(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != NULL;
}

void iFreeHandle_out2_rep0(int *decomp_0, I2D *out)
{
    (*decomp_0) = out != NULL;
}

void iFreeHandle(I2D *out)
{
    int decomp_0;
    iFreeHandle_out2_rep0(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep11(I2D *out)
{
    int decomp_0;
    iFreeHandle_out2_rep1(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep10(I2D *out)
{
    int decomp_0;
    iFreeHandle_out2_rep2(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep9(I2D *out)
{
    int decomp_0;
    iFreeHandle_out2_rep3(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iFreeHandle_rep8(I2D *out)
{
    int decomp_0;
    iFreeHandle_out2_rep4(&decomp_0, out);
    if (decomp_0)
    {
        free(out);
    }
}

void iMallocHandle_out11(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out11_rep4(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out11_rep3(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out11_rep2(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out11_rep1(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle_out11_rep0(I2D *out, int *rows, int *cols)
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
    iMallocHandle_out11_rep0(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep14(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 92936 min = 92936 avg = 92936
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out11_rep1(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep13(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 92936 min = 92936 avg = 92936
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out11_rep2(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep12(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 28 min = 28 avg = 28
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out11_rep3(out, &rows, &cols);
    *rtr_val = out;
}

void iMallocHandle_rep11(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 368032 min = 368032 avg = 368032
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out11_rep4(out, &rows, &cols);
    *rtr_val = out;
}

void imageBlur_out0(int *rows, I2D *imageIn, int *cols)
{
    (*rows) = imageIn->height;
    (*cols) = imageIn->width;
}

void imageBlur_out1(I2D *kernel, int *kernelSize, int *kernelSum, int *startCol, int *endCol, int *cols, int *halfKernel, int *startRow, int *endRow, int *rows, int *i, int *j, float *temp, int *k, I2D *imageIn, F2D *tempOut, F2D *imageOut)
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
#pragma HLS loop_tripcount max = 128
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 172
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 5
                (*temp) = (*temp) + imageIn->data[((*i)) * imageIn->width + ((*j) + (*k))] * kernel->data[(*k) + (*halfKernel)];
            }
            tempOut->data[((*i)) * tempOut->width + ((*j))] = (*temp) / (*kernelSum);
        }
    }
    for ((*i) = (*startRow); (*i) < (*endRow); (*i)++)
    {
#pragma HLS loop_tripcount max = 128
        for ((*j) = (*startCol); (*j) < (*endCol); (*j)++)
        {
#pragma HLS loop_tripcount max = 172
            (*temp) = 0;
            for ((*k) = -(*halfKernel); (*k) <= (*halfKernel); (*k)++)
            {
#pragma HLS loop_tripcount max = 5
                (*temp) = (*temp) + tempOut->data[(((*i) + (*k))) * tempOut->width + ((*j))] * kernel->data[(*k) + (*halfKernel)];
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
    imageBlur_out0(&rows, imageIn, &cols);
    fSetArray_rep3(rows, cols, 0, &imageOut);
    fSetArray_rep4(rows, cols, 0, &tempOut);
    iMallocHandle_rep12(1, 5, &kernel);
    imageBlur_out1(kernel, &kernelSize, &kernelSum, &startCol, &endCol, &cols, &halfKernel, &startRow, &endRow, &rows, &i, &j, &temp, &k, imageIn, tempOut, imageOut);
    fFreeHandle_rep6(tempOut);
    iFreeHandle_rep8(kernel);
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
    if (input == NULL)
    {
        perror("File pointer error");

        return NULL;
    }
    else
    {
        fread(&signature, sizeof(((((((((((((((((((((((((((((((((((signature))))))))))))))))))))))))))))))))))), 1, input);
        fread(&file_size, sizeof(((((((((((((((((((((((((((((((((((file_size))))))))))))))))))))))))))))))))))), 1, input);
        fread(&reserved1, sizeof(((((((((((((((((((((((((((((((((((reserved1))))))))))))))))))))))))))))))))))), 1, input);
        fread(&reserved2, sizeof(((((((((((((((((((((((((((((((((((reserved2))))))))))))))))))))))))))))))))))), 1, input);
        fread(&loc_of_bitmap, sizeof(((((((((((((((((((((((((((((((((((loc_of_bitmap))))))))))))))))))))))))))))))))))), 1, input);
        fread(&size_of_infoheader, sizeof(((((((((((((((((((((((((((((((((((size_of_infoheader))))))))))))))))))))))))))))))))))), 1, input);
        fread(&width, sizeof(((((((((((((((((((((((((((((((((((width))))))))))))))))))))))))))))))))))), 1, input);   // Reads the width of the image
        fread(&height, sizeof(((((((((((((((((((((((((((((((((((height))))))))))))))))))))))))))))))))))), 1, input); // Reads the height of the image
        fread(&number_of_planes, sizeof(((((((((((((((((((((((((((((((((((number_of_planes))))))))))))))))))))))))))))))))))), 1, input);
        fread(&bits_per_pixel, sizeof(((((((((((((((((((((((((((((((((((bits_per_pixel))))))))))))))))))))))))))))))))))), 1, input);
        fread(&compression_method, sizeof(((((((((((((((((((((((((((((((((((compression_method))))))))))))))))))))))))))))))))))), 1, input);
        fread(&bytes_of_bitmap, sizeof(((((((((((((((((((((((((((((((((((bytes_of_bitmap))))))))))))))))))))))))))))))))))), 1, input);
        fread(&hori_reso, sizeof(((((((((((((((((((((((((((((((((((hori_reso))))))))))))))))))))))))))))))))))), 1, input);
        fread(&vert_reso, sizeof(((((((((((((((((((((((((((((((((((vert_reso))))))))))))))))))))))))))))))))))), 1, input);
        fread(&no_of_colors, sizeof(((((((((((((((((((((((((((((((((((no_of_colors))))))))))))))))))))))))))))))))))), 1, input);
        fread(&no_of_imp_colors, sizeof(((((((((((((((((((((((((((((((((((no_of_imp_colors))))))))))))))))))))))))))))))))))), 1, input);
        iMallocHandle_rep13(height, width, &srcImage);
        if (srcImage->height <= 0 || srcImage->width <= 0 || signature[0] != 'B' || signature[1] != 'M' || (bits_per_pixel != 24 && bits_per_pixel != 8))
        {
            printf("ERROR in BMP read: The input file is not in standard BMP format");

            return NULL;
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

                return NULL;
            }
        }
        fclose(input);

        return srcImage;
    }
}

int main(int argc, char *argv[])
{
    float sigma = 0.6;
    float k = 4;
    int min_size = 10;
    char im1[256];
    int num_ccs[1] = {0};
    I2D *out;
    I2D *im;
    I2D *seg;
    unsigned int *start, *endC, *elapsed;
    int ret;
    if (argc < 2)
    {
        printf("We need input image path and output path\n");

        return -1;
    }
    sprintf(im1, "%s/1.bmp", argv[1]);
    im = readImage(im1);
    printf("Input size\t\t- (%dx%d)\n", im->height, im->width);
    start = photonStartTiming();
    segment_image(im, sigma, k, min_size, num_ccs, &seg);
    endC = photonEndTiming();
    elapsed = photonReportTiming(start, endC);
    out = seg;
    int _scope5_ret = 0;
    float _scope5_tol = 0;
    writeMatrix(out, argv[1]);
    _scope5_ret = selfCheck(out, argv[1], _scope5_tol);
    if (_scope5_ret < 0)
    {
        printf("Error in Multi N Cut\n");
    }
    photonPrintTiming(elapsed);
    iFreeHandle_rep9(im);
    free(start);
    free(endC);
    free(elapsed);
    iFreeHandle_rep10(seg);

    return 0;
}

void find(universe *u, int x, int *rtr_val)
{
    int y;
    y = x;
    while (y != u->elts[y].p)
    {
        y = u->elts[y].p;
    }
    u->elts[x].p = y;
    *rtr_val = y;
}

void find_rep5(universe *u, int x, int *rtr_val)
{
    int y;
    y = x;
    while (y != u->elts[y].p)
    {
#pragma HLS loop_tripcount min = 0 max = 3
        y = u->elts[y].p;
    }
    u->elts[x].p = y;
    *rtr_val = y;
}

void find_rep4(universe *u, int x, int *rtr_val)
{
    int y;
    y = x;
    while (y != u->elts[y].p)
    {
#pragma HLS loop_tripcount min = 0 max = 3
        y = u->elts[y].p;
    }
    u->elts[x].p = y;
    *rtr_val = y;
}

void find_rep3(universe *u, int x, int *rtr_val)
{
    int y;
    y = x;
    while (y != u->elts[y].p)
    {
#pragma HLS loop_tripcount min = 0 max = 3
        y = u->elts[y].p;
    }
    u->elts[x].p = y;
    *rtr_val = y;
}

void find_rep2(universe *u, int x, int *rtr_val)
{
    int y;
    y = x;
    while (y != u->elts[y].p)
    {
#pragma HLS loop_tripcount min = 0 max = 3
        y = u->elts[y].p;
    }
    u->elts[x].p = y;
    *rtr_val = y;
}

void find_rep1(universe *u, int x, int *rtr_val)
{
    int y;
    y = x;
    while (y != u->elts[y].p)
    {
#pragma HLS loop_tripcount min = 0 max = 2
        y = u->elts[y].p;
    }
    u->elts[x].p = y;
    *rtr_val = y;
}

void find_rep0(universe *u, int x, int *rtr_val)
{
    int y;
    y = x;
    while (y != u->elts[y].p)
    {
#pragma HLS loop_tripcount min = 0 max = 1
        y = u->elts[y].p;
    }
    u->elts[x].p = y;
    *rtr_val = y;
}

void join(universe *u, int x, int y)
{
    int decomp_0;
    decomp_0 = u->elts[x].rank > u->elts[y].rank;
    if (decomp_0)
    {
        u->elts[y].p = x;
        u->elts[x].size = u->elts[x].size + u->elts[y].size;
    }
    else
    {
        int decomp_1;
        u->elts[x].p = y;
        u->elts[y].size = u->elts[y].size + u->elts[x].size;
        decomp_1 = u->elts[x].rank == u->elts[y].rank;
        if (decomp_1)
        {
            u->elts[y].rank++;
        }
    }
    u->num--;
}

void join_rep1(universe *u, int x, int y)
{
    int decomp_0;
    decomp_0 = u->elts[x].rank > u->elts[y].rank;
    if (decomp_0)
    {
        u->elts[y].p = x;
        u->elts[x].size = u->elts[x].size + u->elts[y].size;
    }
    else
    {
        int decomp_1;
        u->elts[x].p = y;
        u->elts[y].size = u->elts[y].size + u->elts[x].size;
        decomp_1 = u->elts[x].rank == u->elts[y].rank;
        if (decomp_1)
        {
            u->elts[y].rank++;
        }
    }
    u->num--;
}

void join_rep0(universe *u, int x, int y)
{
    int decomp_0;
    decomp_0 = u->elts[x].rank > u->elts[y].rank;
    if (decomp_0)
    {
        u->elts[y].p = x;
        u->elts[x].size = u->elts[x].size + u->elts[y].size;
    }
    else
    {
        int decomp_1;
        u->elts[x].p = y;
        u->elts[y].size = u->elts[y].size + u->elts[x].size;
        decomp_1 = u->elts[x].rank == u->elts[y].rank;
        if (decomp_1)
        {
            u->elts[y].rank++;
        }
    }
    u->num--;
}

void segment_graph_out1(int *i, int *num_edges, F2D *edgeWeights, edge *edges)
{
    for ((*i) = 0; (*i) < (*num_edges); (*i)++)
    {
#pragma HLS loop_tripcount max = 92006
        edgeWeights->data[(*i)] = edges[(*i)].w;
    }
}

void segment_graph_out2(universe *u, int *num_vertices, int *i, float *threshold, float *c)
{
    u->num = (*num_vertices);
    for ((*i) = 0; (*i) < (*num_vertices); (*i)++)
    {
#pragma HLS loop_tripcount max = 23232
        u->elts[(*i)].rank = 0;
        u->elts[(*i)].size = 1;
        u->elts[(*i)].p = (*i);
    }
    for ((*i) = 0; (*i) < (*num_vertices); (*i)++)
    {
#pragma HLS loop_tripcount max = 23232
        threshold[(*i)] = ((*c) / 1);
    }
}

void segment_graph_out3_out0(edge **pedge, edge *edges, I2D *indices, int *i)
{
    (*pedge) = &edges[indices->data[(*i)]];
}

void segment_graph_out3_out1(int *decomp_0, int *a, int *b)
{
    (*decomp_0) = (*a) != (*b);
}

void segment_graph_out3_out2_out0(int *decomp_1, edge *pedge, float *threshold, int *a, int *b)
{
    (*decomp_1) = (pedge->w <= threshold[(*a)]) && (pedge->w <= threshold[(*b)]);
}

void segment_graph_out3_out2_out1_out0(float *threshold, int *a, edge *pedge, float *c, universe *u)
{
    threshold[(*a)] = pedge->w + ((*c) / u->elts[(*a)].size);
}

void segment_graph_out3_out2_out1(universe *u, int *a, int *b, float *threshold, edge *pedge, float *c)
{
    join_rep0(u, (*a), (*b));
    find_rep0(u, (*a), a);
    segment_graph_out3_out2_out1_out0(threshold, a, pedge, c, u);
}

void segment_graph_out3_out2(edge *pedge, float *threshold, int *a, int *b, universe *u, float *c)
{
    int decomp_1;
    segment_graph_out3_out2_out0(&decomp_1, pedge, threshold, a, b);
    if (decomp_1)
    {
        segment_graph_out3_out2_out1(u, a, b, threshold, pedge, c);
    }
}

void segment_graph_out3(edge *edges, I2D *indices, int *i, int *a, universe *u, int *b, float *threshold, float *c)
{
    edge *pedge;
    int decomp_0;
    segment_graph_out3_out0(&(pedge), edges, indices, i);
    find_rep1(u, pedge->a, a);
    find_rep2(u, pedge->b, b);
    segment_graph_out3_out1(&decomp_0, a, b);
    if (decomp_0)
    {
        segment_graph_out3_out2(pedge, threshold, a, b, u, c);
    }
}

void fSortIndices_hw_bridge(F2D *input, int dim, I2D *rtr_val);
void segment_graph(int num_vertices, int num_edges, edge *edges, float c, universe **rtr_val)
{
    int i;
    int a;
    int b;
    int j;
    int k;
    universe *u;
    F2D *edgeWeights;
    I2D *indices;
    float threshold[num_vertices];
    fMallocHandle_rep9(1, num_edges, &edgeWeights);
    segment_graph_out1(&i, &num_edges, edgeWeights, edges);
    // Selector between SW and HW bridge calls based on OFFLOAD getenv variable
    if (getenv("OFFLOAD") != NULL)
    {
        indices = (I2D *)malloc(92014 * sizeof(int) + sizeof(I2D));
        fSortIndices_hw_bridge(edgeWeights, 1, indices);
    }
    else
    {
        fSortIndices_sw(edgeWeights, 1, &indices);
    }
#pragma clava malloc_size max = 16 min = 16 avg = 16
    u = (universe *)malloc(sizeof(universe));
#pragma clava malloc_size max = 278784 min = 278784 avg = 278784
    u->elts = (uni_elt *)malloc(sizeof(uni_elt) * num_vertices);
    segment_graph_out2(u, &num_vertices, &i, threshold, &c);
    for (i = 0; i < num_edges; i++)
    {
#pragma HLS loop_tripcount max = 92006
        segment_graph_out3(edges, indices, &i, &a, u, &b, threshold, &c);
    }
    fFreeHandle_rep7(edgeWeights);
    iFreeHandle_rep11(indices);
    *rtr_val = u;
}

void diff(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val)
{
    float decomp_0;
    int decomp_1;
    double decomp_2;
    decomp_0 = (r->data[(y1)*r->width + (x1)] * r->data[(y1)*r->width + (x1)]) - (r->data[(y2)*r->width + (x2)] * r->data[(y2)*r->width + (x2)]);
    decomp_1 = abs(decomp_0);
    decomp_2 = sqrt(decomp_1);
    *rtr_val = decomp_2;
}

void diff_rep3(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val)
{
    float decomp_0;
    int decomp_1;
    double decomp_2;
    decomp_0 = (r->data[(y1)*r->width + (x1)] * r->data[(y1)*r->width + (x1)]) - (r->data[(y2)*r->width + (x2)] * r->data[(y2)*r->width + (x2)]);
    decomp_1 = abs(decomp_0);
    decomp_2 = sqrt(decomp_1);
    *rtr_val = decomp_2;
}

void diff_rep2(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val)
{
    float decomp_0;
    int decomp_1;
    double decomp_2;
    decomp_0 = (r->data[(y1)*r->width + (x1)] * r->data[(y1)*r->width + (x1)]) - (r->data[(y2)*r->width + (x2)] * r->data[(y2)*r->width + (x2)]);
    decomp_1 = abs(decomp_0);
    decomp_2 = sqrt(decomp_1);
    *rtr_val = decomp_2;
}

void diff_rep1(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val)
{
    float decomp_0;
    int decomp_1;
    double decomp_2;
    decomp_0 = (r->data[(y1)*r->width + (x1)] * r->data[(y1)*r->width + (x1)]) - (r->data[(y2)*r->width + (x2)] * r->data[(y2)*r->width + (x2)]);
    decomp_1 = abs(decomp_0);
    decomp_2 = sqrt(decomp_1);
    *rtr_val = decomp_2;
}

void diff_rep0(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val)
{
    float decomp_0;
    int decomp_1;
    double decomp_2;
    decomp_0 = (r->data[(y1)*r->width + (x1)] * r->data[(y1)*r->width + (x1)]) - (r->data[(y2)*r->width + (x2)] * r->data[(y2)*r->width + (x2)]);
    decomp_1 = abs(decomp_0);
    decomp_2 = sqrt(decomp_1);
    *rtr_val = decomp_2;
}

void segment_image_out0(int *width, I2D *im, int *height, int *num, int *components)
{
    (*width) = im->width;
    (*height) = im->height;
    (*num) = 0;
    (*components) = 0;
}

void segment_image_out1_out0_out0(int *segments, int *y, int *width, int *x, int *decomp_1)
{
    int decomp_0;
    segments[(*y) * (*width) + (*x)] = -1;
    decomp_0 = (*width) - 1;
    (*decomp_1) = (*x) < decomp_0;
}

void segment_image_out1_out0_out1_out0(edge *edges, int *num, int *y, int *width, int *x)
{
    edges[(*num)].a = (*y) * (*width) + (*x);
    edges[(*num)].b = (*y) * (*width) + ((*x) + 1);
}

void segment_image_out1_out0_out1_out1(int *num)
{
    (*num)++;
}

void segment_image_out1_out0_out1(edge *edges, int *num, int *y, int *width, int *x, F2D *smooth_im)
{
    segment_image_out1_out0_out1_out0(edges, num, y, width, x);
    diff_rep0(smooth_im, (*x), (*y), (*x) + 1, (*y), (float *)&edges[(*num)]);
    segment_image_out1_out0_out1_out1(num);
}

void segment_image_out1_out0_out2(int *height, int *decomp_3, int *y)
{
    int decomp_2;
    decomp_2 = (*height) - 1;
    (*decomp_3) = (*y) < decomp_2;
}

void segment_image_out1_out0_out3_out0(edge *edges, int *num, int *y, int *width, int *x)
{
    edges[(*num)].a = (*y) * (*width) + (*x);
    edges[(*num)].b = ((*y) + 1) * (*width) + (*x);
}

void segment_image_out1_out0_out3_out1(int *num)
{
    (*num)++;
}

void segment_image_out1_out0_out3(edge *edges, int *num, int *y, int *width, int *x, F2D *smooth_im)
{
    segment_image_out1_out0_out3_out0(edges, num, y, width, x);
    diff_rep1(smooth_im, (*x), (*y), (*x), (*y) + 1, (float *)&edges[(*num)]);
    segment_image_out1_out0_out3_out1(num);
}

void segment_image_out1_out0_out4(int *decomp_4, int *x, int *width, int *y, int *height)
{
    (*decomp_4) = ((*x) < (*width) - 1) && ((*y) < (*height) - 1);
}

void segment_image_out1_out0_out5_out0(edge *edges, int *num, int *y, int *width, int *x)
{
    edges[(*num)].a = (*y) * (*width) + (*x);
    edges[(*num)].b = ((*y) + 1) * (*width) + ((*x) + 1);
}

void segment_image_out1_out0_out5_out1(int *num)
{
    (*num)++;
}

void segment_image_out1_out0_out5(edge *edges, int *num, int *y, int *width, int *x, F2D *smooth_im)
{
    segment_image_out1_out0_out5_out0(edges, num, y, width, x);
    diff_rep2(smooth_im, (*x), (*y), (*x) + 1, (*y) + 1, (float *)&edges[(*num)]);
    segment_image_out1_out0_out5_out1(num);
}

void segment_image_out1_out0_out6(int *decomp_5, int *x, int *width, int *y)
{
    (*decomp_5) = ((*x) < (*width) - 1) && ((*y) > 0);
}

void segment_image_out1_out0_out7_out0(edge *edges, int *num, int *y, int *width, int *x)
{
    edges[(*num)].a = (*y) * (*width) + (*x);
    edges[(*num)].b = ((*y) - 1) * (*width) + ((*x) + 1);
}

void segment_image_out1_out0_out7_out1(int *num)
{
    (*num)++;
}

void segment_image_out1_out0_out7(edge *edges, int *num, int *y, int *width, int *x, F2D *smooth_im)
{
    segment_image_out1_out0_out7_out0(edges, num, y, width, x);
    diff_rep3(smooth_im, (*x), (*y), (*x) + 1, (*y) - 1, (float *)&edges[(*num)]);
    segment_image_out1_out0_out7_out1(num);
}

void segment_image_out1_out0(int *segments, int *y, int *width, int *x, edge *edges, int *num, F2D *smooth_im, int *height)
{
    int decomp_1;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    segment_image_out1_out0_out0(segments, y, width, x, &decomp_1);
    if (decomp_1)
    {
        segment_image_out1_out0_out1(edges, num, y, width, x, smooth_im);
    }
    segment_image_out1_out0_out2(height, &decomp_3, y);
    if (decomp_3)
    {
        segment_image_out1_out0_out3(edges, num, y, width, x, smooth_im);
    }
    segment_image_out1_out0_out4(&decomp_4, x, width, y, height);
    if (decomp_4)
    {
        segment_image_out1_out0_out5(edges, num, y, width, x, smooth_im);
    }
    segment_image_out1_out0_out6(&decomp_5, x, width, y);
    if (decomp_5)
    {
        segment_image_out1_out0_out7(edges, num, y, width, x, smooth_im);
    }
}

void segment_image_out1(int *x, int *width, int *segments, int *y, edge *edges, int *num, F2D *smooth_im, int *height)
{
    for ((*x) = 0; (*x) < (*width); (*x)++)
    {
#pragma HLS loop_tripcount max = 176
        segment_image_out1_out0(segments, y, width, x, edges, num, smooth_im, height);
    }
}

void segment_image_out3_out1(int *decomp_6, int *a, int *b, universe *u, int *min_size)
{
    (*decomp_6) = ((*a) != (*b)) && ((u->elts[(*a)].size < (*min_size)) || (u->elts[(*b)].size < (*min_size)));
}

void segment_image_out3(universe *u, edge *edges, int *i, int *min_size)
{
    int a;
    int b;
    int decomp_6;
    find_rep3(u, edges[(*i)].a, &a);
    find_rep4(u, edges[(*i)].b, &b);
    segment_image_out3_out1(&decomp_6, &a, &b, u, min_size);
    if (decomp_6)
    {
        join_rep1(u, a, b);
    }
}

void segment_image_out4(int *num_ccs, universe *u)
{
    num_ccs[0] = u->num;
}

void segment_image_out5_out0_out1(int *segments, int *comp, int *components, I2D *output, int *y, int *x)
{
    int decomp_7;
    decomp_7 = segments[(*comp)] == -1;
    if (decomp_7)
    {
        segments[(*comp)] = (*components)++;
    }
    output->data[((*y)) * output->width + ((*x))] = segments[(*comp)];
}

void segment_image_out5_out0(universe *u, int *y, int *width, int *x, int *segments, int *components, I2D *output)
{
    int comp;
    find_rep5(u, (*y) * (*width) + (*x), &comp);
    segment_image_out5_out0_out1(segments, &comp, components, output, y, x);
}

void segment_image_out5(int *x, int *width, universe *u, int *y, int *segments, int *components, I2D *output)
{
    for ((*x) = 0; (*x) < (*width); (*x)++)
    {
#pragma HLS loop_tripcount max = 176
        segment_image_out5_out0(u, y, width, x, segments, components, output);
    }
}

void segment_image(I2D *im, float sigma, float c, int min_size, int *num_ccs, I2D **rtr_val)
{
    int *segments;
    int components;
    edge *edges;
    I2D *output;
    F2D *smooth_im;
    int i;
    int y;
    int x;
    int num;
    int height;
    int width;
    universe *u;
    segment_image_out0(&width, im, &height, &num, &components);
#pragma clava malloc_size max = 92928 min = 92928 avg = 92928
    segments = (int *)malloc(height * width * sizeof(int));
    imageBlur(im, &smooth_im);
#pragma clava malloc_size max = 1115136 min = 1115136 avg = 1115136
    edges = (edge *)malloc(sizeof(edge) * width * height * 4);
    for (y = 0; y < height; y++)
    {
#pragma HLS loop_tripcount max = 132
        segment_image_out1(&x, &width, segments, &y, edges, &num, smooth_im, &height);
    }
    free(smooth_im);
    segment_graph(width * height, num, edges, c, &u);
    for (i = 0; i < num; i++)
    {
#pragma HLS loop_tripcount max = 92006
        segment_image_out3(u, edges, &i, &min_size);
    }
    free(edges);
    segment_image_out4(num_ccs, u);
    iMallocHandle_rep14(height, width, &output);
    for (y = 0; y < height; y++)
    {
#pragma HLS loop_tripcount max = 132
        segment_image_out5(&x, &width, u, &y, segments, &components, output);
    }
    free(u->elts);
    free(u);
    free(segments);
    *rtr_val = output;
}

int selfCheck(I2D *in1, char *path, int tol)
{
    int r1, c1, ret = 1;
    FILE *fd;
    int count = 0;
    int *buffer;
    int i;
    int j;
    char file[100];
    int *data = in1->data;
    r1 = in1->height;
    c1 = in1->width;
#pragma clava malloc_size max = 92928 min = 92928 avg = 92928
    buffer = (int *)malloc(sizeof(int) * r1 * c1);
    sprintf(file, "%s/expected_C.txt", path);
    fd = fopen(file, "r");
    if (fd == NULL)
    {
        printf("Error: Expected file not opened \n");

        return -1;
    }
    while (!feof(fd))
    {
        fscanf(fd, "%d", &buffer[count]);
        count++;
    }
    count--;
    if (count < (r1 * c1))
    {
        printf("Checking error: dimensions mismatch. Expected = %d, Observed = %d \n", count, (r1 * c1));

        return -1;
    }
    for (i = 0; i < r1 * c1; i++)
    {
        if ((abs(data[i]) - abs(buffer[i])) > tol || (abs(buffer[i]) - abs(data[i])) > tol)
        {
            printf("Checking error: Values mismtach at %d element\n", i);
            printf("Expected value = %d, observed = %d\n", buffer[i], data[i]);

            return -1;
        }
    }
    fclose(fd);
    free(buffer);
    printf("Verification\t\t- Successful\n");

    return ret;
}

void writeMatrix(I2D *input, char *inpath)
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
            fprintf(fp, "%d\t", input->data[(i)*input->width + (j)]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}
