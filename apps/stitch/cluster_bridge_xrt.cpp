#include "cluster.h"
#include <chrono>
#include <cstring>
#include <iostream>
#include <string>

void getANMS_sw(F2D *points, int r, F2D **rtr_val);

void getANMS_hw_bridge(F2D *points, int r, F2D **rtr_val)
{
    bool use_offload_sim = (getenv("OFFLOAD_SIM") != nullptr);

    if (use_offload_sim) {
        // Allocate isolated "device-side" buffer for input struct + flexible array
        size_t input_bytes = points->width * points->height * sizeof(float);
        F2D *dev_points = (F2D *)malloc(sizeof(F2D) + input_bytes);

        // Simulate host -> device DMA
        dev_points->width = points->width;
        dev_points->height = points->height;
        std::memcpy(dev_points->data, points->data, input_bytes);

        printf("[OFFLOAD_SIM] Running stitch SW kernel on isolated buffers...\n");

        // Run kernel on isolated buffers
        // (stitch kernel is too complex for full port mapping; using SW fallback)
        F2D *dev_rtr_val = nullptr;
        getANMS_sw(dev_points, r, &dev_rtr_val);

        // Simulate device -> host DMA: allocate output and copy back
        if (dev_rtr_val != nullptr) {
            size_t out_bytes = dev_rtr_val->width * dev_rtr_val->height * sizeof(float);
            *rtr_val = (F2D *)malloc(sizeof(F2D) + out_bytes);
            (*rtr_val)->width = dev_rtr_val->width;
            (*rtr_val)->height = dev_rtr_val->height;
            std::memcpy((*rtr_val)->data, dev_rtr_val->data, out_bytes);
            free(dev_rtr_val);
        }

        free(dev_points);
    } else {
        fprintf(stderr, "Error: True HW offload for stitch requires full XRT buffer setup (50+ ports).\n");
        exit(1);
    }
}