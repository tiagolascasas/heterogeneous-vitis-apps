# This script segment is generated automatically by AutoPilot

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


