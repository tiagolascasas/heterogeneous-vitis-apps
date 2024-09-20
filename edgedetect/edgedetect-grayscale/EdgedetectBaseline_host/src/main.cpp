#include <cstring>
#include <iostream>
#include <limits.h>
#include <linux/limits.h>
#include <random>
#include <unistd.h>

#include "deprecated/xrt.h"
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

#include "config.h"
#include "edgedetect.h"
#include "experimental/xrt_xclbin.h"
#include "util.h"

#define ITER 1
#define USE_REAL_IMAGE

unsigned long checksum(unsigned char *ptr, size_t sz) {
  unsigned long chk = 0;
  while (sz-- != 0)
    chk -= *ptr++;
  return chk;
}

void wrapped_rgbToGrayscale(unsigned char image_rgb[H * W * 3],
                            unsigned char image_gray[H * W]) {
  auto device = xrt::device(0);
  auto uuid = device.load_xclbin("./binary_container_1.xclbin");
  auto kernel = xrt::kernel(device, uuid, "edgedetect");

  auto bo_image_rgb = xrt::bo(device, H * W * 3, kernel.group_id(0));
  auto bo_image_gray = xrt::bo(device, H * W, kernel.group_id(1));

  unsigned char *host_ptr_image_rgb = bo_image_rgb.map<unsigned char *>();
  unsigned char *host_ptr_image_gray = bo_image_gray.map<unsigned char *>();

  std::memcpy(host_ptr_image_rgb, image_rgb, H * W * 3);
  //std::memcpy(host_ptr_image_gray, image_gray, H * W);

  bo_image_rgb.sync(XCL_BO_SYNC_BO_TO_DEVICE);
  //bo_image_gray.sync(XCL_BO_SYNC_BO_TO_DEVICE);

  auto kernel_execution = kernel(bo_image_rgb, bo_image_gray);
  kernel_execution.wait();

  //bo_image_rgb.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
  bo_image_gray.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

  //std::memcpy(image_rgb, host_ptr_image_rgb, H * W * 3);
  std::memcpy(image_gray, host_ptr_image_gray, H * W);
}

void convolve2d_smoothing(unsigned char input_image[H * W],
                          unsigned char filter[K * K],
                          unsigned char output_image[H * W]) {
  int i;
  int j;
  int c;
  int r;
  int normal_factor;
  int sum;
  int dead_rows;
  int dead_cols;

  dead_rows = K / 2;
  dead_cols = K / 2;

  normal_factor = 0;
  for (r = 0; r < K; r++) {
    for (c = 0; c < K; c++) {
      normal_factor += abs(filter[r * K + c]);
    }
  }

  if (normal_factor == 0)
    normal_factor = 1;

  for (r = 0; r < H - K + 1; r++) {
    for (c = 0; c < W - K + 1; c++) {
      sum = 0;
      for (i = 0; i < K; i++) {
        for (j = 0; j < K; j++) {
          sum += input_image[(r + i) * W + (c + j)] * filter[i * K + j];
        }
      }
      output_image[(r + dead_rows) * W + (c + dead_cols)] =
          (sum / normal_factor);
    }
  }
}

void convolve2d_vertical(unsigned char input_image[H * W],
                         unsigned char filter[K * K],
                         unsigned char output_image[H * W]) {
  int i;
  int j;
  int c;
  int r;
  int normal_factor;
  int sum;
  int dead_rows;
  int dead_cols;

  dead_rows = K / 2;
  dead_cols = K / 2;

  normal_factor = 0;
  for (r = 0; r < K; r++) {
    for (c = 0; c < K; c++) {
      normal_factor += abs(filter[r * K + c]);
    }
  }

  if (normal_factor == 0)
    normal_factor = 1;

  for (r = 0; r < H - K + 1; r++) {
    for (c = 0; c < W - K + 1; c++) {
      sum = 0;
      for (i = 0; i < K; i++) {
        for (j = 0; j < K; j++) {
          sum += input_image[(r + i) * W + (c + j)] * filter[i * K + j];
        }
      }
      output_image[(r + dead_rows) * W + (c + dead_cols)] =
          (sum / normal_factor);
    }
  }
}

