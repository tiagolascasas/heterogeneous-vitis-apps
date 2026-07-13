HOST_SRCS = texture-synthesis.cpp
BRIDGE_SRCS = cluster_bridge_xrt.cpp cluster.cpp

APP_ARGS ?= data/fullhd

HOST_CXXFLAGS += -Wno-maybe-uninitialized

include ../Makefile

HOST_LIBS += -luuid
