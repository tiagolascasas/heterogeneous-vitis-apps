set SynModuleInfo {
  {SRCNAME cluster_Pipeline_VITIS_LOOP_163_1 MODELNAME cluster_Pipeline_VITIS_LOOP_163_1 RTLNAME cluster_cluster_Pipeline_VITIS_LOOP_163_1
    SUBMODULES {
      {MODELNAME cluster_flow_control_loop_pipe_sequential_init RTLNAME cluster_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME cluster_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME cluster_Pipeline_VITIS_LOOP_41_3_VITIS_LOOP_44_4 MODELNAME cluster_Pipeline_VITIS_LOOP_41_3_VITIS_LOOP_44_4 RTLNAME cluster_cluster_Pipeline_VITIS_LOOP_41_3_VITIS_LOOP_44_4
    SUBMODULES {
      {MODELNAME cluster_mul_31ns_32s_62_1_1 RTLNAME cluster_mul_31ns_32s_62_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME cluster_Pipeline_VITIS_LOOP_68_1_VITIS_LOOP_71_2 MODELNAME cluster_Pipeline_VITIS_LOOP_68_1_VITIS_LOOP_71_2 RTLNAME cluster_cluster_Pipeline_VITIS_LOOP_68_1_VITIS_LOOP_71_2
    SUBMODULES {
      {MODELNAME cluster_sitofp_32ns_32_5_no_dsp_1 RTLNAME cluster_sitofp_32ns_32_5_no_dsp_1 BINDTYPE op TYPE sitofp IMPL auto LATENCY 4 ALLOW_PRAGMA 1}
      {MODELNAME cluster_mul_32s_32s_32_1_1 RTLNAME cluster_mul_32s_32s_32_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME cluster_Pipeline_VITIS_LOOP_92_1 MODELNAME cluster_Pipeline_VITIS_LOOP_92_1 RTLNAME cluster_cluster_Pipeline_VITIS_LOOP_92_1}
  {SRCNAME cluster_Pipeline_VITIS_LOOP_98_2_VITIS_LOOP_101_3 MODELNAME cluster_Pipeline_VITIS_LOOP_98_2_VITIS_LOOP_101_3 RTLNAME cluster_cluster_Pipeline_VITIS_LOOP_98_2_VITIS_LOOP_101_3}
  {SRCNAME cluster_Pipeline_VITIS_LOOP_112_5 MODELNAME cluster_Pipeline_VITIS_LOOP_112_5 RTLNAME cluster_cluster_Pipeline_VITIS_LOOP_112_5}
  {SRCNAME cluster_Pipeline_VITIS_LOOP_137_1_VITIS_LOOP_140_2 MODELNAME cluster_Pipeline_VITIS_LOOP_137_1_VITIS_LOOP_140_2 RTLNAME cluster_cluster_Pipeline_VITIS_LOOP_137_1_VITIS_LOOP_140_2
    SUBMODULES {
      {MODELNAME cluster_mul_33s_32s_62_1_1 RTLNAME cluster_mul_33s_32s_62_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME cluster MODELNAME cluster RTLNAME cluster IS_TOP 1
    SUBMODULES {
      {MODELNAME cluster_mul_32ns_32ns_64_1_1 RTLNAME cluster_mul_32ns_32ns_64_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME cluster_faddfsub_32ns_32ns_32_6_full_dsp_1 RTLNAME cluster_faddfsub_32ns_32ns_32_6_full_dsp_1 BINDTYPE op TYPE fadd IMPL fulldsp LATENCY 5 ALLOW_PRAGMA 1}
      {MODELNAME cluster_gmem_m_axi RTLNAME cluster_gmem_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME cluster_control_s_axi RTLNAME cluster_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}
