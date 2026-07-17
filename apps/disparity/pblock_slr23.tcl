source /home/tls/dev/heterogeneous-vitis-apps/apps/override_timing.tcl

# Confine the disparity kernel to SLR2 + SLR3 only.
# This prevents logic from spilling into SLR1 (static shell region)
# while giving the router twice the area of a single SLR to handle
# dense URAM pillar routing.

# The Vitis shell places user kernels under the ULP hierarchy.
# The wildcard targets only the kernel instance, not platform logic.
set kernel_cells [get_cells -quiet -hierarchical -filter {NAME =~ */ulp/cluster_1/*}]

if {[llength $kernel_cells] > 0} {
    create_pblock pblock_cluster
    resize_pblock [get_pblocks pblock_cluster] -add {SLR2 SLR3}
    add_cells_to_pblock [get_pblocks pblock_cluster] $kernel_cells
    set_property IS_SOFT FALSE [get_pblocks pblock_cluster]
    puts "INFO: Created hard Pblock for cluster_1 spanning SLR2 and SLR3 ([llength $kernel_cells] cells)"
} else {
    puts "WARNING: No cells matching */ulp/cluster_1/* found. Pblock not created."
}
