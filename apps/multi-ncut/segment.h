#ifndef _SEGMENT_H_
#define _SEGMENT_H_

#include "sdvbs_common.h"

typedef struct {
   float w;
   int a;
   int b;
} edge;


typedef struct {
   int rank;
   int p;
   int size;
} uni_elt;


typedef struct {
   uni_elt *elts;
   int num;
} universe;

void segment_image(I2D *im, float sigma, float c, int min_size, int *num_ccs, I2D **rtr_val);
void segment_graph(int num_vertices, int num_edges, edge *edges, float c, universe **rtr_val);
void join(universe *u, int x, int y);
void find(universe *u, int x, int *rtr_val);
void diff(F2D *r, int x1, int y1, int x2, int y2, float *rtr_val);
#endif
