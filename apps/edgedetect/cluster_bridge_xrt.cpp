#include "cluster.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

void cluster(char *image_gray, char *temp_buf, char *filter, char *output);

static void edge_detect_hw_sim(char image_gray[2073600], char temp_buf[2073600],
                               char filter[9], char output[2073600]) {
  printf("[OFFLOAD_SIM] Allocating mock device buffers...\n");

  // Allocate isolated "device-side" buffers
  char *dev_image_gray = (char *)malloc(2073600);
  char *dev_temp_buf   = (char *)malloc(2073600);
  char *dev_filter     = (char *)malloc(9);
  char *dev_output     = (char *)malloc(2073600);

  // Simulate host -> device DMA transfer
  std::memcpy(dev_image_gray, image_gray, 2073600);
  std::memcpy(dev_temp_buf, temp_buf, 2073600);
  std::memcpy(dev_filter, filter, 9);
  std::memset(dev_output, 0, 2073600);  // Zero-init scratch/output

  printf("[OFFLOAD_SIM] Running SW kernel on isolated buffers...\n");

  // Execute software kernel on the isolated "device" buffers
  cluster(dev_image_gray, dev_temp_buf, dev_filter, dev_output);

  // Simulate device -> host DMA transfer
  std::memcpy(output, dev_output, 2073600);

  printf("[OFFLOAD_SIM] Output copied back to host.\n");

  free(dev_image_gray);
  free(dev_temp_buf);
  free(dev_filter);
  free(dev_output);
}

#ifndef NO_XRT
// XRT includes
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

static void edge_detect_hw_offload(char image_gray[2073600], char temp_buf[2073600],
                                   char filter[9], char output[2073600]) {
  std::string binaryFile = "cluster.xclbin";
  if (getenv("XCLBIN") != nullptr) {
    binaryFile = getenv("XCLBIN");
  }

  auto device = xrt::device(0);
  auto uuid = device.load_xclbin(binaryFile);
  auto krnl = xrt::kernel(device, uuid, "cluster");

  auto bo_image_gray = xrt::bo(device, 2073600, krnl.group_id(0));
  auto bo_temp_buf = xrt::bo(device, 2073600, krnl.group_id(1));
  auto bo_filter = xrt::bo(device, 9, krnl.group_id(2));
  auto bo_output = xrt::bo(device, 2073600, krnl.group_id(3));

  std::memcpy(bo_image_gray.map<char *>(), image_gray, 2073600);
  std::memcpy(bo_temp_buf.map<char *>(), temp_buf, 2073600);
  std::memcpy(bo_filter.map<char *>(), filter, 9);
  std::memset(bo_output.map<char *>(), 0, 2073600);

  bo_image_gray.sync(XCL_BO_SYNC_BO_TO_DEVICE);
  bo_temp_buf.sync(XCL_BO_SYNC_BO_TO_DEVICE);
  bo_filter.sync(XCL_BO_SYNC_BO_TO_DEVICE);
  bo_output.sync(XCL_BO_SYNC_BO_TO_DEVICE);

  auto run = krnl(bo_image_gray, bo_temp_buf, bo_filter, bo_output);
  run.wait();

  bo_output.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
  std::memcpy(output, bo_output.map<char *>(), 2073600);
}
#endif

void edge_detect_hw_bridge(char image_gray[2073600], char temp_buf[2073600],
                           char filter[9], char output[2073600]) {
  bool use_offload_sim = (getenv("OFFLOAD_SIM") != nullptr);

  if (use_offload_sim) {
    edge_detect_hw_sim(image_gray, temp_buf, filter, output);
  } else {
#ifndef NO_XRT
    edge_detect_hw_offload(image_gray, temp_buf, filter, output);
#else
    fprintf(stderr, "Error: True HW offload requires XRT. Compile without -DNO_XRT.\n");
    exit(1);
#endif
  }
}