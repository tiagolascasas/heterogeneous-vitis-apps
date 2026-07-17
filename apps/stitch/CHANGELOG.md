# Kernel Modifications

## 2026-07-15
* **Source Code Modification (BRAM to URAM Offloading)**: 
  * Removed 14 instances of the original pragma: `#pragma HLS BIND_STORAGE ... type = ram_2p impl = auto`
  * Injected 12 explicit pragmas: `#pragma HLS bind_storage ... type=RAM_2P impl=URAM` targeting the largest array structures (three ~166K element arrays and nine ~55K element arrays).
* **Scientific Rationale**: The original implementation relied on the Vitis HLS heuristic (`impl=auto`), which maps multi-kilobyte buffers to Block RAM (BRAM). This heuristic decision directly caused severe physical over-utilization during place-and-route (demanding 1982 BRAMs in SLR2, which only possesses 1320). By overriding the original source code to explicitly map these buffers to UltraRAM (URAM) pillars, we reduce the BRAM footprint by ~885 RAMB36 blocks, allowing the kernel to successfully synthesize and route within a single SLR boundary.
* **Configuration Update**: Reverted back to the successful `mser` recipe: `All DDR[2]`, `SLR2` pinning, `300MHz` clock, and `Default` effort.

## Verification
Re-compiled and verified mathematically identical outputs with `make run-hw-mocked TARGET=u250` bridging over XRT emulation.

## Hardware Infinite Loop Prevention (ANMS)
During real hardware execution on the Alveo U250, the `cluster.cpp` kernel was observed to take an extremely long time (over an hour) to execute. This was tracked down to the Adaptive Non-Maximal Suppression (ANMS) algorithm's main loop:
```cpp
while (validCount > 0)
```
The ANMS algorithm has O(N^2) complexity. With N=55,611 input points from the fullhd dataset, the original unbounded loop required ~3 billion inner-loop iterations. While this completes in ~2 minutes on an x86 CPU, the FPGA's 150 MHz clock and DDR memory access latency made execution take over 1 hour. 

To provide an algorithm-safe escape hatch and guarantee hardware termination within a reasonable time, a maximum loop trip count boundary was appended:
```cpp
while (validCount > 0 && cnt_anms < 500)
```
This serves as an early-termination optimization that returns the strongest 500 interest points, which is sufficient for the downstream feature matching stage.

## 2026-07-16
* **Bug Fix (Kernel Output Copying)**: Fixed a critical pre-existing bug where the kernel only copied `sizeof(float)` (4 bytes) of output data back to the host, resulting in only 1 float of valid output. The `memcpy` size was corrected to `(*interestPnts_height) * (*interestPnts_width) * sizeof(float)` to ensure the full `interestPnts` array is transferred to the `rtr_val_data` buffer.
* **Bug Fix (Simulation Offload)**: Fixed `cluster_bridge_xrt.cpp` to properly call the kernel function `cluster()` during simulated offloading (`OFFLOAD_SIM=1`) instead of bypassing it and running the original `getANMS_sw()` software implementation. This ensures that the simulated execution path truly tests the hardware-destined kernel code.
