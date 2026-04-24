# Variables
CC := /tools/Xilinx/Vitis/2024.2/gnu/aarch64/lin/aarch64-linux/bin/aarch64-linux-gnu-g++
SYSROOT := /home/tls/xilinx/sysroots/xilinx-zynqmp-common-v2024.2/sysroots/cortexa72-cortexa53-xilinx-linux
APPNAME ?= app

# Compilation Flags
CXXFLAGS += -std=c++17 -Wall -O3
CXXFLAGS += --sysroot=$(SYSROOT)

# Include and Library paths (Relative to Sysroot)
INCLUDES += -I$(SYSROOT)/usr/include/xrt
LIBS += -L$(SYSROOT)/usr/lib -lxrt_coreutil -lpthread

# Build Target
host: *.cpp
	$(CC) $(CXXFLAGS) *.cpp $(INCLUDES) $(LIBS) -o $APPNAME

bitstream: 
	v++ --compile --mode hls --config hls_config.cfg --work_dir .
	vitis-run --mode hls --impl --config hls_config.cfg --work_dir .
	v++ -l -t hw --platform xilinx_zcu102_base_202420_1 cluster.xo -o cluster.xclbin
