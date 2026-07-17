#!/bin/bash
set -e

EXPORT_DIR="export_alveo"
APPS=("disparity" "edgedetect" "localization" "mser" "multi-ncut" "stitch" "svm" "texture-synthesis" "tracking" "vadd")

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

    # Copy source code (*.cpp, *.h, *.c)
    cp $app/*.cpp "$APP_DIR/" 2>/dev/null || true
    cp $app/*.h "$APP_DIR/" 2>/dev/null || true
    cp $app/*.c "$APP_DIR/" 2>/dev/null || true

    # Copy data folder if it exists
    if [ -d "$app/data" ]; then
        cp -r "$app/data" "$APP_DIR/"
    fi

    # Copy loose input files if any exist
    for ext in bmp pgm ppm png jpg txt m; do
        cp $app/*.$ext "$APP_DIR/" 2>/dev/null || true
    done

    # Handle the xclbin - find the most recently modified .xclbin in build/ or backups/
    XCLBIN_SRC=$(find "$app/build" "$app/backups" -type f -name "*.xclbin" 2>/dev/null | xargs -r ls -t | head -n 1)

    HAS_XCLBIN=0
    if [ -n "$XCLBIN_SRC" ] && [ -f "$XCLBIN_SRC" ]; then
        echo "  Found specific xclbin: $XCLBIN_SRC"
        cp "$XCLBIN_SRC" "$APP_DIR/cluster.xclbin"
        HAS_XCLBIN=1
    else
        echo "  xclbin not found for $app."
    fi

    # Extract APP_ARGS from the Makefile
    APP_ARGS=""
    if grep -q "^APP_ARGS" "$app/Makefile" 2>/dev/null; then
        APP_ARGS=$(grep "^APP_ARGS" "$app/Makefile" | head -n 1 | sed 's/^APP_ARGS\s*?=\s*//')
    fi

    # Create the xrt.ini file for profiling
    cat <<EOF > "$APP_DIR/xrt.ini"
[Debug]
opencl_summary=true
opencl_trace=true
native_xrt_trace=true

[Runtime]
runtime_log=console
EOF

    # Create the simple Makefile
    cat <<EOF > "$APP_DIR/Makefile"
APPNAME := $app
CXX := g++
CC := gcc
CXXFLAGS := -std=c++17 -Wall -O3
CFLAGS := -Wall -O3 -fPIC
XRT_PATH ?= /opt/xilinx/xrt
SHELL := /bin/bash

# Includes and Libs for XRT
INCLUDES := -I\$(XRT_PATH)/include -I\$(XRT_PATH)/include/xrt
LIBS := -L\$(XRT_PATH)/lib -Wl,-rpath=\$(XRT_PATH)/lib -lxrt_coreutil -lpthread -luuid

# Exclude opencl and axi implementations
SRCS := \$(filter-out host_opencl.cpp host_axi.cpp %_opencl.cpp %_axi.cpp vadd.cpp, \$(wildcard *.cpp *.c))
OBJS := \$(patsubst %.c,%.o,\$(patsubst %.cpp,%.o,\$(SRCS)))
ELF := \$(APPNAME).elf

APP_ARGS := $APP_ARGS
ITERS ?= 1

.PHONY: all clean run-sw run-hw-mocked run-hw

all: \$(ELF)

\$(ELF): \$(OBJS)
	\$(CXX) \$(CXXFLAGS) -o \$@ \$^ \$(LIBS)

%.o: %.cpp
	\$(CXX) \$(CXXFLAGS) \$(INCLUDES) -c \$< -o \$@

%.o: %.c
	\$(CC) \$(CFLAGS) \$(INCLUDES) -c \$< -o \$@

clean:
	rm -f *.o \$(ELF)

run-sw: \$(ELF)
	@if [ "\$(ITERS)" -gt 1 ]; then \\
		echo "Running run-sw \$(ITERS) times..."; \\
		times=(); \\
		for ((i=1; i<=\$(ITERS); i++)); do \\
			env time -f "%e" -o .time.tmp ./\$(ELF) \$(APP_ARGS); \\
			t=\$\$(cat .time.tmp); \\
			times+=("\$\$t"); \\
		done; \\
		rm -f .time.tmp; \\
		tmp=\$\$(IFS=, ; echo "\$\${times[*]}"); \\
		echo "Elapsed times array (s): [\$\$tmp]"; \\
	else \\
		env time -f "\\n--- Execution Time ---\\nElapsed : %E\\nUser    : %U s\\nSystem  : %S s\\n----------------------" ./\$(ELF) \$(APP_ARGS); \\
	fi

