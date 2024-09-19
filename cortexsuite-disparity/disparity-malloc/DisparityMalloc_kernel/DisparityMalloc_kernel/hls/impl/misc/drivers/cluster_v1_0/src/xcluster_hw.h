// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.1 (64-bit)
// Tool Version Limit: 2024.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
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
// 0x10 : Data signal of Ileft_w
//        bit 31~0 - Ileft_w[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of Ileft_h
//        bit 31~0 - Ileft_h[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of Ileft_data
//        bit 31~0 - Ileft_data[31:0] (Read/Write)
// 0x24 : Data signal of Ileft_data
//        bit 31~0 - Ileft_data[63:32] (Read/Write)
// 0x28 : reserved
// 0x2c : Data signal of Iright_w
//        bit 31~0 - Iright_w[31:0] (Read/Write)
// 0x30 : reserved
// 0x34 : Data signal of Iright_h
//        bit 31~0 - Iright_h[31:0] (Read/Write)
// 0x38 : reserved
// 0x3c : Data signal of Iright_data
//        bit 31~0 - Iright_data[31:0] (Read/Write)
// 0x40 : Data signal of Iright_data
//        bit 31~0 - Iright_data[63:32] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of Iright_moved_w
//        bit 31~0 - Iright_moved_w[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of Iright_moved_h
//        bit 31~0 - Iright_moved_h[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of Iright_moved_data
//        bit 31~0 - Iright_moved_data[31:0] (Read/Write)
// 0x5c : Data signal of Iright_moved_data
//        bit 31~0 - Iright_moved_data[63:32] (Read/Write)
// 0x60 : reserved
// 0x64 : Data signal of win_sz
//        bit 31~0 - win_sz[31:0] (Read/Write)
// 0x68 : reserved
// 0x6c : Data signal of disparity
//        bit 31~0 - disparity[31:0] (Read/Write)
// 0x70 : reserved
// 0x74 : Data signal of SAD_w
//        bit 31~0 - SAD_w[31:0] (Read/Write)
// 0x78 : reserved
// 0x7c : Data signal of SAD_h
//        bit 31~0 - SAD_h[31:0] (Read/Write)
// 0x80 : reserved
// 0x84 : Data signal of SAD_data
//        bit 31~0 - SAD_data[31:0] (Read/Write)
// 0x88 : Data signal of SAD_data
//        bit 31~0 - SAD_data[63:32] (Read/Write)
// 0x8c : reserved
// 0x90 : Data signal of integralImg_w
//        bit 31~0 - integralImg_w[31:0] (Read/Write)
// 0x94 : reserved
// 0x98 : Data signal of integralImg_h
//        bit 31~0 - integralImg_h[31:0] (Read/Write)
// 0x9c : reserved
// 0xa0 : Data signal of integralImg_data
//        bit 31~0 - integralImg_data[31:0] (Read/Write)
// 0xa4 : Data signal of integralImg_data
//        bit 31~0 - integralImg_data[63:32] (Read/Write)
// 0xa8 : reserved
// 0xac : Data signal of retSAD_w
//        bit 31~0 - retSAD_w[31:0] (Read/Write)
// 0xb0 : reserved
// 0xb4 : Data signal of retSAD_h
//        bit 31~0 - retSAD_h[31:0] (Read/Write)
// 0xb8 : reserved
// 0xbc : Data signal of retSAD_data
//        bit 31~0 - retSAD_data[31:0] (Read/Write)
// 0xc0 : Data signal of retSAD_data
//        bit 31~0 - retSAD_data[63:32] (Read/Write)
// 0xc4 : reserved
// 0xc8 : Data signal of range_w
//        bit 31~0 - range_w[31:0] (Read/Write)
// 0xcc : reserved
// 0xd0 : Data signal of range_h
//        bit 31~0 - range_h[31:0] (Read/Write)
// 0xd4 : reserved
// 0xd8 : Data signal of range_data
//        bit 31~0 - range_data[31:0] (Read/Write)
// 0xdc : Data signal of range_data
//        bit 31~0 - range_data[63:32] (Read/Write)
// 0xe0 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCLUSTER_CONTROL_ADDR_AP_CTRL                0x00
#define XCLUSTER_CONTROL_ADDR_GIE                    0x04
#define XCLUSTER_CONTROL_ADDR_IER                    0x08
#define XCLUSTER_CONTROL_ADDR_ISR                    0x0c
#define XCLUSTER_CONTROL_ADDR_ILEFT_W_DATA           0x10
#define XCLUSTER_CONTROL_BITS_ILEFT_W_DATA           32
#define XCLUSTER_CONTROL_ADDR_ILEFT_H_DATA           0x18
#define XCLUSTER_CONTROL_BITS_ILEFT_H_DATA           32
#define XCLUSTER_CONTROL_ADDR_ILEFT_DATA_DATA        0x20
#define XCLUSTER_CONTROL_BITS_ILEFT_DATA_DATA        64
#define XCLUSTER_CONTROL_ADDR_IRIGHT_W_DATA          0x2c
#define XCLUSTER_CONTROL_BITS_IRIGHT_W_DATA          32
#define XCLUSTER_CONTROL_ADDR_IRIGHT_H_DATA          0x34
#define XCLUSTER_CONTROL_BITS_IRIGHT_H_DATA          32
#define XCLUSTER_CONTROL_ADDR_IRIGHT_DATA_DATA       0x3c
#define XCLUSTER_CONTROL_BITS_IRIGHT_DATA_DATA       64
#define XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_W_DATA    0x48
#define XCLUSTER_CONTROL_BITS_IRIGHT_MOVED_W_DATA    32
#define XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_H_DATA    0x50
#define XCLUSTER_CONTROL_BITS_IRIGHT_MOVED_H_DATA    32
#define XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_DATA_DATA 0x58
#define XCLUSTER_CONTROL_BITS_IRIGHT_MOVED_DATA_DATA 64
#define XCLUSTER_CONTROL_ADDR_WIN_SZ_DATA            0x64
#define XCLUSTER_CONTROL_BITS_WIN_SZ_DATA            32
#define XCLUSTER_CONTROL_ADDR_DISPARITY_DATA         0x6c
#define XCLUSTER_CONTROL_BITS_DISPARITY_DATA         32
#define XCLUSTER_CONTROL_ADDR_SAD_W_DATA             0x74
#define XCLUSTER_CONTROL_BITS_SAD_W_DATA             32
#define XCLUSTER_CONTROL_ADDR_SAD_H_DATA             0x7c
#define XCLUSTER_CONTROL_BITS_SAD_H_DATA             32
#define XCLUSTER_CONTROL_ADDR_SAD_DATA_DATA          0x84
#define XCLUSTER_CONTROL_BITS_SAD_DATA_DATA          64
#define XCLUSTER_CONTROL_ADDR_INTEGRALIMG_W_DATA     0x90
#define XCLUSTER_CONTROL_BITS_INTEGRALIMG_W_DATA     32
#define XCLUSTER_CONTROL_ADDR_INTEGRALIMG_H_DATA     0x98
#define XCLUSTER_CONTROL_BITS_INTEGRALIMG_H_DATA     32
#define XCLUSTER_CONTROL_ADDR_INTEGRALIMG_DATA_DATA  0xa0
#define XCLUSTER_CONTROL_BITS_INTEGRALIMG_DATA_DATA  64
#define XCLUSTER_CONTROL_ADDR_RETSAD_W_DATA          0xac
#define XCLUSTER_CONTROL_BITS_RETSAD_W_DATA          32
#define XCLUSTER_CONTROL_ADDR_RETSAD_H_DATA          0xb4
#define XCLUSTER_CONTROL_BITS_RETSAD_H_DATA          32
#define XCLUSTER_CONTROL_ADDR_RETSAD_DATA_DATA       0xbc
#define XCLUSTER_CONTROL_BITS_RETSAD_DATA_DATA       64
#define XCLUSTER_CONTROL_ADDR_RANGE_W_DATA           0xc8
#define XCLUSTER_CONTROL_BITS_RANGE_W_DATA           32
#define XCLUSTER_CONTROL_ADDR_RANGE_H_DATA           0xd0
#define XCLUSTER_CONTROL_BITS_RANGE_H_DATA           32
#define XCLUSTER_CONTROL_ADDR_RANGE_DATA_DATA        0xd8
#define XCLUSTER_CONTROL_BITS_RANGE_DATA_DATA        64

