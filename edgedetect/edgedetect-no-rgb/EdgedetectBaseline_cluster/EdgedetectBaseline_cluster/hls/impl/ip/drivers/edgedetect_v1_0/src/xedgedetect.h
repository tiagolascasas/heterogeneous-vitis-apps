// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.1 (64-bit)
// Tool Version Limit: 2024.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
#ifndef XEDGEDETECT_H
#define XEDGEDETECT_H

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
#include "xedgedetect_hw.h"

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
} XEdgedetect_Config;
#endif

typedef struct {
    u64 Control_BaseAddress;
    u32 IsReady;
} XEdgedetect;

typedef u32 word_type;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XEdgedetect_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XEdgedetect_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XEdgedetect_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XEdgedetect_ReadReg(BaseAddress, RegOffset) \
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
int XEdgedetect_Initialize(XEdgedetect *InstancePtr, UINTPTR BaseAddress);
XEdgedetect_Config* XEdgedetect_LookupConfig(UINTPTR BaseAddress);
#else
int XEdgedetect_Initialize(XEdgedetect *InstancePtr, u16 DeviceId);
XEdgedetect_Config* XEdgedetect_LookupConfig(u16 DeviceId);
#endif
int XEdgedetect_CfgInitialize(XEdgedetect *InstancePtr, XEdgedetect_Config *ConfigPtr);
#else
int XEdgedetect_Initialize(XEdgedetect *InstancePtr, const char* InstanceName);
int XEdgedetect_Release(XEdgedetect *InstancePtr);
#endif

void XEdgedetect_Start(XEdgedetect *InstancePtr);
u32 XEdgedetect_IsDone(XEdgedetect *InstancePtr);
u32 XEdgedetect_IsIdle(XEdgedetect *InstancePtr);
u32 XEdgedetect_IsReady(XEdgedetect *InstancePtr);
void XEdgedetect_Continue(XEdgedetect *InstancePtr);
void XEdgedetect_EnableAutoRestart(XEdgedetect *InstancePtr);
void XEdgedetect_DisableAutoRestart(XEdgedetect *InstancePtr);

void XEdgedetect_Set_image_rgb(XEdgedetect *InstancePtr, u64 Data);
u64 XEdgedetect_Get_image_rgb(XEdgedetect *InstancePtr);
void XEdgedetect_Set_image_gray(XEdgedetect *InstancePtr, u64 Data);
u64 XEdgedetect_Get_image_gray(XEdgedetect *InstancePtr);
void XEdgedetect_Set_temp_buf(XEdgedetect *InstancePtr, u64 Data);
u64 XEdgedetect_Get_temp_buf(XEdgedetect *InstancePtr);
void XEdgedetect_Set_filter(XEdgedetect *InstancePtr, u64 Data);
u64 XEdgedetect_Get_filter(XEdgedetect *InstancePtr);
void XEdgedetect_Set_output_r(XEdgedetect *InstancePtr, u64 Data);
u64 XEdgedetect_Get_output_r(XEdgedetect *InstancePtr);

void XEdgedetect_InterruptGlobalEnable(XEdgedetect *InstancePtr);
void XEdgedetect_InterruptGlobalDisable(XEdgedetect *InstancePtr);
void XEdgedetect_InterruptEnable(XEdgedetect *InstancePtr, u32 Mask);
void XEdgedetect_InterruptDisable(XEdgedetect *InstancePtr, u32 Mask);
void XEdgedetect_InterruptClear(XEdgedetect *InstancePtr, u32 Mask);
u32 XEdgedetect_InterruptGetEnabled(XEdgedetect *InstancePtr);
u32 XEdgedetect_InterruptGetStatus(XEdgedetect *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
