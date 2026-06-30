#include <cmath>

#define W 640
#define H 480
#define K 3
#define T 150

void rgbToGrayscale(unsigned char input_image[H * W * 3], unsigned char output_image[H * W])
{
    for (int i = 0; i < H; i++)
    {
        int jj = 0;
        for (int j = 0; j < W; j++)
        {
            unsigned char r = input_image[i * W * 3 + jj];
            unsigned char g = input_image[i * W * 3 + jj + 1];
            unsigned char b = input_image[i * W * 3 + jj + 2];
            jj += 3;

            float gray = 0.299 * r + 0.587 * g + 0.114 * b;
            output_image[i * W + j] = (unsigned char)floor(gray);
        }
    }
}

void convolve2d_smoothing(unsigned char *input_image,  unsigned char *output_image)
{
    int i;
    int j;
    int c;
    int r;
    int normal_factor;
    int sum;
    int dead_rows;
    int dead_cols;

    char filter[9] = {
        1, 2, 1,
        2, 4, 2,
        1, 2, 1
    };    

    dead_rows = K / 2;
    dead_cols = K / 2;

    normal_factor = 0;
    for (r = 0; r < K; r++)
    {
        for (c = 0; c < K; c++)
        {
            normal_factor += abs(filter[r * K + c]);
        }
    }

    if (normal_factor == 0)
        normal_factor = 1;

    for (r = 0; r < H - K + 1; r++)
    {
        for (c = 0; c < W - K + 1; c++)
        {
            sum = 0;
            for (i = 0; i < K; i++)
            {
                for (j = 0; j < K; j++)
                {
                    sum += input_image[(r + i) * W + (c + j)] * filter[i * K + j];
                }
            }
            unsigned char pixel = (sum / normal_factor) > 255 ? 255 : (sum / normal_factor);            
            output_image[(r + dead_rows) * W + (c + dead_cols)] = pixel;
        }
    }
}

void convolve2d_vertical(unsigned char *input_image,  unsigned char *output_image)
{
    int i;
    int j;
    int c;
    int r;
    int normal_factor;
    int sum;
    int dead_rows;
    int dead_cols;

    signed char filter[9] = {
        -1, 0, 1,
        -2, 0, 2
        -1, 0, 1                        
    };

    dead_rows = K / 2;
    dead_cols = K / 2;

    normal_factor = 0;
    for (r = 0; r < K; r++)
    {
        for (c = 0; c < K; c++)
        {
            normal_factor += abs(filter[r * K + c]);
        }
    }

    if (normal_factor == 0)
        normal_factor = 1;

    for (r = 0; r < H - K + 1; r++)
    {
        for (c = 0; c < W - K + 1; c++)
        {
            sum = 0;
            for (i = 0; i < K; i++)
            {
                for (j = 0; j < K; j++)
                {
                    sum += input_image[(r + i) * W + (c + j)] * filter[i * K + j];
                }
            }
            unsigned char pixel = (sum / normal_factor) > 255 ? 255 : (sum / normal_factor);            
            output_image[(r + dead_rows) * W + (c + dead_cols)] = pixel;
        }
    }
}

void convolve2d_horizontal(unsigned char *input_image,  unsigned char *output_image)
{
    int i;
    int j;
    int c;
    int r;
    int normal_factor;
    int sum;
    int dead_rows;
    int dead_cols;

    signed char filter[9] = {
        1, 2, 1,
        0, 0, 0,
        -1, -2, -1
    };    

    dead_rows = K / 2;
    dead_cols = K / 2;

    normal_factor = 0;
    for (r = 0; r < K; r++)
    {
        for (c = 0; c < K; c++)
        {
            normal_factor += abs(filter[r * K + c]);
        }
    }

    if (normal_factor == 0)
        normal_factor = 1;

    for (r = 0; r < H - K + 1; r++)
    {
        for (c = 0; c < W - K + 1; c++)
        {
            sum = 0;
            for (i = 0; i < K; i++)
            {
                for (j = 0; j < K; j++)
                {
                    sum += input_image[(r + i) * W + (c + j)] * filter[i * K + j];
                }
            }
            unsigned char pixel = (sum / normal_factor) > 255 ? 255 : (sum / normal_factor);            
            output_image[(r + dead_rows) * W + (c + dead_cols)] = pixel;
        }
    }
}

void combthreshold(unsigned char *image_gray, unsigned char *temp_buf, unsigned char *output)
{
    int i, j;
    int temp1;
    int temp2;
    int temp3;

    for (i = 0; i < H; i++)
    {
        for (j = 0; j < W; ++j)
        {
#pragma HLS pipeline
            temp1 = abs(image_gray[i * W + j]);
            temp2 = abs(temp_buf[i * W + j]);
            temp3 = (temp1 > temp2) ? temp1 : temp2;
            output[i * W + j] = (temp3 > T) ? 255 : 0;
        }
    }
}

void edgedetect(unsigned char *image_rgb, unsigned char *output)
{
    unsigned char image_gray[H * W] = {0};
    unsigned char temp_buf[H * W] = {0};

    rgbToGrayscale(image_rgb, image_gray);

    convolve2d_smoothing(image_gray,  output);

    convolve2d_vertical(output, image_gray);

    convolve2d_horizontal(output,  temp_buf);

    combthreshold(image_gray, temp_buf, output);
}
