
set TopModule "edgedetect"
set ClockPeriod 6.667
set ClockList ap_clk
set HasVivadoClockPeriod 0
set CombLogicFlag 0
set PipelineFlag 0
set DataflowTaskPipelineFlag 1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 1
set FftOrFirFlag 0
set NbRWValue 0
set intNbAccess 0
set NewDSPMapping 1
set HasDSPModule 1
set ResetLevelFlag 0
set ResetStyle control
set ResetSyncFlag 1
set ResetRegisterFlag 1
set ResetVariableFlag 0
set ResetRegisterNum 3
set FsmEncStyle onehot
set MaxFanout 0
set RtlPrefix {}
set RtlSubPrefix edgedetect_
set ExtraCCFlags {}
set ExtraCLdFlags {}
set SynCheckOptions {}
set PresynOptions {}
set PreprocOptions {}
set SchedOptions {}
set BindOptions {}
set RtlGenOptions {}
set RtlWriterOptions {}
set CbcGenFlag {}
set CasGenFlag {}
set CasMonitorFlag {}
set AutoSimOptions {}
set ExportMCPathFlag 0
set SCTraceFileName mytrace
set SCTraceFileFormat vcd
set SCTraceOption all
set TargetInfo xczu9eg:-ffvb1156:-2-e
set SourceFiles {sc {} c ../../../EdgedetectBaseline_host/src/edgedetect.cpp}
set SourceFlags {sc {} c {{}}}
set DirectiveFile {}
set TBFiles {verilog {../../../EdgedetectBaseline_host/src/util.h ../../../EdgedetectBaseline_host/src/util.cpp ../../../EdgedetectBaseline_host/src/main.cpp ../../../EdgedetectBaseline_host/src/edgedetect.h ../../../EdgedetectBaseline_host/src/config.h} bc {../../../EdgedetectBaseline_host/src/util.h ../../../EdgedetectBaseline_host/src/util.cpp ../../../EdgedetectBaseline_host/src/main.cpp ../../../EdgedetectBaseline_host/src/edgedetect.h ../../../EdgedetectBaseline_host/src/config.h} vhdl {../../../EdgedetectBaseline_host/src/util.h ../../../EdgedetectBaseline_host/src/util.cpp ../../../EdgedetectBaseline_host/src/main.cpp ../../../EdgedetectBaseline_host/src/edgedetect.h ../../../EdgedetectBaseline_host/src/config.h} sc {../../../EdgedetectBaseline_host/src/util.h ../../../EdgedetectBaseline_host/src/util.cpp ../../../EdgedetectBaseline_host/src/main.cpp ../../../EdgedetectBaseline_host/src/edgedetect.h ../../../EdgedetectBaseline_host/src/config.h} cas {../../../EdgedetectBaseline_host/src/util.h ../../../EdgedetectBaseline_host/src/util.cpp ../../../EdgedetectBaseline_host/src/main.cpp ../../../EdgedetectBaseline_host/src/edgedetect.h ../../../EdgedetectBaseline_host/src/config.h} c {}}
set SpecLanguage C
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set TBInstNames {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set XDCFiles {}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set TBTVFileNotFound {}
set AppFile {}
set ApsFile hls.aps
set AvePath ../../.
set DefaultPlatform DefaultPlatform
set multiClockList {}
set SCPortClockMap {}
set intNbAccess 0
set PlatformFiles {{DefaultPlatform {xilinx/zynquplus/zynquplus}}}
set HPFPO 0
