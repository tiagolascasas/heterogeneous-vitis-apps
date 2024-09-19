// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.1 (64-bit)
// Tool Version Limit: 2024.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
/***************************** Include Files *********************************/
#include "xedgedetect.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XEdgedetect_CfgInitialize(XEdgedetect *InstancePtr, XEdgedetect_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XEdgedetect_Start(XEdgedetect *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_AP_CTRL) & 0x80;
    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XEdgedetect_IsDone(XEdgedetect *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XEdgedetect_IsIdle(XEdgedetect *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XEdgedetect_IsReady(XEdgedetect *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XEdgedetect_Continue(XEdgedetect *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_AP_CTRL) & 0x80;
    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_AP_CTRL, Data | 0x10);
}

void XEdgedetect_EnableAutoRestart(XEdgedetect *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XEdgedetect_DisableAutoRestart(XEdgedetect *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_AP_CTRL, 0);
}

void XEdgedetect_Set_image_rgb(XEdgedetect *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IMAGE_RGB_DATA, (u32)(Data));
    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IMAGE_RGB_DATA + 4, (u32)(Data >> 32));
}

u64 XEdgedetect_Get_image_rgb(XEdgedetect *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IMAGE_RGB_DATA);
    Data += (u64)XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IMAGE_RGB_DATA + 4) << 32;
    return Data;
}

void XEdgedetect_Set_image_gray(XEdgedetect *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IMAGE_GRAY_DATA, (u32)(Data));
    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IMAGE_GRAY_DATA + 4, (u32)(Data >> 32));
}

u64 XEdgedetect_Get_image_gray(XEdgedetect *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IMAGE_GRAY_DATA);
    Data += (u64)XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IMAGE_GRAY_DATA + 4) << 32;
    return Data;
}

void XEdgedetect_Set_temp_buf(XEdgedetect *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_TEMP_BUF_DATA, (u32)(Data));
    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_TEMP_BUF_DATA + 4, (u32)(Data >> 32));
}

u64 XEdgedetect_Get_temp_buf(XEdgedetect *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_TEMP_BUF_DATA);
    Data += (u64)XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_TEMP_BUF_DATA + 4) << 32;
    return Data;
}

void XEdgedetect_Set_filter(XEdgedetect *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_FILTER_DATA, (u32)(Data));
    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_FILTER_DATA + 4, (u32)(Data >> 32));
}

u64 XEdgedetect_Get_filter(XEdgedetect *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_FILTER_DATA);
    Data += (u64)XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_FILTER_DATA + 4) << 32;
    return Data;
}

void XEdgedetect_Set_output_r(XEdgedetect *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_OUTPUT_R_DATA, (u32)(Data));
    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_OUTPUT_R_DATA + 4, (u32)(Data >> 32));
}

u64 XEdgedetect_Get_output_r(XEdgedetect *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_OUTPUT_R_DATA);
    Data += (u64)XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_OUTPUT_R_DATA + 4) << 32;
    return Data;
}

void XEdgedetect_InterruptGlobalEnable(XEdgedetect *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_GIE, 1);
}

void XEdgedetect_InterruptGlobalDisable(XEdgedetect *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_GIE, 0);
}

void XEdgedetect_InterruptEnable(XEdgedetect *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IER);
    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IER, Register | Mask);
}

void XEdgedetect_InterruptDisable(XEdgedetect *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IER);
    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IER, Register & (~Mask));
}

void XEdgedetect_InterruptClear(XEdgedetect *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdgedetect_WriteReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_ISR, Mask);
}

u32 XEdgedetect_InterruptGetEnabled(XEdgedetect *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_IER);
}

u32 XEdgedetect_InterruptGetStatus(XEdgedetect *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEdgedetect_ReadReg(InstancePtr->Control_BaseAddress, XEDGEDETECT_CONTROL_ADDR_ISR);
}

