set SynModuleInfo {
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2
    SUBMODULES {
      {MODELNAME edgedetect_fptrunc_64ns_32_2_no_dsp_1 RTLNAME edgedetect_fptrunc_64ns_32_2_no_dsp_1 BINDTYPE op TYPE fptrunc IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_fpext_32ns_64_2_no_dsp_1 RTLNAME edgedetect_fpext_32ns_64_2_no_dsp_1 BINDTYPE op TYPE fpext IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_dadd_64ns_64ns_64_8_full_dsp_1 RTLNAME edgedetect_dadd_64ns_64ns_64_8_full_dsp_1 BINDTYPE op TYPE dadd IMPL fulldsp LATENCY 7 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_dmul_64ns_64ns_64_7_max_dsp_1 RTLNAME edgedetect_dmul_64ns_64ns_64_7_max_dsp_1 BINDTYPE op TYPE dmul IMPL maxdsp LATENCY 6 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_sitodp_32ns_64_5_no_dsp_1 RTLNAME edgedetect_sitodp_32ns_64_5_no_dsp_1 BINDTYPE op TYPE sitodp IMPL auto LATENCY 4 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_sparsemux_9_3_64_1_1 RTLNAME edgedetect_sparsemux_9_3_64_1_1 BINDTYPE op TYPE sparsemux IMPL auto}
      {MODELNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_mask_table_ROM_AUTO_1R RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_mask_table_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_flow_control_loop_pipe_sequential_init RTLNAME edgedetect_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME edgedetect_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_41_1_VITIS_LOOP_43_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_41_1_VITIS_LOOP_43_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_41_1_VITIS_LOOP_43_2}
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4 MODELNAME edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_52_3_VITIS_LOOP_54_4
    SUBMODULES {
      {MODELNAME edgedetect_mul_8ns_8ns_16_1_1 RTLNAME edgedetect_mul_8ns_8ns_16_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_udiv_20ns_12ns_8_24_1 RTLNAME edgedetect_udiv_20ns_12ns_8_24_1 BINDTYPE op TYPE udiv IMPL auto LATENCY 23 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_mac_muladd_8ns_8ns_16ns_17_4_1 RTLNAME edgedetect_mac_muladd_8ns_8ns_16ns_17_4_1 BINDTYPE op TYPE all IMPL dsp_slice LATENCY 3}
      {MODELNAME edgedetect_mac_muladd_8ns_8ns_17ns_18_4_1 RTLNAME edgedetect_mac_muladd_8ns_8ns_17ns_18_4_1 BINDTYPE op TYPE all IMPL dsp_slice LATENCY 3}
    }
  }
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_84_1_VITIS_LOOP_86_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_84_1_VITIS_LOOP_86_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_84_1_VITIS_LOOP_86_2}
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4 MODELNAME edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_95_3_VITIS_LOOP_97_4}
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_127_1_VITIS_LOOP_129_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_127_1_VITIS_LOOP_129_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_127_1_VITIS_LOOP_129_2}
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4 MODELNAME edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_138_3_VITIS_LOOP_140_4}
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_162_1_VITIS_LOOP_164_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_162_1_VITIS_LOOP_164_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_162_1_VITIS_LOOP_164_2}
  {SRCNAME edgedetect MODELNAME edgedetect RTLNAME edgedetect IS_TOP 1
    SUBMODULES {
      {MODELNAME edgedetect_gmem_m_axi RTLNAME edgedetect_gmem_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME edgedetect_control_s_axi RTLNAME edgedetect_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}