void convolve2d_horizontal(unsigned char input_image[H * W],
                           unsigned char filter[K * K],
                           unsigned char output_image[H * W]) {
  int i;
  int j;
  int c;
  int r;
  int normal_factor;
  int sum;
  int dead_rows;
  int dead_cols;

  dead_rows = K / 2;
  dead_cols = K / 2;

  normal_factor = 0;
  for (r = 0; r < K; r++) {
    for (c = 0; c < K; c++) {
      normal_factor += abs(filter[r * K + c]);
    }
  }

  if (normal_factor == 0)
    normal_factor = 1;

  for (r = 0; r < H - K + 1; r++) {
    for (c = 0; c < W - K + 1; c++) {
      sum = 0;
      for (i = 0; i < K; i++) {
        for (j = 0; j < K; j++) {
          sum += input_image[(r + i) * W + (c + j)] * filter[i * K + j];
        }
      }
      output_image[(r + dead_rows) * W + (c + dead_cols)] =
          (sum / normal_factor);
    }
  }
}

void combthreshold(unsigned char image_gray[H * W],
                   unsigned char temp_buf[H * W], unsigned char output[H * W]) {
  int i, j;
  int temp1;
  int temp2;
  int temp3;

  for (i = 0; i < H; i++) {
    for (j = 0; j < W; ++j) {
#pragma HLS pipeline
      temp1 = abs(image_gray[i * W + j]);
      temp2 = abs(temp_buf[i * W + j]);
      temp3 = (temp1 > temp2) ? temp1 : temp2;
      output[i * W + j] = (temp3 > T) ? 255 : 0;
    }
  }
}

void set_smoothing_filter(unsigned char filter[K * K]) {
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

void set_vertical_filter(unsigned char filter[K * K]) {
  filter[0] = -1;
  filter[1] = 0;
  filter[2] = 1;
  filter[3] = -2;
  filter[4] = 0;
  filter[5] = 2;
  filter[6] = -1;
  filter[7] = 0;
  filter[8] = 1;
}

void set_horizontal_filter(unsigned char filter[K * K]) {
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

void edgedetect(unsigned char image_rgb[H * W * 3],
                unsigned char image_gray[H * W], unsigned char temp_buf[H * W],
                unsigned char filter[K * K], unsigned char output[H * W]) {

  wrapped_rgbToGrayscale(image_rgb, image_gray);

  try {
    writeBMPColor("./color.bmp", image_rgb, W, H);
    writeBMPGrayscale("./grayscale.bmp", image_gray, W, H);

    unsigned long chk = checksum(image_gray, H * W);
    unsigned long expected = 0;
    std::cout << "Checksum is " << chk << ", expected " << expected << " ("
              << (chk == expected ? "PASSED" : "FAILED") << ")" << std::endl;
  } catch (...) {
    std::cout << "Failed to save grayscale image" << std::endl;
  }

  set_smoothing_filter(filter);

  convolve2d_smoothing(image_gray, filter, output);

  set_vertical_filter(filter);

  convolve2d_vertical(output, filter, image_gray);

  set_horizontal_filter(filter);

  convolve2d_horizontal(output, filter, temp_buf);

  combthreshold(image_gray, temp_buf, output);
}

int main(int argc, char **argv) {

  unsigned char *image_rgb;
  try {
    image_rgb = readBMP("./input.bmp", W, H, 8);
  } catch (...) {
    std::cout << "Failed to load image, loading random data instead..."
              << std::endl;
    image_rgb = new unsigned char[W * H * 3];
  }

  unsigned char image_gray[H * W] = {0};
  unsigned char temp_buf[H * W] = {0};
  unsigned char filter[K * K] = {0};
  unsigned char output[H * W] = {0};

  edgedetect(image_rgb, image_gray, temp_buf, filter, output);

  try {
    writeBMPGrayscale("./output.bmp", output, W, H);

    unsigned long chk = checksum(output, H * W);
    unsigned long expected = 0;
    std::cout << "Checksum is " << chk << ", expected " << expected << " ("
              << (chk == expected ? "PASSED" : "FAILED") << ")" << std::endl;
  } catch (...) {
    std::cout << "Failed to save the output image" << std::endl;
  }

  return 0;
}