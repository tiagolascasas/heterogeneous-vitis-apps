APPNAME = svm
TOP = cluster
HOST_SRCS = svm.cpp
BRIDGE_SRCS = cluster_bridge_xrt.cpp cluster.o

# Default dataset argument passed to the executable
APP_ARGS ?= data/cif

# Add any custom compiler flags if necessary
HOST_CXXFLAGS += -Wno-maybe-uninitialized -fpermissive

# Include the root build system
include ../Makefile

cluster.o: cluster.c
	gcc -c -O2 -fPIC -o cluster.o cluster.c
