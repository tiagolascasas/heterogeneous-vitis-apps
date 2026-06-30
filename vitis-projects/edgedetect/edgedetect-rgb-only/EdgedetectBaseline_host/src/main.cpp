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

void wrapped_rgbToGrayscale(unsigned char *image_rgb, unsigned char *image_gray)
{

    if (is_debug)
        std::cout << timestamp << "Running edgedetect..." << std::endl;
    auto device = xrt::device(0);
    auto uuid = device.load_xclbin("./binary_container_1.xclbin");
    auto kernel = xrt::kernel(device, uuid, "rgbToGrayscale");

    if (is_debug)
        std::cout << timestamp << "Allocating buffers..." << std::endl;
    auto bo_image_rgb = xrt::bo(device, H * W * 3, kernel.group_id(0));
    auto bo_image_gray = xrt::bo(device, H * W, kernel.group_id(1));

    if (is_debug)
        std::cout << timestamp << "Writing buffers..." << std::endl;
    bo_image_rgb.write(image_rgb);
    bo_image_rgb.sync(XCL_BO_SYNC_BO_TO_DEVICE);

    if (is_debug)
        std::cout << timestamp << "Executing kernel..." << std::endl;
    auto kernel_run = xrt::run(kernel);
    kernel_run.set_arg(0, bo_image_rgb);
    kernel_run.set_arg(1, bo_image_gray);
    kernel_run.start();

    if (is_debug)
        std::cout << timestamp << "Waiting for kernel to finish..." << std::endl;
    kernel_run.wait();

    if (is_debug)
        std::cout << timestamp << "Reading buffers..." << std::endl;
    bo_image_gray.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_image_gray.read(image_gray);
}

void edgedetect(unsigned char image_rgb[H * W * 3],
                 unsigned char image_gray[H * W],
                 unsigned char temp_buf[H * W],
                 unsigned char filter[K * K],
                 unsigned char output[H * W],
                 bool use_hw)
{

    if (use_hw)
    {
        wrapped_rgbToGrayscale(image_rgb, image_gray);
    }
    else
    {
        rgbToGrayscale(image_rgb, image_gray);
    }

    set_smoothing_filter(filter);

    convolve2d_smoothing(image_gray, filter, output);

    set_vertical_filter(filter);

    convolve2d_vertical(output, filter, image_gray);

    set_horizontal_filter(filter);

    convolve2d_horizontal(output, filter, temp_buf);

    combthreshold(image_gray, temp_buf, output);
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

    std::cout << timestamp << "Running a host-side edgedetect for comparison" << std::endl;
    unsigned char copy_image_rgb[H * W * 3];
    unsigned char copy_image_gray[H * W];
    unsigned char copy_temp_buf[H * W];
    unsigned char copy_filter[K * K];
    unsigned char copy_output[H * W];

    std::copy(image_rgb, image_rgb + H * W * 3, copy_image_rgb);
    std::copy(image_gray, image_gray + H * W, copy_image_gray);
    std::copy(temp_buf, temp_buf + H * W, copy_temp_buf);
    std::copy(filter, filter + K * K, copy_filter);
    std::copy(output, output + H * W, copy_output);

    edgedetect(copy_image_rgb, copy_image_gray, copy_temp_buf, copy_filter, copy_output, false);
    writeBMPColor("./copy_rgb.bmp", copy_image_rgb, W, H);
    writeBMPGrayscale("./copy_gray.bmp", copy_image_gray, W, H);
    writeBMPGrayscale("./copy_temp.bmp", copy_temp_buf, W, H);
    writeBMPGrayscale("./copy_output.bmp", copy_output, W, H);
    std::cout << timestamp << "Host-side edgedetect finished" << std::endl;

    std::cout << timestamp << "Running the device-side edgedetect" << std::endl;
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < ITER; i++)
    {
        edgedetect(image_rgb, image_gray, temp_buf, filter, output, true);
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << timestamp << "Duration: " << duration.count() << "us" << std::endl;
    std::cout << timestamp << "Device-side edgedetect finished" << std::endl;

    try
    {
        writeBMPColor("./rgb.bmp", image_rgb, W, H);
        writeBMPGrayscale("./gray.bmp", image_gray, W, H);
        writeBMPGrayscale("./temp.bmp", temp_buf, W, H);
        writeBMPGrayscale("./output.bmp", output, W, H);

        std::cout << "Filter: [" << std::endl;
        std::cout << "   " << filter[0] << ", " << filter[1] << ", " << filter[2] << std::endl;
        std::cout << "   " << filter[3] << ", " << filter[4] << ", " << filter[5] << std::endl;
        std::cout << "   " << filter[6] << ", " << filter[7] << ", " << filter[8] << std::endl;
        std::cout << "]" << std::endl;

        bool are_equal = std::memcmp(copy_output, output, H * W) == 0;
        std::cout << timestamp << "Output images are " << (are_equal ? "equal" : "different") << std::endl;
    }
    catch (...)
    {
        std::cout << timestamp << "Failed to save the output image" << std::endl;
    }

    return 0;
}