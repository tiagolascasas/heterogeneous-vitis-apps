set SynModuleInfo {
  {SRCNAME edgedetect_Pipeline_1 MODELNAME edgedetect_Pipeline_1 RTLNAME edgedetect_edgedetect_Pipeline_1
    SUBMODULES {
      {MODELNAME edgedetect_flow_control_loop_pipe_sequential_init RTLNAME edgedetect_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME edgedetect_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME edgedetect_Pipeline_2 MODELNAME edgedetect_Pipeline_2 RTLNAME edgedetect_edgedetect_Pipeline_2}
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2
    SUBMODULES {
      {MODELNAME edgedetect_fptrunc_64ns_32_2_no_dsp_1 RTLNAME edgedetect_fptrunc_64ns_32_2_no_dsp_1 BINDTYPE op TYPE fptrunc IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_fpext_32ns_64_2_no_dsp_1 RTLNAME edgedetect_fpext_32ns_64_2_no_dsp_1 BINDTYPE op TYPE fpext IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_dadd_64ns_64ns_64_8_full_dsp_1 RTLNAME edgedetect_dadd_64ns_64ns_64_8_full_dsp_1 BINDTYPE op TYPE dadd IMPL fulldsp LATENCY 7 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_dmul_64ns_64ns_64_7_max_dsp_1 RTLNAME edgedetect_dmul_64ns_64ns_64_7_max_dsp_1 BINDTYPE op TYPE dmul IMPL maxdsp LATENCY 6 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_sitodp_32ns_64_5_no_dsp_1 RTLNAME edgedetect_sitodp_32ns_64_5_no_dsp_1 BINDTYPE op TYPE sitodp IMPL auto LATENCY 4 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_urem_19ns_4ns_3_23_1 RTLNAME edgedetect_urem_19ns_4ns_3_23_1 BINDTYPE op TYPE urem IMPL auto LATENCY 22 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_mul_19ns_21ns_39_1_1 RTLNAME edgedetect_mul_19ns_21ns_39_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_sparsemux_9_3_64_1_1 RTLNAME edgedetect_sparsemux_9_3_64_1_1 BINDTYPE op TYPE sparsemux IMPL auto}
      {MODELNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_mask_table_ROM_AUTO_1R RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_10_1_VITIS_LOOP_13_2_mask_table_ROM_AUTO_1R BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2
    SUBMODULES {
      {MODELNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2_convolve2d_smoothing_unsibkb RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_47_1_VITIS_LOOP_49_2_convolve2d_smoothing_unsibkb BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_60_4 MODELNAME edgedetect_Pipeline_VITIS_LOOP_60_4 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_60_4
    SUBMODULES {
      {MODELNAME edgedetect_sparsemux_13_3_8_1_1 RTLNAME edgedetect_sparsemux_13_3_8_1_1 BINDTYPE op TYPE sparsemux IMPL auto}
      {MODELNAME edgedetect_udiv_12ns_6ns_8_16_1 RTLNAME edgedetect_udiv_12ns_6ns_8_16_1 BINDTYPE op TYPE udiv IMPL auto LATENCY 15 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2
    SUBMODULES {
      {MODELNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2_convolve2d_vertical_unsigcud RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2_convolve2d_vertical_unsigcud BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4 MODELNAME edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_108_3_VITIS_LOOP_110_4
    SUBMODULES {
      {MODELNAME edgedetect_sdiv_11s_6ns_8_15_1 RTLNAME edgedetect_sdiv_11s_6ns_8_15_1 BINDTYPE op TYPE sdiv IMPL auto LATENCY 14 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2
    SUBMODULES {
      {MODELNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2_convolve2d_horizontal_udEe RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_147_1_VITIS_LOOP_149_2_convolve2d_horizontal_udEe BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_158_3_VITIS_LOOP_160_4 MODELNAME edgedetect_Pipeline_VITIS_LOOP_158_3_VITIS_LOOP_160_4 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_158_3_VITIS_LOOP_160_4}
  {SRCNAME edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2 MODELNAME edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2 RTLNAME edgedetect_edgedetect_Pipeline_VITIS_LOOP_183_1_VITIS_LOOP_185_2}
  {SRCNAME edgedetect MODELNAME edgedetect RTLNAME edgedetect IS_TOP 1
    SUBMODULES {
      {MODELNAME edgedetect_image_gray_RAM_1WNR_AUTO_1R1W RTLNAME edgedetect_image_gray_RAM_1WNR_AUTO_1R1W BINDTYPE storage TYPE ram_1wnr IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_temp_buf_RAM_AUTO_1R1W RTLNAME edgedetect_temp_buf_RAM_AUTO_1R1W BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME edgedetect_gmem_m_axi RTLNAME edgedetect_gmem_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME edgedetect_control_s_axi RTLNAME edgedetect_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}
