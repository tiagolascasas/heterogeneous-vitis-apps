#ifndef _TEXTURE_H_
#define _TEXTURE_H_

#include "sdvbs_common.h"
typedef float pixelvalue;

typedef struct
{
    double sign;
    double diff;
    int x;
    int y;
    int secondx;
    int secondy;
} signature;

typedef struct
{
    int localx;
    int localy;
    int localz;
    int widthin;
    int widthout;
    int heightin;
    int heightout;
    int nfin;
    int nfout;
} params;

extern void *SIGNATURES;
void create_texture(F2D *image, params *data);
I2D *parse_flags(int argc, char **argv);
void init_params(params *data);
void init(F2D *image, params *data);
void compare_full_neighb(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val);
void compare_neighb(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val);
void cluster_compare_neighb(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val);
void create_candidates(int x, int y, params *data, int *rtr_val);
void create_all_candidates(int x, int y, params *data, int *rtr_val);
#endif
