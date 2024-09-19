# This script segment is generated automatically by AutoPilot

set name cluster_mul_32ns_32ns_64_1_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {mul} IMPL {auto} LATENCY 0 ALLOW_PRAGMA 1
}


set name cluster_faddfsub_32ns_32ns_32_6_full_dsp_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {fadd} IMPL {fulldsp} LATENCY 5 ALLOW_PRAGMA 1
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler cluster_gmem_m_axi BINDTYPE {interface} TYPE {adapter} IMPL {m_axi}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
set port_control {
Ileft_w { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 16
	offset_end 23
}
Ileft_h { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 24
	offset_end 31
}
Ileft_data { 
	dir I
	width 64
	depth 1
	mode ap_none
	offset 32
	offset_end 43
}
Iright_w { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 44
	offset_end 51
}
Iright_h { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 52
	offset_end 59
}
Iright_data { 
	dir I
	width 64
	depth 1
	mode ap_none
	offset 60
	offset_end 71
}
Iright_moved_w { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 72
	offset_end 79
}
Iright_moved_h { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 80
	offset_end 87
}
Iright_moved_data { 
	dir I
	width 64
	depth 1
	mode ap_none
	offset 88
	offset_end 99
}
win_sz { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 100
	offset_end 107
}
disparity { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 108
	offset_end 115
}
SAD_w { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 116
	offset_end 123
}
SAD_h { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 124
	offset_end 131
}
SAD_data { 
	dir I
	width 64
	depth 1
	mode ap_none
	offset 132
	offset_end 143
}
integralImg_w { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 144
	offset_end 151
}
integralImg_h { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 152
	offset_end 159
}
integralImg_data { 
	dir I
	width 64
	depth 1
	mode ap_none
	offset 160
	offset_end 171
}
retSAD_w { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 172
	offset_end 179
}
retSAD_h { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 180
	offset_end 187
}
retSAD_data { 
	dir I
	width 64
	depth 1
	mode ap_none
	offset 188
	offset_end 199
}
range_w { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 200
	offset_end 207
}
range_h { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 208
	offset_end 215
}
range_data { 
	dir I
	width 64
	depth 1
	mode ap_none
	offset 216
	offset_end 227
}
ap_start { }
ap_done { }
ap_ready { }
ap_continue { }
ap_idle { }
interrupt {
}
}
dict set axilite_register_dict control $port_control


# Native S_AXILite:
if {${::AESL::PGuard_simmodel_gen}} {
	if {[info proc ::AESL_LIB_XILADAPTER::s_axilite_gen] == "::AESL_LIB_XILADAPTER::s_axilite_gen"} {
		eval "::AESL_LIB_XILADAPTER::s_axilite_gen { \
			id 69 \
			corename cluster_control_axilite \
			name cluster_control_s_axi \
			ports {$port_control} \
			op interface \
			interrupt_clear_mode TOW \
			interrupt_trigger_type default \
			is_flushable 0 \
			is_datawidth64 0 \
			is_addrwidth64 1 \
		} "
	} else {
		puts "@W \[IMPL-110\] Cannot find AXI Lite interface model in the library. Ignored generation of AXI Lite  interface for 'control'"
	}
}

if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler cluster_control_s_axi BINDTYPE interface TYPE interface_s_axilite
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -1 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst_n
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -2 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_rst_n \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


