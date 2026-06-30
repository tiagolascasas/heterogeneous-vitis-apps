// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.2.2 (64-bit)
// Tool Version Limit: 2024.11
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
// control
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read/COR)
//        bit 4  - ap_continue (Read/Write/SC)
//        bit 7  - auto_restart (Read/Write)
//        bit 9  - interrupt (Read)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0 - enable ap_done interrupt (Read/Write)
//        bit 1 - enable ap_ready interrupt (Read/Write)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0 - ap_done (Read/TOW)
//        bit 1 - ap_ready (Read/TOW)
//        others - reserved
// 0x10 : Data signal of input_width
//        bit 31~0 - input_width[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of input_height
//        bit 31~0 - input_height[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of input_data
//        bit 31~0 - input_data[31:0] (Read/Write)
// 0x24 : Data signal of input_data
//        bit 31~0 - input_data[63:32] (Read/Write)
// 0x28 : reserved
// 0x2c : Data signal of dim
//        bit 31~0 - dim[31:0] (Read/Write)
// 0x30 : reserved
// 0x34 : Data signal of rtr_val_width
//        bit 31~0 - rtr_val_width[31:0] (Read/Write)
// 0x38 : Data signal of rtr_val_width
//        bit 31~0 - rtr_val_width[63:32] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of rtr_val_height
//        bit 31~0 - rtr_val_height[31:0] (Read/Write)
// 0x44 : Data signal of rtr_val_height
//        bit 31~0 - rtr_val_height[63:32] (Read/Write)
// 0x48 : reserved
// 0x4c : Data signal of rtr_val_data
//        bit 31~0 - rtr_val_data[31:0] (Read/Write)
// 0x50 : Data signal of rtr_val_data
//        bit 31~0 - rtr_val_data[63:32] (Read/Write)
// 0x54 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCLUSTER_CONTROL_ADDR_AP_CTRL             0x00
#define XCLUSTER_CONTROL_ADDR_GIE                 0x04
#define XCLUSTER_CONTROL_ADDR_IER                 0x08
#define XCLUSTER_CONTROL_ADDR_ISR                 0x0c
#define XCLUSTER_CONTROL_ADDR_INPUT_WIDTH_DATA    0x10
#define XCLUSTER_CONTROL_BITS_INPUT_WIDTH_DATA    32
#define XCLUSTER_CONTROL_ADDR_INPUT_HEIGHT_DATA   0x18
#define XCLUSTER_CONTROL_BITS_INPUT_HEIGHT_DATA   32
#define XCLUSTER_CONTROL_ADDR_INPUT_DATA_DATA     0x20
#define XCLUSTER_CONTROL_BITS_INPUT_DATA_DATA     64
#define XCLUSTER_CONTROL_ADDR_DIM_DATA            0x2c
#define XCLUSTER_CONTROL_BITS_DIM_DATA            32
#define XCLUSTER_CONTROL_ADDR_RTR_VAL_WIDTH_DATA  0x34
#define XCLUSTER_CONTROL_BITS_RTR_VAL_WIDTH_DATA  64
#define XCLUSTER_CONTROL_ADDR_RTR_VAL_HEIGHT_DATA 0x40
#define XCLUSTER_CONTROL_BITS_RTR_VAL_HEIGHT_DATA 64
#define XCLUSTER_CONTROL_ADDR_RTR_VAL_DATA_DATA   0x4c
#define XCLUSTER_CONTROL_BITS_RTR_VAL_DATA_DATA   64

