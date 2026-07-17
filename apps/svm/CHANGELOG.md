# SVM Vitis Kernel Modifications

## Bug Description
During hardware-mocked execution, the `cluster.c` kernel for the `svm` application was failing its algorithmic validation entirely (94 out of 100 data points returned a mismatch, all incorrectly computing identically to `1.000000`). Tracing the execution revealed that the internal structures computed by the kernel (specifically the `X` feature matrix and the `b_result` scalar values) were consistently falling back to `-1.0`, leading to mathematical collapse later down the host-side verification pipeline. 

## Root Cause
The root cause of this memory corruption was traced back to the HLS Dead Code Elimination (DCE) static sizing issues produced by the `CLAVA` HLS generator. When generating the inline data structures for `usps_read_partial` loop iterations, the generator drastically undersized several internal `memregion` BRAM arrays used for `ffVertcat` operations. 

During the `usps_read_partial` kernel routine, `X` and `Y` matrices are constructed dynamically by concatenating chunks of memory up to a total volume of `10 * 10 * 256 = 25600` single-precision floats for `X`, and `10 * 10 = 100` floats for `Y`. However, `CLAVA` hardcoded undersized allocations:
* `memregion_1516` (used to construct the final `X` matrix) was allocated to hold `5120` elements, which is exactly $1/5$th of the required `25600` float capacity.
* `memregion_1510` (used for intermediate `X` dataset copying operations) was allocated to hold only `2560` elements. 
* Similar undersizing occurred for `memregion_1534` (allocated at `20` elements instead of `100`) and `memregion_1531` (allocated at `10` elements instead of `100`) for the `Y` labels array. 

When the execution advanced past the first few iterations, the `ffVertcat` functions overflowed these local arrays. This caused massive intra-kernel memory corruption, overwriting neighboring arrays and causing the kernel state to completely crash/fallback. 

## Modifications
Modified the static `float memregion_*` declarations at the top of `cluster.c` to provide the appropriate maximum capacities needed during iterative batch constructions:

1. **`memregion_1516_size20480`**: Increased array dimension from `[5120]` to `[25600]`.
2. **`memregion_1510_size10240`**: Increased array dimension from `[2560]` to `[25600]`.
3. **`memregion_1534_size80`**: Increased array dimension from `[20]` to `[100]`.
4. **`memregion_1531_size40`**: Increased array dimension from `[10]` to `[100]`.

## Verification
Re-compiling and executing the mocked validation (`make run-hw-mocked TARGET=u250`) now yields identical data matrix layouts without overflow, allowing the algorithm to mathematically converge properly. 
```
Verification - Successful
```

## 2026-07-16

### Hardware Infinite Loop Prevention (SMO)
During real hardware execution on the Alveo U250, the `cluster.c` kernel suffered from an infinite loop. This was tracked down to the SMO algorithm oscillating around its convergence threshold without `NumChanged` ever reliably reaching `0` due to floating-point precision deviations between x86 CPUs and Alveo DSP slices. 

To inject an algorithm-safe termination boundary, a maximum loop trip count was appended to the condition:
```c
while ((NumChanged > 0 || ExamineAll == 1) && cnt < 1000)
```
Software execution profiles (`make run-hw-mocked`) showed that the SMO sequence converged at `cnt = 0` for our `100x100x10` dataset. Therefore, the `cnt < 1000` boundary leaves massive headroom for legitimate workload iteration while acting as a reliable kill-switch for DSP-induced precision oscillation.

* **HLS Pragma Correction**: Updated the associated `#pragma HLS loop_tripcount max = 1000 min = 5` to correctly reflect the updated loop boundaries to the Vitis compiler, allowing it to produce accurate hardware scheduling estimates.
