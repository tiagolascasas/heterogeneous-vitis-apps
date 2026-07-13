#include "mser.h"
#include "sdvbs_common.h"
#include "timingUtils.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef unsigned int idx_t;
typedef unsigned long long acc_t;

typedef struct
{
    val_t value;
    idx_t index;
} pair_t;

typedef struct
{
    idx_t parent;
    idx_t shortcut;
    idx_t region;
    int area;
} node_t;

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

void adv_rep1(iArray *dims, int ndims, iArray *subs_pt);
void cluster_adv_rep1(iArray *dims, int ndims, iArray *subs_pt);
void adv_rep0(iArray *dims, int ndims, iArray *subs_pt);
void cluster_adv_rep0(iArray *dims, int ndims, iArray *subs_pt);
I2D *readImage(char const *pathName);
void iMallocHandle(int rows, int cols, I2D **rtr_val);
void cluster_iMallocHandle(int rows, int cols, I2D **rtr_val);
unsigned int *photonStartTiming();
static void magic_timing_begin(unsigned int *cycles);
void mser_sw(I2D *I, int in_delta, I2D **rtr_val);
void mser_hw_bridge(I2D *I, int in_delta, I2D **rtr_val);
void adv(iArray *dims, int ndims, iArray *subs_pt);
unsigned int *photonEndTiming();
unsigned int *photonReportTiming(unsigned int *startCycles, unsigned int *endCycles);
void writeMatrix(I2D *input, char *inpath);
int selfCheck(I2D *in1, char *path, int tol);
void photonPrintTiming(unsigned int *elapsed);
void iFreeHandle(I2D *out);
int main(int argc, char *argv[]);
void iFreeHandle(I2D *out)
{
    if (out != nullptr)
    {
        free(out);
    }

    return;
}

void iMallocHandle_out4(I2D *out, int *rows, int *cols)
{
    out->height = (*rows);
    out->width = (*cols);
}

void iMallocHandle(int rows, int cols, I2D **rtr_val)
{
    int i;
    int j;
    I2D *out;
#pragma clava malloc_size max = 3032 min = 8294408 avg = 5530616
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    iMallocHandle_out4(out, &rows, &cols);
    *rtr_val = out;
}

void adv(iArray *dims, int ndims, iArray *subs_pt)
{
    int d;
    d = 0;
    while (d < ndims)
    {
        int decomp_0;
        subs_pt->data[d] = subs_pt->data[d] + 1;
        decomp_0 = subs_pt->data[d] < dims->data[d];
        if (decomp_0)
        {

            return;
        }
        subs_pt->data[d++] = 0;
    }
}

void adv_rep1(iArray *dims, int ndims, iArray *subs_pt)
{
    int d;
    d = 0;
    while (d < ndims)
    {
#pragma HLS loop_tripcount max = 2 min = 2
        int decomp_0;
        subs_pt->data[d] = subs_pt->data[d] + 1;
        decomp_0 = subs_pt->data[d] < dims->data[d];
        if (decomp_0)
        {

            return;
        }
        subs_pt->data[d++] = 0;
    }
}

void adv_rep0(iArray *dims, int ndims, iArray *subs_pt)
{
    int d;
    d = 0;
    while (d < ndims)
    {
#pragma HLS loop_tripcount max = 2 min = 2
        int decomp_0;
        subs_pt->data[d] = subs_pt->data[d] + 1;
        decomp_0 = subs_pt->data[d] < dims->data[d];
        if (decomp_0)
        {

            return;
        }
        subs_pt->data[d++] = 0;
    }
}

void mser_out0(idx_t *rindex, int *nout, int *BUCKETS, int *small_cleanup, int *big_cleanup, int *bad_cleanup,
               int *dup_cleanup, idx_t *node_is_void, int *ner, int *nmer, int *njoins, val_t *delta, int *in_delta,
               int *nel, I2D *I, int *ndims)
{
    int OUT_REGIONS;
    int OUT_ELL;
    int OUT_PARENTS;
    int OUT_AREA;
    int IN_I;
    int IN_DELTA;
    int verbose;
    (*rindex) = 0;
    (*nout) = 1;
    OUT_REGIONS = 0;
    OUT_ELL = 1;
    OUT_PARENTS = 2;
    OUT_AREA = 3;
    (*BUCKETS) = 256;
    IN_I = 0;
    IN_DELTA = 1;
    verbose = 1;
    (*small_cleanup) = 1;
    (*big_cleanup) = 1;
    (*bad_cleanup) = 0;
    (*dup_cleanup) = 1;
    (*node_is_void) = 0xffffffff;
    (*ner) = 0;
    (*nmer) = 0;
    (*njoins) = 0;
    (*delta) = 0;
    (*delta) = (*in_delta);
    (*nel) = I->height * I->width;
    (*ndims) = 2;
}

