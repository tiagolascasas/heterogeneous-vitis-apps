#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
void convolve2d_rep2(char input_image[2073600], char filter[9], char output_image[2073600]);
void cluster_convolve2d_rep2(char input_image[2073600], char filter[9], char output_image[2073600]);
void convolve2d_rep1(char input_image[2073600], char filter[9], char output_image[2073600]);
void cluster_convolve2d_rep1(char input_image[2073600], char filter[9], char output_image[2073600]);
void convolve2d_rep0(char input_image[2073600], char filter[9], char output_image[2073600]);
void cluster_convolve2d_rep0(char input_image[2073600], char filter[9], char output_image[2073600]);
void readBMP(char const *filename, char *image_rgb)
{
    int x, y;
    for (y = 0; y < 1080 * 1920 * 3; ++y)
    {
        image_rgb[y] = 0;
    }
    FILE *f = fopen(filename, "rb");
    if (!f)
    {
        printf("readBMP: cannot open file\n");

        return;
    }
    unsigned char h[54];
    if (fread(h, 1, 54, f) != 54)
    {
        printf("readBMP: cannot read BMP header\n");
        fclose(f);

        return;
    }
    if (h[0] != 'B' || h[1] != 'M')
    {
        printf("readBMP: not a BMP file\n");
        fclose(f);

        return;
    }
    int dataOffset = h[10] | (h[11] << 8) | (h[12] << 16) | (h[13] << 24);
    int width = h[18] | (h[19] << 8) | (h[20] << 16) | (h[21] << 24);
    int height = h[22] | (h[23] << 8) | (h[24] << 16) | (h[25] << 24);
    int bpp = h[28] | (h[29] << 8);
    int compression = h[30] | (h[31] << 8) | (h[32] << 16) | (h[33] << 24);
    if (bpp != 24)
    {
        printf("readBMP: unsupported bpp (%d)\n", bpp);
        fclose(f);

        return;
    }
    if (compression != 0)
    {
        printf("readBMP: compressed BMP not supported\n");
        fclose(f);

        return;
    }
    int topDown = 0;
    if (height < 0)
    {
        height = -height;
        topDown = 1;
    }
    if (fseek(f, dataOffset, 0) != 0)
    {
        printf("readBMP: fseek failed\n");
        fclose(f);

        return;
    }
    int rowSize = (width * 3 + 3) & ~3;
    unsigned char row[rowSize];
    int copyW = width < 1920 ? width : 1920;
    int copyH = height < 1080 ? height : 1080;
    for (y = 0; y < copyH; ++y)
    {
        int srcY = topDown ? y : (height - 1 - y);
        if (fseek(f, dataOffset + srcY * rowSize, 0) != 0)
        {
            printf("readBMP: fseek failed at row %d\n", y);
            fclose(f);

            return;
        }
        if (fread(row, 1, rowSize, f) != rowSize)
        {
            printf("readBMP: short read at row %d\n", y);
            fclose(f);

            return;
        }
        char *dst = image_rgb + y * 1920 * 3;
        for (x = 0; x < copyW; ++x)
        {
            dst[3 * x + 0] = row[3 * x + 2];
            dst[3 * x + 1] = row[3 * x + 1];
            dst[3 * x + 2] = row[3 * x + 0];
        }
    }
    fclose(f);
}

void writeBMP(char const *filename, int width, int height, unsigned char *output_image)
{
    int row_padded = (width + 3) & (~3);
    int image_size = row_padded * height;
    int file_size = 54 + 1024 + image_size;
    unsigned char fileHeader[14] = {'B', 'M', 0, 0, 0, 0, 0, 0, 0, 0, 54, 4, 0, 0};
    unsigned char dibHeader[40] = {40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 8, 0};
    *(int *)&fileHeader[2] = file_size;
    *(int *)&dibHeader[4] = width;
    *(int *)&dibHeader[8] = height;
    *(int *)&dibHeader[20] = image_size;
    FILE *f = fopen(filename, "wb");
    if (!f)
    {

        return;
    }
    fwrite(fileHeader, 1, 14, f);
    fwrite(dibHeader, 1, 40, f);
    for (int i = 0; i < 256; i++)
    {
        unsigned char color[4] = {i, i, i, 0};
        fwrite(color, 1, 4, f);
    }
    unsigned char padding[3] = {0, 0, 0};
    for (int i = height - 1; i >= 0; i--)
    { // Bottom-up
        fwrite(&output_image[i * width], 1, width, f);
        if (row_padded > width)
        {
            fwrite(padding, 1, row_padded - width, f);
        }
    }
    fclose(f);
}

