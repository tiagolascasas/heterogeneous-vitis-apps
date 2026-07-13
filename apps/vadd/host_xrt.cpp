/**
 * Copyright (C) 2019-2021 Xilinx, Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#include <iostream>
#include <cstring>
#include <cstdlib>

// XRT includes
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

int main(int argc, char **argv)
{
    std::string binaryFile = "cluster.xclbin";
    if (getenv("XCLBIN") != nullptr) {
        binaryFile = getenv("XCLBIN");
    }
    int dataSize = 4096;
    if (argc >= 2)
    {
        binaryFile = argv[1];
    }
    if (argc >= 3)
    {
        dataSize = std::stoi(argv[2]);
        if (dataSize <= 0)
        {
            std::cerr << "Invalid data size specified: " << argv[2] << "\n";
            return 1;
        }
    }
    if (argc > 3)
    {
        std::cerr << "Usage: " << argv[0] << " [xclbin_file] [data_size]\n";
        return 1;
    }
    int *a = new int[dataSize];
    int *b = new int[dataSize];
    int *output = new int[dataSize];
    int *bufReference = new int[dataSize];
    for (int i = 0; i < dataSize; ++i)
    {
        a[i] = i;
        b[i] = i;
        bufReference[i] = a[i] + b[i];
    }

    auto const initEpoch = std::chrono::high_resolution_clock::now();
    long long initTime = 0, kernelTime = 0, epilogueTime = 0;

    bool use_offload = (getenv("OFFLOAD") != nullptr);
    bool use_offload_sim = (getenv("OFFLOAD_SIM") != nullptr);

    if (use_offload_sim) {
        initTime = std::chrono::duration_cast<std::chrono::microseconds>(
                       std::chrono::high_resolution_clock::now() - initEpoch).count();

        int* dev_a = (int*)malloc(dataSize * sizeof(int));
        int* dev_b = (int*)malloc(dataSize * sizeof(int));
        int* dev_out = (int*)malloc(dataSize * sizeof(int));

        // DMA Host to Device
        std::memcpy(dev_a, a, dataSize * sizeof(int));
        std::memcpy(dev_b, b, dataSize * sizeof(int));

        const auto kernelEpoch = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < dataSize; ++i) {
            dev_out[i] = dev_a[i] + dev_b[i];
        }
        kernelTime = std::chrono::duration_cast<std::chrono::microseconds>(
                         std::chrono::high_resolution_clock::now() - kernelEpoch).count();

        const auto epilogueEpoch = std::chrono::high_resolution_clock::now();
        // DMA Device to Host
        std::memcpy(output, dev_out, dataSize * sizeof(int));

        free(dev_a);
        free(dev_b);
        free(dev_out);
        epilogueTime = std::chrono::duration_cast<std::chrono::microseconds>(
                           std::chrono::high_resolution_clock::now() - epilogueEpoch).count();
    } else if (use_offload) {
        int device_index = 0;
        auto device = xrt::device(device_index);
        auto uuid = device.load_xclbin(binaryFile);
        auto krnl = xrt::kernel(device, uuid, "cluster");

        auto bo0 = xrt::bo(device, dataSize * sizeof(int), krnl.group_id(0));
        auto bo1 = xrt::bo(device, dataSize * sizeof(int), krnl.group_id(1));
        auto bo_out = xrt::bo(device, dataSize * sizeof(int), krnl.group_id(2));

        bo0.write(a, dataSize * sizeof(int), 0);
        bo1.write(b, dataSize * sizeof(int), 0);

        initTime = std::chrono::duration_cast<std::chrono::microseconds>(
                       std::chrono::high_resolution_clock::now() - initEpoch).count();

        const auto kernelEpoch = std::chrono::high_resolution_clock::now();

        // Hardware Execution
        bo0.sync(XCL_BO_SYNC_BO_TO_DEVICE);
        bo1.sync(XCL_BO_SYNC_BO_TO_DEVICE);
        auto run = krnl(bo0, bo1, bo_out, dataSize);
        run.wait();
        bo_out.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

        kernelTime = std::chrono::duration_cast<std::chrono::microseconds>(
                         std::chrono::high_resolution_clock::now() - kernelEpoch).count();

        const auto epilogueEpoch = std::chrono::high_resolution_clock::now();
        bo_out.read(output, dataSize * sizeof(int), 0);
        epilogueTime = std::chrono::duration_cast<std::chrono::microseconds>(
                           std::chrono::high_resolution_clock::now() - epilogueEpoch).count();
    } else {
        // Genuine Software Execution (Default)
        initTime = std::chrono::duration_cast<std::chrono::microseconds>(
                       std::chrono::high_resolution_clock::now() - initEpoch).count();

        const auto kernelEpoch = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < dataSize; ++i) {
            output[i] = a[i] + b[i];
        }
        kernelTime = std::chrono::duration_cast<std::chrono::microseconds>(
                         std::chrono::high_resolution_clock::now() - kernelEpoch).count();

        const auto epilogueEpoch = std::chrono::high_resolution_clock::now();
        epilogueTime = std::chrono::duration_cast<std::chrono::microseconds>(
                           std::chrono::high_resolution_clock::now() - epilogueEpoch).count();
    }

    const auto totalTime = std::chrono::duration_cast<std::chrono::microseconds>(
                               std::chrono::high_resolution_clock::now() - initEpoch).count();

    if (std::memcmp(output, bufReference, dataSize * sizeof(int)))
        throw std::runtime_error("Value read back does not match reference");

    std::cout << dataSize << ", " << initTime << ", " << kernelTime << ", " << epilogueTime << ", " << totalTime << "\n";
    return 0;
}
