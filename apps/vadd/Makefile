APPNAME = vadd
TOP = cluster
RUNTIME = xrt
HOST_VARIANTS = xrt opencl axi
HOST_SRCS = $(if $(filter opencl,$(RUNTIME)),host_opencl.cpp,$(if $(filter axi,$(RUNTIME)),host_axi.cpp,host_xrt.cpp))
BRIDGE_SRCS =
HOST_SUFFIX = $(if $(filter opencl,$(RUNTIME)),-ocl,$(if $(filter axi,$(RUNTIME)),-axi,))
HOST_INCLUDES = $(if $(filter opencl,$(RUNTIME)),-I$(SYSROOT)/usr/include,$(if $(filter axi,$(RUNTIME)),,-I$(SYSROOT)/usr/include/xrt))
HOST_LIBS = $(if $(filter opencl,$(RUNTIME)),-L$(SYSROOT)/usr/lib -lOpenCL -lpthread,$(if $(filter axi,$(RUNTIME)),-L$(SYSROOT)/usr/lib,$(if $(filter xrt,$(RUNTIME)),-L$(SYSROOT)/usr/lib -lxrt_coreutil -lpthread,-L$(SYSROOT)/usr/lib -lxrt_coreutil -lpthread)))

include ../Makefile

host-opencl: BRIDGE_SRCS =
host-axi: BRIDGE_SRCS =
host-xrt: BRIDGE_SRCS =
