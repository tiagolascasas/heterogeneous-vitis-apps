// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.2.2 (64-bit)
// Tool Version Limit: 2024.11
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
/***************************** Include Files *********************************/
#include "xcluster.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XCluster_CfgInitialize(XCluster *InstancePtr, XCluster_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XCluster_Start(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_AP_CTRL) & 0x80;
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XCluster_IsDone(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XCluster_IsIdle(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XCluster_IsReady(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XCluster_Continue(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_AP_CTRL) & 0x80;
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_AP_CTRL, Data | 0x10);
}

void XCluster_EnableAutoRestart(XCluster *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XCluster_DisableAutoRestart(XCluster *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_AP_CTRL, 0);
}

void XCluster_Set_in1(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IN1_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IN1_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_in1(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IN1_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IN1_DATA + 4) << 32;
    return Data;
}

void XCluster_Set_in2(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IN2_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IN2_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_in2(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IN2_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IN2_DATA + 4) << 32;
    return Data;
}

void XCluster_Set_out_r(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_OUT_R_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_OUT_R_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_out_r(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_OUT_R_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_OUT_R_DATA + 4) << 32;
    return Data;
}

void XCluster_Set_size(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SIZE_DATA, Data);
}

u32 XCluster_Get_size(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SIZE_DATA);
    return Data;
}

void XCluster_InterruptGlobalEnable(XCluster *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_GIE, 1);
}

void XCluster_InterruptGlobalDisable(XCluster *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_GIE, 0);
}

void XCluster_InterruptEnable(XCluster *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IER);
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IER, Register | Mask);
}

void XCluster_InterruptDisable(XCluster *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IER);
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IER, Register & (~Mask));
}

void XCluster_InterruptClear(XCluster *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ISR, Mask);
}

u32 XCluster_InterruptGetEnabled(XCluster *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IER);
}

u32 XCluster_InterruptGetStatus(XCluster *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ISR);
}

