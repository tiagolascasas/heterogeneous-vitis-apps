#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "disparity.h"
void padarray4(I2D *inMat, I2D *borderMat, int dir, I2D *paddedArray)
{
    int rows;
    int cols;
    int bRows;
    int bCols;
    int newRows;
    int newCols;
    int i;
    int j;
    int adir;
    adir = abs(dir);
    rows = inMat->height;
    cols = inMat->width;
    bRows = borderMat->data[0];
    bCols = borderMat->data[1];
    newRows = rows + bRows;
    newCols = cols + bCols;
    int decomp_0;
    decomp_0 = dir == 1;
    if (decomp_0)
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                paddedArray->data[(i)*paddedArray->width + (j)] = inMat->data[(i)*inMat->width + (j)];
            }
        }
    }
    else
    {
        for (i = 0; i < rows - bRows; i++)
        {
            for (j = 0; j < cols - bCols; j++)
            {
                paddedArray->data[((bRows + i)) * paddedArray->width + ((bCols + j))] = inMat->data[(i)*inMat->width + (j)];
            }
        }
    }

    return;
}