void mser_out1(I2D **I_pt, I2D *I, iArray *dims)
{
    (*I_pt) = I;
    dims->data[0] = I->height;
    dims->data[1] = I->width;
}

void mser_out2(int *regions_pt_size, int *nel)
{
    (*regions_pt_size) = (*nel);
}

void mser_out3(int *pairs_pt_size, int *nel)
{
    (*pairs_pt_size) = (*nel);
}

void mser_out4(int *forest_pt_size, int *nel, uiArray *strides_pt, int *k, int *ndims, iArray *dims)
{
    (*forest_pt_size) = (*nel);
    strides_pt->data[0] = 1;
    for ((*k) = 1; (*k) < (*ndims); ++(*k))
    {
#pragma HLS loop_tripcount max = 1 min = 1
        strides_pt->data[(*k)] = strides_pt->data[(*k) - 1] * dims->data[(*k) - 1];
    }
}

void mser_out5(idx_t *i, int *nel, I2D *I_pt, unsigned int *_scope1_buckets, int *BUCKETS, pair_t *pairs_pt,
               node_t *forest_pt, idx_t *node_is_void, int *gdl, int *ndims, idx_t *rindex, int *k, iArray *nsubs_pt,
               iArray *subs_pt, uiArray *strides_pt, iArray *dims, uiArray *visited_pt, uiArray *joins_pt, int *njoins,
               int *ner, region_t *regions_pt, val_t *delta, int *nmer, int *big_cleanup, int *small_cleanup,
               int *bad_cleanup, int *decomp_25, int *dup_cleanup)
{
    int decomp_23;
    int decomp_24;
    for ((*i) = 0; (*i) < (*nel); ++(*i))
    {
#pragma HLS loop_tripcount max = 2073600 min = 2073600
        val_t v;
        v = I_pt->data[(*i)];
        ++_scope1_buckets[v];
    }
    for ((*i) = 1; (*i) < (*BUCKETS); ++(*i))
    {
#pragma HLS loop_tripcount max = 255 min = 255
        _scope1_buckets[(*i)] = _scope1_buckets[(*i)] + _scope1_buckets[(*i) - 1];
    }
    for ((*i) = (*nel); (*i) >= 1;)
    {
#pragma HLS loop_tripcount max = 2073600 min = 2073600
        val_t v;
        idx_t j;
        v = I_pt->data[--(*i)];
        j = --_scope1_buckets[v];
        pairs_pt[j].value = v;
        pairs_pt[j].index = (*i);
    }
    for ((*i) = 0; (*i) < (*nel); ++(*i))
    {
#pragma HLS loop_tripcount max = 2073600 min = 2073600
        forest_pt[(*i)].parent = (*node_is_void);
    }
    (*gdl) = (*ndims) * ((*ndims) + 1) / 2 + (*ndims);
    for ((*i) = 0; (*i) < (*nel); ++(*i))
    {
#pragma HLS loop_tripcount max = 2073600 min = 2073600
        idx_t index;
        val_t value;
        idx_t _scope2_temp;
        index = pairs_pt[(*i)].index;
        value = pairs_pt[(*i)].value;
        (*rindex) = index;
        forest_pt[index].parent = index;
        forest_pt[index].shortcut = index;
        forest_pt[index].area = 1;
        _scope2_temp = index;
        for ((*k) = (*ndims) - 1; (*k) >= 0; --(*k))
        {
#pragma HLS loop_tripcount max = 2 min = 2
            nsubs_pt->data[(*k)] = -1;
            subs_pt->data[(*k)] = _scope2_temp / strides_pt->data[(*k)];
            _scope2_temp = _scope2_temp % strides_pt->data[(*k)];
        }
        while (1)
        {
#pragma HLS loop_tripcount max = 9 min = 9
            int good;
            idx_t nindex;
            int exitWhile;
            good = 1;
            nindex = 0;
            for ((*k) = 0; (*k) < (*ndims) && good; ++(*k))
            {
#pragma HLS loop_tripcount max = 1 min = 2
                int temp;
                temp = nsubs_pt->data[(*k)] + subs_pt->data[(*k)];
                good = good & 0 <= temp && temp < dims->data[(*k)];
                nindex = nindex + temp * strides_pt->data[(*k)];
            }
            if ((good && nindex != index && forest_pt[nindex].parent != (*node_is_void)))
            {
                idx_t nrindex;
                idx_t nvisited;
                val_t nrvalue;
                int decomp_0;
                nrindex = 0;
                nrvalue = 0;
                nvisited = 0;
                while (forest_pt[(*rindex)].shortcut != (*rindex))
                {
#pragma HLS loop_tripcount max = 0 min = 1
                    visited_pt->data[nvisited++] = (*rindex);
                    (*rindex) = forest_pt[(*rindex)].shortcut;
                }
                while (nvisited--)
                {
#pragma HLS loop_tripcount max = 0 min = 1
                    forest_pt[visited_pt->data[nvisited]].shortcut = (*rindex);
                }
                nrindex = nindex;
                nvisited = 0;
                while (forest_pt[nrindex].shortcut != nrindex)
                {
#pragma HLS loop_tripcount max = 0 min = 38
                    visited_pt->data[nvisited++] = nrindex;
                    nrindex = forest_pt[nrindex].shortcut;
                }
                while (nvisited--)
                {
#pragma HLS loop_tripcount max = 0 min = 38
                    forest_pt[visited_pt->data[nvisited]].shortcut = nrindex;
                }
                decomp_0 = (*rindex) != nrindex;
                if (decomp_0)
                {
                    int decomp_1;
                    nrvalue = I_pt->data[nrindex];
                    decomp_1 = nrvalue == value;
                    if (decomp_1)
                    {
                        forest_pt[(*rindex)].parent = nrindex;
                        forest_pt[(*rindex)].shortcut = nrindex;
                        forest_pt[nrindex].area = forest_pt[nrindex].area + forest_pt[(*rindex)].area;
                        joins_pt->data[(*njoins)++] = (*rindex);
                    }
                    else
                    {
                        int decomp_2;
                        forest_pt[nrindex].parent = (*rindex);
                        forest_pt[nrindex].shortcut = (*rindex);
                        forest_pt[(*rindex)].area = forest_pt[(*rindex)].area + forest_pt[nrindex].area;
                        decomp_2 = nrvalue != value;
                        if (decomp_2)
                        {
                            forest_pt[nrindex].region = (*ner);
                            regions_pt[(*ner)].index = nrindex;
                            regions_pt[(*ner)].parent = (*ner);
                            regions_pt[(*ner)].value = nrvalue;
                            regions_pt[(*ner)].area = forest_pt[nrindex].area;
                            regions_pt[(*ner)].area_top = (*nel);
                            regions_pt[(*ner)].area_bot = 0;
                            ++(*ner);
                        }
                        joins_pt->data[(*njoins)++] = nrindex;
                    }
                }
            }
            (*k) = 0;
            nsubs_pt->data[(*k)] = nsubs_pt->data[(*k)] + 1;
            exitWhile = 0;
            while (nsubs_pt->data[(*k)] > 1)
            {
#pragma HLS loop_tripcount max = 0 min = 2
                int decomp_3;
                nsubs_pt->data[(*k)++] = -1;
                decomp_3 = (*k) == (*ndims);
                if (decomp_3)
                {
                    exitWhile = 1;
                    break;
                }
                nsubs_pt->data[(*k)] = nsubs_pt->data[(*k)] + 1;
            }
            if (exitWhile)
            {
                break;
            }
        }
    }
    forest_pt[(*rindex)].region = (*ner);
    regions_pt[(*ner)].index = (*rindex);
    regions_pt[(*ner)].parent = (*ner);
    regions_pt[(*ner)].value = I_pt->data[(*rindex)];
    regions_pt[(*ner)].area = forest_pt[(*rindex)].area;
    regions_pt[(*ner)].area_top = (*nel);
    regions_pt[(*ner)].area_bot = 0;
    ++(*ner);
    for ((*i) = 0; (*i) < (*ner); ++(*i))
    {
#pragma HLS loop_tripcount max = 25050 min = 25050
        idx_t index;
        val_t value;
        idx_t j;
        index = regions_pt[(*i)].index;
        value = regions_pt[(*i)].value;
        j = (*i);
        while (j == (*i))
        {
#pragma HLS loop_tripcount max = 1 min = 188
            idx_t pindex;
            val_t pvalue;
            int decomp_4;
            int decomp_5;
            pindex = forest_pt[index].parent;
            pvalue = I_pt->data[pindex];
            decomp_4 = index == pindex;
            if (decomp_4)
            {
                j = forest_pt[index].region;
                break;
            }
            decomp_5 = value < pvalue;
            if (decomp_5)
            {
                j = forest_pt[index].region;
            }
            index = pindex;
            value = pvalue;
        }
        regions_pt[(*i)].parent = j;
    }
    for ((*i) = 0; (*i) < (*ner); ++(*i))
    {
#pragma HLS loop_tripcount max = 25050 min = 25050
        idx_t parent;
        int val0;
        int val1;
        int val;
        idx_t j;
        parent = regions_pt[(*i)].parent;
        val0 = regions_pt[(*i)].value;
        val1 = regions_pt[parent].value;
        val = val0;
        j = (*i);
        while (1)
        {
#pragma HLS loop_tripcount max = 1 min = 4
            int valp;
            int decomp_6;
            int decomp_7;
            int decomp_8;
            int decomp_9;
            int decomp_10;
            int decomp_11;
            int decomp_12;
            int decomp_13;
            int decomp_14;
            int decomp_15;
            int decomp_16;
            int decomp_17;
            int decomp_18;
            int decomp_19;
            int decomp_20;
            int decomp_21;
            valp = regions_pt[parent].value;
            decomp_6 = val - (*delta);
            decomp_7 = val0 <= decomp_6;
            decomp_8 = val - (*delta);
            decomp_9 = decomp_8 < val1;
            decomp_10 = decomp_7 && decomp_9;
            if (decomp_10)
            {
                regions_pt[j].area_bot =
                    (regions_pt[j].area_bot > regions_pt[(*i)].area) ? regions_pt[j].area_bot : regions_pt[(*i)].area;
            }
            decomp_11 = val0 + (*delta);
            decomp_12 = val <= decomp_11;
            decomp_13 = val0 + (*delta);
            decomp_14 = decomp_13 < valp;
            decomp_15 = decomp_12 && decomp_14;
            if (decomp_15)
            {
                regions_pt[(*i)].area_top = regions_pt[j].area;
            }
            decomp_16 = val - (*delta);
            decomp_17 = val1 <= decomp_16;
            decomp_18 = val0 + (*delta);
            decomp_19 = decomp_18 < val;
            decomp_20 = decomp_17 && decomp_19;
            if (decomp_20)
            {
                break;
            }
            decomp_21 = j == parent;
            if (decomp_21)
            {
                break;
            }
            j = parent;
            parent = regions_pt[j].parent;
            val = valp;
        }
    }
    for ((*i) = 0; (*i) < (*ner); ++(*i))
    {
#pragma HLS loop_tripcount max = 25050 min = 25050
        int area;
        int area_top;
        int area_bot;
        area = regions_pt[(*i)].area;
        area_top = regions_pt[(*i)].area_top;
        area_bot = regions_pt[(*i)].area_bot;
        regions_pt[(*i)].variation = (area_top - area_bot) / (area * 1.0);
        regions_pt[(*i)].maxstable = 1;
    }
    (*nmer) = (*ner);
    for ((*i) = 0; (*i) < (*ner); ++(*i))
    {
#pragma HLS loop_tripcount max = 25050 min = 25050
        idx_t parent;
        float var;
        float pvar;
        idx_t loser;
        int decomp_22;
        parent = regions_pt[(*i)].parent;
        var = regions_pt[(*i)].variation;
        pvar = regions_pt[parent].variation;
        decomp_22 = var < pvar;
        if (decomp_22)
        {
            loser = parent;
        }
        else
        {
            loser = (*i);
        }
        if (regions_pt[loser].maxstable)
        {
            --(*nmer);
        }
        regions_pt[loser].maxstable = 0;
    }
    decomp_23 = (*big_cleanup) || (*small_cleanup);
    decomp_24 = decomp_23 || (*bad_cleanup);
    (*decomp_25) = decomp_24 || (*dup_cleanup);
}

