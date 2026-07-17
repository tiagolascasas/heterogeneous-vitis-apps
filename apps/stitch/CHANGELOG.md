# Kernel Modifications

## 2026-07-15
* **Source Code Modification (BRAM to URAM Offloading)**: 
  * Removed 14 instances of the original pragma: `#pragma HLS BIND_STORAGE ... type = ram_2p impl = auto`
  * Injected 12 explicit pragmas: `#pragma HLS bind_storage ... type=RAM_2P impl=URAM` targeting the largest array structures (three ~166K element arrays and nine ~55K element arrays).
* **Scientific Rationale**: The original implementation relied on the Vitis HLS heuristic (`impl=auto`), which maps multi-kilobyte buffers to Block RAM (BRAM). This heuristic decision directly caused severe physical over-utilization during place-and-route (demanding 1982 BRAMs in SLR2, which only possesses 1320). By overriding the original source code to explicitly map these buffers to UltraRAM (URAM) pillars, we reduce the BRAM footprint by ~885 RAMB36 blocks, allowing the kernel to successfully synthesize and route within a single SLR boundary.
* **Configuration Update**: Reverted back to the successful `mser` recipe: `All DDR[2]`, `SLR2` pinning, `300MHz` clock, and `Default` effort.
