# Kernel Modifications

## 2026-07-15
* **Source Code Modification (BRAM to URAM Offloading)**: 
  * Modified 124 instances of the original explicit pragma: `#pragma HLS bind_storage ... impl=BRAM`
  * Replaced them with: `#pragma HLS bind_storage ... impl=URAM` for all major line buffers and memory regions.
* **Source Code Modification (Precision Downgrade)**:
  * Replaced all instances of `double` data types with `float` globally throughout the kernel (`tracking.cpp`, `cluster.cpp`).
  * Replaced all 34 calls to `floor()` (C standard: `double floor(double)`) with `floorf()` (C standard: `float floorf(float)`) to prevent implicit double-precision promotion at call sites.
  * Suffixed all bare floating-point literals (e.g., `0.00001` → `0.00001f`) to prevent implicit promotion via C's default `double` literal type.
* **Scientific Rationale**: 
  * *Memory*: The original implementation explicitly forced mapping of all data structures to Block RAM (BRAM). While BRAM offers optimal routing and 1-cycle latency, this rigid mapping caused physical over-utilization during place-and-route (exceeding SLR2 BRAM capacity by 102.3%) and routing congestion. Converting these buffers to UltraRAM (URAM) utilizes physically distinct memory pillars, comfortably shaving off the necessary BRAM overhead to allow successful routing within the SLR.
  * *Compute*: The original implementation relied on double-precision (`double`) arithmetic. On the Alveo U250, when DSP blocks are exhausted, Vitis HLS implements double-precision division (`ddiv_64ns_64ns_64_14_no_dsp_1`) using immense arrays of Lookup Tables (LUTs). This resulted in catastrophic routing failure with 530,251 node overlaps. Eliminating all double-precision pathways — including implicit promotions via `floor()` (which returns `double` per the C standard) and unsuffixed `double` literals — was necessary to fully remove the `ddiv` module from the synthesized netlist. HLS synthesis was verified to confirm `ddiv` elimination before committing to the link run.
* **Configuration Update**: Reverted back to the successful `mser` recipe: `All DDR[2]`, `SLR2` pinning, `150MHz` clock, and `Performance_Explore` effort.

## 2026-07-17
* **Routing Congestion Fix (AXI Bundling)**:
  * *Problem*: The kernel logic (`cluster.cpp`) previously mapped all 37 of its `m_axi` memory pointers into a single bundle (`bundle = gmem0`). Vivado attempted to multiplex 37 separate high-speed memory streams onto a single AXI master interface connected to `DDR[2]`, resulting in immense routing congestion and a Rip-up And Reroute loop exceeding 5 hours.
  * *Fix*: Edited `cluster.cpp` to explicitly distribute the 37 memory interfaces across 9 separate physical bundles (`gmem0` through `gmem8`). Updated the `cluster-link-u250.cfg` to explicitly map all 9 of these new AXI ports to the `DDR[2]` memory bank, relieving the single-port multiplexer congestion and significantly accelerating routing times.