void mser_out6_out0(int *nbig, int *nsmall, int *nbad, int *ndup, idx_t *i, int *ner, region_t *regions_pt,
                    int *bad_cleanup, int *nmer, int *nel, int *big_cleanup, int *small_cleanup, int *dup_cleanup)
{
    (*nbig) = 0;
    (*nsmall) = 0;
    (*nbad) = 0;
    (*ndup) = 0;
    for ((*i) = 0; (*i) < (*ner); ++(*i))
    {
#pragma HLS loop_tripcount max = 25050 min = 25050
        int decomp_26;
        int decomp_27;
        int decomp_28;
        int decomp_29;
        int decomp_30;
        int decomp_31;
        int decomp_32;
        if (!regions_pt[(*i)].maxstable)
        {
            continue;
        }
        decomp_26 = regions_pt[(*i)].variation >= 1.0f;
        decomp_27 = (*bad_cleanup) && decomp_26;
        if (decomp_27)
        {
            ++(*nbad);
            regions_pt[(*i)].maxstable = 0;
            --(*nmer);
            continue;
        }
        decomp_28 = (*nel) / 2;
        decomp_29 = regions_pt[(*i)].area > decomp_28;
        decomp_30 = (*big_cleanup) && decomp_29;
        if (decomp_30)
        {
            ++(*nbig);
            regions_pt[(*i)].maxstable = 0;
            --(*nmer);
            continue;
        }
        decomp_31 = regions_pt[(*i)].area < 25;
        decomp_32 = (*small_cleanup) && decomp_31;
        if (decomp_32)
        {
            ++(*nsmall);
            regions_pt[(*i)].maxstable = 0;
            --(*nmer);
            continue;
        }
        if ((*dup_cleanup))
        {
            idx_t parent;
            int area;
            int parea;
            float change;
            int decomp_33;
            parent = regions_pt[(*i)].parent;
            decomp_33 = parent != (*i);
            if (decomp_33)
            {
                int decomp_35;
                while (!regions_pt[parent].maxstable)
                {
#pragma HLS loop_tripcount max = 1 min = 21
                    idx_t next;
                    int decomp_34;
                    next = regions_pt[parent].parent;
                    decomp_34 = next == parent;
                    if (decomp_34)
                    {
                        break;
                    }
                    parent = next;
                }
                area = regions_pt[(*i)].area;
                parea = regions_pt[parent].area;
                change = (parea - area) / (area * 1.0);
                decomp_35 = change < 0.5;
                if (decomp_35)
                {
                    ++(*ndup);
                    regions_pt[(*i)].maxstable = 0;
                    --(*nmer);
                    continue;
                }
            }
        }
    }
}

