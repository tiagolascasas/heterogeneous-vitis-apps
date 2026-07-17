# Texture Synthesis - Kernel and XRT Bridge Changes

This document tracks the manual fixes applied to the automatically generated `texture-synthesis` bridging code and HLS kernel. These fixes were necessary to deploy the Vitis hardware bitstream successfully to the Alveo U250 without segmentation faults or AXI Memory exceptions.

## 1. Array vs. Scalar Handling in XRT Bridge (`cluster_bridge_xrt.cpp`)

**The Problem:**
The bridge generator script treated the HLS parameters `yloopout` and `xloopout` as scalar pointers (allocating `4` bytes) when they were actually dynamic arrays initialized on the host side. This mismatch caused immediate device-side AXI memory faults.

**The Fix:**
- Updated the `cluster_bridge_xrt.cpp` to correctly size the XRT buffers based on their actual bounds:
  - `sz_yloopout = 2 * data_heightout * sizeof(int);`
  - `sz_xloopout = 2 * data_widthout * sizeof(int);`

## 2. Host Pointer Overflow in `xrt::bo::write()` (`cluster_bridge_xrt.cpp`)

**The Problem:**
In the original `texture-synthesis.cpp`, `yloopout` and `xloopout` are deliberately shifted forward by half the image height/width (`yloopout += HEIGHT / 2`). This allows the algorithm to safely process "negative indices". 
When `bo.write(yloopout)` was called directly in the XRT bridge, it read `2 * HEIGHT` elements starting from the *already-shifted* pointer, silently overflowing the original `malloc` host boundary and causing a `Signal 11` (Segmentation Fault) before the kernel even executed.

**The Fix:**
- "Un-shifted" the pointer before allocating the host memory block to XRT:
  - `int *yloopout_base = yloopout - (data_heightout / 2);`
  - `int *xloopout_base = xloopout - (data_widthout / 2);`
- When mapping the arguments to the FPGA via `run.set_arg()`, passed the raw 64-bit physical device address augmented by the offset bytes so the hardware kernel AXI master interprets `[-N]` accesses correctly:
  - `run.set_arg(28, bo_yloopout.address() + (data_heightout / 2) * sizeof(int));`
  - `run.set_arg(29, bo_xloopout.address() + (data_widthout / 2) * sizeof(int));`

## 3. Missing `LIVEOUT` Write-backs in HLS Kernel (`cluster.cpp`)

**The Problem:**
Due to an artifact of the HLS generation pipeline/Clava inliner, the hardware kernel accumulated the optimal pixel patch coordinates into local variables (`local_bestx` and `local_besty`). However, it never wrote these local values back to the global kernel pointers `*bestx` and `*besty` at the end of the `cluster()` function execution.
Consequently, XRT synced completely uninitialized garbage memory back to the host process, causing an immediate segmentation fault when `image->data[... + *bestx]` was subsequently accessed in `texture-synthesis.cpp`.

**The Fix:**
- Manually patched `cluster.cpp` to include the write-back assignments at the very end of the function body:
  ```cpp
      *bestx = local_bestx;
      *besty = local_besty;
  ```
- Patched `texture-synthesis.cpp` to initialize `bestx = 0; besty = 0;` before the kernel invocation to enforce host stability even if a defective bitstream is run.
