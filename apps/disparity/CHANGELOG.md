# Kernel Modifications

## 2026-07-15
* **Source Code Modification (BRAM to URAM Offloading)**: 
  * Removed the original pragma: `#pragma HLS BIND_STORAGE variable = integralImg_data type = ram_2p impl = auto`
  * Injected the explicit pragma: `#pragma HLS bind_storage variable=integralImg_data type=RAM_2P impl=URAM`
* **Scientific Rationale**: The original implementation relied on the Vitis HLS heuristic (`impl=auto`), which maps massive buffers (e.g., `integralImg_data`, an array of 1,012,728 floats / ~4MB) to Block RAM (BRAM). This automatic heuristic decision directly caused severe physical over-utilization during place-and-route (demanding 2177 BRAMs in SLR2, which only possesses 1320). By overriding the original source code to explicitly map these buffers to UltraRAM (URAM) pillars, we reduce the BRAM footprint by ~888 RAMB36 blocks, allowing the kernel to successfully synthesize and route within a single SLR boundary.
* **Configuration Update**: Reverted back to the successful `mser` recipe: `All DDR[2]`, `SLR2` pinning, `300MHz` clock, and `Default` effort.