void mser_out6(idx_t *i, int *ner, region_t *regions_pt, int *bad_cleanup, int *nmer, int *nel, int *big_cleanup,
               int *small_cleanup, int *dup_cleanup)
{
    int ndup;
    int nbad;
    int nsmall;
    int nbig;
    mser_out6_out0(&nbig, &nsmall, &nbad, &ndup, i, ner, regions_pt, bad_cleanup, nmer, nel, big_cleanup, small_cleanup,
                   dup_cleanup);
    if (0)
    {
        printf("  Bad regions:        %d\n", nbad);
        printf("  Small regions:      %d\n", nsmall);
        printf("  Big regions:        %d\n", nbig);
        printf("  Duplicated regions: %d\n", ndup);
    }
}

void mser_out7(ulliArray *ell_pt, int *decomp_36, int *nout)
{
    ell_pt = 0;
    (*decomp_36) = (*nout) >= 1;
}

void mser_out8_out0(idx_t *i, int *ner, region_t *regions_pt)
{
    int midx;
    midx = 1;
    for ((*i) = 0; (*i) < (*ner); ++(*i))
    {
#pragma HLS loop_tripcount max = 25050 min = 25050
        if (!regions_pt[(*i)].maxstable)
        {
            continue;
        }
        regions_pt[(*i)].maxstable = midx++;
    }
}

