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

unsigned char checksum (unsigned char *ptr, size_t sz) {
    unsigned char chk = 0;
    while (sz-- != 0)
        chk -= *ptr++;
    return chk;
}

int main(int argc, char **argv) {

  unsigned char *image_rgb;
  try {
    image_rgb = readBMP("./input.bmp", W, H, 8);
  } catch (...) {
    std::cout << "Failed to load image, loading random data instead..." << std::endl;
    image_rgb = new unsigned char[W * H * 3];
  }

  unsigned char image_gray[H * W] = {0};
  unsigned char temp_buf[H * W] = {0};
  unsigned char filter[K * K] = {0};
  unsigned char output[H * W] = {0};

  auto start = std::chrono::high_resolution_clock::now();
  
  for (int i = 0; i < ITER; i++) {
    edgedetect_sw_fallback(image_rgb, image_gray, temp_buf, filter, output);
  }

  auto stop = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
  std::cout << "Duration: " << duration.count() << "us" << std::endl;

  try {
    writeBMPGrayscale("./output.bmp", output, W, H);

    unsigned char chk = checksum(output, H * W);
    unsigned char expected = 0;
    std::cout << "Checksum is " << chk <<", expected " << expected << " (" << (chk == expected ? "PASSED" : "FAILED") << ")" << std::endl;
  } catch (...) {
    std::cout << "Failed to save the output image" << std::endl;
  }

  return 0;
}