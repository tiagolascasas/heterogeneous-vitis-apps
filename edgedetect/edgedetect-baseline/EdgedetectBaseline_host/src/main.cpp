#include <cstring>
#include <iostream>
#include <limits.h>
#include <linux/limits.h>
#include <random>
#include <string>
#include <chrono>
#include <iomanip>
#include <fstream>
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

const auto program_start_time = std::chrono::steady_clock::now();
bool is_debug = false;

std::ostream &timestamp(std::ostream &os)
{
    auto now = std::chrono::steady_clock::now();
    double elapsed_seconds = std::chrono::duration<double>(now - program_start_time).count();

    os << "[" << std::setw(8) << std::fixed << std::setprecision(3) << elapsed_seconds << "] ";
    return os;
}

unsigned char checksum(unsigned char *ptr, size_t sz)
{
    unsigned char chk = 0;
    while (sz-- != 0)
        chk -= *ptr++;
    return chk;
}

void wrapped_edgedetect(unsigned char image_rgb[H * W * 3],
                        unsigned char image_gray[H * W],
                        unsigned char temp_buf[H * W],
                        unsigned char filter[K * K],
                        unsigned char output[H * W])
{

    if (is_debug) std::cout << timestamp << "Running edgedetect..." << std::endl;
    auto device = xrt::device(0);
    auto uuid = device.load_xclbin("./binary_container_1.xclbin");
    auto kernel = xrt::kernel(device, uuid, "edgedetect");

    if (is_debug) std::cout << timestamp << "Allocating buffers..." << std::endl;
    std::cout << timestamp << "Allocating bo_image_rgb" << std::endl;
    auto bo_image_rgb = xrt::bo(device, H * W * 3, kernel.group_id(0));
    std::cout << timestamp << "Allocating bo_image_gray" << std::endl;
    auto bo_image_gray = xrt::bo(device, H * W, kernel.group_id(0));
    std::cout << timestamp << "Allocating bo_temp_buf" << std::endl;
    auto bo_temp_buf = xrt::bo(device, H * W, kernel.group_id(1));
    std::cout << timestamp << "Allocating bo_filter" << std::endl;
    auto bo_filter = xrt::bo(device, K * K, kernel.group_id(2));
    std::cout << timestamp << "Allocating bo_output" << std::endl;
    auto bo_output = xrt::bo(device, H * W, kernel.group_id(3));

    if (is_debug) std::cout << timestamp << "Writing buffers..." << std::endl;
    bo_image_rgb.write(image_rgb);
    bo_image_gray.write(image_gray);
    bo_temp_buf.write(temp_buf);
    bo_filter.write(filter);
    bo_output.write(output);

    bo_image_rgb.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_image_gray.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_temp_buf.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_filter.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_output.sync(XCL_BO_SYNC_BO_TO_DEVICE);

    if (is_debug) std::cout << timestamp << "Executing kernel..." << std::endl;
    auto kernel_execution = kernel(bo_image_rgb, bo_image_gray, bo_temp_buf, bo_filter, bo_output);
    kernel_execution.wait();

    if (is_debug) std::cout << timestamp << "Reading buffers..." << std::endl;
    bo_image_rgb.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_image_gray.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_temp_buf.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_filter.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_output.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    
    bo_image_rgb.read(image_rgb);
    bo_image_gray.read(image_gray);
    bo_temp_buf.read(temp_buf);
    bo_filter.read(filter);
    bo_output.read(output);
}

int main()
{
    is_debug = (getenv("DEBUG") != nullptr);
    unsigned char *image_rgb;
    try
    {
        image_rgb = readBMP("./input.bmp", W, H, 8);
        std::cout << timestamp << "Image loaded successfully" << std::endl;
    }
    catch (...)
    {
        std::cout << timestamp << "Failed to load image, loading random data instead..." << std::endl;
        image_rgb = new unsigned char[W * H * 3];
    }

    unsigned char image_gray[H * W] = {0};
    unsigned char temp_buf[H * W] = {0};
    unsigned char filter[K * K] = {0};
    unsigned char output[H * W] = {0};

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < ITER; i++)
    {
        wrapped_edgedetect(image_rgb, image_gray, temp_buf, filter, output);
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << timestamp << "Duration: " << duration.count() << "us" << std::endl;

    try
    {
        writeBMPColor("./rgb.bmp", image_rgb, W, H);
        writeBMPGrayscale("./gray.bmp", image_gray, W, H);
        writeBMPGrayscale("./temp.bmp", temp_buf, W, H);
        writeBMPGrayscale("./output.bmp", output, W, H);

        std::cout << "Filter: [" << std::endl;
        std::cout << "         " << filter[0] << ", " << filter[1] << ", " << filter[2] << std::endl;
        std::cout << "         " << filter[3] << ", " << filter[4] << ", " << filter[5] << std::endl;
        std::cout << "         " << filter[6] << ", " << filter[7] << ", " << filter[8] << std::endl;
        std::cout << "]" << std::endl;

        unsigned char chk = checksum(output, H * W);
        unsigned char expected = 0;
        std::cout << timestamp << "Checksum is " << chk << ", expected " << expected << " (" << (chk == expected ? "PASSED" : "FAILED") << ")" << std::endl;
    }
    catch (...)
    {
        std::cout << timestamp << "Failed to save the output image" << std::endl;
    }

    return 0;
}