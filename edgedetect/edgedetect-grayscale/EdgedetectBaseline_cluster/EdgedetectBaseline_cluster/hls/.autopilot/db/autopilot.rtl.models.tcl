set SynModuleInfo {
  {SRCNAME edgedetect MODELNAME edgedetect RTLNAME edgedetect IS_TOP 1
    SUBMODULES {
      {MODELNAME edgedetect_fptrunc_64ns_32_2_no_dsp_1 RTLNAME edgedetect_fptrunc_64ns_32_2_no_dsp_1 BINDTYPE op TYPE fptrunc IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_fpext_32ns_64_2_no_dsp_1 RTLNAME edgedetect_fpext_32ns_64_2_no_dsp_1 BINDTYPE op TYPE fpext IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_dadd_64ns_64ns_64_8_full_dsp_1 RTLNAME edgedetect_dadd_64ns_64ns_64_8_full_dsp_1 BINDTYPE op TYPE dadd IMPL fulldsp LATENCY 7 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_dmul_64ns_64ns_64_7_max_dsp_1 RTLNAME edgedetect_dmul_64ns_64ns_64_7_max_dsp_1 BINDTYPE op TYPE dmul IMPL maxdsp LATENCY 6 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_sitodp_32ns_64_5_no_dsp_1 RTLNAME edgedetect_sitodp_32ns_64_5_no_dsp_1 BINDTYPE op TYPE sitodp IMPL auto LATENCY 4 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_sparsemux_9_3_64_1_1 RTLNAME edgedetect_sparsemux_9_3_64_1_1 BINDTYPE op TYPE sparsemux IMPL auto}
      {MODELNAME edgedetect_mask_table_ROM_AUTO_1R RTLNAME edgedetect_mask_table_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_gmem_m_axi RTLNAME edgedetect_gmem_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME edgedetect_control_s_axi RTLNAME edgedetect_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
      {MODELNAME edgedetect_flow_control_loop_delay_pipe RTLNAME edgedetect_flow_control_loop_delay_pipe BINDTYPE interface TYPE internal_upc_flow_control INSTNAME edgedetect_flow_control_loop_delay_pipe_U}
    }
  }
}
