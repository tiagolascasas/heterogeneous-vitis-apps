# Monitor points
set_property HDL_ATTRIBUTE.DPA_MONITOR true [get_bd_cells cluster_1]
set_property HDL_ATTRIBUTE.DPA_MONITOR true [get_bd_intf_pins /cluster_1/m_axi_gmem0]
set_property HDL_ATTRIBUTE.DPA_MONITOR true [get_bd_intf_pins /cluster_1/m_axi_gmem1]

# Platform options
set_property HDL_ATTRIBUTE.DPA_AXILITE_MASTER true [get_bd_intf_pins /interconnect_axilite/M02_AXI]
set_property HDL_ATTRIBUTE.DPA_TRACE_MASTER true [get_bd_intf_pins /interconnect_axihpm0fpd/M01_AXI]

#Trace Dictionaries
set default_trace [dict create \
  DEPTH 8192 \
  MEM_SPACE FIFO \
  MEM_INDEX 0 \
  MASTER /interconnect_axihpm0fpd/M01_AXI \
  CLK_SRC /cluster_1/ap_clk \
  RST_SRC /cluster_1/ap_rst_n \
  SLR SLR0 \
  DEDICATED 1 \
];


# Call debug/profiling automation
set dpa_dict [list \
              [get_bd_cells cluster_1]  {TYPE stall DETAIL all CLK_SRC /cluster_1/ap_clk RST_SRC /cluster_1/ap_rst_n PRINTABLE_KEY {[get_bd_cells cluster_1]} INS_MODE user} \
              [get_bd_intf_pins cluster_1/m_axi_gmem0]  {TYPE data DETAIL all CLK_SRC /cluster_1/ap_clk RST_SRC /cluster_1/ap_rst_n MIN_ADDRESS {0xC0000000 0x0} MAX_ADDRESS {0xFFFFFFFFF 0x7FFFFFFF} MEMORY {HP HP0} PRINTABLE_KEY {[get_bd_intf_pins cluster_1/m_axi_gmem0]} INS_MODE user} \
              [get_bd_intf_pins cluster_1/m_axi_gmem1]  {TYPE data DETAIL all CLK_SRC /cluster_1/ap_clk RST_SRC /cluster_1/ap_rst_n MIN_ADDRESS {0xC0000000 0x0} MAX_ADDRESS {0xFFFFFFFFF 0x7FFFFFFF} MEMORY {HP HP0} PRINTABLE_KEY {[get_bd_intf_pins cluster_1/m_axi_gmem1]} INS_MODE user} \
             ]
set dpa_opts [list \
              SETTINGS  {HW_EMU true IS_EMBEDDED true VERSAL_DFX 0} \
              AIE_TRACE  {FIFO_DEPTH 4096 PACKET_RATE 100 CLK_SELECT default PROFILE_STREAMS false MEM_TYPE DDR MEM_SPACE MEM_SPACE_NOT_FOUND MEM_INDEX {}} \
              SYSTEM_DEADLOCK  {DEADLOCK_OPTION disable} \
              AXILITE  {MASTER /interconnect_axilite/M02_AXI CLK_SRC /cluster_1/ap_clk RST_SRC /cluster_1/ap_rst_n} \
              TRACE_OFFLOAD  $default_trace \
             ]

set_param bd.enable_dpa 1
set_param bd.debug_profile.script /home/tls/dev/heterogeneous-vitis-apps/apps/vadd/vitis/link_hwemu/temp/cluster/vivado/vpl/.local/debug_profile_automation.tcl
apply_bd_automation -rule xilinx.com:bd_rule:debug_profile -opts $dpa_opts -dict $dpa_dict

# Write debug_ip_layout
debug_profile::write_debug_ip_layout true "xilinx.com:xd:xilinx_zcu102_base_202420_1:202420.1" "/home/tls/dev/heterogeneous-vitis-apps/apps/vadd/vitis/link_hwemu/temp/cluster/int"
