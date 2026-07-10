# Disparity Kernel Modifications

## Bug: Broken BRAM caching optimization for `integralImg_data`

The disparity kernel includes a memory optimization that attempts to cache half of the `integralImg` values in BRAM to save DDR bandwidth. However, this implementation contains three critical bugs that lead to memory corruption and incorrect disparity values:

1. **Incorrect Indexing:** The BRAM array `integralImg_data` is initialized by packing elements (i.e., `integralImg_data[n/2] = arr[n]`). However, the subsequent kernel logic accesses it using the raw 2D-unrolled index `s1` (i.e., `integralImg_data[s1]`) instead of the packed index `s1 / 2`. 
2. **Out-of-Bounds Access:** Because it uses the unpacked index `s1` (which can reach `1080 * 1920 = 2,073,600`), and the BRAM array is only sized to `1,012,728`, any even index `s1 > 1,012,728` will result in an out-of-bounds BRAM read/write if the bounds check is not correctly dividing by 2.
3. **Implicit Type Conversion:** The `integralImg_data` array is declared as an array of `int`, but the source data (`integralImg_data_arr`) and the computed SAD values are `float`. This causes a silent precision loss/truncation.

## Fix
To resolve these issues, the kernel has been modified to:
- Change the `integralImg_data` BRAM array type from `int` to `float`.
- Correct all array access indices to use `s / 2` when reading from or writing to the BRAM cache.
- Update the bounds checks to evaluate `(s / 2) < 1012728`.

These changes ensure the disparity output is mathematically correct and the memory boundaries of the U250 BRAM limits are strictly respected.