void mser_out8_out1(int *d, int *gdl, int *nmer, ulliArray **ell_pt)
{
    for ((*d) = 0; (*d) < ((*gdl) * (*nmer)); (*d)++)
    {
#pragma HLS loop_tripcount max = 3780 min = 3780
        (*ell_pt)->data[(*d)] = 0;
    }
}

void mser_out8_out2_out0(int *ndims, iArray *subs_pt, int *decomp_37, int *d)
{
    int counter_i;
    for (counter_i = 0; counter_i < (*ndims); counter_i++)
    {
#pragma HLS loop_tripcount max = 2 min = 2
        subs_pt->data[counter_i] = 0;
    }
    (*decomp_37) = (*d) < (*ndims);
}

void mser_out8_out2_out1_out0_out0(ulliArray **acc_pt, int *index, iArray *subs_pt, int *d)
{
    (*acc_pt)->data[(*index)] = subs_pt->data[(*d)];
}

void mser_out8_out2_out1_out0(ulliArray **acc_pt, int *index, iArray *subs_pt, int *d, iArray *dims, int *ndims)
{
    mser_out8_out2_out1_out0_out0(acc_pt, index, subs_pt, d);
    adv_rep0(dims, (*ndims), subs_pt);
}

void mser_out8_out2_out1(int *index, int *nel, ulliArray **acc_pt, iArray *subs_pt, int *d, iArray *dims, int *ndims)
{
    for ((*index) = 0; (*index) < (*nel); ++(*index))
    {
#pragma HLS loop_tripcount max = 2073600 min = 2073600
        mser_out8_out2_out1_out0(acc_pt, index, subs_pt, d, dims, ndims);
    }
}

