// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.1 (64-bit)
// Tool Version Limit: 2024.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
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

void XCluster_Set_Ileft_w(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ILEFT_W_DATA, Data);
}

u32 XCluster_Get_Ileft_w(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ILEFT_W_DATA);
    return Data;
}

void XCluster_Set_Ileft_h(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ILEFT_H_DATA, Data);
}

u32 XCluster_Get_Ileft_h(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ILEFT_H_DATA);
    return Data;
}

void XCluster_Set_Ileft_data(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ILEFT_DATA_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ILEFT_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_Ileft_data(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ILEFT_DATA_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_ILEFT_DATA_DATA + 4) << 32;
    return Data;
}

void XCluster_Set_Iright_w(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_W_DATA, Data);
}

u32 XCluster_Get_Iright_w(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_W_DATA);
    return Data;
}

void XCluster_Set_Iright_h(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_H_DATA, Data);
}

u32 XCluster_Get_Iright_h(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_H_DATA);
    return Data;
}

void XCluster_Set_Iright_data(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_DATA_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_Iright_data(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_DATA_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_DATA_DATA + 4) << 32;
    return Data;
}

void XCluster_Set_Iright_moved_w(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_W_DATA, Data);
}

u32 XCluster_Get_Iright_moved_w(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_W_DATA);
    return Data;
}

void XCluster_Set_Iright_moved_h(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_H_DATA, Data);
}

u32 XCluster_Get_Iright_moved_h(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_H_DATA);
    return Data;
}

void XCluster_Set_Iright_moved_data(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_DATA_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_Iright_moved_data(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_DATA_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_IRIGHT_MOVED_DATA_DATA + 4) << 32;
    return Data;
}

void XCluster_Set_win_sz(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_WIN_SZ_DATA, Data);
}

u32 XCluster_Get_win_sz(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_WIN_SZ_DATA);
    return Data;
}

void XCluster_Set_disparity(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_DISPARITY_DATA, Data);
}

u32 XCluster_Get_disparity(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_DISPARITY_DATA);
    return Data;
}

void XCluster_Set_SAD_w(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SAD_W_DATA, Data);
}

u32 XCluster_Get_SAD_w(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SAD_W_DATA);
    return Data;
}

void XCluster_Set_SAD_h(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SAD_H_DATA, Data);
}

u32 XCluster_Get_SAD_h(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SAD_H_DATA);
    return Data;
}

void XCluster_Set_SAD_data(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SAD_DATA_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SAD_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_SAD_data(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SAD_DATA_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_SAD_DATA_DATA + 4) << 32;
    return Data;
}

void XCluster_Set_integralImg_w(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_INTEGRALIMG_W_DATA, Data);
}

u32 XCluster_Get_integralImg_w(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_INTEGRALIMG_W_DATA);
    return Data;
}

void XCluster_Set_integralImg_h(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_INTEGRALIMG_H_DATA, Data);
}

u32 XCluster_Get_integralImg_h(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_INTEGRALIMG_H_DATA);
    return Data;
}

void XCluster_Set_integralImg_data(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_INTEGRALIMG_DATA_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_INTEGRALIMG_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_integralImg_data(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_INTEGRALIMG_DATA_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_INTEGRALIMG_DATA_DATA + 4) << 32;
    return Data;
}

void XCluster_Set_retSAD_w(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RETSAD_W_DATA, Data);
}

u32 XCluster_Get_retSAD_w(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RETSAD_W_DATA);
    return Data;
}

void XCluster_Set_retSAD_h(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RETSAD_H_DATA, Data);
}

u32 XCluster_Get_retSAD_h(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RETSAD_H_DATA);
    return Data;
}

void XCluster_Set_retSAD_data(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RETSAD_DATA_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RETSAD_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_retSAD_data(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RETSAD_DATA_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RETSAD_DATA_DATA + 4) << 32;
    return Data;
}

void XCluster_Set_range_w(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RANGE_W_DATA, Data);
}

u32 XCluster_Get_range_w(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RANGE_W_DATA);
    return Data;
}

void XCluster_Set_range_h(XCluster *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RANGE_H_DATA, Data);
}

u32 XCluster_Get_range_h(XCluster *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RANGE_H_DATA);
    return Data;
}

void XCluster_Set_range_data(XCluster *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RANGE_DATA_DATA, (u32)(Data));
    XCluster_WriteReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RANGE_DATA_DATA + 4, (u32)(Data >> 32));
}

u64 XCluster_Get_range_data(XCluster *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RANGE_DATA_DATA);
    Data += (u64)XCluster_ReadReg(InstancePtr->Control_BaseAddress, XCLUSTER_CONTROL_ADDR_RANGE_DATA_DATA + 4) << 32;
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

