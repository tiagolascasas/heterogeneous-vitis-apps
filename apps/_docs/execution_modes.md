# Vitis Application Execution Modes

The applications in this repository feature a "triple mode" architecture for testing, debugging, and executing the kernels. These modes are controlled via environment variables, allowing developers to switch between pure software execution, software execution with hardware-like memory allocation, and true FPGA hardware execution.

## 1. Genuine Software Execution (Default)
**How to use:** Do not set `OFFLOAD` or `OFFLOAD_SIM`.
```bash
./build/app-xrt_u250.elf
```
* **Behavior:** The application allocates memory natively on the host using standard `new`, `malloc`, or `std::vector` (e.g., standard heap allocations). It completely bypasses the XRT/OpenCL/AXI environment initialization and runs the core mathematical algorithm directly on the CPU.
* **Use Case:** Fastest functional verification, logic debugging using standard CPU tools (like GDB or Valgrind), and providing a performance baseline for algorithm execution time.

## 2. Hardware-Simulated Software Execution (`OFFLOAD_SIM`)
**How to use:** Set the `OFFLOAD_SIM` environment variable.
```bash
OFFLOAD_SIM=1 ./build/app-xrt_u250.elf
```
* **Behavior:** The application fully initializes the hardware communication layer (XRT, OpenCL, or DMA-backed AXI). It loads the `xclbin` onto the device, allocates genuine contiguous device/host buffers (like `xrt::bo` or `cl::Buffer`), and memory-maps them to the CPU. The mathematical kernel is then executed natively on the CPU using these mapped buffers. It mimics the pointer coherence, alignment constraints, and setup overhead of hardware offload, but does not execute the actual kernel on the FPGA.
* **Use Case:** Validating memory bridge coherence, testing DMA buffer mapping logic, profiling environment setup overhead, and verifying that the host application correctly handles alignment and pointer boundaries.

## 3. Genuine Hardware Offload (`OFFLOAD`)
**How to use:** Set the `OFFLOAD` environment variable.
```bash
OFFLOAD=1 ./build/app-xrt_u250.elf
```
* **Behavior:** The application performs the same initialization as `OFFLOAD_SIM`, but transfers the memory buffers to the FPGA and pulses the hardware kernel (`krnl.wait()`, `queue.enqueueTask`, or pulsing the `ap_start` AXI-Lite register). All computation occurs in parallel on the Alveo/Zynq fabric.
* **Use Case:** Final execution, hardware benchmarking, and real-world deployment.
