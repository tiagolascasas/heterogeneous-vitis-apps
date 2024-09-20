#pragma once

#pragma pack(push, 1)
struct BITMAPFILEHEADER
{
    uint16_t bfType;
    uint32_t bfSize;
    uint16_t bfReserved1;
    uint16_t bfReserved2;
    uint32_t bfOffBits;
};

struct BITMAPINFOHEADER
{
    uint32_t biSize;
    int32_t biWidth;
    int32_t biHeight;
    uint16_t biPlanes;
    uint16_t biBitCount;
    uint32_t biCompression;
    uint32_t biSizeImage;
    int32_t biXPelsPerMeter;
    int32_t biYPelsPerMeter;
    uint32_t biClrUsed;
    uint32_t biClrImportant;
};
#pragma pack(pop)

unsigned char *readBMP(const std::string &filename, int width, int height, int bitCount);

bool writeBMPGrayscale(const std::string &filename, const unsigned char *pixels, int width, int height);

bool writeBMPColor(const std::string &filename, const unsigned char *pixels, int width, int height);