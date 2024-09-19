set moduleName edgedetect
set isTopModule 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_chain
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set DLRegFirstOffset 0
set DLRegItemOffset 0
set C_modelName {edgedetect}
set C_modelType { void 0 }
set ap_memory_interface_dict [dict create]
set C_modelArgList {
	{ gmem int 512 regular {axi_master 2}  }
	{ image_rgb int 64 regular {axi_slave 0}  }
	{ image_gray int 64 regular {axi_slave 0}  }
	{ temp_buf int 64 regular {axi_slave 0}  }
	{ filter int 64 regular {axi_slave 0}  }
	{ output_r int 64 regular {axi_slave 0}  }
}
set hasAXIMCache 0
set hasAXIML2Cache 0
set AXIMCacheInstDict [dict create]
set C_modelArgMapList {[ 
	{ "Name" : "gmem", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READWRITE", "bitSlice":[ {"cElement": [{"cName": "image_rgb","offset": { "type": "dynamic","port_name": "image_rgb","bundle": "control"},"direction": "READONLY"},{"cName": "image_gray","offset": { "type": "dynamic","port_name": "image_gray","bundle": "control"},"direction": "READWRITE"},{"cName": "temp_buf","offset": { "type": "dynamic","port_name": "temp_buf","bundle": "control"},"direction": "READWRITE"},{"cName": "filter","offset": { "type": "dynamic","port_name": "filter","bundle": "control"},"direction": "READWRITE"},{"cName": "output_r","offset": { "type": "dynamic","port_name": "output_r","bundle": "control"},"direction": "READWRITE"}]}]} , 
 	{ "Name" : "image_rgb", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":27}} , 
 	{ "Name" : "image_gray", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":28}, "offset_end" : {"in":39}} , 
 	{ "Name" : "temp_buf", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":51}} , 
 	{ "Name" : "filter", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":52}, "offset_end" : {"in":63}} , 
 	{ "Name" : "output_r", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":64}, "offset_end" : {"in":75}} ]}
# RTL Port declarations: 
set portNum 65
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_gmem_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_AWADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_WDATA sc_out sc_lv 512 signal 0 } 
	{ m_axi_gmem_WSTRB sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_ARADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_RDATA sc_in sc_lv 512 signal 0 } 
	{ m_axi_gmem_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_BUSER sc_in sc_lv 1 signal 0 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_control_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_control_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_control_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"edgedetect","role":"start","value":"0","valid_bit":"0"},{"name":"edgedetect","role":"continue","value":"0","valid_bit":"4"},{"name":"edgedetect","role":"auto_start","value":"0","valid_bit":"7"},{"name":"image_rgb","role":"data","value":"16"},{"name":"image_gray","role":"data","value":"28"},{"name":"temp_buf","role":"data","value":"40"},{"name":"filter","role":"data","value":"52"},{"name":"output_r","role":"data","value":"64"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"edgedetect","role":"start","value":"0","valid_bit":"0"},{"name":"edgedetect","role":"done","value":"0","valid_bit":"1"},{"name":"edgedetect","role":"idle","value":"0","valid_bit":"2"},{"name":"edgedetect","role":"ready","value":"0","valid_bit":"3"},{"name":"edgedetect","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARVALID" } },
	{ "name": "s_axi_control_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARREADY" } },
	{ "name": "s_axi_control_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RVALID" } },
	{ "name": "s_axi_control_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RREADY" } },
	{ "name": "s_axi_control_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "RDATA" } },
	{ "name": "s_axi_control_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "RRESP" } },
	{ "name": "s_axi_control_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BVALID" } },
	{ "name": "s_axi_control_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BREADY" } },
	{ "name": "s_axi_control_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_gmem_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWVALID" }} , 
 	{ "name": "m_axi_gmem_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWREADY" }} , 
 	{ "name": "m_axi_gmem_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "AWADDR" }} , 
 	{ "name": "m_axi_gmem_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWID" }} , 
 	{ "name": "m_axi_gmem_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "AWLEN" }} , 
 	{ "name": "m_axi_gmem_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_gmem_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWBURST" }} , 
 	{ "name": "m_axi_gmem_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_gmem_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_gmem_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "AWPROT" }} , 
 	{ "name": "m_axi_gmem_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWQOS" }} , 
 	{ "name": "m_axi_gmem_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "AWREGION" }} , 
 	{ "name": "m_axi_gmem_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "AWUSER" }} , 
 	{ "name": "m_axi_gmem_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WVALID" }} , 
 	{ "name": "m_axi_gmem_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WREADY" }} , 
 	{ "name": "m_axi_gmem_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "gmem", "role": "WDATA" }} , 
 	{ "name": "m_axi_gmem_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "WSTRB" }} , 
 	{ "name": "m_axi_gmem_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WLAST" }} , 
 	{ "name": "m_axi_gmem_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WID" }} , 
 	{ "name": "m_axi_gmem_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "WUSER" }} , 
 	{ "name": "m_axi_gmem_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARVALID" }} , 
 	{ "name": "m_axi_gmem_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARREADY" }} , 
 	{ "name": "m_axi_gmem_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "ARADDR" }} , 
 	{ "name": "m_axi_gmem_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARID" }} , 
 	{ "name": "m_axi_gmem_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "ARLEN" }} , 
 	{ "name": "m_axi_gmem_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_gmem_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARBURST" }} , 
 	{ "name": "m_axi_gmem_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_gmem_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_gmem_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "ARPROT" }} , 
 	{ "name": "m_axi_gmem_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARQOS" }} , 
 	{ "name": "m_axi_gmem_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "ARREGION" }} , 
 	{ "name": "m_axi_gmem_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "ARUSER" }} , 
 	{ "name": "m_axi_gmem_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RVALID" }} , 
 	{ "name": "m_axi_gmem_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RREADY" }} , 
 	{ "name": "m_axi_gmem_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "gmem", "role": "RDATA" }} , 
 	{ "name": "m_axi_gmem_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RLAST" }} , 
 	{ "name": "m_axi_gmem_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RID" }} , 
 	{ "name": "m_axi_gmem_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "RUSER" }} , 
 	{ "name": "m_axi_gmem_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "RRESP" }} , 
 	{ "name": "m_axi_gmem_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BVALID" }} , 
 	{ "name": "m_axi_gmem_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BREADY" }} , 
 	{ "name": "m_axi_gmem_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "BRESP" }} , 
 	{ "name": "m_axi_gmem_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BID" }} , 
 	{ "name": "m_axi_gmem_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "10", "12", "24", "26", "38", "40", "52", "54", "55"],
		"CDFG" : "edgedetect",
		"Protocol" : "ap_ctrl_chain",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18005295", "EstimateLatencyMax" : "18005295",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303", "Port" : "gmem", "Inst_start_state" : "225", "Inst_end_state" : "226"},
					{"ID" : "24", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_84_1_VITIS_LOOP_86_2_fu_259", "Port" : "gmem", "Inst_start_state" : "149", "Inst_end_state" : "150"},
					{"ID" : "26", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267", "Port" : "gmem", "Inst_start_state" : "151", "Inst_end_state" : "152"},
					{"ID" : "38", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_127_1_VITIS_LOOP_129_2_fu_295", "Port" : "gmem", "Inst_start_state" : "223", "Inst_end_state" : "224"},
					{"ID" : "52", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_162_1_VITIS_LOOP_164_2_fu_331", "Port" : "gmem", "Inst_start_state" : "228", "Inst_end_state" : "229"},
					{"ID" : "10", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_41_1_VITIS_LOOP_43_2_fu_223", "Port" : "gmem", "Inst_start_state" : "75", "Inst_end_state" : "76"},
					{"ID" : "12", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231", "Port" : "gmem", "Inst_start_state" : "77", "Inst_end_state" : "78"},
					{"ID" : "1", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213", "Port" : "gmem", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "image_rgb", "Type" : "None", "Direction" : "I"},
			{"Name" : "image_gray", "Type" : "None", "Direction" : "I"},
			{"Name" : "temp_buf", "Type" : "None", "Direction" : "I"},
			{"Name" : "filter", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213", "Port" : "mask_table", "Inst_start_state" : "3", "Inst_end_state" : "4"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "921709", "EstimateLatencyMax" : "921709",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "sext_ln10", "Type" : "None", "Direction" : "I"},
			{"Name" : "image_rgb", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_10_1_VITIS_LOOP_13_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "3", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter37", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter37", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213.mask_table_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213.fptrunc_64ns_32_2_no_dsp_1_U1", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213.fpext_32ns_64_2_no_dsp_1_U2", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213.dadd_64ns_64ns_64_8_full_dsp_1_U3", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213.dmul_64ns_64ns_64_7_max_dsp_1_U4", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213.sitodp_32ns_64_5_no_dsp_1_U5", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213.sparsemux_9_3_64_1_1_U6", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_213.flow_control_loop_pipe_sequential_init_U", "Parent" : "1"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_41_1_VITIS_LOOP_43_2_fu_223", "Parent" : "0", "Child" : ["11"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_41_1_VITIS_LOOP_43_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "83", "EstimateLatencyMax" : "83",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "filter", "Type" : "None", "Direction" : "I"},
			{"Name" : "normal_factor_2_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_41_1_VITIS_LOOP_43_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter73", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter73", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_41_1_VITIS_LOOP_43_2_fu_223.flow_control_loop_pipe_sequential_init_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231", "Parent" : "0", "Child" : ["13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5489522", "EstimateLatencyMax" : "5489522",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "sext_ln26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast45_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast47_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast49_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast51_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast53_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast55_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast57_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "image_gray", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast84", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln52", "Type" : "None", "Direction" : "I"},
			{"Name" : "normal_factor_2_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "icmp_ln49", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_52_3_VITIS_LOOP_54_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "18", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage7", "LastStateIter" : "ap_enable_reg_pp0_iter10", "LastStateBlock" : "ap_block_pp0_stage7_subdone", "QuitState" : "ap_ST_fsm_pp0_stage7", "QuitStateIter" : "ap_enable_reg_pp0_iter10", "QuitStateBlock" : "ap_block_pp0_stage7_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.mul_8ns_8ns_16_1_1_U20", "Parent" : "12"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.mul_8ns_8ns_16_1_1_U21", "Parent" : "12"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.mul_8ns_8ns_16_1_1_U22", "Parent" : "12"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.mul_8ns_8ns_16_1_1_U23", "Parent" : "12"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.udiv_20ns_12ns_8_24_1_U24", "Parent" : "12"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.mac_muladd_8ns_8ns_16ns_17_4_1_U25", "Parent" : "12"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.mac_muladd_8ns_8ns_16ns_17_4_1_U26", "Parent" : "12"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.mac_muladd_8ns_8ns_16ns_17_4_1_U27", "Parent" : "12"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.mac_muladd_8ns_8ns_16ns_17_4_1_U28", "Parent" : "12"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.mac_muladd_8ns_8ns_17ns_18_4_1_U29", "Parent" : "12"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4_fu_231.flow_control_loop_pipe_sequential_init_U", "Parent" : "12"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_84_1_VITIS_LOOP_86_2_fu_259", "Parent" : "0", "Child" : ["25"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_84_1_VITIS_LOOP_86_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "83", "EstimateLatencyMax" : "83",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "filter", "Type" : "None", "Direction" : "I"},
			{"Name" : "normal_factor_5_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_84_1_VITIS_LOOP_86_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter73", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter73", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_84_1_VITIS_LOOP_86_2_fu_259.flow_control_loop_pipe_sequential_init_U", "Parent" : "24"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267", "Parent" : "0", "Child" : ["27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5489522", "EstimateLatencyMax" : "5489522",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "sext_ln26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast45_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast47_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast49_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast51_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast53_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast55_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast57_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast84", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln52", "Type" : "None", "Direction" : "I"},
			{"Name" : "normal_factor_5_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "icmp_ln92", "Type" : "None", "Direction" : "I"},
			{"Name" : "image_gray", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_95_3_VITIS_LOOP_97_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "18", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage7", "LastStateIter" : "ap_enable_reg_pp0_iter10", "LastStateBlock" : "ap_block_pp0_stage7_subdone", "QuitState" : "ap_ST_fsm_pp0_stage7", "QuitStateIter" : "ap_enable_reg_pp0_iter10", "QuitStateBlock" : "ap_block_pp0_stage7_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.mul_8ns_8ns_16_1_1_U60", "Parent" : "26"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.mul_8ns_8ns_16_1_1_U61", "Parent" : "26"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.mul_8ns_8ns_16_1_1_U62", "Parent" : "26"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.mul_8ns_8ns_16_1_1_U63", "Parent" : "26"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.udiv_20ns_12ns_8_24_1_U64", "Parent" : "26"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.mac_muladd_8ns_8ns_16ns_17_4_1_U65", "Parent" : "26"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.mac_muladd_8ns_8ns_16ns_17_4_1_U66", "Parent" : "26"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.mac_muladd_8ns_8ns_16ns_17_4_1_U67", "Parent" : "26"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.mac_muladd_8ns_8ns_16ns_17_4_1_U68", "Parent" : "26"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.mac_muladd_8ns_8ns_17ns_18_4_1_U69", "Parent" : "26"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4_fu_267.flow_control_loop_pipe_sequential_init_U", "Parent" : "26"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_127_1_VITIS_LOOP_129_2_fu_295", "Parent" : "0", "Child" : ["39"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_127_1_VITIS_LOOP_129_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "83", "EstimateLatencyMax" : "83",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "filter", "Type" : "None", "Direction" : "I"},
			{"Name" : "normal_factor_8_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_127_1_VITIS_LOOP_129_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter73", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter73", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_127_1_VITIS_LOOP_129_2_fu_295.flow_control_loop_pipe_sequential_init_U", "Parent" : "38"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303", "Parent" : "0", "Child" : ["41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5489522", "EstimateLatencyMax" : "5489522",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "sext_ln26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast45_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast47_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast49_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast51_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast53_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast55_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast57_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast84", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln52", "Type" : "None", "Direction" : "I"},
			{"Name" : "normal_factor_8_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "icmp_ln135", "Type" : "None", "Direction" : "I"},
			{"Name" : "temp_buf", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_138_3_VITIS_LOOP_140_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "18", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage7", "LastStateIter" : "ap_enable_reg_pp0_iter10", "LastStateBlock" : "ap_block_pp0_stage7_subdone", "QuitState" : "ap_ST_fsm_pp0_stage7", "QuitStateIter" : "ap_enable_reg_pp0_iter10", "QuitStateBlock" : "ap_block_pp0_stage7_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.mul_8ns_8ns_16_1_1_U96", "Parent" : "40"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.mul_8ns_8ns_16_1_1_U97", "Parent" : "40"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.mul_8ns_8ns_16_1_1_U98", "Parent" : "40"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.mul_8ns_8ns_16_1_1_U99", "Parent" : "40"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.udiv_20ns_12ns_8_24_1_U100", "Parent" : "40"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.mac_muladd_8ns_8ns_16ns_17_4_1_U101", "Parent" : "40"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.mac_muladd_8ns_8ns_16ns_17_4_1_U102", "Parent" : "40"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.mac_muladd_8ns_8ns_16ns_17_4_1_U103", "Parent" : "40"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.mac_muladd_8ns_8ns_16ns_17_4_1_U104", "Parent" : "40"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.mac_muladd_8ns_8ns_17ns_18_4_1_U105", "Parent" : "40"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4_fu_303.flow_control_loop_pipe_sequential_init_U", "Parent" : "40"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_162_1_VITIS_LOOP_164_2_fu_331", "Parent" : "0", "Child" : ["53"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_162_1_VITIS_LOOP_164_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "614475", "EstimateLatencyMax" : "614475",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "sext_ln162_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln10_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln162", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_162_1_VITIS_LOOP_164_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "2", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter38", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter38", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_162_1_VITIS_LOOP_164_2_fu_331.flow_control_loop_pipe_sequential_init_U", "Parent" : "52"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.control_s_axi_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gmem_m_axi_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	edgedetect {
		gmem {Type IO LastRead 229 FirstWrite -1}
		image_rgb {Type I LastRead 0 FirstWrite -1}
		image_gray {Type I LastRead 0 FirstWrite -1}
		temp_buf {Type I LastRead 0 FirstWrite -1}
		filter {Type I LastRead 0 FirstWrite -1}
		output_r {Type I LastRead 0 FirstWrite -1}
		mask_table {Type I LastRead -1 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2 {
		gmem {Type IO LastRead 75 FirstWrite 111}
		sext_ln10 {Type I LastRead 0 FirstWrite -1}
		image_rgb {Type I LastRead 0 FirstWrite -1}
		mask_table {Type I LastRead -1 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_41_1_VITIS_LOOP_43_2 {
		gmem {Type I LastRead 72 FirstWrite -1}
		filter {Type I LastRead 0 FirstWrite -1}
		normal_factor_2_out {Type O LastRead -1 FirstWrite 72}}
	edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4 {
		gmem {Type IO LastRead 120 FirstWrite 119}
		sext_ln26 {Type I LastRead 0 FirstWrite -1}
		p_cast_cast {Type I LastRead 0 FirstWrite -1}
		p_cast45_cast {Type I LastRead 0 FirstWrite -1}
		p_cast47_cast {Type I LastRead 0 FirstWrite -1}
		p_cast49_cast {Type I LastRead 0 FirstWrite -1}
		p_cast51_cast {Type I LastRead 0 FirstWrite -1}
		p_cast53_cast {Type I LastRead 0 FirstWrite -1}
		p_cast55_cast {Type I LastRead 0 FirstWrite -1}
		p_cast57_cast {Type I LastRead 0 FirstWrite -1}
		image_gray {Type I LastRead 0 FirstWrite -1}
		p_cast77 {Type I LastRead 0 FirstWrite -1}
		p_cast78 {Type I LastRead 0 FirstWrite -1}
		p_cast79 {Type I LastRead 0 FirstWrite -1}
		p_cast80 {Type I LastRead 0 FirstWrite -1}
		p_cast81 {Type I LastRead 0 FirstWrite -1}
		p_cast82 {Type I LastRead 0 FirstWrite -1}
		p_cast83 {Type I LastRead 0 FirstWrite -1}
		p_cast84 {Type I LastRead 0 FirstWrite -1}
		zext_ln52 {Type I LastRead 0 FirstWrite -1}
		normal_factor_2_reload {Type I LastRead 0 FirstWrite -1}
		icmp_ln49 {Type I LastRead 0 FirstWrite -1}
		output_r {Type I LastRead 0 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_84_1_VITIS_LOOP_86_2 {
		gmem {Type I LastRead 72 FirstWrite -1}
		filter {Type I LastRead 0 FirstWrite -1}
		normal_factor_5_out {Type O LastRead -1 FirstWrite 72}}
	edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4 {
		gmem {Type IO LastRead 120 FirstWrite 119}
		sext_ln26 {Type I LastRead 0 FirstWrite -1}
		p_cast_cast {Type I LastRead 0 FirstWrite -1}
		p_cast45_cast {Type I LastRead 0 FirstWrite -1}
		p_cast47_cast {Type I LastRead 0 FirstWrite -1}
		p_cast49_cast {Type I LastRead 0 FirstWrite -1}
		p_cast51_cast {Type I LastRead 0 FirstWrite -1}
		p_cast53_cast {Type I LastRead 0 FirstWrite -1}
		p_cast55_cast {Type I LastRead 0 FirstWrite -1}
		p_cast57_cast {Type I LastRead 0 FirstWrite -1}
		output_r {Type I LastRead 0 FirstWrite -1}
		p_cast77 {Type I LastRead 0 FirstWrite -1}
		p_cast78 {Type I LastRead 0 FirstWrite -1}
		p_cast79 {Type I LastRead 0 FirstWrite -1}
		p_cast80 {Type I LastRead 0 FirstWrite -1}
		p_cast81 {Type I LastRead 0 FirstWrite -1}
		p_cast82 {Type I LastRead 0 FirstWrite -1}
		p_cast83 {Type I LastRead 0 FirstWrite -1}
		p_cast84 {Type I LastRead 0 FirstWrite -1}
		zext_ln52 {Type I LastRead 0 FirstWrite -1}
		normal_factor_5_reload {Type I LastRead 0 FirstWrite -1}
		icmp_ln92 {Type I LastRead 0 FirstWrite -1}
		image_gray {Type I LastRead 0 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_127_1_VITIS_LOOP_129_2 {
		gmem {Type I LastRead 72 FirstWrite -1}
		filter {Type I LastRead 0 FirstWrite -1}
		normal_factor_8_out {Type O LastRead -1 FirstWrite 72}}
	edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4 {
		gmem {Type IO LastRead 120 FirstWrite 119}
		sext_ln26 {Type I LastRead 0 FirstWrite -1}
		p_cast_cast {Type I LastRead 0 FirstWrite -1}
		p_cast45_cast {Type I LastRead 0 FirstWrite -1}
		p_cast47_cast {Type I LastRead 0 FirstWrite -1}
		p_cast49_cast {Type I LastRead 0 FirstWrite -1}
		p_cast51_cast {Type I LastRead 0 FirstWrite -1}
		p_cast53_cast {Type I LastRead 0 FirstWrite -1}
		p_cast55_cast {Type I LastRead 0 FirstWrite -1}
		p_cast57_cast {Type I LastRead 0 FirstWrite -1}
		output_r {Type I LastRead 0 FirstWrite -1}
		p_cast77 {Type I LastRead 0 FirstWrite -1}
		p_cast78 {Type I LastRead 0 FirstWrite -1}
		p_cast79 {Type I LastRead 0 FirstWrite -1}
		p_cast80 {Type I LastRead 0 FirstWrite -1}
		p_cast81 {Type I LastRead 0 FirstWrite -1}
		p_cast82 {Type I LastRead 0 FirstWrite -1}
		p_cast83 {Type I LastRead 0 FirstWrite -1}
		p_cast84 {Type I LastRead 0 FirstWrite -1}
		zext_ln52 {Type I LastRead 0 FirstWrite -1}
		normal_factor_8_reload {Type I LastRead 0 FirstWrite -1}
		icmp_ln135 {Type I LastRead 0 FirstWrite -1}
		temp_buf {Type I LastRead 0 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_162_1_VITIS_LOOP_164_2 {
		gmem {Type IO LastRead 74 FirstWrite 76}
		sext_ln162_1 {Type I LastRead 0 FirstWrite -1}
		sext_ln10_1 {Type I LastRead 0 FirstWrite -1}
		sext_ln162 {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "18005295", "Max" : "18005295"}
	, {"Name" : "Interval", "Min" : "18005296", "Max" : "18005296"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	gmem { m_axi {  { m_axi_gmem_AWVALID VALID 1 1 }  { m_axi_gmem_AWREADY READY 0 1 }  { m_axi_gmem_AWADDR ADDR 1 64 }  { m_axi_gmem_AWID ID 1 1 }  { m_axi_gmem_AWLEN SIZE 1 8 }  { m_axi_gmem_AWSIZE BURST 1 3 }  { m_axi_gmem_AWBURST LOCK 1 2 }  { m_axi_gmem_AWLOCK CACHE 1 2 }  { m_axi_gmem_AWCACHE PROT 1 4 }  { m_axi_gmem_AWPROT QOS 1 3 }  { m_axi_gmem_AWQOS REGION 1 4 }  { m_axi_gmem_AWREGION USER 1 4 }  { m_axi_gmem_AWUSER DATA 1 1 }  { m_axi_gmem_WVALID VALID 1 1 }  { m_axi_gmem_WREADY READY 0 1 }  { m_axi_gmem_WDATA FIFONUM 1 512 }  { m_axi_gmem_WSTRB STRB 1 64 }  { m_axi_gmem_WLAST LAST 1 1 }  { m_axi_gmem_WID ID 1 1 }  { m_axi_gmem_WUSER DATA 1 1 }  { m_axi_gmem_ARVALID VALID 1 1 }  { m_axi_gmem_ARREADY READY 0 1 }  { m_axi_gmem_ARADDR ADDR 1 64 }  { m_axi_gmem_ARID ID 1 1 }  { m_axi_gmem_ARLEN SIZE 1 8 }  { m_axi_gmem_ARSIZE BURST 1 3 }  { m_axi_gmem_ARBURST LOCK 1 2 }  { m_axi_gmem_ARLOCK CACHE 1 2 }  { m_axi_gmem_ARCACHE PROT 1 4 }  { m_axi_gmem_ARPROT QOS 1 3 }  { m_axi_gmem_ARQOS REGION 1 4 }  { m_axi_gmem_ARREGION USER 1 4 }  { m_axi_gmem_ARUSER DATA 1 1 }  { m_axi_gmem_RVALID VALID 0 1 }  { m_axi_gmem_RREADY READY 1 1 }  { m_axi_gmem_RDATA FIFONUM 0 512 }  { m_axi_gmem_RLAST LAST 0 1 }  { m_axi_gmem_RID ID 0 1 }  { m_axi_gmem_RUSER DATA 0 1 }  { m_axi_gmem_RRESP RESP 0 2 }  { m_axi_gmem_BVALID VALID 0 1 }  { m_axi_gmem_BREADY READY 1 1 }  { m_axi_gmem_BRESP RESP 0 2 }  { m_axi_gmem_BID ID 0 1 }  { m_axi_gmem_BUSER DATA 0 1 } } }
}

set maxi_interface_dict [dict create]
dict set maxi_interface_dict gmem { CHANNEL_NUM 0 BUNDLE gmem NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 READ_WRITE_MODE READ_WRITE}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ gmem 64 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ gmem 64 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
