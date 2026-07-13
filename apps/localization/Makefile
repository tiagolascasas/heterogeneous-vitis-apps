APPNAME = localization
TOP = cluster
HOST_SRCS = localization.cpp
BRIDGE_SRCS = cluster_bridge_xrt.cpp cluster.cpp

# Default dataset argument passed to the executable
APP_ARGS ?= data/vga

# Add any custom compiler flags if necessary
HOST_CXXFLAGS += -Wno-maybe-uninitialized -fpermissive

# Include the root build system
include ../Makefile
