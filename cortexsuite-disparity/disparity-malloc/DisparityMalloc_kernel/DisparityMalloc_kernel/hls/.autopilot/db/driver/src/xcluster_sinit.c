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
#include "xcluster.h"

extern XCluster_Config XCluster_ConfigTable[];

#ifdef SDT
XCluster_Config *XCluster_LookupConfig(UINTPTR BaseAddress) {
	XCluster_Config *ConfigPtr = NULL;

	int Index;

	for (Index = (u32)0x0; XCluster_ConfigTable[Index].Name != NULL; Index++) {
		if (!BaseAddress || XCluster_ConfigTable[Index].Control_BaseAddress == BaseAddress) {
			ConfigPtr = &XCluster_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XCluster_Initialize(XCluster *InstancePtr, UINTPTR BaseAddress) {
	XCluster_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XCluster_LookupConfig(BaseAddress);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XCluster_CfgInitialize(InstancePtr, ConfigPtr);
}
#else
XCluster_Config *XCluster_LookupConfig(u16 DeviceId) {
	XCluster_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XCLUSTER_NUM_INSTANCES; Index++) {
		if (XCluster_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XCluster_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XCluster_Initialize(XCluster *InstancePtr, u16 DeviceId) {
	XCluster_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XCluster_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XCluster_CfgInitialize(InstancePtr, ConfigPtr);
}
#endif

#endif

