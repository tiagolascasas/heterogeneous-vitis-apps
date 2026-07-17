# U250 Build Log

Tracks every bitstream generation attempt, configuration used, and outcome. Updated after each run.

| # | Date | App | HLS Clock | Link Clock | DDR Mapping | SLR Constraint | Vivado Effort | Result | Error / Notes | Confidence |
|---|------|-----|-----------|------------|-------------|----------------|---------------|--------|---------------|------------|
| 1 | ~2026-07-06 | edgedetect | 300 MHz | 300 MHz | DDR[0]–[3] | None | Default | ❌ FAIL | Timing: `mmcm_clkout0_2` slack -0.330 ns | ⚠️ Reconstructed from memory |
| 2 | 2026-07-10 | edgedetect | 300 MHz | 200 MHz | DDR[0]–[3] | None | Default | ❌ FAIL | Timing: `mmcm_clkout0_2` -0.599 ns, `mmcm_clkout0_1` -0.381 ns, `mmcm_clkout0` -0.180 ns, `pcie_ip_user_clk` -0.032 ns | ⚠️ Reconstructed from memory |
| 3 | 2026-07-10 | multi-ncut | 300 MHz | 200 MHz | DDR[0]–[3] | None | Default | ❌ FAIL | Timing: `mmcm_clkout0_2` -0.078 ns, `mmcm_clkout0` -0.044 ns, `mmcm_clkout0_1` -0.014 ns | ⚠️ Reconstructed from memory |
| 4 | 2026-07-10 | edgedetect | 400 MHz | 300 MHz | DDR[0]–[3] | None | Performance_Explore + AggressiveExplore | ❌ FAIL | Timing: `mmcm_clkout0_1` -0.228 ns, `mmcm_clkout0_2` -0.195 ns, `mmcm_clkout0` -0.076 ns | ✅ Verified |
| 5 | 2026-07-10 | edgedetect | 400 MHz | 300 MHz | All DDR[0] | `slr=cluster_1:SLR0` | Default | ❌ FAIL | RAMB36 over-utilized in SLR0: needs 917, only 668 available. Kernel too large for single SLR. | ✅ Verified |
| 6 | 2026-07-11 | edgedetect | 400 MHz | 300 MHz | All DDR[0] | None | Default | ❌ FAIL | Timing: `mmcm_clkout0` -0.380 ns | ✅ Verified |
| 7 | 2026-07-11 | tracking | 400 MHz | 300 MHz | All DDR[0] | None | Default | ❌ FAIL | CFGEN Error: invalid port `gmem0` | ✅ Verified |
| 8 | 2026-07-11 | multi-ncut | 400 MHz | 300 MHz | All DDR[0] | None | Default | ✅ SUCCESS | Built successfully. Removed from `run_all.sh`. | ✅ Verified |
| 9 | 2026-07-11 | texture-synthesis | 400 MHz | 300 MHz | All DDR[0] | None | Default | ❌ FAIL | CFGEN Error: invalid port `gmem0` | ✅ Verified |
| 10 | 2026-07-11 | disparity | 400 MHz | 300 MHz | All DDR[0] | None | Default | ❌ FAIL | Timing: `pcie_ip_user_clk` -0.389 ns, `mmcm_clkout0` -0.309 ns | ✅ Verified |
| 11 | 2026-07-11 | stitch | 400 MHz | 300 MHz | All DDR[0] | None | Default | ❌ FAIL | Timing: `mmcm_clkout0` -0.438 ns, `pcie_ip_user_clk` -0.234 ns | ✅ Verified |
| 12 | 2026-07-12 | edgedetect | 400 MHz | 200 MHz | DDR[0]–[3] | None | Explore | ❌ FAIL | Timing: `mmcm_clkout0` -0.263 ns, `pll_clk[0]_2_DIV` -0.185 ns, `mmcm_clkout0_2` -0.081 ns | ✅ Verified |
| 13 | 2026-07-12 | tracking | 400 MHz | 300 MHz | All DDR[0] | None | Default | ❌ FAIL | Routing congestion: 3407 node overlaps | ✅ Verified |
| 14 | 2026-07-12 | texture-synthesis | 400 MHz | 300 MHz | All DDR[0] | None | Default | ✅ SUCCESS | Built successfully. Removed from `run_all.sh`. | ✅ Verified |
| 15 | 2026-07-12 | disparity | 400 MHz | 200 MHz | DDR[0]–[3] | None | Explore | ❌ FAIL | Timing: `mmcm_clkout0_1` -0.404 ns, `mmcm_clkout0_2` -0.211 ns, `mmcm_clkout0` -0.176 ns | ✅ Verified |
| 16 | 2026-07-12 | stitch | 400 MHz | 200 MHz | DDR[0]–[3] | None | Explore | ❌ FAIL | Timing: `mmcm_clkout0_2` -0.408 ns, `pcie_ip_user_clk` -0.258 ns, `mmcm_clkout0` -0.208 ns | ✅ Verified |
| 17 | 2026-07-13 | edgedetect | 300 MHz | 300 MHz | DDR[0]–[3] | None | Explore | ❌ FAIL | Timing: `pcie_ip_user_clk` -0.733 ns, `mmcm_clkout0` -0.345 ns | ✅ Verified |
| 18 | 2026-07-13 | tracking | 400 MHz | 200 MHz | All DDR[0] | None | Explore | ❌ FAIL | Routing congestion: 4150 node overlaps | ✅ Verified |
| 19 | 2026-07-13 | disparity | 300 MHz | 300 MHz | DDR[0]–[3] | None | Explore | ❌ FAIL | Timing: `mmcm_clkout0_2` -0.415 ns, `mmcm_clkout0` -0.290 ns | ✅ Verified |
| 20 | 2026-07-13 | stitch | 300 MHz | 300 MHz | DDR[0]–[3] | None | Explore | ❌ FAIL | Timing: `pcie_ip_user_clk` -0.396 ns, `mmcm_clkout0_1` -0.187 ns | ✅ Verified |
| 21 | 2026-07-14 | edgedetect | 300 MHz | 300 MHz | DDR[0]–[3] | None | Explore | ✅ SUCCESS | Frequency auto-scaled to 260.5 MHz. Built successfully. Removed from `run_all.sh`. | ✅ Verified |
| 22 | 2026-07-14 | mser | 300 MHz | 300 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Default | ❌ FAIL | CFGEN Error: Resources exhausted for sp {DDR[2]}. Max 15 masters allowed, but kernel has 21. | ✅ Verified |
| 23 | 2026-07-14 | disparity | 300 MHz | 300 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Default | ❌ FAIL | RAMB18 & RAMB36/FIFO over-utilized in SLR2 (needs 2177, 1320 available) | ✅ Verified |
| 24 | 2026-07-14 | stitch | 300 MHz | 300 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Default | ❌ FAIL | RAMB18 & RAMB36/FIFO over-utilized in SLR2 (needs 1982, 1320 available) | ✅ Verified |
| 25 | 2026-07-14 | tracking | 400 MHz | 200 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Default | ❌ FAIL | BRAM utilization in SLR2 exceeds capacity (102.3%) | ✅ Verified |
| 26 | 2026-07-14 | localization | 300 MHz | 300 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Default | ❌ FAIL | CFGEN Error: `--sp` tag applied to invalid ports (`gmem0` to `gmem4`) | ✅ Verified |
| 27 | 2026-07-14 | svm | 300 MHz | 300 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Default | ❌ FAIL | HLS Compilation: use of undeclared identifier `nullptr` in `cluster.c` | ✅ Verified |
| 28 | 2026-07-14 | mser | 300 MHz | 300 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Default | ✅ SUCCESS | Built successfully. | ✅ Verified |
| 29 | 2026-07-14 | disparity | 150 MHz | 150 MHz | All DDR[2] | None | Explore | ❌ FAIL | Vivado crash during routing due to severe congestion (Router estimated timing not met) | ✅ Verified |
| 30 | 2026-07-14 | disparity | 150 MHz | 150 MHz | Distributed DDR[1]-[2] | None | Explore | ❌ FAIL | Timing: unscalable shell clocks (mmcm_clkout0, pcie_ip_user_clk) failed due to logic crowding SLR1 (static region) | ✅ Verified |
| 31 | 2026-07-15 | disparity | 150 MHz | 150 MHz | Distributed DDR[2]-[3] | None | Explore | ❌ FAIL | Vivado crash during bitstream generation (VPL 60-777). Routing succeeded but bitgen crashed. | ✅ Verified |
| 32 | 2026-07-15 | disparity | - | - | - | - | - | ❌ FAIL | Routing congestion: 45 node overlaps | ✅ Verified |
| 33 | 2026-07-15 | stitch | - | - | - | - | - | ❌ FAIL | Timing: unscalable system clocks failed | ✅ Verified |
| 34 | 2026-07-15 | tracking | - | 300 MHz | All DDR[2] | `slr=cluster_1:SLR2` | - | ❌ FAIL | CFGEN Error: invalid port `gmem0` | ✅ Verified |
| 35 | 2026-07-15 | localization | - | 300 MHz | All DDR[2] | `slr=cluster_1:SLR2` | - | ❌ FAIL | CFGEN Error: `--sp` tag applied to invalid ports (`gmem0` to `gmem4`) | ✅ Verified |
| 36 | 2026-07-15 | svm | - | 300 MHz | All DDR[2] | `slr=cluster_1:SLR2` | - | ❌ FAIL | CFGEN Error: `--sp` tag applied to invalid ports (`gmem0` to `gmem4`) | ✅ Verified |
| 37 | 2026-07-16 | disparity | 150 MHz | 150 MHz | Distributed DDR[2]-[3] | None | Explore | ❌ FAIL | Timing: unscalable shell clocks (mmcm_clkout0_1) failed by -0.893 ns. Routing succeeded. | ✅ Verified |
| 38 | 2026-07-16 | svm | 150 MHz | 150 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Explore | ✅ SUCCESS | Built successfully. | ✅ Verified |
| 39 | 2026-07-16 | localization | 150 MHz | 150 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Explore | ✅ SUCCESS | Built successfully. | ✅ Verified |
| 40 | 2026-07-16 | tracking | 150 MHz | 150 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Explore | ❌ FAIL | Routing congestion: 530,251 node overlaps due to massive LUT-based double-precision division (`ddiv`) | ✅ Verified |
| 41 | 2026-07-16 | stitch | 150 MHz | 150 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Explore | ✅ SUCCESS | Built successfully. | ✅ Verified |
| 42 | 2026-07-16 | disparity | 150 MHz | 150 MHz | All DDR[2] | `slr=cluster_1:SLR2` | Explore | ❌ FAIL | Routing congestion: 195 node overlaps. SLR2 URAM density is too high. | ✅ Verified |
