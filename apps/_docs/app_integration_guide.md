# Vitis App Integration Guide

This document outlines the standard architecture and requirements for integrating a new C/C++ application into the Heterogeneous Vitis build system. By following these steps, any app can be seamlessly built and executed across the three supported execution modes: pure Software (`make run-sw`), Mocked Hardware (`make run-hw-mocked`), and full Hardware execution (`make run-hw` / `make link-hw`).

## 1. Application Structure & Separation of Concerns

A clear separation between the host application and the hardware kernel is mandatory. This ensures the host code remains portable and can be validated natively without the Xilinx toolchain.

*   **Host Logic (`<appname>.cpp`)**: Contains the `main()` function, data I/O (e.g., reading BMPs or matrices), and the original pure-software implementation. It **must not** contain any HLS-specific pragmas, types (like `ap_int`), or XRT dependencies.
*   **Hardware Kernel (`cluster.cpp` & `cluster.h`)**: Contains the synthesized kernel code. Functions here are decorated with `#pragma HLS` directives (interfaces, loop tripcounts, pipelining, etc.). The top-level synthesis function must be named `cluster` (rename it to this name if it is different)
*   **Bridge Layer (`cluster_bridge_xrt.cpp`)**: Acts as the interface between the host application and the XRT/Hardware layer. It manages XRT device initialization, buffer allocation (`xrt::bo`), data transfers, and kernel execution (`xrt::run`). 
    *   **Rule 1**: Only generate the modern `xrt` bridge (`cluster_bridge_xrt.cpp`). Ignore generating legacy OpenCL or bare-metal AXI bridges unless explicitly requested.
    *   **Rule 2**: Ensure that the `.xclbin` bitstream is loaded into the device **only once** per application lifecycle (e.g., using a `static bool initialized` flag or singleton pattern inside the bridge function). Redundant bitstream loading causes severe execution bottlenecks.

## 2. Dynamic Execution Routing

The host application must dynamically route execution to either the software implementation or the hardware bridge based on standard environment variables set by the `Makefile`. 

```cpp
// Example routing logic in the host application (<appname>.cpp)
if (getenv("OFFLOAD") != nullptr || getenv("OFFLOAD_SIM") != nullptr) {
    // Call the XRT HW Bridge
    kernel_hw_bridge(input, &output); 
} else {
    // Call the pure Software implementation
    kernel_sw(input, &output);
}
```

## 3. Sub-Makefile Configuration

Every app directory must contain a minimal `Makefile` that integrates with the global build system residing in the parent directory.

```makefile
# Example Makefile inside apps/<appname>/
APPNAME = myapp
TOP = cluster
HOST_SRCS = myapp.cpp
BRIDGE_SRCS = cluster_bridge_xrt.cpp cluster.cpp

# Default dataset argument passed to the executable
APP_ARGS ?= data/dataset_name

# Add any custom compiler flags if necessary
HOST_CXXFLAGS += -Wno-maybe-uninitialized

# Include the root build system
include ../Makefile
```

## 4. Verification Code Integrity (Crucial)

To guarantee scientific fidelity and ensure execution timings are accurate, the verification sequence must adhere strictly to these rules:

*   **No Self-Sabotaging I/O**: The application must **read** a pre-computed ground truth file (e.g., `expected_C.txt`) for verification. It **must never** write or overwrite this file immediately before checking it. Remove or comment out any `writeMatrix()` calls that overwrite the dataset.
*   **No Console Flooding**: Console I/O is synchronous and extremely slow. 
    *   Do not `printf` or `std::cout` the entire output array in the bridge layer or host code.
    *   Verification functions (e.g., `selfCheck`) should only print a summary ("Verification - Successful") or the first few mismatches.
    *   **Polling Loops**: Ensure any AXI or XRT spin-wait loops do not contain `printf` or `fflush` statements, as polling happens millions of times.

## 5. Vitis & Vivado Configuration Files

To successfully compile the `xo` object and link the `xclbin` bitstream, four configuration files must be provided in the app directory:

### A. HLS Configuration (`hls-config-<target>.cfg`)
Required for `v++ -c` (Synthesis). Must exist for both `u250` and `zcu102`.
```ini
[hls]
flow_target=vitis
package.output.format=xo
package.output.syn=false
clock_uncertainty=1ns
clock=300MHz
syn.top=cluster
syn.file=cluster.cpp
syn.file=cluster.h
# Add any other required kernel headers here
```

### B. Link Configuration (`cluster-link-<target>.cfg`)
Required for `v++ -l` (Linking). Must exist for both `u250` and `zcu102`.
```ini
debug=1
save-temps=1
temp_dir=cluster
report_dir=cluster/reports
log_dir=cluster/logs

[advanced]
param=compiler.addRemapRegisterSlice=true
misc=solution_name=cluster

[connectivity]
nk=cluster:1:cluster_1
slr=cluster_1:SLR0
# Map all AXI interfaces (gmem) to the appropriate DDR bank
sp=cluster_1.input_data:DDR[0]
sp=cluster_1.output_data:DDR[0]

[clock]
freqHz=300000000:cluster_1

[vivado]
# Required to resolve timing violations on large kernels
prop=run.impl_1.STEPS.OPT_DESIGN.TCL.PRE=/home/tls/dev/heterogeneous-vitis-apps/apps/override_timing.tcl
prop=run.impl_1.strategy=Performance_Explore
prop=run.impl_1.STEPS.PHYS_OPT_DESIGN.IS_ENABLED=true
prop=run.impl_1.STEPS.PHYS_OPT_DESIGN.ARGS.DIRECTIVE=AggressiveExplore
prop=run.impl_1.STEPS.PLACE_DESIGN.ARGS.DIRECTIVE=Explore
prop=run.impl_1.STEPS.ROUTE_DESIGN.ARGS.DIRECTIVE=Explore
```
