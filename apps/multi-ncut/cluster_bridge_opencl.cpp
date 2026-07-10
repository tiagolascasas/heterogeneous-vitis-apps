#include "cluster.h"
#include <chrono>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#define CL_HPP_TARGET_OPENCL_VERSION 120
#define CL_HPP_MINIMUM_OPENCL_VERSION 120
#include <CL/opencl.hpp>

#define BUFFER_SIZE 92006

#define OCL_CHECK(error, call)                                                                           \
    call;                                                                                                \
    if ((error) != CL_SUCCESS)                                                                           \
    {                                                                                                    \
        throw std::runtime_error(std::string("OpenCL error ") + std::to_string(error) + " from " #call); \
    }

static std::vector<unsigned char> loadBinary(const std::string &path)
{
    std::ifstream stream(path, std::ios::binary | std::ios::ate);
    if (!stream)
    {
        throw std::runtime_error("Unable to open xclbin: " + path);
    }

    const auto size = stream.tellg();
    stream.seekg(0, std::ios::beg);

    std::vector<unsigned char> buffer(static_cast<size_t>(size));
    stream.read(reinterpret_cast<char *>(buffer.data()), size);
    if (!stream)
    {
        throw std::runtime_error("Unable to read xclbin: " + path);
    }

    return buffer;
}

static cl::Device getXilinxDevice()
{
    std::vector<cl::Platform> platforms;
    cl::Platform::get(&platforms);

    for (const auto &platform : platforms)
    {
        if (platform.getInfo<CL_PLATFORM_NAME>() != "Xilinx")
        {
            continue;
        }

        std::vector<cl::Device> devices;
        platform.getDevices(CL_DEVICE_TYPE_ACCELERATOR, &devices);
        if (!devices.empty())
        {
            return devices.front();
        }
    }

    throw std::runtime_error("Unable to find a Xilinx OpenCL accelerator device");
}

static void fSortIndices_hw_opencl(F2D *input, int dim, I2D **rtr_val)
{
    const std::string binaryFile = "cluster.xclbin";
    const size_t inputBytes = static_cast<size_t>(input->width) * input->height * sizeof(float);
    const size_t outputBytes = BUFFER_SIZE * sizeof(int);
    cl_int err = CL_SUCCESS;

    try
    {
        auto device = getXilinxDevice();
        auto binary = loadBinary(binaryFile);

        cl::Context context(device, nullptr, nullptr, nullptr, &err);
        if (err != CL_SUCCESS)
        {
            throw std::runtime_error("OpenCL error creating context: " + std::to_string(err));
        }

        cl::CommandQueue queue(context, device, CL_QUEUE_PROFILING_ENABLE, &err);
        if (err != CL_SUCCESS)
        {
            throw std::runtime_error("OpenCL error creating command queue: " + std::to_string(err));
        }

        cl::Program::Binaries binaries;
        binaries.push_back(binary);
        cl::Program program(context, {device}, binaries, nullptr, &err);
        if (err != CL_SUCCESS)
        {
            throw std::runtime_error("OpenCL error creating program: " + std::to_string(err));
        }

        cl::Kernel kernel(program, "cluster", &err);
        if (err != CL_SUCCESS)
        {
            throw std::runtime_error("OpenCL error creating kernel: " + std::to_string(err));
        }

        OCL_CHECK(err, cl::Buffer inputBuffer(context, CL_MEM_READ_ONLY, inputBytes, nullptr, &err));
        OCL_CHECK(err, cl::Buffer widthBuffer(context, CL_MEM_WRITE_ONLY, sizeof(int), nullptr, &err));
        OCL_CHECK(err, cl::Buffer heightBuffer(context, CL_MEM_WRITE_ONLY, sizeof(int), nullptr, &err));
        OCL_CHECK(err, cl::Buffer dataBuffer(context, CL_MEM_WRITE_ONLY, outputBytes, nullptr, &err));

        OCL_CHECK(err, err = queue.enqueueWriteBuffer(inputBuffer, CL_TRUE, 0, inputBytes, input->data));

        OCL_CHECK(err, err = kernel.setArg(0, input->width));
        OCL_CHECK(err, err = kernel.setArg(1, input->height));
        OCL_CHECK(err, err = kernel.setArg(2, inputBuffer));
        OCL_CHECK(err, err = kernel.setArg(3, dim));
        OCL_CHECK(err, err = kernel.setArg(4, widthBuffer));
        OCL_CHECK(err, err = kernel.setArg(5, heightBuffer));
        OCL_CHECK(err, err = kernel.setArg(6, dataBuffer));

        auto start = std::chrono::high_resolution_clock::now();
        OCL_CHECK(err, err = queue.enqueueTask(kernel));
        OCL_CHECK(err, err = queue.finish());
        std::cout << std::chrono::duration_cast<std::chrono::microseconds>(
                         std::chrono::high_resolution_clock::now() - start)
                         .count()
                  << " us" << std::endl;

        OCL_CHECK(err, err = queue.enqueueReadBuffer(widthBuffer, CL_TRUE, 0, sizeof(int), &(*rtr_val)->width));
        OCL_CHECK(err, err = queue.enqueueReadBuffer(heightBuffer, CL_TRUE, 0, sizeof(int), &(*rtr_val)->height));
        OCL_CHECK(err, err = queue.enqueueReadBuffer(dataBuffer, CL_TRUE, 0, outputBytes, (*rtr_val)->data));
    }
    catch (const std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
        throw;
    }
}

void fSortIndices_hw_bridge(F2D *input, int dim, I2D **rtr_val)
{
    *rtr_val = (I2D *)malloc(BUFFER_SIZE * sizeof(int) + sizeof(I2D));
    fSortIndices_hw_opencl(input, dim, rtr_val);
}