void mser_out8_out2_out2_out0(idx_t *i, int *d, int *ndims, int *j)
{
    (*i) = (*d) - (*ndims);
    (*j) = 0;
    while ((*i) > (*j))
    {
#pragma HLS loop_tripcount max = 0 min = 3
        (*i) = (*i) - (*j) + 1;
        (*j)++;
    }
}

void mser_out8_out2_out2_out1_out0(ulliArray **acc_pt, int *index, iArray *subs_pt, idx_t *i, int *j)
{
    (*acc_pt)->data[(*index)] = subs_pt->data[(*i)] * subs_pt->data[(*j)];
}

void mser_out8_out2_out2_out1(ulliArray **acc_pt, int *index, iArray *subs_pt, idx_t *i, int *j, iArray *dims,
                              int *ndims)
{
    mser_out8_out2_out2_out1_out0(acc_pt, index, subs_pt, i, j);
    adv_rep1(dims, (*ndims), subs_pt);
}

void mser_out8_out2_out2(idx_t *i, int *d, int *ndims, int *j, int *index, int *nel, ulliArray **acc_pt,
                         iArray *subs_pt, iArray *dims)
{
    mser_out8_out2_out2_out0(i, d, ndims, j);
    for ((*index) = 0; (*index) < (*nel); ++(*index))
    {
#pragma HLS loop_tripcount max = 2073600 min = 2073600
        mser_out8_out2_out2_out1(acc_pt, index, subs_pt, i, j, dims, ndims);
    }
}

void mser_out8_out2_out3(idx_t *i, int *njoins, uiArray *joins_pt, node_t *forest_pt, ulliArray **acc_pt, int *ner,
                         region_t *regions_pt, ulliArray **ell_pt, int *d, int *gdl)
{
    for ((*i) = 0; (*i) < (*njoins); ++(*i))
    {
#pragma HLS loop_tripcount max = 2073599 min = 2073599
        idx_t index_sref;
        idx_t parent;
        index_sref = joins_pt->data[(*i)];
        parent = forest_pt[index_sref].parent;
        (*acc_pt)->data[parent] = (*acc_pt)->data[parent] + (*acc_pt)->data[index_sref];
    }
    for ((*i) = 0; (*i) < (*ner); ++(*i))
    {
#pragma HLS loop_tripcount max = 25050 min = 25050
        idx_t region;
        int decomp_38;
        region = regions_pt[(*i)].maxstable;
        decomp_38 = region == 0;
        if (decomp_38)
        {
            region--; // SPeCS: moved this from outside the if condition
            continue;
        }
        region--;
        (*ell_pt)->data[(*d) + (*gdl) * region] = (*acc_pt)->data[regions_pt[(*i)].index];
    }
}

void mser_out8_out2(int *ndims, iArray *subs_pt, int *d, int *index, int *nel, ulliArray **acc_pt, iArray *dims,
                    idx_t *i, int *j, int *njoins, uiArray *joins_pt, node_t *forest_pt, int *ner, region_t *regions_pt,
                    ulliArray **ell_pt, int *gdl)
{
    int decomp_37;
    mser_out8_out2_out0(ndims, subs_pt, &decomp_37, d);
    if (decomp_37)
    {
        mser_out8_out2_out1(index, nel, acc_pt, subs_pt, d, dims, ndims);
    }
    else
    {
        mser_out8_out2_out2(i, d, ndims, j, index, nel, acc_pt, subs_pt, dims);
    }
    mser_out8_out2_out3(i, njoins, joins_pt, forest_pt, acc_pt, ner, regions_pt, ell_pt, d, gdl);
}

