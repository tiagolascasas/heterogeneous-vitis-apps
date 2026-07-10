APPNAME = vadd
TOP = cluster
RUNTIME = xrt
HOST_VARIANTS = xrt opencl axi
HOST_SRCS = $(if $(filter opencl,$(RUNTIME)),host_opencl.cpp,$(if $(filter axi,$(RUNTIME)),host_axi.cpp,host_xrt.cpp))
BRIDGE_SRCS =
HOST_SUFFIX = $(if $(filter opencl,$(RUNTIME)),-ocl,$(if $(filter axi,$(RUNTIME)),-axi,))

include ../Makefile

host-opencl: BRIDGE_SRCS =
host-axi: BRIDGE_SRCS =
host-xrt: BRIDGE_SRCS =
