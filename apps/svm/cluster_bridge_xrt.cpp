#include "cluster.h"
#include <iostream>
#include <stdexcept>
#include <string>

// XRT includes
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"
#include "svm.h"

static bool initialized = false;
static xrt::device device;
static xrt::kernel krnl;

void kernel_hw_bridge(int N, F2D *trn1, F2D *trn2, int iterations, alphaRet **rtr_val)
{
    float b;
    float C;
    int d;
    int dim;
    float eps;
    float tolerance;
    
    F2D *a_result = (F2D *)malloc(4000 + sizeof(F2D)); // 4000 bytes of data + struct overhead, approximate for legacy safety
    a_result->width = 1;
    a_result->height = 1000;
    
    F2D *b_result = (F2D *)malloc(40 + sizeof(F2D));
    b_result->width = 1;
    b_result->height = 10;
    
    F2D *X = (F2D *)malloc(102400 + sizeof(F2D));
    X->width = 1;
    X->height = 25600;

    if (getenv("OFFLOAD_SIM") != NULL) {
        cluster(N, &(trn1->width), &(trn1->height), trn1->data,
                &(trn2->width), &(trn2->height), trn2->data,
                iterations, &b, &C, &d, &dim, &eps,
                &(a_result->width), &(a_result->height), a_result->data,
                &(b_result->width), &(b_result->height), b_result->data,
                &(X->width), &(X->height), X->data, &tolerance);
                
        alphaRet *alpha = (alphaRet *)malloc(sizeof(alphaRet));
        alpha->a_result = a_result;
        alpha->b_result = b_result;
        alpha->X = X;
        alpha->b = b;
        alpha->C = C;
        alpha->d = d;
        alpha->dim = dim;
        alpha->eps = eps;
        alpha->tolerance = tolerance;
        *rtr_val = alpha;
        return;
    }

    if (!initialized) {
        // Initialize XRT device and kernel
        std::string binaryFile = getenv("XCLBIN") ? getenv("XCLBIN") : "build/cluster_hw_u250.xclbin";
        unsigned int device_index = 0;
        
        std::cout << "Open the device " << device_index << std::endl;
        device = xrt::device(device_index);
        
        std::cout << "Load the xclbin " << binaryFile << std::endl;
        auto uuid = device.load_xclbin(binaryFile);
        
        krnl = xrt::kernel(device, uuid, "cluster");
        initialized = true;
    }

    // Create XRT buffers
    auto bo_trn1_width = xrt::bo(device, 4, krnl.group_id(1));
    auto bo_trn1_height = xrt::bo(device, 4, krnl.group_id(3));
    auto bo_trn1_data = xrt::bo(device, trn1->width * trn1->height * sizeof(float), krnl.group_id(5));

    auto bo_trn2_width = xrt::bo(device, 4, krnl.group_id(7));
    auto bo_trn2_height = xrt::bo(device, 4, krnl.group_id(9));
    auto bo_trn2_data = xrt::bo(device, trn2->width * trn2->height * sizeof(float), krnl.group_id(11));

    auto bo_alpha_b = xrt::bo(device, 4, krnl.group_id(14));
    auto bo_alpha_C = xrt::bo(device, 4, krnl.group_id(16));
    auto bo_alpha_d = xrt::bo(device, 4, krnl.group_id(18));
    auto bo_alpha_dim = xrt::bo(device, 4, krnl.group_id(20));
    auto bo_alpha_eps = xrt::bo(device, 4, krnl.group_id(22));

    auto bo_a_result_width = xrt::bo(device, 4, krnl.group_id(24));
    auto bo_a_result_height = xrt::bo(device, 4, krnl.group_id(26));
    auto bo_a_result_data = xrt::bo(device, 4000, krnl.group_id(28));
    
    auto bo_b_result_width = xrt::bo(device, 4, krnl.group_id(30));
    auto bo_b_result_height = xrt::bo(device, 4, krnl.group_id(32));
    auto bo_b_result_data = xrt::bo(device, 40, krnl.group_id(34));

    auto bo_X_width = xrt::bo(device, 4, krnl.group_id(36));
    auto bo_X_height = xrt::bo(device, 4, krnl.group_id(38));
    auto bo_X_data = xrt::bo(device, 102400, krnl.group_id(40));
    
    auto bo_alpha_tolerance = xrt::bo(device, 4, krnl.group_id(42));

    // Map buffers to host pointers
    bo_trn1_width.write(&(trn1->width));
    bo_trn1_height.write(&(trn1->height));
    bo_trn1_data.write(trn1->data);
    
    bo_trn2_width.write(&(trn2->width));
    bo_trn2_height.write(&(trn2->height));
    bo_trn2_data.write(trn2->data);

    bo_a_result_width.write(&(a_result->width));
    bo_a_result_height.write(&(a_result->height));
    
    bo_b_result_width.write(&(b_result->width));
    bo_b_result_height.write(&(b_result->height));

    bo_X_width.write(&(X->width));
    bo_X_height.write(&(X->height));

    // Sync input buffers
    bo_trn1_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_trn1_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_trn1_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_trn2_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_trn2_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_trn2_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_a_result_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_a_result_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_b_result_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_b_result_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_X_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_X_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);

    // Execute Kernel
    auto run = krnl(
        N,
        bo_trn1_width, bo_trn1_height, bo_trn1_data,
        bo_trn2_width, bo_trn2_height, bo_trn2_data,
        iterations,
        bo_alpha_b, bo_alpha_C, bo_alpha_d, bo_alpha_dim, bo_alpha_eps,
        bo_a_result_width, bo_a_result_height, bo_a_result_data,
        bo_b_result_width, bo_b_result_height, bo_b_result_data,
        bo_X_width, bo_X_height, bo_X_data,
        bo_alpha_tolerance
    );
    
    run.wait();

    // Sync output buffers
    bo_a_result_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_b_result_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_X_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_alpha_b.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_alpha_C.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_alpha_d.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_alpha_dim.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_alpha_eps.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_alpha_tolerance.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

    // Copy results back to host pointers
    bo_a_result_data.read(a_result->data);
    bo_b_result_data.read(b_result->data);
    bo_X_data.read(X->data);
    bo_alpha_b.read(&b);
    bo_alpha_C.read(&C);
    bo_alpha_d.read(&d);
    bo_alpha_dim.read(&dim);
    bo_alpha_eps.read(&eps);
    bo_alpha_tolerance.read(&tolerance);

    alphaRet *alpha = (alphaRet *)malloc(sizeof(alphaRet));
    alpha->a_result = a_result;
    alpha->b_result = b_result;
    alpha->X = X;
    alpha->b = b;
    alpha->C = C;
    alpha->d = d;
    alpha->dim = dim;
    alpha->eps = eps;
    alpha->tolerance = tolerance;
    *rtr_val = alpha;
}
