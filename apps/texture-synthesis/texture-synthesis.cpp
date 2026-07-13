#include "sdvbs_common.h"
#include "texture.h"
#include "timingUtils.h"
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void reimpl_drand48_rep9(double *rtr_val);
void reimpl_drand48_rep8(double *rtr_val);
void reimpl_drand48_rep7(double *rtr_val);
void reimpl_drand48_rep53(double *rtr_val);
void reimpl_drand48_rep52(double *rtr_val);
void reimpl_drand48_rep51(double *rtr_val);
void reimpl_drand48_rep50(double *rtr_val);
void reimpl_drand48_rep49(double *rtr_val);
void reimpl_drand48_rep48(double *rtr_val);
void reimpl_drand48_rep47(double *rtr_val);
void reimpl_drand48_rep46(double *rtr_val);
void reimpl_drand48_rep45(double *rtr_val);
void reimpl_drand48_rep44(double *rtr_val);
void reimpl_drand48_rep43(double *rtr_val);
void reimpl_drand48_rep6(double *rtr_val);
void reimpl_drand48_rep42(double *rtr_val);
void reimpl_drand48_rep41(double *rtr_val);
void reimpl_drand48_rep40(double *rtr_val);
void reimpl_drand48_rep39(double *rtr_val);
void reimpl_drand48_rep38(double *rtr_val);
void reimpl_drand48_rep37(double *rtr_val);
void reimpl_drand48_rep36(double *rtr_val);
void reimpl_drand48_rep35(double *rtr_val);
void reimpl_drand48_rep34(double *rtr_val);
void reimpl_drand48_rep33(double *rtr_val);
void reimpl_drand48_rep32(double *rtr_val);
void reimpl_drand48_rep5(double *rtr_val);
void reimpl_drand48_rep31(double *rtr_val);
void reimpl_drand48_rep30(double *rtr_val);
void reimpl_drand48_rep29(double *rtr_val);
void reimpl_drand48_rep28(double *rtr_val);
void reimpl_drand48_rep27(double *rtr_val);
void reimpl_drand48_rep26(double *rtr_val);
void reimpl_drand48_rep25(double *rtr_val);
void reimpl_drand48_rep24(double *rtr_val);
void reimpl_drand48_rep23(double *rtr_val);
void reimpl_drand48_rep22(double *rtr_val);
void reimpl_drand48_rep21(double *rtr_val);
void reimpl_drand48_rep4(double *rtr_val);
void reimpl_drand48_rep20(double *rtr_val);
void reimpl_drand48_rep19(double *rtr_val);
void reimpl_drand48_rep18(double *rtr_val);
void reimpl_drand48_rep17(double *rtr_val);
void reimpl_drand48_rep16(double *rtr_val);
void reimpl_drand48_rep15(double *rtr_val);
void reimpl_drand48_rep14(double *rtr_val);
void reimpl_drand48_rep13(double *rtr_val);
void reimpl_drand48_rep12(double *rtr_val);
void reimpl_drand48_rep11(double *rtr_val);
void reimpl_drand48_rep10(double *rtr_val);
void reimpl_drand48_rep3(double *rtr_val);
void reimpl_drand48_rep2(double *rtr_val);
void reimpl_drand48_rep1(double *rtr_val);
void reimpl_drand48_rep0(double *rtr_val);
void create_all_candidates_out0_rep3(int *n);
void create_all_candidates_out0_rep2(int *n);
void create_all_candidates_out0_rep1(int *n);
void create_all_candidates_out0_rep0(int *n);
void create_all_candidates_out1_out0_out2_rep10(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep9(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep8(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep7(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep6(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep5(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep4(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep3(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep2(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep1(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out2_rep0(int *n, int *decomp_8);
void create_all_candidates_out1_out0_out4_rep10(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep9(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep8(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep7(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep6(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep5(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep4(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep3(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep2(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep1(int *k, int *n);
void create_all_candidates_out1_out0_out4_rep0(int *k, int *n);
void create_all_candidates_out1_out0_rep9(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out0_rep8(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out0_rep7(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out0_rep6(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out0_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out0_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out0_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out0_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out0_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out0_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out1_rep8(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out1_rep7(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out1_rep6(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out1_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out1_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out1_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out1_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out1_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out1_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out2_rep7(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out2_rep6(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out2_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out2_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out2_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out2_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out2_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out2_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out3_rep6(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out3_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out3_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out3_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out3_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out3_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out3_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out4_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out4_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out4_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out4_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out4_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out4_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out5_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out5_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out5_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out5_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_out5_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue);
void create_all_candidates_out1_rep3(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k);
void create_all_candidates_out1_rep2(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k);
void create_all_candidates_out1_rep1(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k);
void create_all_candidates_out1_rep0(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k);
void create_all_candidates_rep2(int x, int y, params *data, int *rtr_val);
void create_all_candidates_rep1(int x, int y, params *data, int *rtr_val);
void create_all_candidates_rep0(int x, int y, params *data, int *rtr_val);
void compare_full_neighb_rep1(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val);
void compare_full_neighb_rep0(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val);
I2D *parse_flags(int argc, char **argv);
I2D *readImage(char const *pathName);
I2D *iMallocHandle(int rows, int cols);
F2D *fMallocHandle(int rows, int cols);
F2D *fiDeepCopy(I2D *in);
void init_params(params *data);
unsigned int *photonStartTiming();
static void magic_timing_begin(unsigned int *cycles);
void create_texture(F2D *image, params *data);
void init(F2D *image, params *data);
void reimpl_drand48(double *rtr_val);
void create_all_candidates(int x, int y, params *data, int *rtr_val);
void create_candidates(int x, int y, params *data, int *rtr_val);
void compare_neighb(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val);
void cluster_compare_neighb(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val);
void compare_rest(F2D *image, int x, int y, F2D *tar, int x1, int y1, params *data, double *rtr_val);
void cluster_compare_rest(F2D *image, int x, int y, F2D *tar, int x1, int y1, params *data, double *rtr_val);
void compare_full_neighb(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val);
unsigned int *photonEndTiming();
unsigned int *photonReportTiming(unsigned int *startCycles, unsigned int *endCycles);
void fWriteMatrix(F2D *input, char *inpath);
int fSelfCheck(F2D *in1, char *path, float tol);
void photonPrintTiming(unsigned int *elapsed);
void iFreeHandle(I2D *out);
void fFreeHandle(F2D *out);
int main(int argc, char **argv);
int WIDTHin;
int HEIGHTin;
int WIDTH;
int HEIGHT;
int localx;
int localy;
int targetin = 0;
int vrstartx;
int vrfinishx;
int vrstarty;
int vrfinishy;
int *candlistx;
int *candlisty;
int *atlas;
int anotherpass = 0;
int maxcand = 40;
int *target_width;
int *target_height;
float *target_data;
F2D *target;
int *result_width;
int *result_height;
float *result_data;
F2D *result;
int *xloopout;
int *yloopout;
int *xloopin;
int *yloopin;
uint64_t drand48_state = 0x1234ABCD330EULL;
int *data_localx;
int *data_localy;
int *data_localz;
int *data_widthin;
int *data_widthout;
int *data_heightin;
int *data_heightout;
int *data_nfin;
int *data_nfout;
params data;
void fFreeHandle(F2D *out)
{
    if (out != ((void *)0))
    {
        free(out);
    }

    return;
}

F2D *fMallocHandle(int rows, int cols)
{
    int i, j;
    F2D *out;
#pragma clava malloc_size max = 9224 min = 3686408 avg = 2460680
    out = (F2D *)malloc(sizeof(F2D) + sizeof(float) * rows * cols);
    out->height = rows;
    out->width = cols;

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
#pragma clava malloc_size max = 3686400 min = 3686400 avg = 3686400
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

F2D *fiDeepCopy(I2D *in)
{
    int i, j;
    F2D *out;
    int rows, cols;
    rows = in->height;
    cols = in->width;
    out = fMallocHandle(rows, cols);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            out->data[(i)*out->width + (j)] = in->data[(i)*in->width + (j)] + 0.0;
        }
    }

    return out;
}

void iFreeHandle(I2D *out)
{
    if (out != ((void *)0))
    {
        free(out);
    }

    return;
}

I2D *iMallocHandle(int rows, int cols)
{
    int i, j;
    I2D *out;
#pragma clava malloc_size max = 9224 min = 9224 avg = 9224
    out = (I2D *)malloc(sizeof(I2D) + sizeof(int) * rows * cols);
    out->height = rows;
    out->width = cols;

    return out;
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
      fread(&signature, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((signature))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&file_size, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((file_size))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&reserved1, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((reserved1))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&reserved2, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((reserved2))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&loc_of_bitmap, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((loc_of_bitmap))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&size_of_infoheader, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((size_of_infoheader))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&width, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((width))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input); // Reads the width of the image
      fread(&height, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((height))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input); // Reads the height of the image
      fread(&number_of_planes, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((number_of_planes))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&bits_per_pixel, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((bits_per_pixel))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&compression_method, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((compression_method))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&bytes_of_bitmap, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((bytes_of_bitmap))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&hori_reso, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((hori_reso))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&vert_reso, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((vert_reso))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&no_of_colors, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((no_of_colors))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      fread(&no_of_imp_colors, sizeof(((((((((((((((((((((((((((((((((((((((((((((((((((((((no_of_imp_colors))))))))))))))))))))))))))))))))))))))))))))))))))))))), 1, input);
      srcImage = iMallocHandle(height, width);
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

int main(int argc, char **argv)
{
    params *data;
    I2D *im;
    F2D *image;
    unsigned int *start, *end, *elapsed;
#pragma clava malloc_size max = 36 min = 36 avg = 36
    data = (params *)malloc(sizeof(params));
    im = parse_flags(argc, argv);
    image = fiDeepCopy(im);
    init_params(data);
    start = photonStartTiming();
    create_texture(image, data);
    end = photonEndTiming();
    elapsed = photonReportTiming(start, end);
    int _scope28_ret = 0;
    //fWriteMatrix(result, argv[1]);
    _scope28_ret = fSelfCheck(result, argv[1], 1.0);
    if (_scope28_ret < 0)
    {
        printf("Error in Texture Synthesis\n");
    }
    photonPrintTiming(elapsed);
    iFreeHandle(im);
    fFreeHandle(image);
    free(start);
    free(end);
    free(elapsed);
    free(data);
    fFreeHandle(target);
    fFreeHandle(result);
    free(atlas);
    exit(0);

    return 0;
}

I2D *parse_flags(int argc, char **argv)
{
    int i, tsx, tsy;
    I2D *image;
    char fileNm[256];
    sprintf(fileNm, "%s/1.bmp", argv[1]);
    image = readImage(fileNm);
    WIDTHin = image->width;
    HEIGHTin = image->height;
    localx = 3;
    localy = 3;
    WIDTH = WIDTHin * 20;
    HEIGHT = HEIGHTin * 20;
    localx = 15;
    localy = 15;
    printf("Input size\t\t- (%dx%d)\n", HEIGHTin, WIDTHin);
    result = fMallocHandle(1, HEIGHT * WIDTH);
    target = fMallocHandle(1, WIDTH * HEIGHT);
#pragma clava malloc_size max = 7372800 min = 7372800 avg = 7372800
    atlas = (int *)malloc(2 * WIDTH * HEIGHT * sizeof(int));
#pragma clava malloc_size max = 7680 min = 7680 avg = 7680
    xloopout = (int *)malloc(2 * WIDTH * sizeof(int));
#pragma clava malloc_size max = 7680 min = 7680 avg = 7680
    yloopout = (int *)malloc(2 * HEIGHT * sizeof(int));
    for (i = -WIDTH / 2; i < WIDTH + WIDTH / 2; i++)
    {
        xloopout[i + WIDTH / 2] = (WIDTH + i) % WIDTH;
    }
    for (i = -HEIGHT / 2; i < HEIGHT + HEIGHT / 2; i++)
    {
        yloopout[i + HEIGHT / 2] = (HEIGHT + i) % HEIGHT;
    }
    xloopout += WIDTH / 2;
    yloopout += HEIGHT / 2;
    if (result == ((void *)0))
    {
        printf("Can't allocate %dx%d image. Exiting.\n", WIDTH, HEIGHT);
        exit(1);
    }

    return image;
}

void init_params(params *data)
{
    int i, j;
    data->localx = localx;
    data->localy = localy;
    data->widthin = WIDTHin;
    data->widthout = WIDTH;
    data->heightin = HEIGHTin;
    data->heightout = HEIGHT;
    if (!targetin)
    {
        for (i = 0; i < data->heightout; i++)
        {
            for (j = 0; j < data->widthout; j++)
            {
                target->data[(1 * ((i) * (data->widthout) + (j))) + 0] = 1.0;
            }
        }
    }
    for (i = 0; i < data->heightout; i++)
    {
        for (j = 0; j < data->widthout; j++)
        {
            result->data[(1 * ((i) * (data->widthout) + (j))) + 0] = 1.0;
        }
    }
}

void reimpl_drand48(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep9(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep8(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep7(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep53(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep52(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep51(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep50(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep49(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep48(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep47(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep46(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep45(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep44(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep43(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep6(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep42(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep41(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep40(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep39(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep38(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep37(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep36(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep35(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep34(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep33(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep32(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep5(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep31(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep30(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep29(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep28(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep27(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep26(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep25(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep24(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep23(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep22(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep21(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep4(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep20(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep19(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep18(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep17(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep16(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep15(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep14(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep13(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep12(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep11(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep10(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep3(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep2(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep1(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void reimpl_drand48_rep0(double *rtr_val)
{
    uint64_t a;
    uint64_t c;
    uint64_t mask;
    double decomp_0;
    a = 0x5DEECE66DULL;
    c = 0xBULL;
    mask = (1ULL << 48) - 1ULL;
    drand48_state = (drand48_state * a + c) & mask;
    decomp_0 = (double)drand48_state / (double)(1ULL << 48);
    *rtr_val = decomp_0;
}

void create_texture_out1_out0_out0(int *decomp_0, int *ncand)
{
    (*decomp_0) = (*ncand) > 1;
}

void create_texture_out1_out0_out1_out0(double *diff)
{
    (*diff) = 1e10;
}

void create_texture_out1_out0_out1_out1_out1(double *curdiff, double *_d0_0, double *diff, int *bestx, int *k,
                                             int *besty)
{
    double _d0_1;
    int decomp_1;
    _d0_1 = (*curdiff) + (*_d0_0);
    (*curdiff) = _d0_1;
    decomp_1 = (*curdiff) < (*diff);
    if (decomp_1)
    {
        (*diff) = (*curdiff);
        (*bestx) = candlistx[(*k)];
        (*besty) = candlisty[(*k)];
    }
}

void create_texture_out1_out0_out1_out1(double *curdiff, F2D *image, int *k, int *j, int *i, params *data, double *diff,
                                        int *bestx, int *besty)
{
    double _d0_0;
    compare_neighb(image, candlistx[(*k)], candlisty[(*k)], result, (*j), (*i), data, curdiff);
    compare_rest(image, candlistx[(*k)], candlisty[(*k)], target, (*j), (*i), data, &_d0_0);
    create_texture_out1_out0_out1_out1_out1(curdiff, &_d0_0, diff, bestx, k, besty);
}

void create_texture_out1_out0_out1_sw(double *diff, int *k, int *ncand, double *curdiff, F2D *image, int *j, int *i,
                                      params *data, int *bestx, int *besty)
{
    create_texture_out1_out0_out1_out0(diff);
    for ((*k) = 0; (*k) < (*ncand); (*k)++)
    {
#pragma HLS loop_tripcount max = 2 min = 112
        create_texture_out1_out0_out1_out1(curdiff, image, k, j, i, data, diff, bestx, besty);
    }
}

void create_texture_out1_out0_out2(int *bestx, int *besty)
{
    (*bestx) = candlistx[0];
    (*besty) = candlisty[0];
}

void create_texture_out1_out0_out3(int *i, params *data, int *j, F2D *image, int *besty, int *bestx)
{
    result->data[(1 * (((*i)) * (data->widthout) + ((*j)))) + 0] =
        image->data[(1 * (((*besty)) * (data->widthin) + ((*bestx)))) + 0];
    atlas[(2 * (((*i)) * data->widthout + ((*j))))] = (*bestx);
    atlas[(2 * (((*i)) * data->widthout + ((*j)))) + 1] = (*besty);
}

void create_texture_out1_out0_out1_hw_bridge(double *diff, int *k, int *ncand, double *curdiff, F2D *image, int *j,
                                             int *i, params *data, int *bestx, int *besty, int *global_candlistx,
                                             int *global_candlisty, F2D *global_result, F2D *global_target,
                                             int *global_yloopout, int *global_xloopout);
void create_texture_out1_out0(int *ncand, int *j, int *i, params *data, double *diff, int *k, double *curdiff,
                              F2D *image, int *bestx, int *besty)
{
    int decomp_0;
    if (anotherpass)
    {
        create_all_candidates_rep0((*j), (*i), data, ncand);
    }
    else
    {
        create_candidates((*j), (*i), data, ncand);
    }
    create_texture_out1_out0_out0(&decomp_0, ncand);
    if (decomp_0)
    {
        // Selector between SW and HW bridge calls based on OFFLOAD getenv variable
        if (getenv("OFFLOAD") != ((void *)0))
        {
            create_texture_out1_out0_out1_hw_bridge(diff, k, ncand, curdiff, image, j, i, data, bestx, besty, candlistx,
                                                    candlisty, result, target, yloopout, xloopout);
        }
        else
        {
            create_texture_out1_out0_out1_sw(diff, k, ncand, curdiff, image, j, i, data, bestx, besty);
        }
    }
    else
    {
        create_texture_out1_out0_out2(bestx, besty);
    }
    create_texture_out1_out0_out3(i, data, j, image, besty, bestx);
}

void create_texture_out1(int *j, params *data, int *ncand, int *i, double *diff, int *k, double *curdiff, F2D *image,
                         int *bestx, int *besty)
{
    for ((*j) = 0; (*j) < data->widthout; (*j)++)
    {
#pragma HLS loop_tripcount max = 960 min = 960
        create_texture_out1_out0(ncand, j, i, data, diff, k, curdiff, image, bestx, besty);
    }
}

void create_texture_out2_out0_out0(int *decomp_2, int *ncand)
{
    (*decomp_2) = (*ncand) > 1;
}

void create_texture_out2_out0_out1_out0(double *diff)
{
    (*diff) = 1e10;
}

void create_texture_out2_out0_out1_out1_out0(double *curdiff, double *diff, int *bestx, int *k, int *besty)
{
    int decomp_3;
    decomp_3 = (*curdiff) < (*diff);
    if (decomp_3)
    {
        (*diff) = (*curdiff);
        (*bestx) = candlistx[(*k)];
        (*besty) = candlisty[(*k)];
    }
}

void create_texture_out2_out0_out1_out1(double *curdiff, F2D *image, int *k, int *j, int *i, params *data, double *diff,
                                        int *bestx, int *besty)
{
    compare_full_neighb_rep0(image, candlistx[(*k)], candlisty[(*k)], result, (*j), (*i), data, curdiff);
    create_texture_out2_out0_out1_out1_out0(curdiff, diff, bestx, k, besty);
}

void create_texture_out2_out0_out1(double *diff, int *k, int *ncand, double *curdiff, F2D *image, int *j, int *i,
                                   params *data, int *bestx, int *besty)
{
    create_texture_out2_out0_out1_out0(diff);
    for ((*k) = 0; (*k) < (*ncand); (*k)++)
    {
#pragma HLS loop_tripcount max = 6 min = 202
        create_texture_out2_out0_out1_out1(curdiff, image, k, j, i, data, diff, bestx, besty);
    }
}

void create_texture_out2_out0_out2(int *bestx, int *besty)
{
    (*bestx) = candlistx[0];
    (*besty) = candlisty[0];
}

void create_texture_out2_out0_out3(int *i, params *data, int *j, F2D *image, int *besty, int *bestx)
{
    result->data[(1 * (((*i)) * (data->widthout) + ((*j)))) + 0] =
        image->data[(1 * (((*besty)) * (data->widthin) + ((*bestx)))) + 0];
    atlas[(2 * (((*i)) * data->widthout + ((*j))))] = (*bestx);
    atlas[(2 * (((*i)) * data->widthout + ((*j)))) + 1] = (*besty);
}

void create_texture_out2_out0(int *ncand, int *j, int *i, params *data, double *diff, int *k, double *curdiff,
                              F2D *image, int *bestx, int *besty)
{
    int decomp_2;
    create_all_candidates_rep1((*j), (*i), data, ncand);
    create_texture_out2_out0_out0(&decomp_2, ncand);
    if (decomp_2)
    {
        create_texture_out2_out0_out1(diff, k, ncand, curdiff, image, j, i, data, bestx, besty);
    }
    else
    {
        create_texture_out2_out0_out2(bestx, besty);
    }
    create_texture_out2_out0_out3(i, data, j, image, besty, bestx);
}

void create_texture_out2(int *j, params *data, int *ncand, int *i, double *diff, int *k, double *curdiff, F2D *image,
                         int *bestx, int *besty)
{
    for ((*j) = 0; (*j) < data->widthout; (*j)++)
    {
#pragma HLS loop_tripcount max = 960 min = 960
        create_texture_out2_out0(ncand, j, i, data, diff, k, curdiff, image, bestx, besty);
    }
}

void create_texture_out3_out0_out0(int *decomp_4, int *ncand)
{
    (*decomp_4) = (*ncand) > 1;
}

void create_texture_out3_out0_out1_out0(double *diff)
{
    (*diff) = 1e10;
}

void create_texture_out3_out0_out1_out1_out0(double *curdiff, double *diff, int *bestx, int *k, int *besty)
{
    int decomp_5;
    decomp_5 = (*curdiff) < (*diff);
    if (decomp_5)
    {
        (*diff) = (*curdiff);
        (*bestx) = candlistx[(*k)];
        (*besty) = candlisty[(*k)];
    }
}

void create_texture_out3_out0_out1_out1(double *curdiff, F2D *image, int *k, int *j, int *i, params *data, double *diff,
                                        int *bestx, int *besty)
{
    compare_full_neighb_rep1(image, candlistx[(*k)], candlisty[(*k)], result, (*j), (*i), data, curdiff);
    create_texture_out3_out0_out1_out1_out0(curdiff, diff, bestx, k, besty);
}

void create_texture_out3_out0_out1(double *diff, int *k, int *ncand, double *curdiff, F2D *image, int *j, int *i,
                                   params *data, int *bestx, int *besty)
{
    create_texture_out3_out0_out1_out0(diff);
    for ((*k) = 0; (*k) < (*ncand); (*k)++)
    {
#pragma HLS loop_tripcount max = 2 min = 195
        create_texture_out3_out0_out1_out1(curdiff, image, k, j, i, data, diff, bestx, besty);
    }
}

void create_texture_out3_out0_out2(int *bestx, int *besty)
{
    (*bestx) = candlistx[0];
    (*besty) = candlisty[0];
}

void create_texture_out3_out0_out3(int *i, params *data, int *j, F2D *image, int *besty, int *bestx)
{
    result->data[(1 * (((*i)) * (data->widthout) + ((*j)))) + 0] =
        image->data[(1 * (((*besty)) * (data->widthin) + ((*bestx)))) + 0];
    atlas[(2 * (((*i)) * data->widthout + ((*j))))] = (*bestx);
    atlas[(2 * (((*i)) * data->widthout + ((*j)))) + 1] = (*besty);
}

void create_texture_out3_out0(int *ncand, int *j, int *i, params *data, double *diff, int *k, double *curdiff,
                              F2D *image, int *bestx, int *besty)
{
    int decomp_4;
    create_all_candidates_rep2((*j), (*i), data, ncand);
    create_texture_out3_out0_out0(&decomp_4, ncand);
    if (decomp_4)
    {
        create_texture_out3_out0_out1(diff, k, ncand, curdiff, image, j, i, data, bestx, besty);
    }
    else
    {
        create_texture_out3_out0_out2(bestx, besty);
    }
    create_texture_out3_out0_out3(i, data, j, image, besty, bestx);
}

void create_texture_out3(int *j, params *data, int *ncand, int *i, double *diff, int *k, double *curdiff, F2D *image,
                         int *bestx, int *besty)
{
    for ((*j) = 0; (*j) < data->widthout; (*j)++)
    {
#pragma HLS loop_tripcount max = 960 min = 960
        create_texture_out3_out0(ncand, j, i, data, diff, k, curdiff, image, bestx, besty);
    }
}

void create_texture(F2D *image, params *data)
{
    int i;
    int j;
    int k;
    int ncand;
    int bestx;
    int besty;
    double diff;
    double curdiff;
    int tsx;
    int tsy;
#pragma clava malloc_size max = 964 min = 964 avg = 964
    candlistx = (int *)malloc(sizeof(int) * (data->localx * (data->localy + 1) + 1));
#pragma clava malloc_size max = 964 min = 964 avg = 964
    candlisty = (int *)malloc(sizeof(int) * (data->localx * (data->localy + 1) + 1));
    if (!anotherpass)
    {
        init(image, data);
    }
    for (i = 0; i < data->heightout - data->localy / 2; i++)
    {
#pragma HLS loop_tripcount max = 953 min = 953
        create_texture_out1(&j, data, &ncand, &i, &diff, &k, &curdiff, image, &bestx, &besty);
    }
    for (; i < data->heightout; i++)
    {
#pragma HLS loop_tripcount max = 7 min = 7
        create_texture_out2(&j, data, &ncand, &i, &diff, &k, &curdiff, image, &bestx, &besty);
    }
    for (i = 0; i < data->localy / 2; i++)
    {
#pragma HLS loop_tripcount max = 7 min = 7
        create_texture_out3(&j, data, &ncand, &i, &diff, &k, &curdiff, image, &bestx, &besty);
    }
}

void create_candidates_out0(int *n)
{
    (*n) = 0;
}

void create_candidates_out1_out0_out2(int *decomp_6, int *n)
{
    (*decomp_6) = candlisty[(*n)] >= vrfinishy;
}

void create_candidates_out1_out0_out4(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
#pragma HLS loop_tripcount max = 0 min = 111
        int decomp_7;
        int decomp_8;
        int decomp_9;
        decomp_7 = candlistx[(*n)] == candlistx[(*k)];
        decomp_8 = candlisty[(*n)] == candlisty[(*k)];
        decomp_9 = decomp_7 && decomp_8;
        if (decomp_9)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_candidates_out1_out0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                 int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_6;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep0(&rand1);
        reimpl_drand48_rep1(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_candidates_out1_out0_out2(&decomp_6, n);
    if (decomp_6)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep2(&rand1);
        reimpl_drand48_rep3(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_candidates_out1_out0_out4(k, n);
}

void create_candidates_out1_out1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                 int *__doContinue)
{
    int __doContinue15 = 0;
    create_candidates_out1_out0(i, j, address, y, data, x, n, k, &__doContinue15);
    if (__doContinue15 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_candidates_out1_out2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                 int *__doContinue)
{
    int __doContinue17 = 0;
    create_candidates_out1_out1(i, j, address, y, data, x, n, k, &__doContinue17);
    if (__doContinue17 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_candidates_out1_out3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                 int *__doContinue)
{
    int __doContinue19 = 0;
    create_candidates_out1_out2(i, j, address, y, data, x, n, k, &__doContinue19);
    if (__doContinue19 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_candidates_out1_out4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                 int *__doContinue)
{
    int __doContinue21 = 0;
    create_candidates_out1_out3(i, j, address, y, data, x, n, k, &__doContinue21);
    if (__doContinue21 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_candidates_out1_out5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                 int *__doContinue)
{
    int __doContinue23 = 0;
    create_candidates_out1_out4(i, j, address, y, data, x, n, k, &__doContinue23);
    if (__doContinue23 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_candidates_out1(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k)
{
    for ((*j) = -data->localx / 2; (*j) <= data->localx / 2; (*j)++)
    {
#pragma HLS loop_tripcount max = 15 min = 15
        int __doContinue25 = 0;
        create_candidates_out1_out5(i, j, address, y, data, x, n, k, &__doContinue25);
        if (__doContinue25 == 1)
        {
            continue;
        }
    }
}

void create_candidates(int x, int y, params *data, int *rtr_val)
{
    int n;
    int k;
    int j;
    int i;
    int address;
    create_candidates_out0(&n);
    for (i = 0; i <= data->localy / 2; i++)
    {
#pragma HLS loop_tripcount max = 8 min = 8
        create_candidates_out1(&j, data, &i, &address, &y, &x, &n, &k);
    }
    *rtr_val = n;
}

void create_all_candidates_out0(int *n)
{
    (*n) = 0;
}

void create_all_candidates_out0_rep3(int *n)
{
    (*n) = 0;
}

void create_all_candidates_out0_rep2(int *n)
{
    (*n) = 0;
}

void create_all_candidates_out0_rep1(int *n)
{
    (*n) = 0;
}

void create_all_candidates_out0_rep0(int *n)
{
    (*n) = 0;
}

void create_all_candidates_out1_out0_out2(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep10(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep9(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep8(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep7(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep6(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep5(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep4(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep3(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep2(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep1(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out2_rep0(int *n, int *decomp_8)
{
    int decomp_6;
    int decomp_7;
    decomp_6 = candlisty[(*n)] >= vrfinishy;
    decomp_7 = candlisty[(*n)] < vrstarty;
    (*decomp_8) = decomp_6 || decomp_7;
}

void create_all_candidates_out1_out0_out4(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep10(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep9(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep8(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep7(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep6(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
#pragma HLS loop_tripcount max = 0 min = 195
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep5(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
#pragma HLS loop_tripcount max = 0 min = 180
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep4(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep3(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep2(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep1(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0_out4_rep0(int *k, int *n)
{
    for ((*k) = 0; (*k) < (*n); (*k)++)
    {
        int decomp_9;
        int decomp_10;
        int decomp_11;
        decomp_9 = candlistx[(*n)] == candlistx[(*k)];
        decomp_10 = candlisty[(*n)] == candlisty[(*k)];
        decomp_11 = decomp_9 && decomp_10;
        if (decomp_11)
        {
            (*n)--;
            break;
        }
    }
    (*n)++;
}

void create_all_candidates_out1_out0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                     int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep10(&rand1);
        reimpl_drand48_rep21(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep0(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep32(&rand1);
        reimpl_drand48_rep43(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep0(k, n);
}

void create_all_candidates_out1_out0_rep9(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep11(&rand1);
        reimpl_drand48_rep22(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep1(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep33(&rand1);
        reimpl_drand48_rep44(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep1(k, n);
}

void create_all_candidates_out1_out0_rep8(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep12(&rand1);
        reimpl_drand48_rep23(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep2(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep34(&rand1);
        reimpl_drand48_rep45(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep2(k, n);
}

void create_all_candidates_out1_out0_rep7(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep13(&rand1);
        reimpl_drand48_rep24(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep3(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep35(&rand1);
        reimpl_drand48_rep46(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep3(k, n);
}

void create_all_candidates_out1_out0_rep6(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep14(&rand1);
        reimpl_drand48_rep25(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep4(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep36(&rand1);
        reimpl_drand48_rep47(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep4(k, n);
}

void create_all_candidates_out1_out0_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep15(&rand1);
        reimpl_drand48_rep26(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep5(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep37(&rand1);
        reimpl_drand48_rep48(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep5(k, n);
}

void create_all_candidates_out1_out0_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep16(&rand1);
        reimpl_drand48_rep27(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep6(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep38(&rand1);
        reimpl_drand48_rep49(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep6(k, n);
}

void create_all_candidates_out1_out0_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep17(&rand1);
        reimpl_drand48_rep28(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep7(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep39(&rand1);
        reimpl_drand48_rep50(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep7(k, n);
}

void create_all_candidates_out1_out0_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep18(&rand1);
        reimpl_drand48_rep29(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep8(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep40(&rand1);
        reimpl_drand48_rep51(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep8(k, n);
}

void create_all_candidates_out1_out0_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep19(&rand1);
        reimpl_drand48_rep30(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep9(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep41(&rand1);
        reimpl_drand48_rep52(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep9(k, n);
}

void create_all_candidates_out1_out0_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int decomp_0;
    int decomp_1;
    int decomp_2;
    int decomp_3;
    int decomp_4;
    int decomp_5;
    int decomp_8;
    decomp_0 = (*i) == 0;
    decomp_1 = (*j) >= 0;
    decomp_2 = decomp_0 && decomp_1;
    if (decomp_2)
    {
        *__doContinue = 1;

        return;
    }
    (*address) = (2 * ((yloopout[(*y) - (*i)]) * data->widthout + (xloopout[(*x) + (*j)])));
    candlistx[(*n)] = atlas[(*address)] - (*j);
    candlisty[(*n)] = atlas[(*address) + 1] + (*i);
    decomp_3 = candlistx[(*n)] >= vrfinishx;
    decomp_4 = candlistx[(*n)] < vrstartx;
    decomp_5 = decomp_3 || decomp_4;
    if (decomp_5)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep20(&rand1);
        reimpl_drand48_rep31(&rand2);
        candlistx[(*n)] = vrstartx + (int)(rand1 * (vrfinishx - vrstartx));
        candlisty[(*n)] = vrstarty + (int)(rand2 * (vrfinishy - vrstarty));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out2_rep10(n, &decomp_8);
    if (decomp_8)
    {
        double rand1;
        double rand2;
        reimpl_drand48_rep42(&rand1);
        reimpl_drand48_rep53(&rand2);
        candlisty[(*n)] = vrstarty + (int)(rand1 * (vrfinishy - vrstarty));
        candlistx[(*n)] = vrstartx + (int)(rand2 * (vrfinishx - vrstartx));
        (*n)++;
        *__doContinue = 1;

        return;
    }
    create_all_candidates_out1_out0_out4_rep10(k, n);
}

void create_all_candidates_out1_out1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                     int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep0(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out1_rep8(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep1(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out1_rep7(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep2(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out1_rep6(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep3(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out1_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep4(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out1_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep5(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out1_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep6(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out1_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep7(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out1_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep8(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out1_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue14 = 0;
    create_all_candidates_out1_out0_rep9(i, j, address, y, data, x, n, k, &__doContinue14);
    if (__doContinue14 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                     int *__doContinue)
{
    int __doContinue16 = 0;
    create_all_candidates_out1_out1_rep0(i, j, address, y, data, x, n, k, &__doContinue16);
    if (__doContinue16 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out2_rep7(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue16 = 0;
    create_all_candidates_out1_out1_rep1(i, j, address, y, data, x, n, k, &__doContinue16);
    if (__doContinue16 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out2_rep6(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue16 = 0;
    create_all_candidates_out1_out1_rep2(i, j, address, y, data, x, n, k, &__doContinue16);
    if (__doContinue16 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out2_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue16 = 0;
    create_all_candidates_out1_out1_rep3(i, j, address, y, data, x, n, k, &__doContinue16);
    if (__doContinue16 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out2_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue16 = 0;
    create_all_candidates_out1_out1_rep4(i, j, address, y, data, x, n, k, &__doContinue16);
    if (__doContinue16 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out2_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue16 = 0;
    create_all_candidates_out1_out1_rep5(i, j, address, y, data, x, n, k, &__doContinue16);
    if (__doContinue16 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out2_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue16 = 0;
    create_all_candidates_out1_out1_rep6(i, j, address, y, data, x, n, k, &__doContinue16);
    if (__doContinue16 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out2_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue16 = 0;
    create_all_candidates_out1_out1_rep7(i, j, address, y, data, x, n, k, &__doContinue16);
    if (__doContinue16 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out2_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue16 = 0;
    create_all_candidates_out1_out1_rep8(i, j, address, y, data, x, n, k, &__doContinue16);
    if (__doContinue16 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                     int *__doContinue)
{
    int __doContinue18 = 0;
    create_all_candidates_out1_out2_rep0(i, j, address, y, data, x, n, k, &__doContinue18);
    if (__doContinue18 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out3_rep6(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue18 = 0;
    create_all_candidates_out1_out2_rep1(i, j, address, y, data, x, n, k, &__doContinue18);
    if (__doContinue18 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out3_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue18 = 0;
    create_all_candidates_out1_out2_rep2(i, j, address, y, data, x, n, k, &__doContinue18);
    if (__doContinue18 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out3_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue18 = 0;
    create_all_candidates_out1_out2_rep3(i, j, address, y, data, x, n, k, &__doContinue18);
    if (__doContinue18 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out3_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue18 = 0;
    create_all_candidates_out1_out2_rep4(i, j, address, y, data, x, n, k, &__doContinue18);
    if (__doContinue18 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out3_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue18 = 0;
    create_all_candidates_out1_out2_rep5(i, j, address, y, data, x, n, k, &__doContinue18);
    if (__doContinue18 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out3_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue18 = 0;
    create_all_candidates_out1_out2_rep6(i, j, address, y, data, x, n, k, &__doContinue18);
    if (__doContinue18 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out3_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue18 = 0;
    create_all_candidates_out1_out2_rep7(i, j, address, y, data, x, n, k, &__doContinue18);
    if (__doContinue18 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                     int *__doContinue)
{
    int __doContinue20 = 0;
    create_all_candidates_out1_out3_rep0(i, j, address, y, data, x, n, k, &__doContinue20);
    if (__doContinue20 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out4_rep5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue20 = 0;
    create_all_candidates_out1_out3_rep1(i, j, address, y, data, x, n, k, &__doContinue20);
    if (__doContinue20 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out4_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue20 = 0;
    create_all_candidates_out1_out3_rep2(i, j, address, y, data, x, n, k, &__doContinue20);
    if (__doContinue20 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out4_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue20 = 0;
    create_all_candidates_out1_out3_rep3(i, j, address, y, data, x, n, k, &__doContinue20);
    if (__doContinue20 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out4_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue20 = 0;
    create_all_candidates_out1_out3_rep4(i, j, address, y, data, x, n, k, &__doContinue20);
    if (__doContinue20 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out4_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue20 = 0;
    create_all_candidates_out1_out3_rep5(i, j, address, y, data, x, n, k, &__doContinue20);
    if (__doContinue20 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out4_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue20 = 0;
    create_all_candidates_out1_out3_rep6(i, j, address, y, data, x, n, k, &__doContinue20);
    if (__doContinue20 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out5(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                     int *__doContinue)
{
    int __doContinue22 = 0;
    create_all_candidates_out1_out4_rep0(i, j, address, y, data, x, n, k, &__doContinue22);
    if (__doContinue22 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out5_rep4(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue22 = 0;
    create_all_candidates_out1_out4_rep1(i, j, address, y, data, x, n, k, &__doContinue22);
    if (__doContinue22 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out5_rep3(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue22 = 0;
    create_all_candidates_out1_out4_rep2(i, j, address, y, data, x, n, k, &__doContinue22);
    if (__doContinue22 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out5_rep2(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue22 = 0;
    create_all_candidates_out1_out4_rep3(i, j, address, y, data, x, n, k, &__doContinue22);
    if (__doContinue22 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out5_rep1(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue22 = 0;
    create_all_candidates_out1_out4_rep4(i, j, address, y, data, x, n, k, &__doContinue22);
    if (__doContinue22 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1_out5_rep0(int *i, int *j, int *address, int *y, params *data, int *x, int *n, int *k,
                                          int *__doContinue)
{
    int __doContinue22 = 0;
    create_all_candidates_out1_out4_rep5(i, j, address, y, data, x, n, k, &__doContinue22);
    if (__doContinue22 == 1)
    {
        *__doContinue = 1;

        return;
    }
}

void create_all_candidates_out1(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k)
{
    for ((*j) = -data->localx / 2; (*j) <= data->localx / 2; (*j)++)
    {
        int __doContinue24 = 0;
        create_all_candidates_out1_out5_rep0(i, j, address, y, data, x, n, k, &__doContinue24);
        if (__doContinue24 == 1)
        {
            continue;
        }
    }
}

void create_all_candidates_out1_rep3(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k)
{
    for ((*j) = -data->localx / 2; (*j) <= data->localx / 2; (*j)++)
    {
        int __doContinue24 = 0;
        create_all_candidates_out1_out5_rep1(i, j, address, y, data, x, n, k, &__doContinue24);
        if (__doContinue24 == 1)
        {
            continue;
        }
    }
}

void create_all_candidates_out1_rep2(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k)
{
    for ((*j) = -data->localx / 2; (*j) <= data->localx / 2; (*j)++)
    {
#pragma HLS loop_tripcount max = 15 min = 15
        int __doContinue24 = 0;
        create_all_candidates_out1_out5_rep2(i, j, address, y, data, x, n, k, &__doContinue24);
        if (__doContinue24 == 1)
        {
            continue;
        }
    }
}

void create_all_candidates_out1_rep1(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k)
{
    for ((*j) = -data->localx / 2; (*j) <= data->localx / 2; (*j)++)
    {
#pragma HLS loop_tripcount max = 15 min = 15
        int __doContinue24 = 0;
        create_all_candidates_out1_out5_rep3(i, j, address, y, data, x, n, k, &__doContinue24);
        if (__doContinue24 == 1)
        {
            continue;
        }
    }
}

void create_all_candidates_out1_rep0(int *j, params *data, int *i, int *address, int *y, int *x, int *n, int *k)
{
    for ((*j) = -data->localx / 2; (*j) <= data->localx / 2; (*j)++)
    {
        int __doContinue24 = 0;
        create_all_candidates_out1_out5_rep4(i, j, address, y, data, x, n, k, &__doContinue24);
        if (__doContinue24 == 1)
        {
            continue;
        }
    }
}

void create_all_candidates(int x, int y, params *data, int *rtr_val)
{
    int n;
    int k;
    int j;
    int i;
    int address;
    create_all_candidates_out0_rep0(&n);
    for (i = -data->localy / 2; i <= data->localy / 2; i++)
    {
        create_all_candidates_out1_rep0(&j, data, &i, &address, &y, &x, &n, &k);
    }
    *rtr_val = n;
}

void create_all_candidates_rep2(int x, int y, params *data, int *rtr_val)
{
    int n;
    int k;
    int j;
    int i;
    int address;
    create_all_candidates_out0_rep1(&n);
    for (i = -data->localy / 2; i <= data->localy / 2; i++)
    {
#pragma HLS loop_tripcount max = 15 min = 15
        create_all_candidates_out1_rep1(&j, data, &i, &address, &y, &x, &n, &k);
    }
    *rtr_val = n;
}

void create_all_candidates_rep1(int x, int y, params *data, int *rtr_val)
{
    int n;
    int k;
    int j;
    int i;
    int address;
    create_all_candidates_out0_rep2(&n);
    for (i = -data->localy / 2; i <= data->localy / 2; i++)
    {
#pragma HLS loop_tripcount max = 15 min = 15
        create_all_candidates_out1_rep2(&j, data, &i, &address, &y, &x, &n, &k);
    }
    *rtr_val = n;
}

void create_all_candidates_rep0(int x, int y, params *data, int *rtr_val)
{
    int n;
    int k;
    int j;
    int i;
    int address;
    create_all_candidates_out0_rep3(&n);
    for (i = -data->localy / 2; i <= data->localy / 2; i++)
    {
        create_all_candidates_out1_rep3(&j, data, &i, &address, &y, &x, &n, &k);
    }
    *rtr_val = n;
}

void init_out0(params *data)
{
    vrstartx = data->localx / 2;
    vrstarty = data->localy / 2;
    vrfinishx = data->widthin - data->localx / 2;
    vrfinishy = data->heightin - data->localy / 2;
}

void init_out1_out0_out0(int *decomp_0, int *i, params *data, int *j)
{
    (*decomp_0) = target->data[(1 * (((*i)) * (data->widthout) + ((*j)))) + 0] == 1.0;
}

void init_out1_out0_out1_out2(int *tmpx, double *rand1, int *tmpy, double *rand2, int *i, params *data, int *j,
                              F2D *image)
{
    (*tmpx) = vrstartx + (int)((*rand1) * (vrfinishx - vrstartx));
    (*tmpy) = vrstarty + (int)((*rand2) * (vrfinishy - vrstarty));
    if (!anotherpass)
    {
        atlas[(2 * (((*i)) * data->widthout + ((*j))))] = (*tmpx);
        atlas[(2 * (((*i)) * data->widthout + ((*j)))) + 1] = (*tmpy);
        result->data[(1 * (((*i)) * (data->widthout) + ((*j)))) + 0] =
            image->data[(1 * (((*tmpy)) * (data->widthin) + ((*tmpx)))) + 0];
    }
}

void init_out1_out0_out1(int *tmpx, int *tmpy, int *i, params *data, int *j, F2D *image)
{
    double rand1;
    double rand2;
    reimpl_drand48_rep8(&rand1);
    reimpl_drand48_rep9(&rand2);
    init_out1_out0_out1_out2(tmpx, &rand1, tmpy, &rand2, i, data, j, image);
}

void init_out1_out0(int *i, params *data, int *j, int *tmpx, int *tmpy, F2D *image)
{
    int decomp_0;
    init_out1_out0_out0(&decomp_0, i, data, j);
    if (decomp_0)
    {
        init_out1_out0_out1(tmpx, tmpy, i, data, j, image);
    }
}

void init_out1(int *j, params *data, int *i, int *tmpx, int *tmpy, F2D *image)
{
    for ((*j) = 0; (*j) < data->widthout; (*j)++)
    {
#pragma HLS loop_tripcount max = 960 min = 960
        init_out1_out0(i, data, j, tmpx, tmpy, image);
    }
}

void init(F2D *image, params *data)
{
    int tmpy;
    int tmpx;
    int j;
    int i;
    init_out0(data);
    for (i = 0; i < data->heightout; i++)
    {
#pragma HLS loop_tripcount max = 960 min = 960
        init_out1(&j, data, &i, &tmpx, &tmpy, image);
    }
}

void compare_full_neighb(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val)
{
    double tmp;
    double res;
    int i;
    int j;
    int addr;
    int addr1;
    res = 0;
    for (i = -(data->localy / 2); i <= data->localy / 2; i++)
    {
        for (j = -(data->localx / 2); j <= data->localx / 2; j++)
        {
            if (!(i > 0 && y1 > data->localy && y1 + i < data->heightout))
            {
                addr = (1 * ((y + i) * (data->widthin) + (x + j)));
                addr1 = (1 * ((yloopout[y1 + i]) * (data->widthout) + (xloopout[x1 + j])));
                tmp = image->data[addr + 0] - image1->data[addr1 + 0];
                res = res + tmp * tmp;
            }
        }
    }
    *rtr_val = res;
}

void compare_full_neighb_rep1(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val)
{
    double tmp;
    double res;
    int i;
    int j;
    int addr;
    int addr1;
    res = 0;
    for (i = -(data->localy / 2); i <= data->localy / 2; i++)
    {
#pragma HLS loop_tripcount max = 15 min = 15
        for (j = -(data->localx / 2); j <= data->localx / 2; j++)
        {
#pragma HLS loop_tripcount max = 15 min = 15
            if (!(i > 0 && y1 > data->localy && y1 + i < data->heightout))
            {
                addr = (1 * ((y + i) * (data->widthin) + (x + j)));
                addr1 = (1 * ((yloopout[y1 + i]) * (data->widthout) + (xloopout[x1 + j])));
                tmp = image->data[addr + 0] - image1->data[addr1 + 0];
                res = res + tmp * tmp;
            }
        }
    }
    *rtr_val = res;
}

void compare_full_neighb_rep0(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val)
{
    double tmp;
    double res;
    int i;
    int j;
    int addr;
    int addr1;
    res = 0;
    for (i = -(data->localy / 2); i <= data->localy / 2; i++)
    {
#pragma HLS loop_tripcount max = 15 min = 15
        for (j = -(data->localx / 2); j <= data->localx / 2; j++)
        {
#pragma HLS loop_tripcount max = 15 min = 15
            if (!(i > 0 && y1 > data->localy && y1 + i < data->heightout))
            {
                addr = (1 * ((y + i) * (data->widthin) + (x + j)));
                addr1 = (1 * ((yloopout[y1 + i]) * (data->widthout) + (xloopout[x1 + j])));
                tmp = image->data[addr + 0] - image1->data[addr1 + 0];
                res = res + tmp * tmp;
            }
        }
    }
    *rtr_val = res;
}

void compare_neighb(F2D *image, int x, int y, F2D *image1, int x1, int y1, params *data, double *rtr_val)
{
    double tmp;
    double res;
    int i;
    int j;
    int addr1;
    int addr;
    res = 0;
    for (i = -(data->localy / 2); i < 0; i++)
    {
#pragma HLS loop_tripcount max = 7 min = 7
        for (j = -(data->localx / 2); j <= data->localx / 2; j++)
        {
#pragma HLS loop_tripcount max = 15 min = 15
            addr = (1 * ((y + i) * (data->widthin) + (x + j)));
            addr1 = (1 * ((yloopout[y1 + i]) * (data->widthout) + (xloopout[x1 + j])));
            tmp = image->data[addr + 0] - image1->data[addr1 + 0];
            res = res + tmp * tmp;
        }
    }
    for (j = -(data->localx / 2); j < 0; j++)
    {
#pragma HLS loop_tripcount max = 7 min = 7
        addr = (1 * ((y) * (data->widthin) + (x + j)));
        addr1 = (1 * ((y1) * (data->widthout) + (xloopout[x1 + j])));
        tmp = image->data[addr + 0] - image1->data[addr1 + 0];
        res = res + tmp * tmp;
    }
    *rtr_val = res;
}

void compare_rest(F2D *image, int x, int y, F2D *tar, int x1, int y1, params *data, double *rtr_val)
{
    double tmp;
    double res;
    int i;
    int j;
    int addr;
    int addr1;
    res = 0;
    for (i = (data->localy / 2); i > 0; i--)
    {
#pragma HLS loop_tripcount max = 7 min = 7
        for (j = -(data->localx / 2); j <= data->localx / 2; j++)
        {
#pragma HLS loop_tripcount max = 15 min = 15
            int decomp_0;
            addr = (1 * ((y + i) * (data->widthin) + (x + j)));
            addr1 = (1 * ((yloopout[y1 + i]) * (data->widthout) + (xloopout[x1 + j])));
            decomp_0 = tar->data[addr1 + 0] != 1.0;
            if (decomp_0)
            { // KVS?
                tmp = image->data[addr + 0] - tar->data[addr1 + 0];
                res = res + tmp * tmp;
            }
        }
    }
    for (j = (data->localx / 2); j > 0; j--)
    {
#pragma HLS loop_tripcount max = 7 min = 7
        int decomp_1;
        addr = (1 * ((y) * (data->widthin) + (x + j)));
        addr1 = (1 * ((y1) * (data->widthout) + (xloopout[x1 + j])));
        decomp_1 = tar->data[addr1 + 0] != 1.0;
        if (decomp_1)
        { // KVS?
            tmp = image->data[addr + 0] - tar->data[addr1 + 0];
            res = res + tmp * tmp;
        }
    }
    *rtr_val = res;
}