void mser_out8(idx_t *i, int *ner, region_t *regions_pt, ulliArray **acc_pt, int *nel, ulliArray **ell_pt, int *gdl,
               int *nmer, int *ndims, iArray *subs_pt, iArray *dims, int *njoins, uiArray *joins_pt, node_t *forest_pt)
{
    int j;
    int index;
    int d;
    mser_out8_out0(i, ner, regions_pt);
#pragma clava malloc_size max = 16588808 min = 16588808 avg = 16588808
    (*acc_pt) = (ulliArray *)malloc(sizeof(ulliArray) + sizeof(acc_t) * (*nel));
#pragma clava malloc_size max = 30248 min = 30248 avg = 30248
    (*ell_pt) = (ulliArray *)malloc(sizeof(ulliArray) + sizeof(acc_t) * (*gdl) * (*nmer));
    mser_out8_out1(&d, gdl, nmer, ell_pt);
    for (d = 0; d < (*gdl); ++d)
    {
#pragma HLS loop_tripcount max = 5 min = 5
        mser_out8_out2(ndims, subs_pt, &d, &index, nel, acc_pt, dims, i, &j, njoins, joins_pt, forest_pt, ner,
                       regions_pt, ell_pt, gdl);
    }
    free((*acc_pt));
    free((*ell_pt));
}

void mser_out9(int *_scope3_j, int *nmer)
{
    int _scope3_dims[2];
    (*_scope3_j) = 0;
    _scope3_dims[0] = (*nmer);
}

void mser_out10(I2D **_scope3_pt, I2D *out, idx_t *i, int *ner, region_t *regions_pt, int *_scope3_j)
{
    (*_scope3_pt) = out;
    for ((*i) = 0; (*i) < (*ner); ++(*i))
    {
#pragma HLS loop_tripcount max = 25050 min = 25050
        if (regions_pt[(*i)].maxstable)
        {
            (*_scope3_pt)->data[(*_scope3_j)++] = regions_pt[(*i)].index + 1;
        }
    }
}

