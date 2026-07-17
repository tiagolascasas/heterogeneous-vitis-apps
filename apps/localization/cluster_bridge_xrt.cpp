#include "cluster.h"
#include <iostream>
#include <stdexcept>
#include <string>

// XRT includes
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

static bool initialized = false;
static xrt::device* device = nullptr;
static xrt::kernel* krnl = nullptr;

void kernel_hw_bridge(F2D **accl, F2D *sData, F2D **gtemp, F2D *ones, F2D **gravity, F2D **quat,
                                float *STDDEV_ACCL, F2D **w, F2D **vel, F2D **pos, float *acclTimeInterval, int *n,
                                float *M_STDDEV_POS, float *M_STDDEV_VEL)
{
    if (getenv("OFFLOAD_SIM") != NULL) {
        // Allocate accl if it is null
        if (*accl == nullptr) {
            *accl = (F2D *)malloc(24008);
            (*accl)->width = 3;
            (*accl)->height = 2000;
        }
        
        float *memregion_56_size9999992 = (float *)malloc(9999992);
        
        cluster(&((*accl)->width), &((*accl)->height), (*accl)->data, 
                &(sData->width), &(sData->height), sData->data, 
                &(ones->width), &(ones->height), ones->data, 
                &((*quat)->width), &((*quat)->height), (*quat)->data, 
                STDDEV_ACCL, 
                &((*vel)->width), &((*vel)->height), (*vel)->data, 
                &((*pos)->width), &((*pos)->height), (*pos)->data, 
                acclTimeInterval, n, M_STDDEV_POS, M_STDDEV_VEL, 
                memregion_56_size9999992);
                
        free(memregion_56_size9999992);
        return;
    }

    if (!initialized) {
        // Initialize XRT device and kernel
        std::string binaryFile = getenv("XCLBIN") ? getenv("XCLBIN") : "cluster.xclbin";
        unsigned int device_index = 0;
        
        device = new xrt::device(device_index);
        
        auto uuid = device->load_xclbin(binaryFile);
        
        krnl = new xrt::kernel(*device, uuid, "cluster");
        initialized = true;
    }

    // Allocate accl if it is null
    if (*accl == nullptr) {
        *accl = (F2D *)malloc(24008);
        (*accl)->width = 3;
        (*accl)->height = 2000;
    }

    // Create XRT buffers
    auto bo_accl_width = xrt::bo(*device, 4, krnl->group_id(0));
    auto bo_accl_height = xrt::bo(*device, 4, krnl->group_id(1));
    auto bo_accl_data = xrt::bo(*device, 24000, krnl->group_id(2));

    auto bo_sData_width = xrt::bo(*device, 4, krnl->group_id(3));
    auto bo_sData_height = xrt::bo(*device, 4, krnl->group_id(4));
    auto bo_sData_data = xrt::bo(*device, 32, krnl->group_id(5)); // Assuming 8 floats

    auto bo_ones_width = xrt::bo(*device, 4, krnl->group_id(6));
    auto bo_ones_height = xrt::bo(*device, 4, krnl->group_id(7));
    auto bo_ones_data = xrt::bo(*device, 8000, krnl->group_id(8)); // Assuming ones->width * ones->height * 4

    auto bo_quat_width = xrt::bo(*device, 4, krnl->group_id(9));
    auto bo_quat_height = xrt::bo(*device, 4, krnl->group_id(10));
    auto bo_quat_data = xrt::bo(*device, 32000, krnl->group_id(11)); 

    auto bo_vel_width = xrt::bo(*device, 4, krnl->group_id(13));
    auto bo_vel_height = xrt::bo(*device, 4, krnl->group_id(14));
    auto bo_vel_data = xrt::bo(*device, 24000, krnl->group_id(15));

    auto bo_pos_width = xrt::bo(*device, 4, krnl->group_id(16));
    auto bo_pos_height = xrt::bo(*device, 4, krnl->group_id(17));
    auto bo_pos_data = xrt::bo(*device, 24000, krnl->group_id(18));
    
    auto bo_memregion = xrt::bo(*device, 9999992, krnl->group_id(23));

    // Map buffers to host pointers
    bo_accl_width.write(&((*accl)->width));
    bo_accl_height.write(&((*accl)->height));
    
    bo_sData_width.write(&(sData->width));
    bo_sData_height.write(&(sData->height));
    bo_sData_data.write(sData->data);
    
    bo_ones_width.write(&(ones->width));
    bo_ones_height.write(&(ones->height));
    bo_ones_data.write(ones->data);

    bo_quat_width.write(&((*quat)->width));
    bo_quat_height.write(&((*quat)->height));
    bo_quat_data.write((*quat)->data);
    
    bo_vel_width.write(&((*vel)->width));
    bo_vel_height.write(&((*vel)->height));
    bo_vel_data.write((*vel)->data);
    
    bo_pos_width.write(&((*pos)->width));
    bo_pos_height.write(&((*pos)->height));
    bo_pos_data.write((*pos)->data);

    // Sync input buffers
    bo_accl_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_accl_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_sData_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_sData_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_sData_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_ones_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_ones_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_ones_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_quat_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_quat_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_quat_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_vel_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_vel_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_vel_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_pos_width.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_pos_height.sync(XCL_BO_SYNC_BO_TO_DEVICE);
    bo_pos_data.sync(XCL_BO_SYNC_BO_TO_DEVICE);

    // Execute Kernel
    auto run = (*krnl)(
        bo_accl_width, bo_accl_height, bo_accl_data,
        bo_sData_width, bo_sData_height, bo_sData_data,
        bo_ones_width, bo_ones_height, bo_ones_data,
        bo_quat_width, bo_quat_height, bo_quat_data,
        *STDDEV_ACCL,
        bo_vel_width, bo_vel_height, bo_vel_data,
        bo_pos_width, bo_pos_height, bo_pos_data,
        *acclTimeInterval, *n, *M_STDDEV_POS, *M_STDDEV_VEL,
        bo_memregion
    );
    
    run.wait();

    // Sync output buffers
    bo_accl_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_quat_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_vel_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
    bo_pos_data.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

    // Copy results back to host pointers
    bo_accl_data.read((*accl)->data);
    bo_quat_data.read((*quat)->data);
    bo_vel_data.read((*vel)->data);
    bo_pos_data.read((*pos)->data);
}
