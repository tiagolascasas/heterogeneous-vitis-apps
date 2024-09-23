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
	{ output_r int 64 regular {axi_slave 0}  }
}
set hasAXIMCache 0
set hasAXIML2Cache 0
set AXIMCacheInstDict [dict create]
set C_modelArgMapList {[ 
	{ "Name" : "gmem", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READWRITE", "bitSlice":[ {"cElement": [{"cName": "image_rgb","offset": { "type": "dynamic","port_name": "image_rgb","bundle": "control"},"direction": "READONLY"},{"cName": "output_r","offset": { "type": "dynamic","port_name": "output_r","bundle": "control"},"direction": "READWRITE"}]}]} , 
 	{ "Name" : "image_rgb", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":27}} , 
 	{ "Name" : "output_r", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":28}, "offset_end" : {"in":39}} ]}
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
	{ s_axi_control_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 6 signal -1 } 
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
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"edgedetect","role":"start","value":"0","valid_bit":"0"},{"name":"edgedetect","role":"continue","value":"0","valid_bit":"4"},{"name":"edgedetect","role":"auto_start","value":"0","valid_bit":"7"},{"name":"image_rgb","role":"data","value":"16"},{"name":"output_r","role":"data","value":"28"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"edgedetect","role":"start","value":"0","valid_bit":"0"},{"name":"edgedetect","role":"done","value":"0","valid_bit":"1"},{"name":"edgedetect","role":"idle","value":"0","valid_bit":"2"},{"name":"edgedetect","role":"ready","value":"0","valid_bit":"3"},{"name":"edgedetect","role":"auto_start","value":"0","valid_bit":"7"}] },
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "10", "12", "15", "26", "48", "51", "54", "59", "62", "67", "68"],
		"CDFG" : "edgedetect",
		"Protocol" : "ap_ctrl_chain",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5249984", "EstimateLatencyMax" : "5249984",
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
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211", "Port" : "gmem", "Inst_start_state" : "3", "Inst_end_state" : "4"},
					{"ID" : "26", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227", "Port" : "gmem", "Inst_start_state" : "6", "Inst_end_state" : "7"},
					{"ID" : "54", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4_fu_260", "Port" : "gmem", "Inst_start_state" : "9", "Inst_end_state" : "10"},
					{"ID" : "59", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_158_3_VITIS_LOOP_160_4_fu_275", "Port" : "gmem", "Inst_start_state" : "11", "Inst_end_state" : "12"},
					{"ID" : "62", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2_fu_285", "Port" : "gmem", "Inst_start_state" : "14", "Inst_end_state" : "15"}]},
			{"Name" : "image_rgb", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211", "Port" : "mask_table", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "convolve2d_smoothing_unsigned_char_unsigned_char_filter", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2_fu_204", "Port" : "convolve2d_smoothing_unsigned_char_unsigned_char_filter", "Inst_start_state" : "1", "Inst_end_state" : "2"}]},
			{"Name" : "convolve2d_vertical_unsigned_char_unsigned_char_filter", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2_fu_246", "Port" : "convolve2d_vertical_unsigned_char_unsigned_char_filter", "Inst_start_state" : "7", "Inst_end_state" : "8"}]},
			{"Name" : "convolve2d_horizontal_unsigned_char_unsigned_char_filter", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2_fu_253", "Port" : "convolve2d_horizontal_unsigned_char_unsigned_char_filter", "Inst_start_state" : "7", "Inst_end_state" : "8"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_58_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "83", "FirstState" : "ap_ST_fsm_state5", "LastState" : ["ap_ST_fsm_state7"], "QuitState" : ["ap_ST_fsm_state7"], "PreState" : ["ap_ST_fsm_state4"], "PostState" : ["ap_ST_fsm_state8"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_gray_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_gray_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_gray_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_gray_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_gray_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_gray_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.temp_buf_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_1_fu_182", "Parent" : "0", "Child" : ["9"],
		"CDFG" : "edgedetect_Pipeline_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "307202", "EstimateLatencyMax" : "307202",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "image_gray_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_1_fu_182.flow_control_loop_pipe_sequential_init_U", "Parent" : "8"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_2_fu_198", "Parent" : "0", "Child" : ["11"],
		"CDFG" : "edgedetect_Pipeline_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "307202", "EstimateLatencyMax" : "307202",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "temp_buf", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_state1", "FirstStateIter" : "", "FirstStateBlock" : "ap_ST_fsm_state1_blk", "LastState" : "ap_ST_fsm_state1", "LastStateIter" : "", "LastStateBlock" : "ap_ST_fsm_state1_blk", "QuitState" : "ap_ST_fsm_state1", "QuitStateIter" : "", "QuitStateBlock" : "ap_ST_fsm_state1_blk", "OneDepthLoop" : "1", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_2_fu_198.flow_control_loop_pipe_sequential_init_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2_fu_204", "Parent" : "0", "Child" : ["13", "14"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "normal_factor_2_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "convolve2d_smoothing_unsigned_char_unsigned_char_filter", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_47_1_VITIS_LOOP_49_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2_fu_204.convolve2d_smoothing_unsigned_char_unsigned_char_filter_U", "Parent" : "12"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2_fu_204.flow_control_loop_pipe_sequential_init_U", "Parent" : "12"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211", "Parent" : "0", "Child" : ["16", "17", "18", "19", "20", "21", "22", "23", "24", "25"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "921708", "EstimateLatencyMax" : "921708",
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
			{"Name" : "image_gray_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_rgb", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_10_1_VITIS_LOOP_13_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "3", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage2", "LastStateIter" : "ap_enable_reg_pp0_iter36", "LastStateBlock" : "ap_block_pp0_stage2_subdone", "QuitState" : "ap_ST_fsm_pp0_stage2", "QuitStateIter" : "ap_enable_reg_pp0_iter36", "QuitStateBlock" : "ap_block_pp0_stage2_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.mask_table_U", "Parent" : "15"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.fptrunc_64ns_32_2_no_dsp_1_U8", "Parent" : "15"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.fpext_32ns_64_2_no_dsp_1_U9", "Parent" : "15"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.dadd_64ns_64ns_64_8_full_dsp_1_U10", "Parent" : "15"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.dmul_64ns_64ns_64_7_max_dsp_1_U11", "Parent" : "15"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.sitodp_32ns_64_5_no_dsp_1_U12", "Parent" : "15"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.urem_19ns_4ns_3_23_1_U13", "Parent" : "15"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.mul_19ns_21ns_39_1_1_U14", "Parent" : "15"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.sparsemux_9_3_64_1_1_U15", "Parent" : "15"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_fu_211.flow_control_loop_pipe_sequential_init_U", "Parent" : "15"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227", "Parent" : "0", "Child" : ["27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_60_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "748", "EstimateLatencyMax" : "748",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "empty_28", "Type" : "None", "Direction" : "I"},
			{"Name" : "image_gray", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "empty_29", "Type" : "None", "Direction" : "I"},
			{"Name" : "empty", "Type" : "None", "Direction" : "I"},
			{"Name" : "normal_factor_2_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "icmp_ln55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_cast42", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_60_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter109", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter109", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.mul_19ns_21ns_39_1_1_U35", "Parent" : "26"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.urem_19ns_4ns_3_23_1_U36", "Parent" : "26"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.mul_19ns_21ns_39_1_1_U37", "Parent" : "26"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.mul_19ns_21ns_39_1_1_U38", "Parent" : "26"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.mul_19ns_21ns_39_1_1_U39", "Parent" : "26"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.mul_19ns_21ns_39_1_1_U40", "Parent" : "26"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.mul_19ns_21ns_39_1_1_U41", "Parent" : "26"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.mul_19ns_21ns_39_1_1_U42", "Parent" : "26"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.mul_19ns_21ns_39_1_1_U43", "Parent" : "26"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.mul_19ns_21ns_39_1_1_U44", "Parent" : "26"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.sparsemux_13_3_8_1_1_U45", "Parent" : "26"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.sparsemux_13_3_8_1_1_U46", "Parent" : "26"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.sparsemux_13_3_8_1_1_U47", "Parent" : "26"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.sparsemux_13_3_8_1_1_U48", "Parent" : "26"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.sparsemux_13_3_8_1_1_U49", "Parent" : "26"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.sparsemux_13_3_8_1_1_U50", "Parent" : "26"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.sparsemux_13_3_8_1_1_U51", "Parent" : "26"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.sparsemux_13_3_8_1_1_U52", "Parent" : "26"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.sparsemux_13_3_8_1_1_U53", "Parent" : "26"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.udiv_12ns_6ns_8_16_1_U54", "Parent" : "26"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_60_4_fu_227.flow_control_loop_pipe_sequential_init_U", "Parent" : "26"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2_fu_246", "Parent" : "0", "Child" : ["49", "50"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "normal_factor_5_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "convolve2d_vertical_unsigned_char_unsigned_char_filter", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_97_1_VITIS_LOOP_99_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2_fu_246.convolve2d_vertical_unsigned_char_unsigned_char_filter_U", "Parent" : "48"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2_fu_246.flow_control_loop_pipe_sequential_init_U", "Parent" : "48"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2_fu_253", "Parent" : "0", "Child" : ["52", "53"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "normal_factor_8_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "convolve2d_horizontal_unsigned_char_unsigned_char_filter", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_147_1_VITIS_LOOP_149_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2_fu_253.convolve2d_horizontal_unsigned_char_unsigned_char_filter_U", "Parent" : "51"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2_fu_253.flow_control_loop_pipe_sequential_init_U", "Parent" : "51"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4_fu_260", "Parent" : "0", "Child" : ["55", "56", "57", "58"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1524908", "EstimateLatencyMax" : "1524908",
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
			{"Name" : "image_gray_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "image_gray", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "normal_factor_5_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "icmp_ln105", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_108_3_VITIS_LOOP_110_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "5", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage2", "LastStateIter" : "ap_enable_reg_pp0_iter18", "LastStateBlock" : "ap_block_pp0_stage2_subdone", "QuitState" : "ap_ST_fsm_pp0_stage2", "QuitStateIter" : "ap_enable_reg_pp0_iter18", "QuitStateBlock" : "ap_block_pp0_stage2_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4_fu_260.mul_19ns_21ns_39_1_1_U78", "Parent" : "54"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4_fu_260.urem_19ns_4ns_3_23_1_U79", "Parent" : "54"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4_fu_260.sdiv_11s_6ns_8_15_1_U80", "Parent" : "54"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4_fu_260.flow_control_loop_pipe_sequential_init_U", "Parent" : "54"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_158_3_VITIS_LOOP_160_4_fu_275", "Parent" : "0", "Child" : ["60", "61"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_158_3_VITIS_LOOP_160_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1829873", "EstimateLatencyMax" : "1829873",
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
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "normal_factor_8_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "icmp_ln155", "Type" : "None", "Direction" : "I"},
			{"Name" : "temp_buf", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_158_3_VITIS_LOOP_160_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "6", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage4", "LastStateIter" : "ap_enable_reg_pp0_iter15", "LastStateBlock" : "ap_block_pp0_stage4_subdone", "QuitState" : "ap_ST_fsm_pp0_stage4", "QuitStateIter" : "ap_enable_reg_pp0_iter15", "QuitStateBlock" : "ap_block_pp0_stage4_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_158_3_VITIS_LOOP_160_4_fu_275.sdiv_11s_6ns_8_15_1_U94", "Parent" : "59"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_158_3_VITIS_LOOP_160_4_fu_275.flow_control_loop_pipe_sequential_init_U", "Parent" : "59"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2_fu_285", "Parent" : "0", "Child" : ["63", "64", "65", "66"],
		"CDFG" : "edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "307225", "EstimateLatencyMax" : "307225",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"}]},
			{"Name" : "sext_ln183", "Type" : "None", "Direction" : "I"},
			{"Name" : "image_gray", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "image_gray_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "temp_buf", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_183_1_VITIS_LOOP_185_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter25", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter25", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2_fu_285.urem_19ns_4ns_3_23_1_U100", "Parent" : "62"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2_fu_285.mul_19ns_21ns_39_1_1_U101", "Parent" : "62"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2_fu_285.sparsemux_13_3_8_1_1_U102", "Parent" : "62"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2_fu_285.flow_control_loop_pipe_sequential_init_U", "Parent" : "62"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.control_s_axi_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gmem_m_axi_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	edgedetect {
		gmem {Type IO LastRead 79 FirstWrite -1}
		image_rgb {Type I LastRead 2 FirstWrite -1}
		output_r {Type I LastRead 3 FirstWrite -1}
		mask_table {Type I LastRead -1 FirstWrite -1}
		convolve2d_smoothing_unsigned_char_unsigned_char_filter {Type I LastRead -1 FirstWrite -1}
		convolve2d_vertical_unsigned_char_unsigned_char_filter {Type I LastRead -1 FirstWrite -1}
		convolve2d_horizontal_unsigned_char_unsigned_char_filter {Type I LastRead -1 FirstWrite -1}}
	edgedetect_Pipeline_1 {
		image_gray_5 {Type O LastRead -1 FirstWrite 1}
		image_gray_4 {Type O LastRead -1 FirstWrite 1}
		image_gray_3 {Type O LastRead -1 FirstWrite 1}
		image_gray_2 {Type O LastRead -1 FirstWrite 1}
		image_gray_1 {Type O LastRead -1 FirstWrite 1}
		image_gray {Type O LastRead -1 FirstWrite 1}}
	edgedetect_Pipeline_2 {
		temp_buf {Type O LastRead -1 FirstWrite 0}}
	edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2 {
		normal_factor_2_out {Type O LastRead -1 FirstWrite 0}
		convolve2d_smoothing_unsigned_char_unsigned_char_filter {Type I LastRead -1 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2 {
		gmem {Type I LastRead 75 FirstWrite -1}
		image_gray_5 {Type O LastRead -1 FirstWrite 110}
		image_gray_4 {Type O LastRead -1 FirstWrite 110}
		image_gray_3 {Type O LastRead -1 FirstWrite 110}
		image_gray_2 {Type O LastRead -1 FirstWrite 110}
		image_gray_1 {Type O LastRead -1 FirstWrite 110}
		image_gray {Type O LastRead -1 FirstWrite 110}
		image_rgb {Type I LastRead 0 FirstWrite -1}
		mask_table {Type I LastRead -1 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_60_4 {
		gmem {Type O LastRead 42 FirstWrite 41}
		empty_28 {Type I LastRead 0 FirstWrite -1}
		image_gray {Type I LastRead 24 FirstWrite -1}
		image_gray_1 {Type I LastRead 24 FirstWrite -1}
		image_gray_2 {Type I LastRead 24 FirstWrite -1}
		image_gray_3 {Type I LastRead 24 FirstWrite -1}
		image_gray_4 {Type I LastRead 24 FirstWrite -1}
		image_gray_5 {Type I LastRead 24 FirstWrite -1}
		empty_29 {Type I LastRead 0 FirstWrite -1}
		empty {Type I LastRead 0 FirstWrite -1}
		normal_factor_2_reload {Type I LastRead 0 FirstWrite -1}
		icmp_ln55 {Type I LastRead 0 FirstWrite -1}
		p_cast42 {Type I LastRead 0 FirstWrite -1}
		output_r {Type I LastRead 0 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2 {
		normal_factor_5_out {Type O LastRead -1 FirstWrite 0}
		convolve2d_vertical_unsigned_char_unsigned_char_filter {Type I LastRead -1 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2 {
		normal_factor_8_out {Type O LastRead -1 FirstWrite 0}
		convolve2d_horizontal_unsigned_char_unsigned_char_filter {Type I LastRead -1 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4 {
		gmem {Type I LastRead 77 FirstWrite -1}
		image_gray_5 {Type O LastRead -1 FirstWrite 92}
		image_gray_4 {Type O LastRead -1 FirstWrite 92}
		image_gray_3 {Type O LastRead -1 FirstWrite 92}
		image_gray_2 {Type O LastRead -1 FirstWrite 92}
		image_gray_1 {Type O LastRead -1 FirstWrite 92}
		image_gray {Type O LastRead -1 FirstWrite 92}
		output_r {Type I LastRead 0 FirstWrite -1}
		normal_factor_5_reload {Type I LastRead 0 FirstWrite -1}
		icmp_ln105 {Type I LastRead 0 FirstWrite -1}}
	edgedetect_Pipeline_VITIS_LOOP_158_3_VITIS_LOOP_160_4 {
		gmem {Type I LastRead 78 FirstWrite -1}
		output_r {Type I LastRead 0 FirstWrite -1}
		normal_factor_8_reload {Type I LastRead 0 FirstWrite -1}
		icmp_ln155 {Type I LastRead 0 FirstWrite -1}
		temp_buf {Type O LastRead -1 FirstWrite 94}}
	edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2 {
		gmem {Type O LastRead -1 FirstWrite 25}
		sext_ln183 {Type I LastRead 0 FirstWrite -1}
		image_gray {Type I LastRead 2 FirstWrite -1}
		image_gray_1 {Type I LastRead 2 FirstWrite -1}
		image_gray_2 {Type I LastRead 2 FirstWrite -1}
		image_gray_3 {Type I LastRead 2 FirstWrite -1}
		image_gray_4 {Type I LastRead 2 FirstWrite -1}
		image_gray_5 {Type I LastRead 2 FirstWrite -1}
		temp_buf {Type I LastRead 22 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "5249984", "Max" : "5249984"}
	, {"Name" : "Interval", "Min" : "5249985", "Max" : "5249985"}
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
