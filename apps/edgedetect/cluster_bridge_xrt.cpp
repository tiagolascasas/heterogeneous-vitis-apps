#include "cluster.h"
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>

// XRT includes
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

void edge_detect_hw_bridge(char image_gray[2073600], char temp_buf[2073600], char filter[9], char output[2073600])
{
    const std::string binaryFile = "cluster.xclbin";
    int device_index = 0;

    auto device = xrt::device(device_index);
    auto uuid = device.load_xclbin(binaryFile);

    auto krnl = xrt::kernel(device, uuid, "edge_detect_hw");

    // Allocate buffer objects in device global memory
    auto bo_image_gray = xrt::bo(device, 2073600, krnl.group_id(0));
    auto bo_temp_buf = xrt::bo(device, 2073600, krnl.group_id(1));
    auto bo_filter = xrt::bo(device, 9, krnl.group_id(2));
    auto bo_output = xrt::bo(device, 2073600, krnl.group_id(3));

    // Copy input data into buffer objects
    std::memcpy(bo_image_gray.map<char *>(), image_gray, 2073600);
    std::memcpy(bo_temp_buf.map<char *>(), temp_buf, 2073600);
    std::memcpy(bo_filter.map<char *>(), filter, 9);

    // Sync inputs to device
    bo_image_gray.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_temp_buf.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_filter.sync(XCL_BO_SYNC_BO_TO_DEVICE);

    if (getenv("DEBUG") != ((void *)0))
    {
        printf("Launching kernel...\n");
    }

    // Execute kernel and wait
    auto run = krnl(bo_image_gray, bo_temp_buf, bo_filter, bo_output);
    run.wait();

    if (getenv("DEBUG") != ((void *)0))
    {
        printf("Kernel execution completed\n");
    }

    // Sync output back to host
    bo_output.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    std::memcpy(output, bo_output.map<char *>(), 2073600);
}