void mser_sw(I2D *I, int in_delta, I2D **rtr_val)
{
    uiArray *joins_pt;
    int gdl;
    ulliArray *ell_pt;
    ulliArray *acc_pt;
    int forest_pt_size;
    int pairs_pt_size;
    int regions_pt_size;
    region_t *regions_pt;
    node_t *forest_pt;
    pair_t *pairs_pt;
    I2D *I_pt;
    int njoins;
    iArray *dims;
    int ndims;
    int nmer;
    int ner;
    int nel;
    uiArray *visited_pt;
    uiArray *strides_pt;
    iArray *nsubs_pt;
    iArray *subs_pt;
    idx_t node_is_void;
    val_t delta;
    int dup_cleanup;
    int bad_cleanup;
    int big_cleanup;
    int small_cleanup;
    I2D *out;
    int BUCKETS;
    int nout;
    int k;
    idx_t rindex;
    idx_t i;
    int decomp_25;
    int decomp_36;
    I2D *_scope3_pt;
    int _scope3_j;
    unsigned int _scope1_buckets[256];
    mser_out0(&rindex, &nout, &BUCKETS, &small_cleanup, &big_cleanup, &bad_cleanup, &dup_cleanup, &node_is_void, &ner,
              &nmer, &njoins, &delta, &in_delta, &nel, I, &ndims);
#pragma clava malloc_size max = 12 min = 12 avg = 12
    dims = (iArray *)malloc(sizeof(iArray) + sizeof(int) * ndims);
    mser_out1(&(I_pt), I, dims);
#pragma clava malloc_size max = 12 min = 12 avg = 12
    subs_pt = (iArray *)malloc(sizeof(iArray) + sizeof(int) * ndims);
#pragma clava malloc_size max = 12 min = 12 avg = 12
    nsubs_pt = (iArray *)malloc(sizeof(iArray) + sizeof(int) * ndims);
#pragma clava malloc_size max = 12 min = 12 avg = 12
    strides_pt = (uiArray *)malloc(sizeof(uiArray) + sizeof(unsigned int) * ndims);
#pragma clava malloc_size max = 8294404 min = 8294404 avg = 8294404
    visited_pt = (uiArray *)malloc(sizeof(uiArray) + sizeof(unsigned int) * nel);
#pragma clava malloc_size max = 8294404 min = 8294404 avg = 8294404
    joins_pt = (uiArray *)malloc(sizeof(uiArray) + sizeof(unsigned int) * nel);
#pragma clava malloc_size max = 66355200 min = 66355200 avg = 66355200
    regions_pt = (region_t *)malloc(sizeof(region_t) * nel);
    mser_out2(&regions_pt_size, &nel);
#pragma clava malloc_size max = 16588800 min = 16588800 avg = 16588800
    pairs_pt = (pair_t *)malloc(sizeof(pair_t) * nel);
    mser_out3(&pairs_pt_size, &nel);
#pragma clava malloc_size max = 33177600 min = 33177600 avg = 33177600
    forest_pt = (node_t *)malloc(sizeof(node_t) * nel);
    mser_out4(&forest_pt_size, &nel, strides_pt, &k, &ndims, dims);
    memset(_scope1_buckets, 0, sizeof(unsigned int) * BUCKETS);
    mser_out5(&i, &nel, I_pt, _scope1_buckets, &BUCKETS, pairs_pt, forest_pt, &node_is_void, &gdl, &ndims, &rindex, &k,
              nsubs_pt, subs_pt, strides_pt, dims, visited_pt, joins_pt, &njoins, &ner, regions_pt, &delta, &nmer,
              &big_cleanup, &small_cleanup, &bad_cleanup, &decomp_25, &dup_cleanup);
    if (decomp_25)
    {
        mser_out6(&i, &ner, regions_pt, &bad_cleanup, &nmer, &nel, &big_cleanup, &small_cleanup, &dup_cleanup);
    }
    mser_out7(ell_pt, &decomp_36, &nout);
    if (decomp_36)
    {
        mser_out8(&i, &ner, regions_pt, &(acc_pt), &nel, &(ell_pt), &gdl, &nmer, &ndims, subs_pt, dims, &njoins,
                  joins_pt, forest_pt);
    }
    mser_out9(&_scope3_j, &nmer);
    iMallocHandle(1, nmer, &out);
    mser_out10(&(_scope3_pt), out, &i, &ner, regions_pt, &_scope3_j);
    free(dims);
    free(forest_pt);
    free(pairs_pt);
    free(regions_pt);
    free(visited_pt);
    free(strides_pt);
    free(nsubs_pt);
    free(subs_pt);
    free(joins_pt);
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
      fread(&signature, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((signature)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&file_size, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((file_size)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&reserved1, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((reserved1)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&reserved2, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((reserved2)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&loc_of_bitmap, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((loc_of_bitmap)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&size_of_infoheader, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((size_of_infoheader)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&width, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((width)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input); // Reads the width of the image
      fread(&height, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((height)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input); // Reads the height of the image
      fread(&number_of_planes, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((number_of_planes)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&bits_per_pixel, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((bits_per_pixel)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&compression_method, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((compression_method)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&bytes_of_bitmap, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((bytes_of_bitmap)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&hori_reso, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((hori_reso)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&vert_reso, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vert_reso)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&no_of_colors, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((no_of_colors)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&no_of_imp_colors, sizeof((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((no_of_imp_colors)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      iMallocHandle(height, width, &srcImage);
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

void mser_hw_bridge(I2D *I, int in_delta, I2D **rtr_val);
int main(int argc, char *argv[])
{
    int which_image;
    int i, j, k;
    I2D *idx;
    I2D *I;
    I2D *It;
    int rows = 196, cols = 98;
    int minVal = 1000;
    int maxVal = -1000;
    int lev = 10;
    unsigned int *start, *endC, *elapsed;
    char im1[100];
    char im2[100];
    if (argc < 2)
    {
        printf("We need input image path\n");

        return -1;
    }
    sprintf(im1, "%s/1.bmp", argv[1]);
    I = readImage(im1);
    rows = I->height;
    cols = I->width;
    It = readImage(im1);
    k = 0;
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            It->data[k++] = I->data[(j)*I->width + (i)];
        }
    }
    start = photonStartTiming();
    // Selector between SW and HW bridge calls based on OFFLOAD getenv variable
    if (getenv("OFFLOAD") != nullptr)
    {
        mser_hw_bridge(It, 2, &idx);
    }
    else
    {
        mser_sw(It, 2, &idx);
    }
    endC = photonEndTiming();
    elapsed = photonReportTiming(start, endC);
    printf("Input size\t\t- (%dx%d)\n", rows, cols);
    int _scope4_tol, _scope4_ret = 0;
    _scope4_tol = 1;
    writeMatrix(idx, argv[1]);
    _scope4_ret = selfCheck(idx, argv[1], _scope4_tol);
    if (_scope4_ret == -1)
    {
        printf("Error in MSER\n");
    }
    photonPrintTiming(elapsed);
    free(start);
    free(endC);
    free(elapsed);
    iFreeHandle(idx);
    iFreeHandle(I);
    iFreeHandle(It);

    return 0;
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
#pragma clava malloc_size max = 3024 min = 3024 avg = 3024
    buffer = (int *)malloc(sizeof(int) * r1 * c1);
    sprintf(file, "%s/expected_C.txt", path);
    fd = fopen(file, "r");
    if (fd == nullptr)
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
