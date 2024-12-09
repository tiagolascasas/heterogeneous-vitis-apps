#include <cmath>

#define K 3
#define T 150

void edgedetect(unsigned char *image_rgb,
                unsigned char *image_gray,
                unsigned char *temp_buf,
                unsigned char *filter,
                unsigned char *output,
                int H, int W)
{
    int i;
    int j;

    for (i = 0; i < H; i++)
    {
        int jj = 0;
        for (j = 0; j < W; j++)
        {
            unsigned char r = image_rgb[i * W * 3 + jj];
            unsigned char g = image_rgb[i * W * 3 + jj + 1];
            unsigned char b = image_rgb[i * W * 3 + jj + 2];
            jj += 3;

            float gray = 0.299 * r + 0.587 * g + 0.114 * b;
            image_gray[i * W + j] = (unsigned char)floor(gray);
        }
    }

    filter[0] = 1;
    filter[1] = 2;
    filter[2] = 1;
    filter[3] = 2;
    filter[4] = 4;
    filter[5] = 2;
    filter[6] = 1;
    filter[7] = 2;
    filter[8] = 1;

    int c;
    int r;
    int normal_factor;
    int sum;
    int dead_rows;
    int dead_cols;

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
                    sum += image_gray[(r + i) * W + (c + j)] * filter[i * K + j];
                }
            }
            unsigned char pixel = (sum / normal_factor) > 255 ? 255 : (sum / normal_factor);
            output[(r + dead_rows) * W + (c + dead_cols)] = pixel;
        }
    }

    filter[0] = -1;
    filter[1] = 0;
    filter[2] = 1;
    filter[3] = -2;
    filter[4] = 0;
    filter[5] = 2;
    filter[6] = -1;
    filter[7] = 0;
    filter[8] = 1;

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
                    sum += output[(r + i) * W + (c + j)] * filter[i * K + j];
                }
            }
            unsigned char pixel = (sum / normal_factor) > 255 ? 255 : (sum / normal_factor);
            image_gray[(r + dead_rows) * W + (c + dead_cols)] = pixel;
        }
    }

    filter[0] = 1;
    filter[1] = 2;
    filter[2] = 1;
    filter[3] = 0;
    filter[4] = 0;
    filter[5] = 0;
    filter[6] = -1;
    filter[7] = -2;
    filter[8] = -1;

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
                    sum += output[(r + i) * W + (c + j)] * filter[i * K + j];
                }
            }
            unsigned char pixel = (sum / normal_factor) > 255 ? 255 : (sum / normal_factor);
            temp_buf[(r + dead_rows) * W + (c + dead_cols)] = pixel;
        }
    }

    int temp1;
    int temp2;
    int temp3;

    for (i = 0; i < H; i++)
    {
        for (j = 0; j < W; ++j)
        {
            temp1 = abs(image_gray[i * W + j]);
            temp2 = abs(temp_buf[i * W + j]);
            temp3 = (temp1 > temp2) ? temp1 : temp2;
            output[i * W + j] = (temp3 > T) ? 255 : 0;
        }
    }
}