void rgbToGrayscale(char input_image[6220800], char output_image[2073600])
{
    for (int i = 0; i < 1080; i++)
    {
        int jj;
        jj = 0;
        for (int j = 0; j < 1920; j++)
        {
            char r;
            char g;
            char b;
            float gray;
            r = input_image[i * 1920 * 3 + jj];
            g = input_image[i * 1920 * 3 + jj + 1];
            b = input_image[i * 1920 * 3 + jj + 2];
            jj = jj + 3;
            gray = 0.299 * r + 0.587 * g + 0.114 * b;
            output_image[i * 1920 + j] = (char)floor(gray);
        }
    }
}

void convolve2d(char input_image[2073600], char filter[9], char output_image[2073600])
{
    int i;
    int j;
    int c;
    int r;
    int normal_factor;
    int sum;
    int dead_rows;
    int dead_cols;
    int decomp_0;
    dead_rows = 3 / 2;
    dead_cols = 3 / 2;
    normal_factor = 0;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            int _d0_0;
            int _d0_1;
            _d0_0 = abs(filter[r * 3 + c]);
            _d0_1 = normal_factor + _d0_0;
            normal_factor = _d0_1;
        }
    }
    decomp_0 = normal_factor == 0;
    if (decomp_0)
    {
        normal_factor = 1;
    }
    for (r = 0; r < 1080 - 3 + 1; r++)
    {
        for (c = 0; c < 1920 - 3 + 1; c++)
        {
            sum = 0;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    sum = sum + input_image[(r + i) * 1920 + (c + j)] * filter[i * 3 + j];
                }
            }
            output_image[(r + dead_rows) * 1920 + (c + dead_cols)] = (sum / normal_factor);
        }
    }
}

void convolve2d_rep2(char input_image[2073600], char filter[9], char output_image[2073600])
{
    int i;
    int j;
    int c;
    int r;
    int normal_factor;
    int sum;
    int dead_rows;
    int dead_cols;
    int decomp_0;
    dead_rows = 3 / 2;
    dead_cols = 3 / 2;
    normal_factor = 0;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            int _d0_0;
            int _d0_1;
            _d0_0 = abs(filter[r * 3 + c]);
            _d0_1 = normal_factor + _d0_0;
            normal_factor = _d0_1;
        }
    }
    decomp_0 = normal_factor == 0;
    if (decomp_0)
    {
        normal_factor = 1;
    }
    for (r = 0; r < 1080 - 3 + 1; r++)
    {
        for (c = 0; c < 1920 - 3 + 1; c++)
        {
            sum = 0;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    sum = sum + input_image[(r + i) * 1920 + (c + j)] * filter[i * 3 + j];
                }
            }
            output_image[(r + dead_rows) * 1920 + (c + dead_cols)] = (sum / normal_factor);
        }
    }
}

void convolve2d_rep1(char input_image[2073600], char filter[9], char output_image[2073600])
{
    int i;
    int j;
    int c;
    int r;
    int normal_factor;
    int sum;
    int dead_rows;
    int dead_cols;
    int decomp_0;
    dead_rows = 3 / 2;
    dead_cols = 3 / 2;
    normal_factor = 0;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            int _d0_0;
            int _d0_1;
            _d0_0 = abs(filter[r * 3 + c]);
            _d0_1 = normal_factor + _d0_0;
            normal_factor = _d0_1;
        }
    }
    decomp_0 = normal_factor == 0;
    if (decomp_0)
    {
        normal_factor = 1;
    }
    for (r = 0; r < 1080 - 3 + 1; r++)
    {
        for (c = 0; c < 1920 - 3 + 1; c++)
        {
            sum = 0;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    sum = sum + input_image[(r + i) * 1920 + (c + j)] * filter[i * 3 + j];
                }
            }
            output_image[(r + dead_rows) * 1920 + (c + dead_cols)] = (sum / normal_factor);
        }
    }
}

