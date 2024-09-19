set SynModuleInfo {
  {SRCNAME vadd MODELNAME vadd RTLNAME vadd IS_TOP 1
    SUBMODULES {
      {MODELNAME vadd_gmem_m_axi RTLNAME vadd_gmem_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME vadd_control_s_axi RTLNAME vadd_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
      {MODELNAME vadd_flow_control_loop_pipe RTLNAME vadd_flow_control_loop_pipe BINDTYPE interface TYPE internal_upc_flow_control INSTNAME vadd_flow_control_loop_pipe_U}
    }
  }
}
