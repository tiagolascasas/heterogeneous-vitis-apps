#include "config.h"

void edgedetect(unsigned char *image_rgb,
                unsigned char *image_gray,
                unsigned char *temp_buf,
                unsigned char *filter,
                unsigned char *output);
void rgbToGrayscale(unsigned char input_image[H * W * 3], unsigned char output_image[H * W]);
void convolve2d_smoothing(unsigned char input_image[H * W], unsigned char filter[K * K], unsigned char output_image[H * W]);
void convolve2d_vertical(unsigned char input_image[H * W], unsigned char filter[K * K], unsigned char output_image[H * W]);
void convolve2d_horizontal(unsigned char input_image[H * W], unsigned char filter[K * K], unsigned char output_image[H * W]);
void combthreshold(unsigned char image_gray[H * W], unsigned char temp_buf[H * W], unsigned char output[H * W]);
void set_smoothing_filter(unsigned char filter[K * K]);
void set_vertical_filter(unsigned char filter[K * K]);
void set_horizontal_filter(unsigned char filter[K * K]);
