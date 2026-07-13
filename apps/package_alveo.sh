#!/bin/bash
set -e

EXPORT_DIR="export_alveo"
APPS=("vadd" "edgedetect" "disparity" "multi-ncut" "stitch")
VADD_XCLBIN="vadd/build/cluster_hw_u250.xclbin"

# Ensure we are in the apps directory
if [ ! -d "vadd" ] || [ ! -d "edgedetect" ]; then
    echo "Error: Please run this script from the 'apps' directory."
    exit 1
fi

echo "Cleaning and creating export directory: $EXPORT_DIR"
rm -rf "$EXPORT_DIR"
mkdir -p "$EXPORT_DIR"

for app in "${APPS[@]}"; do
    echo "Packaging app: $app"
    APP_DIR="$EXPORT_DIR/$app"
    mkdir -p "$APP_DIR"

    # Copy source code (*.cpp, *.h)
    cp $app/*.cpp "$APP_DIR/" 2>/dev/null || true
    cp $app/*.h "$APP_DIR/" 2>/dev/null || true

    # Copy data folder if it exists
    if [ -d "$app/data" ]; then
        cp -r "$app/data" "$APP_DIR/"
    fi

    # Copy loose input files (e.g., edgedetect's input.bmp)
    for ext in bmp pgm ppm png jpg; do
        cp $app/*.$ext "$APP_DIR/" 2>/dev/null || true
    done

    # Handle the xclbin
    XCLBIN_SRC="$app/build/cluster_hw_u250.xclbin"
    if [ -f "$XCLBIN_SRC" ]; then
        echo "  Found specific xclbin: $XCLBIN_SRC"
        cp "$XCLBIN_SRC" "$APP_DIR/cluster.xclbin"
    else
        echo "  xclbin not found for $app. Using vadd's xclbin as a placeholder."
        if [ -f "$VADD_XCLBIN" ]; then
            cp "$VADD_XCLBIN" "$APP_DIR/cluster.xclbin"
        else
            echo "  Warning: vadd xclbin also not found. cluster.xclbin will be missing."
        fi
    fi

    # Determine APP_ARGS based on the app
    APP_ARGS=""
    if [ "$app" == "disparity" ] || [ "$app" == "stitch" ]; then
        APP_ARGS="data/sqcif"
    elif [ "$app" == "multi-ncut" ]; then
        APP_ARGS="data/qcif"
    fi

    # Create the simple Makefile
    cat <<EOF > "$APP_DIR/Makefile"
APPNAME := $app
CXX := g++
CXXFLAGS := -std=c++17 -Wall -O3
XRT_PATH ?= /opt/xilinx/xrt

# Includes and Libs for XRT
INCLUDES := -I\$(XRT_PATH)/include -I\$(XRT_PATH)/include/xrt
LIBS := -L\$(XRT_PATH)/lib -Wl,-rpath=\$(XRT_PATH)/lib -lxrt_coreutil -lpthread

# Exclude opencl and axi implementations
SRCS := \$(filter-out host_opencl.cpp host_axi.cpp %_opencl.cpp %_axi.cpp, \$(wildcard *.cpp))
OBJS := \$(SRCS:.cpp=.o)
ELF := \$(APPNAME).elf

APP_ARGS := $APP_ARGS

.PHONY: all clean run-sw run-hw-mocked run-hw

all: \$(ELF)

\$(ELF): \$(OBJS)
	\$(CXX) \$(CXXFLAGS) -o \$@ \$^ \$(LIBS)

%.o: %.cpp
	\$(CXX) \$(CXXFLAGS) \$(INCLUDES) -c \$< -o \$@

clean:
	rm -f *.o \$(ELF)

run-sw: \$(ELF)
	./\$(ELF) \$(APP_ARGS)

run-hw-mocked: \$(ELF)
	XCLBIN=cluster.xclbin OFFLOAD_SIM=1 ./\$(ELF) \$(APP_ARGS)

run-hw: \$(ELF)
	XCLBIN=cluster.xclbin OFFLOAD=1 ./\$(ELF) \$(APP_ARGS)
EOF

done

echo "Packaging complete. The '$EXPORT_DIR' directory is ready to be uploaded to the Alveo machine."
