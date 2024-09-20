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

void wrapped_edgedetect(unsigned char image_rgb[H * W * 3],
                        unsigned char output[H * W]) {

  auto device = xrt::device(0);
  auto uuid = device.load_xclbin("./binary_container_1.xclbin");
  auto kernel = xrt::kernel(device, uuid, "edgedetect");

  auto bo_image_rgb = xrt::bo(device, H * W * 3, kernel.group_id(0));
  auto bo_output = xrt::bo(device, H * W, kernel.group_id(1));

  unsigned char *host_ptr_image_rgb = bo_image_rgb.map<unsigned char *>();
  unsigned char *host_ptr_output = bo_output.map<unsigned char *>();

  memcpy(host_ptr_image_rgb, image_rgb, H * W * 3);
  memcpy(host_ptr_output, output, H * W);

  bo_image_rgb.sync(XCL_BO_SYNC_BO_TO_DEVICE);

  auto kernel_execution = kernel(bo_image_rgb, /*bo_image_gray, bo_temp_buf, bo_filter,*/ bo_output);
  kernel_execution.wait();

  bo_output.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

  memcpy(output, host_ptr_output, H * W);
}

int main(int argc, char **argv) {

  unsigned char *image_rgb;
  try {
    image_rgb = readBMP("./input.bmp", W, H, 8);
  } catch (...) {
    std::cout << "Failed to load image, loading random data instead..." << std::endl;
    image_rgb = new unsigned char[W * H * 3];
  }

  unsigned char output[H * W] = {0};

  auto start = std::chrono::high_resolution_clock::now();
  
  for (int i = 0; i < ITER; i++) {
    wrapped_edgedetect(image_rgb, output);
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