void convolve2d_rep0(char input_image[2073600], char filter[9], char output_image[2073600])
{
    int i;
    int j;
    int c;
    int r;
    int normal_factor;
    int sum;
    int dead_rows;
    int dead_cols;
    int decomp_0;
    dead_rows = 3 / 2;
    dead_cols = 3 / 2;
    normal_factor = 0;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            int _d0_0;
            int _d0_1;
            _d0_0 = abs(filter[r * 3 + c]);
            _d0_1 = normal_factor + _d0_0;
            normal_factor = _d0_1;
        }
    }
    decomp_0 = normal_factor == 0;
    if (decomp_0)
    {
        normal_factor = 1;
    }
    for (r = 0; r < 1080 - 3 + 1; r++)
    {
        for (c = 0; c < 1920 - 3 + 1; c++)
        {
            sum = 0;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    sum = sum + input_image[(r + i) * 1920 + (c + j)] * filter[i * 3 + j];
                }
            }
            output_image[(r + dead_rows) * 1920 + (c + dead_cols)] = (sum / normal_factor);
        }
    }
}

void combthreshold(char image_gray[2073600], char temp_buf[2073600], char output[2073600])
{
    int i;
    int j;
    int temp1;
    int temp2;
    int temp3;
    for (i = 0; i < 1080; i++)
    {
        for (j = 0; j < 1920; ++j)
        {
            temp1 = abs(image_gray[i * 1920 + j]);
            temp2 = abs(temp_buf[i * 1920 + j]);
            temp3 = (temp1 > temp2) ? temp1 : temp2;
            output[i * 1920 + j] = (temp3 > 20) ? 255 : 0;
        }
    }
}

void edge_detect_out0(char filter[9])
{
    filter[0] = 1;
    filter[1] = 2;
    filter[2] = 1;
    filter[3] = 2;
    filter[4] = 4;
    filter[5] = 2;
    filter[6] = 1;
    filter[7] = 2;
    filter[8] = 1;
}

void edge_detect_out1(char filter[9])
{
    filter[0] = 1;
    filter[1] = 0;
    filter[2] = -1;
    filter[3] = 2;
    filter[4] = 0;
    filter[5] = -2;
    filter[6] = 1;
    filter[7] = 0;
    filter[8] = -1;
}

void edge_detect_out2(char filter[9])
{
    filter[0] = 1;
    filter[1] = 2;
    filter[2] = 1;
    filter[3] = 0;
    filter[4] = 0;
    filter[5] = 0;
    filter[6] = -1;
    filter[7] = -2;
    filter[8] = -1;
}

void edge_detect_sw(char image_rgb[6220800], char image_gray[2073600], char temp_buf[2073600], char filter[9],
                    char output[2073600])
{
    rgbToGrayscale(image_rgb, image_gray);
    edge_detect_out0(filter);
    convolve2d_rep0(image_gray, filter, output);
    edge_detect_out1(filter);
    convolve2d_rep1(output, filter, image_gray);
    edge_detect_out2(filter);
    convolve2d_rep2(output, filter, temp_buf);
    combthreshold(image_gray, temp_buf, output);
}

void edge_detect_hw_bridge(char image_gray[2073600], char temp_buf[2073600], char filter[9], char output[2073600]);
int main()
{
    char *image_rgb = (char *)malloc(1080 * 1920 * 3 * sizeof(char));
    char *image_gray = (char *)malloc(1080 * 1920 * sizeof(char));
    char *temp_buf = (char *)malloc(1080 * 1920 * sizeof(char));
    char filter[9] = {0};
    char *output = (char *)malloc(1080 * 1920 * sizeof(char));
    readBMP("input.bmp", image_rgb);
    // Selector between SW and HW bridge calls based on OFFLOAD getenv variable
    if (getenv("OFFLOAD") != ((void *)0))
    {
        if (getenv("DEBUG") != ((void *)0))
        {
            printf("Running in HW offload mode\n");
        }
        rgbToGrayscale(image_rgb, image_gray);
        edge_detect_out0(filter);
        edge_detect_hw_bridge(image_gray, temp_buf, filter, output);
    }
    else
    {
        if (getenv("DEBUG") != ((void *)0))
        {
            printf("Running in SW mode\n");
        }
        edge_detect_sw(image_rgb, image_gray, temp_buf, filter, output);
    }
    writeBMP("output.bmp", 1920, 1080, (unsigned char *)output);
    long actual = 0;
    long expected = -201500;
    for (int i = 0; i < 1080 * 1920; i++)
    {
        actual += output[i];
    }
    printf("Checksum: expected %ld, got %ld%s\n", expected, actual, (expected == actual) ? " (VERIFIED)" : " (ERROR)");
    free(image_rgb);
    free(image_gray);
    free(temp_buf);
    free(output);

    return 0;
}