run-hw-mocked: \$(ELF)
	@if [ "\$(ITERS)" -gt 1 ]; then \\
		echo "Running FPGA setup/warm-up run..."; \\
		env XCLBIN=cluster.xclbin OFFLOAD_SIM=1 ./\$(ELF) \$(APP_ARGS); \\
		echo "Running run-hw-mocked \$(ITERS) times..."; \\
		times=(); \\
		for ((i=1; i<=\$(ITERS); i++)); do \\
			env XCLBIN=cluster.xclbin OFFLOAD_SIM=1 time -f "%e" -o .time.tmp ./\$(ELF) \$(APP_ARGS); \\
			t=\$\$(cat .time.tmp); \\
			times+=("\$\$t"); \\
		done; \\
		rm -f .time.tmp; \\
		tmp=\$\$(IFS=, ; echo "\$\${times[*]}"); \\
		echo "Elapsed times array (s): [\$\$tmp]"; \\
	else \\
		env XCLBIN=cluster.xclbin OFFLOAD_SIM=1 time -f "\\n--- Execution Time ---\\nElapsed : %E\\nUser    : %U s\\nSystem  : %S s\\n----------------------" ./\$(ELF) \$(APP_ARGS); \\
	fi
EOF

    if [ "$HAS_XCLBIN" -eq 1 ]; then
        cat <<EOF >> "$APP_DIR/Makefile"
run-hw: \$(ELF)
	@if [ "\$(ITERS)" -gt 1 ]; then \\
		echo "Running FPGA setup/warm-up run..."; \\
		env XCLBIN=cluster.xclbin OFFLOAD=1 ./\$(ELF) \$(APP_ARGS); \\
		echo "Running run-hw \$(ITERS) times..."; \\
		times=(); \\
		kernel_times=(); \\
		for ((i=1; i<=\$(ITERS); i++)); do \\
			env XCLBIN=cluster.xclbin OFFLOAD=1 time -f "%e" -o .time.tmp ./\$(ELF) \$(APP_ARGS); \\
			t=\$\$(cat .time.tmp); \\
			times+=("\$\$t"); \\
			if [ -f native_trace.csv ]; then \\
				wait_id=\$\$(grep "xrt::run::wait" native_trace.csv | cut -d',' -f1 | head -n 1); \\
				if [ -n "\$\$wait_id" ]; then \\
					k_time=\$\$(awk -F',' -v id="\$\$wait_id" '\$\$5=="API_CALL" && \$\$6==id {if (!start) start=\$\$3; else {end=\$\$3; printf "%.6f", (end-start)/1000; exit}}' native_trace.csv); \\
					kernel_times+=("\$\$k_time"); \\
				else \\
					kernel_times+=("0"); \\
				fi; \\
			else \\
				kernel_times+=("0"); \\
			fi; \\
		done; \\
		rm -f .time.tmp; \\
		tmp=\$\$(IFS=, ; echo "\$\${times[*]}"); \\
		k_tmp=\$\$(IFS=, ; echo "\$\${kernel_times[*]}"); \\
		echo "Elapsed times array (s): [\$\$tmp]"; \\
		echo "Kernel times array (s): [\$\$k_tmp]"; \\
	else \\
		env XCLBIN=cluster.xclbin OFFLOAD=1 time -f "\\n--- Execution Time ---\\nElapsed : %E\\nUser    : %U s\\nSystem  : %S s\\n----------------------" ./\$(ELF) \$(APP_ARGS); \\
	fi
EOF
    else
        cat <<EOF >> "$APP_DIR/Makefile"
run-hw: \$(ELF)
	@echo "Error: cluster.xclbin not found for $app. Cannot run hardware modes."
	@exit 1
EOF
    fi

done

echo "Packaging complete. The '$EXPORT_DIR' directory is ready to be uploaded to the Alveo machine."
