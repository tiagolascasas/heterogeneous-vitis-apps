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
