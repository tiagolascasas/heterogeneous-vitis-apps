set moduleName edgedetect_Pipeline_1
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set DLRegFirstOffset 0
set DLRegItemOffset 0
set C_modelName {edgedetect_Pipeline_1}
set C_modelType { void 0 }
set ap_memory_interface_dict [dict create]
dict set ap_memory_interface_dict image_gray_5 { MEM_WIDTH 8 MEM_SIZE 51200 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict image_gray_4 { MEM_WIDTH 8 MEM_SIZE 51200 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict image_gray_3 { MEM_WIDTH 8 MEM_SIZE 51200 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict image_gray_2 { MEM_WIDTH 8 MEM_SIZE 51200 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict image_gray_1 { MEM_WIDTH 8 MEM_SIZE 51200 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict image_gray { MEM_WIDTH 8 MEM_SIZE 51200 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
set C_modelArgList {
	{ image_gray_5 int 8 regular {array 51200 { 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 } 0 1 }  }
	{ image_gray_4 int 8 regular {array 51200 { 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 } 0 1 }  }
	{ image_gray_3 int 8 regular {array 51200 { 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 } 0 1 }  }
	{ image_gray_2 int 8 regular {array 51200 { 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 } 0 1 }  }
	{ image_gray_1 int 8 regular {array 51200 { 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 } 0 1 }  }
	{ image_gray int 8 regular {array 51200 { 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 } 0 1 }  }
}
set hasAXIMCache 0
set hasAXIML2Cache 0
set AXIMCacheInstDict [dict create]
set C_modelArgMapList {[ 
	{ "Name" : "image_gray_5", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "image_gray_4", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "image_gray_3", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "image_gray_2", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "image_gray_1", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "image_gray", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 30
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ image_gray_5_address0 sc_out sc_lv 16 signal 0 } 
	{ image_gray_5_ce0 sc_out sc_logic 1 signal 0 } 
	{ image_gray_5_we0 sc_out sc_logic 1 signal 0 } 
	{ image_gray_5_d0 sc_out sc_lv 8 signal 0 } 
	{ image_gray_4_address0 sc_out sc_lv 16 signal 1 } 
	{ image_gray_4_ce0 sc_out sc_logic 1 signal 1 } 
	{ image_gray_4_we0 sc_out sc_logic 1 signal 1 } 
	{ image_gray_4_d0 sc_out sc_lv 8 signal 1 } 
	{ image_gray_3_address0 sc_out sc_lv 16 signal 2 } 
	{ image_gray_3_ce0 sc_out sc_logic 1 signal 2 } 
	{ image_gray_3_we0 sc_out sc_logic 1 signal 2 } 
	{ image_gray_3_d0 sc_out sc_lv 8 signal 2 } 
	{ image_gray_2_address0 sc_out sc_lv 16 signal 3 } 
	{ image_gray_2_ce0 sc_out sc_logic 1 signal 3 } 
	{ image_gray_2_we0 sc_out sc_logic 1 signal 3 } 
	{ image_gray_2_d0 sc_out sc_lv 8 signal 3 } 
	{ image_gray_1_address0 sc_out sc_lv 16 signal 4 } 
	{ image_gray_1_ce0 sc_out sc_logic 1 signal 4 } 
	{ image_gray_1_we0 sc_out sc_logic 1 signal 4 } 
	{ image_gray_1_d0 sc_out sc_lv 8 signal 4 } 
	{ image_gray_address0 sc_out sc_lv 16 signal 5 } 
	{ image_gray_ce0 sc_out sc_logic 1 signal 5 } 
	{ image_gray_we0 sc_out sc_logic 1 signal 5 } 
	{ image_gray_d0 sc_out sc_lv 8 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "image_gray_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "image_gray_5", "role": "address0" }} , 
 	{ "name": "image_gray_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_5", "role": "ce0" }} , 
 	{ "name": "image_gray_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_5", "role": "we0" }} , 
 	{ "name": "image_gray_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_gray_5", "role": "d0" }} , 
 	{ "name": "image_gray_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "image_gray_4", "role": "address0" }} , 
 	{ "name": "image_gray_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_4", "role": "ce0" }} , 
 	{ "name": "image_gray_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_4", "role": "we0" }} , 
 	{ "name": "image_gray_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_gray_4", "role": "d0" }} , 
 	{ "name": "image_gray_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "image_gray_3", "role": "address0" }} , 
 	{ "name": "image_gray_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_3", "role": "ce0" }} , 
 	{ "name": "image_gray_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_3", "role": "we0" }} , 
 	{ "name": "image_gray_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_gray_3", "role": "d0" }} , 
 	{ "name": "image_gray_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "image_gray_2", "role": "address0" }} , 
 	{ "name": "image_gray_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_2", "role": "ce0" }} , 
 	{ "name": "image_gray_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_2", "role": "we0" }} , 
 	{ "name": "image_gray_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_gray_2", "role": "d0" }} , 
 	{ "name": "image_gray_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "image_gray_1", "role": "address0" }} , 
 	{ "name": "image_gray_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_1", "role": "ce0" }} , 
 	{ "name": "image_gray_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray_1", "role": "we0" }} , 
 	{ "name": "image_gray_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_gray_1", "role": "d0" }} , 
 	{ "name": "image_gray_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "image_gray", "role": "address0" }} , 
 	{ "name": "image_gray_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray", "role": "ce0" }} , 
 	{ "name": "image_gray_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_gray", "role": "we0" }} , 
 	{ "name": "image_gray_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "image_gray", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	edgedetect_Pipeline_1 {
		image_gray_5 {Type O LastRead -1 FirstWrite 1}
		image_gray_4 {Type O LastRead -1 FirstWrite 1}
		image_gray_3 {Type O LastRead -1 FirstWrite 1}
		image_gray_2 {Type O LastRead -1 FirstWrite 1}
		image_gray_1 {Type O LastRead -1 FirstWrite 1}
		image_gray {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "307202", "Max" : "307202"}
	, {"Name" : "Interval", "Min" : "307202", "Max" : "307202"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	image_gray_5 { ap_memory {  { image_gray_5_address0 mem_address 1 16 }  { image_gray_5_ce0 mem_ce 1 1 }  { image_gray_5_we0 mem_we 1 1 }  { image_gray_5_d0 mem_din 1 8 } } }
	image_gray_4 { ap_memory {  { image_gray_4_address0 mem_address 1 16 }  { image_gray_4_ce0 mem_ce 1 1 }  { image_gray_4_we0 mem_we 1 1 }  { image_gray_4_d0 mem_din 1 8 } } }
	image_gray_3 { ap_memory {  { image_gray_3_address0 mem_address 1 16 }  { image_gray_3_ce0 mem_ce 1 1 }  { image_gray_3_we0 mem_we 1 1 }  { image_gray_3_d0 mem_din 1 8 } } }
	image_gray_2 { ap_memory {  { image_gray_2_address0 mem_address 1 16 }  { image_gray_2_ce0 mem_ce 1 1 }  { image_gray_2_we0 mem_we 1 1 }  { image_gray_2_d0 mem_din 1 8 } } }
	image_gray_1 { ap_memory {  { image_gray_1_address0 mem_address 1 16 }  { image_gray_1_ce0 mem_ce 1 1 }  { image_gray_1_we0 mem_we 1 1 }  { image_gray_1_d0 mem_din 1 8 } } }
	image_gray { ap_memory {  { image_gray_address0 mem_address 1 16 }  { image_gray_ce0 mem_ce 1 1 }  { image_gray_we0 mem_we 1 1 }  { image_gray_d0 mem_din 1 8 } } }
}
