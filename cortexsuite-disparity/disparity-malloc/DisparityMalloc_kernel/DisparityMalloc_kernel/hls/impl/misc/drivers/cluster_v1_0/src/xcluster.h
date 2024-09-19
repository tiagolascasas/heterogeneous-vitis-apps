// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.1 (64-bit)
// Tool Version Limit: 2024.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
#ifndef XCLUSTER_H
#define XCLUSTER_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xcluster_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
#else
typedef struct {
#ifdef SDT
    char *Name;
#else
    u16 DeviceId;
#endif
    u64 Control_BaseAddress;
} XCluster_Config;
#endif

typedef struct {
    u64 Control_BaseAddress;
    u32 IsReady;
} XCluster;

typedef u32 word_type;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XCluster_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XCluster_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XCluster_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XCluster_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
#ifdef SDT
int XCluster_Initialize(XCluster *InstancePtr, UINTPTR BaseAddress);
XCluster_Config* XCluster_LookupConfig(UINTPTR BaseAddress);
#else
int XCluster_Initialize(XCluster *InstancePtr, u16 DeviceId);
XCluster_Config* XCluster_LookupConfig(u16 DeviceId);
#endif
int XCluster_CfgInitialize(XCluster *InstancePtr, XCluster_Config *ConfigPtr);
#else
int XCluster_Initialize(XCluster *InstancePtr, const char* InstanceName);
int XCluster_Release(XCluster *InstancePtr);
#endif

void XCluster_Start(XCluster *InstancePtr);
u32 XCluster_IsDone(XCluster *InstancePtr);
u32 XCluster_IsIdle(XCluster *InstancePtr);
u32 XCluster_IsReady(XCluster *InstancePtr);
void XCluster_Continue(XCluster *InstancePtr);
void XCluster_EnableAutoRestart(XCluster *InstancePtr);
void XCluster_DisableAutoRestart(XCluster *InstancePtr);

void XCluster_Set_Ileft_w(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_Ileft_w(XCluster *InstancePtr);
void XCluster_Set_Ileft_h(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_Ileft_h(XCluster *InstancePtr);
void XCluster_Set_Ileft_data(XCluster *InstancePtr, u64 Data);
u64 XCluster_Get_Ileft_data(XCluster *InstancePtr);
void XCluster_Set_Iright_w(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_Iright_w(XCluster *InstancePtr);
void XCluster_Set_Iright_h(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_Iright_h(XCluster *InstancePtr);
void XCluster_Set_Iright_data(XCluster *InstancePtr, u64 Data);
u64 XCluster_Get_Iright_data(XCluster *InstancePtr);
void XCluster_Set_Iright_moved_w(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_Iright_moved_w(XCluster *InstancePtr);
void XCluster_Set_Iright_moved_h(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_Iright_moved_h(XCluster *InstancePtr);
void XCluster_Set_Iright_moved_data(XCluster *InstancePtr, u64 Data);
u64 XCluster_Get_Iright_moved_data(XCluster *InstancePtr);
void XCluster_Set_win_sz(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_win_sz(XCluster *InstancePtr);
void XCluster_Set_disparity(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_disparity(XCluster *InstancePtr);
void XCluster_Set_SAD_w(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_SAD_w(XCluster *InstancePtr);
void XCluster_Set_SAD_h(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_SAD_h(XCluster *InstancePtr);
void XCluster_Set_SAD_data(XCluster *InstancePtr, u64 Data);
u64 XCluster_Get_SAD_data(XCluster *InstancePtr);
void XCluster_Set_integralImg_w(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_integralImg_w(XCluster *InstancePtr);
void XCluster_Set_integralImg_h(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_integralImg_h(XCluster *InstancePtr);
void XCluster_Set_integralImg_data(XCluster *InstancePtr, u64 Data);
u64 XCluster_Get_integralImg_data(XCluster *InstancePtr);
void XCluster_Set_retSAD_w(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_retSAD_w(XCluster *InstancePtr);
void XCluster_Set_retSAD_h(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_retSAD_h(XCluster *InstancePtr);
void XCluster_Set_retSAD_data(XCluster *InstancePtr, u64 Data);
u64 XCluster_Get_retSAD_data(XCluster *InstancePtr);
void XCluster_Set_range_w(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_range_w(XCluster *InstancePtr);
void XCluster_Set_range_h(XCluster *InstancePtr, u32 Data);
u32 XCluster_Get_range_h(XCluster *InstancePtr);
void XCluster_Set_range_data(XCluster *InstancePtr, u64 Data);
u64 XCluster_Get_range_data(XCluster *InstancePtr);

void XCluster_InterruptGlobalEnable(XCluster *InstancePtr);
void XCluster_InterruptGlobalDisable(XCluster *InstancePtr);
void XCluster_InterruptEnable(XCluster *InstancePtr, u32 Mask);
void XCluster_InterruptDisable(XCluster *InstancePtr, u32 Mask);
void XCluster_InterruptClear(XCluster *InstancePtr, u32 Mask);
u32 XCluster_InterruptGetEnabled(XCluster *InstancePtr);
u32 XCluster_InterruptGetStatus(XCluster *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
