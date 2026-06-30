set clk_wiz_cell [get_bd_cells -hierarchical -filter {VLNV=~"*clk_wiz*"}]
if {$clk_wiz_cell ne ""} {
    set_property -dict [list CONFIG.CLKOUT1_REQUESTED_OUT_FREQ {75.000}] $clk_wiz_cell
}
set_property CONFIG.FREQ_HZ 75000000 [get_bd_pins /cluster_1/ap_clk]