# Kernel Communication Metrics

This document details the exact memory payloads and invocation frequencies for all Vitis-accelerated applications in this repository.

## disparity
- **Number of XRT Buffers:** 8
- **Buffer Size Expressions:**
  - `ILEFT_BYTES`
  - `IRIGHT_BYTES`
  - `SCRATCH_BYTES`
  - `SCRATCH_BYTES`
  - `SCRATCH_BYTES`
  - `sizeof(int)`
  - `sizeof(int)`
  - `RETSAD_BYTES`
- **Kernel Invocations:** Exactly `max_shift` times (typically 64 times) per run. The hardware bridge is called inside a loop over the disparity shift range.

## localization
- **Number of XRT Buffers:** 19
- **Buffer Size Expressions:**
  - `4`
  - `4`
  - `24000`
  - `4`
  - `4`
  - ... (and 14 more)
- **Kernel Invocations:** Called once per input line/frame. The hardware bridge is called inside a `while(1)` loop that reads the input sensor data until EOF.

## mser
- **Number of XRT Buffers:** 24
- **Buffer Size Expressions:**
  - `4`
  - `4`
  - `I->width * I->height * sizeof(int)`
  - `4`
  - `4`
  - ... (and 19 more)
- **Kernel Invocations:** Exactly 1 time per run. The hardware bridge is called once directly from `main()`.

## multi-ncut
- **Number of XRT Buffers:** 4
- **Buffer Size Expressions:**
  - `BUFFER_SIZE * sizeof(float)`
  - `sizeof(int)`
  - `sizeof(int)`
  - `BUFFER_SIZE * sizeof(int)`
- **Kernel Invocations:** Exactly 1 time per run. The hardware bridge is invoked once during `segment_graph()` to sort the edges.

## stitch
- **Number of XRT Buffers:** 51
- **Buffer Size Expressions:**
  - `4`
  - `4`
  - `input_bytes`
  - `4`
  - `4`
  - ... (and 46 more)
- **Kernel Invocations:** Exactly 1 time per run. The hardware bridge is called once to compute ANMS interest points.

## svm
- **Number of XRT Buffers:** 21
- **Buffer Size Expressions:**
  - `4`
  - `4`
  - `trn1->width * trn1->height * sizeof(float)`
  - `4`
  - `4`
  - ... (and 16 more)
- **Kernel Invocations:** Exactly 1 time per run. The hardware bridge is called once to perform the SVM training loop directly on hardware.

## texture-synthesis
- **Number of XRT Buffers:** 30
- **Buffer Size Expressions:**
  - `8`
  - `4`
  - `4`
  - `8`
  - `4`
  - ... (and 25 more)
- **Kernel Invocations:** Called `O(heightout * widthout)` times. The hardware bridge is invoked for EVERY PIXEL block candidate (e.g. ~953 * 960 times) inside a deeply nested loop in `create_texture()`.

## tracking
- **Number of XRT Buffers:** 37
- **Buffer Size Expressions:**
  - `4`
  - `4`
  - `33177600`
  - `4`
  - `4`
  - ... (and 32 more)
- **Kernel Invocations:** Exactly 4 times per run. The hardware bridge is called inside a loop over `counter = 4` successive frames in `main()`.

