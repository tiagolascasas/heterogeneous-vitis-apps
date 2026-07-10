#include "cluster.h"
#include <chrono>
#include <iostream>
#include <string>

#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

#define BUFFER_SIZE 92006

static void fSortIndices_hw_xrt(F2D *input, int dim, I2D **rtr_val)
{
    long checksum = 0;
    for (int i = 0; i < input->width * input->height; i++)
    {
        checksum += static_cast<long>(input->data[i]);
    }
    std::cout << "Input checksum: " << checksum << std::endl;
    const std::string binaryFile = "cluster.xclbin";

    auto device = xrt::device(0);
    auto uuid = device.load_xclbin(binaryFile);

    auto krnl = xrt::kernel(device, uuid, "cluster");

    auto bo_input_data = xrt::bo(device, BUFFER_SIZE * sizeof(float), krnl.group_id(2));
    auto bo_rtr_val_width = xrt::bo(device, sizeof(int), krnl.group_id(4));
    auto bo_rtr_val_height = xrt::bo(device, sizeof(int), krnl.group_id(5));
    auto bo_rtr_val_data = xrt::bo(device, BUFFER_SIZE * sizeof(int), krnl.group_id(6));

    bo_input_data.write(input->data, input->width * input->height * sizeof(float), 0);
    bo_input_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);

    auto start = std::chrono::high_resolution_clock::now();
    auto run = krnl(input->width, input->height, bo_input_data,
                    dim,
                    bo_rtr_val_width, bo_rtr_val_height, bo_rtr_val_data);
    run.wait();
    std::cout << std::chrono::duration_cast<std::chrono::microseconds>(
                     std::chrono::high_resolution_clock::now() - start)
                     .count()
              << " us" << std::endl;

    bo_rtr_val_width.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_rtr_val_height.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_rtr_val_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

    bo_rtr_val_width.read(&(*rtr_val)->width, sizeof(int), 0);
    bo_rtr_val_height.read(&(*rtr_val)->height, sizeof(int), 0);
    bo_rtr_val_data.read((*rtr_val)->data, BUFFER_SIZE * sizeof(int), 0);
}

void fSortIndices_hw_bridge(F2D *input, int dim, I2D **rtr_val)
{
    *rtr_val = (I2D *)malloc(BUFFER_SIZE * sizeof(int) + sizeof(I2D));
    fSortIndices_hw_xrt(input, dim, rtr_val);

    std::cout << "Output width: " << (*rtr_val)->width << ", height: " << (*rtr_val)->height << std::endl;
    for (int i = 0; i < (*rtr_val)->height * (*rtr_val)->width; i++)
    {
        if ((*rtr_val)->data[i] > 0)
        {
            std::cout << (*rtr_val)->data[i] << " ";
        }
    }
}
