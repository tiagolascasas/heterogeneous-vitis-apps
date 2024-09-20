#include <cmath>

#define W 640
#define H 480
#define K 3
#define T 150

void edgedetect(unsigned char input_image[H * W * 3], unsigned char output_image[H * W])
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
