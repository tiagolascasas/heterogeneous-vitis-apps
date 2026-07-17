#include "cluster.h"
#include <chrono>
#include <cstring>
#include <iostream>
#include <string>

#define BUFFER_SIZE 92006

extern void cluster(int, int, float*, int, int*, int*, int*);

static void fSortIndices_hw_sim(F2D *input, int dim, I2D **rtr_val)
{
    // Allocate isolated "device-side" buffers
    float *dev_input_data    = (float *)malloc(BUFFER_SIZE * sizeof(float));
    int   *dev_rtr_val_width = (int *)  malloc(sizeof(int));
    int   *dev_rtr_val_height= (int *)  malloc(sizeof(int));
    int   *dev_rtr_val_data  = (int *)  calloc(BUFFER_SIZE, sizeof(int));

    // Simulate host -> device DMA
    std::memcpy(dev_input_data, input->data, input->width * input->height * sizeof(float));

    cluster(
        input->width, input->height, dev_input_data,
        dim,
        dev_rtr_val_width, dev_rtr_val_height, dev_rtr_val_data
    );

    // Simulate device -> host DMA
    std::memcpy(&(*rtr_val)->width, dev_rtr_val_width, sizeof(int));
    std::memcpy(&(*rtr_val)->height, dev_rtr_val_height, sizeof(int));
    std::memcpy((*rtr_val)->data, dev_rtr_val_data, BUFFER_SIZE * sizeof(int));

    free(dev_input_data);
    free(dev_rtr_val_width);
    free(dev_rtr_val_height);
    free(dev_rtr_val_data);
}

#ifndef NO_XRT
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

static void fSortIndices_hw_xrt(F2D *input, int dim, I2D **rtr_val)
{
    std::string binaryFile = "cluster.xclbin";
    if (getenv("XCLBIN") != nullptr) {
        binaryFile = getenv("XCLBIN");
    }

    auto device = new xrt::device(0);
    auto uuid = device->load_xclbin(binaryFile);
    auto krnl = new xrt::kernel(*device, uuid, "cluster");

    auto bo_input_data = xrt::bo(*device, BUFFER_SIZE * sizeof(float), krnl->group_id(2));
    auto bo_rtr_val_width = xrt::bo(*device, sizeof(int), krnl->group_id(4));
    auto bo_rtr_val_height = xrt::bo(*device, sizeof(int), krnl->group_id(5));
    auto bo_rtr_val_data = xrt::bo(*device, BUFFER_SIZE * sizeof(int), krnl->group_id(6));

    bo_input_data.write(input->data, input->width * input->height * sizeof(float), 0);
    bo_input_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);

    auto run = (*krnl)(input->width, input->height, bo_input_data,
                    dim,
                    bo_rtr_val_width, bo_rtr_val_height, bo_rtr_val_data);
    run.wait();

    bo_rtr_val_width.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_rtr_val_height.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_rtr_val_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

    bo_rtr_val_width.read(&(*rtr_val)->width, sizeof(int), 0);
    bo_rtr_val_height.read(&(*rtr_val)->height, sizeof(int), 0);
    bo_rtr_val_data.read((*rtr_val)->data, BUFFER_SIZE * sizeof(int), 0);
}
#endif

void fSortIndices_hw_bridge(F2D *input, int dim, I2D **rtr_val)
{
    *rtr_val = (I2D *)malloc(BUFFER_SIZE * sizeof(int) + sizeof(I2D));

    long checksum = 0;
    for (int i = 0; i < input->width * input->height; i++) {
        checksum += static_cast<long>(input->data[i]);
    }

    bool use_offload_sim = (getenv("OFFLOAD_SIM") != nullptr);

    if (use_offload_sim) {
        fSortIndices_hw_sim(input, dim, rtr_val);
    } else {
#ifndef NO_XRT
        fSortIndices_hw_xrt(input, dim, rtr_val);
#else
        fprintf(stderr, "Error: True HW offload requires XRT. Compile without -DNO_XRT.\n");
        exit(1);
#endif
    }

    // std::cout << "Output width: " << (*rtr_val)->width << ", height: " << (*rtr_val)->height << std::endl;
    // for (int i = 0; i < (*rtr_val)->height * (*rtr_val)->width; i++) {
    //     if ((*rtr_val)->data[i] > 0) {
    //         std::cout << (*rtr_val)->data[i] << " ";
    //     }
    // }
}
