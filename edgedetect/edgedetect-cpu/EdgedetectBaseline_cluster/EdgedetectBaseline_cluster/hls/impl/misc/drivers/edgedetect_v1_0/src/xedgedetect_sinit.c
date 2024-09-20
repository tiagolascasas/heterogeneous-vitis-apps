// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.1 (64-bit)
// Tool Version Limit: 2024.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#ifdef SDT
#include "xparameters.h"
#endif
#include "xedgedetect.h"

extern XEdgedetect_Config XEdgedetect_ConfigTable[];

#ifdef SDT
XEdgedetect_Config *XEdgedetect_LookupConfig(UINTPTR BaseAddress) {
	XEdgedetect_Config *ConfigPtr = NULL;

	int Index;

	for (Index = (u32)0x0; XEdgedetect_ConfigTable[Index].Name != NULL; Index++) {
		if (!BaseAddress || XEdgedetect_ConfigTable[Index].Control_BaseAddress == BaseAddress) {
			ConfigPtr = &XEdgedetect_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XEdgedetect_Initialize(XEdgedetect *InstancePtr, UINTPTR BaseAddress) {
	XEdgedetect_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XEdgedetect_LookupConfig(BaseAddress);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XEdgedetect_CfgInitialize(InstancePtr, ConfigPtr);
}
#else
XEdgedetect_Config *XEdgedetect_LookupConfig(u16 DeviceId) {
	XEdgedetect_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XEDGEDETECT_NUM_INSTANCES; Index++) {
		if (XEdgedetect_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XEdgedetect_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XEdgedetect_Initialize(XEdgedetect *InstancePtr, u16 DeviceId) {
	XEdgedetect_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XEdgedetect_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XEdgedetect_CfgInitialize(InstancePtr, ConfigPtr);
}
#endif

#endif

