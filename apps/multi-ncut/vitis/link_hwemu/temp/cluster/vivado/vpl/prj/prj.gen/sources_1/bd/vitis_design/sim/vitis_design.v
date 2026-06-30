//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2024.2.2 (lin64) Build 6060944 Thu Mar 06 19:10:09 MST 2025
//Date        : Sat Jun 27 00:28:49 2026
//Host        : tls-Legion-5-15ACH6H running 64-bit Ubuntu Resolute Raccoon (development branch)
//Command     : generate_target vitis_design.bd
//Design      : vitis_design
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module System_DPA_imp_XGY37V
   (MON_M_AXI_araddr,
    MON_M_AXI_arburst,
    MON_M_AXI_arid,
    MON_M_AXI_arlen,
    MON_M_AXI_arsize,
    MON_M_AXI_arvalid,
    MON_M_AXI_awaddr,
    MON_M_AXI_awburst,
    MON_M_AXI_awcache,
    MON_M_AXI_awid,
    MON_M_AXI_awlen,
    MON_M_AXI_awlock,
    MON_M_AXI_awprot,
    MON_M_AXI_awqos,
    MON_M_AXI_awready,
    MON_M_AXI_awregion,
    MON_M_AXI_awsize,
    MON_M_AXI_awvalid,
    MON_M_AXI_bid,
    MON_M_AXI_bready,
    MON_M_AXI_bresp,
    MON_M_AXI_bvalid,
    MON_M_AXI_rready,
    MON_M_AXI_wdata,
    MON_M_AXI_wlast,
    MON_M_AXI_wready,
    MON_M_AXI_wstrb,
    MON_M_AXI_wvalid,
    MON_S_AXI_araddr,
    MON_S_AXI_arprot,
    MON_S_AXI_arready,
    MON_S_AXI_arvalid,
    MON_S_AXI_awaddr,
    MON_S_AXI_awprot,
    MON_S_AXI_awready,
    MON_S_AXI_awvalid,
    MON_S_AXI_bready,
    MON_S_AXI_bresp,
    MON_S_AXI_bvalid,
    MON_S_AXI_rdata,
    MON_S_AXI_rready,
    MON_S_AXI_rresp,
    MON_S_AXI_rvalid,
    MON_S_AXI_wdata,
    MON_S_AXI_wready,
    MON_S_AXI_wstrb,
    MON_S_AXI_wvalid,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arid,
    S00_AXI_arlen,
    S00_AXI_arlock,
    S00_AXI_arprot,
    S00_AXI_arqos,
    S00_AXI_arready,
    S00_AXI_arregion,
    S00_AXI_arsize,
    S00_AXI_aruser,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awid,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awregion,
    S00_AXI_awsize,
    S00_AXI_awuser,
    S00_AXI_awvalid,
    S00_AXI_bid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rdata,
    S00_AXI_rid,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid,
    S00_AXI_wdata,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid,
    S_AXIMM_araddr,
    S_AXIMM_arburst,
    S_AXIMM_arlen,
    S_AXIMM_arready,
    S_AXIMM_arsize,
    S_AXIMM_arvalid,
    S_AXIMM_awaddr,
    S_AXIMM_awburst,
    S_AXIMM_awlen,
    S_AXIMM_awready,
    S_AXIMM_awsize,
    S_AXIMM_awvalid,
    S_AXIMM_bready,
    S_AXIMM_bresp,
    S_AXIMM_bvalid,
    S_AXIMM_rdata,
    S_AXIMM_rlast,
    S_AXIMM_rready,
    S_AXIMM_rresp,
    S_AXIMM_rvalid,
    S_AXIMM_wdata,
    S_AXIMM_wlast,
    S_AXIMM_wready,
    S_AXIMM_wstrb,
    S_AXIMM_wvalid,
    mon_clk,
    mon_resetn);
  input [63:0]MON_M_AXI_araddr;
  input [1:0]MON_M_AXI_arburst;
  input [0:0]MON_M_AXI_arid;
  input [7:0]MON_M_AXI_arlen;
  input [2:0]MON_M_AXI_arsize;
  input MON_M_AXI_arvalid;
  input [63:0]MON_M_AXI_awaddr;
  input [1:0]MON_M_AXI_awburst;
  input [3:0]MON_M_AXI_awcache;
  input [0:0]MON_M_AXI_awid;
  input [7:0]MON_M_AXI_awlen;
  input [1:0]MON_M_AXI_awlock;
  input [2:0]MON_M_AXI_awprot;
  input [3:0]MON_M_AXI_awqos;
  input MON_M_AXI_awready;
  input [3:0]MON_M_AXI_awregion;
  input [2:0]MON_M_AXI_awsize;
  input MON_M_AXI_awvalid;
  input [0:0]MON_M_AXI_bid;
  input MON_M_AXI_bready;
  input [1:0]MON_M_AXI_bresp;
  input MON_M_AXI_bvalid;
  input MON_M_AXI_rready;
  input [63:0]MON_M_AXI_wdata;
  input MON_M_AXI_wlast;
  input MON_M_AXI_wready;
  input [7:0]MON_M_AXI_wstrb;
  input MON_M_AXI_wvalid;
  input [6:0]MON_S_AXI_araddr;
  input [2:0]MON_S_AXI_arprot;
  input MON_S_AXI_arready;
  input MON_S_AXI_arvalid;
  input [6:0]MON_S_AXI_awaddr;
  input [2:0]MON_S_AXI_awprot;
  input MON_S_AXI_awready;
  input MON_S_AXI_awvalid;
  input MON_S_AXI_bready;
  input [1:0]MON_S_AXI_bresp;
  input MON_S_AXI_bvalid;
  input [31:0]MON_S_AXI_rdata;
  input MON_S_AXI_rready;
  input [1:0]MON_S_AXI_rresp;
  input MON_S_AXI_rvalid;
  input [31:0]MON_S_AXI_wdata;
  input MON_S_AXI_wready;
  input [3:0]MON_S_AXI_wstrb;
  input MON_S_AXI_wvalid;
  input [39:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [15:0]S00_AXI_arid;
  input [7:0]S00_AXI_arlen;
  input [0:0]S00_AXI_arlock;
  input [2:0]S00_AXI_arprot;
  input [3:0]S00_AXI_arqos;
  output S00_AXI_arready;
  input [3:0]S00_AXI_arregion;
  input [2:0]S00_AXI_arsize;
  input [15:0]S00_AXI_aruser;
  input S00_AXI_arvalid;
  input [39:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [15:0]S00_AXI_awid;
  input [7:0]S00_AXI_awlen;
  input [0:0]S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [3:0]S00_AXI_awregion;
  input [2:0]S00_AXI_awsize;
  input [15:0]S00_AXI_awuser;
  input S00_AXI_awvalid;
  output [15:0]S00_AXI_bid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  output [31:0]S00_AXI_rdata;
  output [15:0]S00_AXI_rid;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;
  input [31:0]S00_AXI_wdata;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [3:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;
  input [31:0]S_AXIMM_araddr;
  input [1:0]S_AXIMM_arburst;
  input [7:0]S_AXIMM_arlen;
  output S_AXIMM_arready;
  input [2:0]S_AXIMM_arsize;
  input S_AXIMM_arvalid;
  input [31:0]S_AXIMM_awaddr;
  input [1:0]S_AXIMM_awburst;
  input [7:0]S_AXIMM_awlen;
  output S_AXIMM_awready;
  input [2:0]S_AXIMM_awsize;
  input S_AXIMM_awvalid;
  input S_AXIMM_bready;
  output [1:0]S_AXIMM_bresp;
  output S_AXIMM_bvalid;
  output [31:0]S_AXIMM_rdata;
  output S_AXIMM_rlast;
  input S_AXIMM_rready;
  output [1:0]S_AXIMM_rresp;
  output S_AXIMM_rvalid;
  input [31:0]S_AXIMM_wdata;
  input S_AXIMM_wlast;
  output S_AXIMM_wready;
  input [3:0]S_AXIMM_wstrb;
  input S_AXIMM_wvalid;
  input mon_clk;
  input mon_resetn;

  wire [63:0]MON_M_AXI_araddr;
  wire [1:0]MON_M_AXI_arburst;
  wire [0:0]MON_M_AXI_arid;
  wire [7:0]MON_M_AXI_arlen;
  wire [2:0]MON_M_AXI_arsize;
  wire MON_M_AXI_arvalid;
  wire [63:0]MON_M_AXI_awaddr;
  wire [1:0]MON_M_AXI_awburst;
  wire [0:0]MON_M_AXI_awid;
  wire [7:0]MON_M_AXI_awlen;
  wire MON_M_AXI_awready;
  wire [2:0]MON_M_AXI_awsize;
  wire MON_M_AXI_awvalid;
  wire [0:0]MON_M_AXI_bid;
  wire MON_M_AXI_bready;
  wire [1:0]MON_M_AXI_bresp;
  wire MON_M_AXI_bvalid;
  wire MON_M_AXI_rready;
  wire [63:0]MON_M_AXI_wdata;
  wire MON_M_AXI_wlast;
  wire MON_M_AXI_wready;
  wire [7:0]MON_M_AXI_wstrb;
  wire MON_M_AXI_wvalid;
  wire [6:0]MON_S_AXI_araddr;
  wire [2:0]MON_S_AXI_arprot;
  wire MON_S_AXI_arready;
  wire MON_S_AXI_arvalid;
  wire [6:0]MON_S_AXI_awaddr;
  wire [2:0]MON_S_AXI_awprot;
  wire MON_S_AXI_awready;
  wire MON_S_AXI_awvalid;
  wire MON_S_AXI_bready;
  wire [1:0]MON_S_AXI_bresp;
  wire MON_S_AXI_bvalid;
  wire [31:0]MON_S_AXI_rdata;
  wire MON_S_AXI_rready;
  wire [1:0]MON_S_AXI_rresp;
  wire MON_S_AXI_rvalid;
  wire [31:0]MON_S_AXI_wdata;
  wire MON_S_AXI_wready;
  wire [3:0]MON_S_AXI_wstrb;
  wire MON_S_AXI_wvalid;
  wire [39:0]S00_AXI_araddr;
  wire [1:0]S00_AXI_arburst;
  wire [3:0]S00_AXI_arcache;
  wire [15:0]S00_AXI_arid;
  wire [7:0]S00_AXI_arlen;
  wire [0:0]S00_AXI_arlock;
  wire [2:0]S00_AXI_arprot;
  wire [3:0]S00_AXI_arqos;
  wire S00_AXI_arready;
  wire [3:0]S00_AXI_arregion;
  wire [2:0]S00_AXI_arsize;
  wire [15:0]S00_AXI_aruser;
  wire S00_AXI_arvalid;
  wire [39:0]S00_AXI_awaddr;
  wire [1:0]S00_AXI_awburst;
  wire [3:0]S00_AXI_awcache;
  wire [15:0]S00_AXI_awid;
  wire [7:0]S00_AXI_awlen;
  wire [0:0]S00_AXI_awlock;
  wire [2:0]S00_AXI_awprot;
  wire [3:0]S00_AXI_awqos;
  wire S00_AXI_awready;
  wire [3:0]S00_AXI_awregion;
  wire [2:0]S00_AXI_awsize;
  wire [15:0]S00_AXI_awuser;
  wire S00_AXI_awvalid;
  wire [15:0]S00_AXI_bid;
  wire S00_AXI_bready;
  wire [1:0]S00_AXI_bresp;
  wire S00_AXI_bvalid;
  wire [31:0]S00_AXI_rdata;
  wire [15:0]S00_AXI_rid;
  wire S00_AXI_rlast;
  wire S00_AXI_rready;
  wire [1:0]S00_AXI_rresp;
  wire S00_AXI_rvalid;
  wire [31:0]S00_AXI_wdata;
  wire S00_AXI_wlast;
  wire S00_AXI_wready;
  wire [3:0]S00_AXI_wstrb;
  wire S00_AXI_wvalid;
  wire [31:0]S_AXIMM_araddr;
  wire [1:0]S_AXIMM_arburst;
  wire [7:0]S_AXIMM_arlen;
  wire S_AXIMM_arready;
  wire [2:0]S_AXIMM_arsize;
  wire S_AXIMM_arvalid;
  wire [31:0]S_AXIMM_awaddr;
  wire [1:0]S_AXIMM_awburst;
  wire [7:0]S_AXIMM_awlen;
  wire S_AXIMM_awready;
  wire [2:0]S_AXIMM_awsize;
  wire S_AXIMM_awvalid;
  wire S_AXIMM_bready;
  wire [1:0]S_AXIMM_bresp;
  wire S_AXIMM_bvalid;
  wire [31:0]S_AXIMM_rdata;
  wire S_AXIMM_rlast;
  wire S_AXIMM_rready;
  wire [1:0]S_AXIMM_rresp;
  wire S_AXIMM_rvalid;
  wire [31:0]S_AXIMM_wdata;
  wire S_AXIMM_wlast;
  wire S_AXIMM_wready;
  wire [3:0]S_AXIMM_wstrb;
  wire S_AXIMM_wvalid;
  wire [7:0]dpa_ctrl_interconnect_M00_AXI_ARADDR;
  wire dpa_ctrl_interconnect_M00_AXI_ARREADY;
  wire dpa_ctrl_interconnect_M00_AXI_ARVALID;
  wire [7:0]dpa_ctrl_interconnect_M00_AXI_AWADDR;
  wire dpa_ctrl_interconnect_M00_AXI_AWREADY;
  wire dpa_ctrl_interconnect_M00_AXI_AWVALID;
  wire dpa_ctrl_interconnect_M00_AXI_BREADY;
  wire [1:0]dpa_ctrl_interconnect_M00_AXI_BRESP;
  wire dpa_ctrl_interconnect_M00_AXI_BVALID;
  wire [31:0]dpa_ctrl_interconnect_M00_AXI_RDATA;
  wire dpa_ctrl_interconnect_M00_AXI_RREADY;
  wire [1:0]dpa_ctrl_interconnect_M00_AXI_RRESP;
  wire dpa_ctrl_interconnect_M00_AXI_RVALID;
  wire [31:0]dpa_ctrl_interconnect_M00_AXI_WDATA;
  wire dpa_ctrl_interconnect_M00_AXI_WREADY;
  wire [3:0]dpa_ctrl_interconnect_M00_AXI_WSTRB;
  wire dpa_ctrl_interconnect_M00_AXI_WVALID;
  wire [7:0]dpa_ctrl_interconnect_M01_AXI_ARADDR;
  wire dpa_ctrl_interconnect_M01_AXI_ARREADY;
  wire dpa_ctrl_interconnect_M01_AXI_ARVALID;
  wire [7:0]dpa_ctrl_interconnect_M01_AXI_AWADDR;
  wire dpa_ctrl_interconnect_M01_AXI_AWREADY;
  wire dpa_ctrl_interconnect_M01_AXI_AWVALID;
  wire dpa_ctrl_interconnect_M01_AXI_BREADY;
  wire [1:0]dpa_ctrl_interconnect_M01_AXI_BRESP;
  wire dpa_ctrl_interconnect_M01_AXI_BVALID;
  wire [31:0]dpa_ctrl_interconnect_M01_AXI_RDATA;
  wire dpa_ctrl_interconnect_M01_AXI_RREADY;
  wire [1:0]dpa_ctrl_interconnect_M01_AXI_RRESP;
  wire dpa_ctrl_interconnect_M01_AXI_RVALID;
  wire [31:0]dpa_ctrl_interconnect_M01_AXI_WDATA;
  wire dpa_ctrl_interconnect_M01_AXI_WREADY;
  wire [3:0]dpa_ctrl_interconnect_M01_AXI_WSTRB;
  wire dpa_ctrl_interconnect_M01_AXI_WVALID;
  wire [7:0]dpa_ctrl_interconnect_M02_AXI_ARADDR;
  wire dpa_ctrl_interconnect_M02_AXI_ARREADY;
  wire dpa_ctrl_interconnect_M02_AXI_ARVALID;
  wire [7:0]dpa_ctrl_interconnect_M02_AXI_AWADDR;
  wire dpa_ctrl_interconnect_M02_AXI_AWREADY;
  wire dpa_ctrl_interconnect_M02_AXI_AWVALID;
  wire dpa_ctrl_interconnect_M02_AXI_BREADY;
  wire [1:0]dpa_ctrl_interconnect_M02_AXI_BRESP;
  wire dpa_ctrl_interconnect_M02_AXI_BVALID;
  wire [31:0]dpa_ctrl_interconnect_M02_AXI_RDATA;
  wire dpa_ctrl_interconnect_M02_AXI_RREADY;
  wire [1:0]dpa_ctrl_interconnect_M02_AXI_RRESP;
  wire dpa_ctrl_interconnect_M02_AXI_RVALID;
  wire [31:0]dpa_ctrl_interconnect_M02_AXI_WDATA;
  wire dpa_ctrl_interconnect_M02_AXI_WREADY;
  wire [3:0]dpa_ctrl_interconnect_M02_AXI_WSTRB;
  wire dpa_ctrl_interconnect_M02_AXI_WVALID;
  wire [7:0]dpa_ctrl_interconnect_M03_AXI_ARADDR;
  wire dpa_ctrl_interconnect_M03_AXI_ARREADY;
  wire dpa_ctrl_interconnect_M03_AXI_ARVALID;
  wire [7:0]dpa_ctrl_interconnect_M03_AXI_AWADDR;
  wire dpa_ctrl_interconnect_M03_AXI_AWREADY;
  wire dpa_ctrl_interconnect_M03_AXI_AWVALID;
  wire dpa_ctrl_interconnect_M03_AXI_BREADY;
  wire [1:0]dpa_ctrl_interconnect_M03_AXI_BRESP;
  wire dpa_ctrl_interconnect_M03_AXI_BVALID;
  wire [31:0]dpa_ctrl_interconnect_M03_AXI_RDATA;
  wire dpa_ctrl_interconnect_M03_AXI_RREADY;
  wire [1:0]dpa_ctrl_interconnect_M03_AXI_RRESP;
  wire dpa_ctrl_interconnect_M03_AXI_RVALID;
  wire [31:0]dpa_ctrl_interconnect_M03_AXI_WDATA;
  wire dpa_ctrl_interconnect_M03_AXI_WREADY;
  wire [3:0]dpa_ctrl_interconnect_M03_AXI_WSTRB;
  wire dpa_ctrl_interconnect_M03_AXI_WVALID;
  wire [63:0]dpa_mon0_0_TRACE_OUT_0_TDATA;
  wire [7:0]dpa_mon0_0_TRACE_OUT_0_TDEST;
  wire [7:0]dpa_mon0_0_TRACE_OUT_0_TID;
  wire dpa_mon0_0_TRACE_OUT_0_TLAST;
  wire dpa_mon0_0_TRACE_OUT_0_TREADY;
  wire dpa_mon0_0_TRACE_OUT_0_TVALID;
  wire [63:0]dpa_mon0_0_TRACE_OUT_1_TDATA;
  wire [7:0]dpa_mon0_0_TRACE_OUT_1_TDEST;
  wire [7:0]dpa_mon0_0_TRACE_OUT_1_TID;
  wire dpa_mon0_0_TRACE_OUT_1_TLAST;
  wire dpa_mon0_0_TRACE_OUT_1_TREADY;
  wire dpa_mon0_0_TRACE_OUT_1_TVALID;
  wire [63:0]dpa_mon0_1_TRACE_OUT_0_TDATA;
  wire [7:0]dpa_mon0_1_TRACE_OUT_0_TDEST;
  wire [7:0]dpa_mon0_1_TRACE_OUT_0_TID;
  wire dpa_mon0_1_TRACE_OUT_0_TLAST;
  wire dpa_mon0_1_TRACE_OUT_0_TREADY;
  wire dpa_mon0_1_TRACE_OUT_0_TVALID;
  wire [63:0]dpa_mon0_1_TRACE_OUT_1_TDATA;
  wire [7:0]dpa_mon0_1_TRACE_OUT_1_TDEST;
  wire [7:0]dpa_mon0_1_TRACE_OUT_1_TID;
  wire dpa_mon0_1_TRACE_OUT_1_TLAST;
  wire dpa_mon0_1_TRACE_OUT_1_TREADY;
  wire dpa_mon0_1_TRACE_OUT_1_TVALID;
  wire mon_clk;
  wire mon_resetn;

  vitis_design_dpa_ctrl_interconnect_0 dpa_ctrl_interconnect
       (.ACLK(mon_clk),
        .ARESETN(mon_resetn),
        .M00_ACLK(mon_clk),
        .M00_ARESETN(mon_resetn),
        .M00_AXI_araddr(dpa_ctrl_interconnect_M00_AXI_ARADDR),
        .M00_AXI_arready(dpa_ctrl_interconnect_M00_AXI_ARREADY),
        .M00_AXI_arvalid(dpa_ctrl_interconnect_M00_AXI_ARVALID),
        .M00_AXI_awaddr(dpa_ctrl_interconnect_M00_AXI_AWADDR),
        .M00_AXI_awready(dpa_ctrl_interconnect_M00_AXI_AWREADY),
        .M00_AXI_awvalid(dpa_ctrl_interconnect_M00_AXI_AWVALID),
        .M00_AXI_bready(dpa_ctrl_interconnect_M00_AXI_BREADY),
        .M00_AXI_bresp(dpa_ctrl_interconnect_M00_AXI_BRESP),
        .M00_AXI_bvalid(dpa_ctrl_interconnect_M00_AXI_BVALID),
        .M00_AXI_rdata(dpa_ctrl_interconnect_M00_AXI_RDATA),
        .M00_AXI_rready(dpa_ctrl_interconnect_M00_AXI_RREADY),
        .M00_AXI_rresp(dpa_ctrl_interconnect_M00_AXI_RRESP),
        .M00_AXI_rvalid(dpa_ctrl_interconnect_M00_AXI_RVALID),
        .M00_AXI_wdata(dpa_ctrl_interconnect_M00_AXI_WDATA),
        .M00_AXI_wready(dpa_ctrl_interconnect_M00_AXI_WREADY),
        .M00_AXI_wstrb(dpa_ctrl_interconnect_M00_AXI_WSTRB),
        .M00_AXI_wvalid(dpa_ctrl_interconnect_M00_AXI_WVALID),
        .M01_ACLK(mon_clk),
        .M01_ARESETN(mon_resetn),
        .M01_AXI_araddr(dpa_ctrl_interconnect_M01_AXI_ARADDR),
        .M01_AXI_arready(dpa_ctrl_interconnect_M01_AXI_ARREADY),
        .M01_AXI_arvalid(dpa_ctrl_interconnect_M01_AXI_ARVALID),
        .M01_AXI_awaddr(dpa_ctrl_interconnect_M01_AXI_AWADDR),
        .M01_AXI_awready(dpa_ctrl_interconnect_M01_AXI_AWREADY),
        .M01_AXI_awvalid(dpa_ctrl_interconnect_M01_AXI_AWVALID),
        .M01_AXI_bready(dpa_ctrl_interconnect_M01_AXI_BREADY),
        .M01_AXI_bresp(dpa_ctrl_interconnect_M01_AXI_BRESP),
        .M01_AXI_bvalid(dpa_ctrl_interconnect_M01_AXI_BVALID),
        .M01_AXI_rdata(dpa_ctrl_interconnect_M01_AXI_RDATA),
        .M01_AXI_rready(dpa_ctrl_interconnect_M01_AXI_RREADY),
        .M01_AXI_rresp(dpa_ctrl_interconnect_M01_AXI_RRESP),
        .M01_AXI_rvalid(dpa_ctrl_interconnect_M01_AXI_RVALID),
        .M01_AXI_wdata(dpa_ctrl_interconnect_M01_AXI_WDATA),
        .M01_AXI_wready(dpa_ctrl_interconnect_M01_AXI_WREADY),
        .M01_AXI_wstrb(dpa_ctrl_interconnect_M01_AXI_WSTRB),
        .M01_AXI_wvalid(dpa_ctrl_interconnect_M01_AXI_WVALID),
        .M02_ACLK(mon_clk),
        .M02_ARESETN(mon_resetn),
        .M02_AXI_araddr(dpa_ctrl_interconnect_M02_AXI_ARADDR),
        .M02_AXI_arready(dpa_ctrl_interconnect_M02_AXI_ARREADY),
        .M02_AXI_arvalid(dpa_ctrl_interconnect_M02_AXI_ARVALID),
        .M02_AXI_awaddr(dpa_ctrl_interconnect_M02_AXI_AWADDR),
        .M02_AXI_awready(dpa_ctrl_interconnect_M02_AXI_AWREADY),
        .M02_AXI_awvalid(dpa_ctrl_interconnect_M02_AXI_AWVALID),
        .M02_AXI_bready(dpa_ctrl_interconnect_M02_AXI_BREADY),
        .M02_AXI_bresp(dpa_ctrl_interconnect_M02_AXI_BRESP),
        .M02_AXI_bvalid(dpa_ctrl_interconnect_M02_AXI_BVALID),
        .M02_AXI_rdata(dpa_ctrl_interconnect_M02_AXI_RDATA),
        .M02_AXI_rready(dpa_ctrl_interconnect_M02_AXI_RREADY),
        .M02_AXI_rresp(dpa_ctrl_interconnect_M02_AXI_RRESP),
        .M02_AXI_rvalid(dpa_ctrl_interconnect_M02_AXI_RVALID),
        .M02_AXI_wdata(dpa_ctrl_interconnect_M02_AXI_WDATA),
        .M02_AXI_wready(dpa_ctrl_interconnect_M02_AXI_WREADY),
        .M02_AXI_wstrb(dpa_ctrl_interconnect_M02_AXI_WSTRB),
        .M02_AXI_wvalid(dpa_ctrl_interconnect_M02_AXI_WVALID),
        .M03_ACLK(mon_clk),
        .M03_ARESETN(mon_resetn),
        .M03_AXI_araddr(dpa_ctrl_interconnect_M03_AXI_ARADDR),
        .M03_AXI_arready(dpa_ctrl_interconnect_M03_AXI_ARREADY),
        .M03_AXI_arvalid(dpa_ctrl_interconnect_M03_AXI_ARVALID),
        .M03_AXI_awaddr(dpa_ctrl_interconnect_M03_AXI_AWADDR),
        .M03_AXI_awready(dpa_ctrl_interconnect_M03_AXI_AWREADY),
        .M03_AXI_awvalid(dpa_ctrl_interconnect_M03_AXI_AWVALID),
        .M03_AXI_bready(dpa_ctrl_interconnect_M03_AXI_BREADY),
        .M03_AXI_bresp(dpa_ctrl_interconnect_M03_AXI_BRESP),
        .M03_AXI_bvalid(dpa_ctrl_interconnect_M03_AXI_BVALID),
        .M03_AXI_rdata(dpa_ctrl_interconnect_M03_AXI_RDATA),
        .M03_AXI_rready(dpa_ctrl_interconnect_M03_AXI_RREADY),
        .M03_AXI_rresp(dpa_ctrl_interconnect_M03_AXI_RRESP),
        .M03_AXI_rvalid(dpa_ctrl_interconnect_M03_AXI_RVALID),
        .M03_AXI_wdata(dpa_ctrl_interconnect_M03_AXI_WDATA),
        .M03_AXI_wready(dpa_ctrl_interconnect_M03_AXI_WREADY),
        .M03_AXI_wstrb(dpa_ctrl_interconnect_M03_AXI_WSTRB),
        .M03_AXI_wvalid(dpa_ctrl_interconnect_M03_AXI_WVALID),
        .S00_ACLK(mon_clk),
        .S00_ARESETN(mon_resetn),
        .S00_AXI_araddr(S00_AXI_araddr),
        .S00_AXI_arburst(S00_AXI_arburst),
        .S00_AXI_arcache(S00_AXI_arcache),
        .S00_AXI_arid(S00_AXI_arid),
        .S00_AXI_arlen(S00_AXI_arlen),
        .S00_AXI_arlock(S00_AXI_arlock),
        .S00_AXI_arprot(S00_AXI_arprot),
        .S00_AXI_arqos(S00_AXI_arqos),
        .S00_AXI_arready(S00_AXI_arready),
        .S00_AXI_arregion(S00_AXI_arregion),
        .S00_AXI_arsize(S00_AXI_arsize),
        .S00_AXI_aruser(S00_AXI_aruser),
        .S00_AXI_arvalid(S00_AXI_arvalid),
        .S00_AXI_awaddr(S00_AXI_awaddr),
        .S00_AXI_awburst(S00_AXI_awburst),
        .S00_AXI_awcache(S00_AXI_awcache),
        .S00_AXI_awid(S00_AXI_awid),
        .S00_AXI_awlen(S00_AXI_awlen),
        .S00_AXI_awlock(S00_AXI_awlock),
        .S00_AXI_awprot(S00_AXI_awprot),
        .S00_AXI_awqos(S00_AXI_awqos),
        .S00_AXI_awready(S00_AXI_awready),
        .S00_AXI_awregion(S00_AXI_awregion),
        .S00_AXI_awsize(S00_AXI_awsize),
        .S00_AXI_awuser(S00_AXI_awuser),
        .S00_AXI_awvalid(S00_AXI_awvalid),
        .S00_AXI_bid(S00_AXI_bid),
        .S00_AXI_bready(S00_AXI_bready),
        .S00_AXI_bresp(S00_AXI_bresp),
        .S00_AXI_bvalid(S00_AXI_bvalid),
        .S00_AXI_rdata(S00_AXI_rdata),
        .S00_AXI_rid(S00_AXI_rid),
        .S00_AXI_rlast(S00_AXI_rlast),
        .S00_AXI_rready(S00_AXI_rready),
        .S00_AXI_rresp(S00_AXI_rresp),
        .S00_AXI_rvalid(S00_AXI_rvalid),
        .S00_AXI_wdata(S00_AXI_wdata),
        .S00_AXI_wlast(S00_AXI_wlast),
        .S00_AXI_wready(S00_AXI_wready),
        .S00_AXI_wstrb(S00_AXI_wstrb),
        .S00_AXI_wvalid(S00_AXI_wvalid));
  vitis_design_dpa_hub_0 dpa_hub
       (.axilite_aresetn(mon_resetn),
        .axilite_clk(mon_clk),
        .s_axi_araddr(dpa_ctrl_interconnect_M00_AXI_ARADDR),
        .s_axi_arready(dpa_ctrl_interconnect_M00_AXI_ARREADY),
        .s_axi_arvalid(dpa_ctrl_interconnect_M00_AXI_ARVALID),
        .s_axi_awaddr(dpa_ctrl_interconnect_M00_AXI_AWADDR),
        .s_axi_awready(dpa_ctrl_interconnect_M00_AXI_AWREADY),
        .s_axi_awvalid(dpa_ctrl_interconnect_M00_AXI_AWVALID),
        .s_axi_bready(dpa_ctrl_interconnect_M00_AXI_BREADY),
        .s_axi_bresp(dpa_ctrl_interconnect_M00_AXI_BRESP),
        .s_axi_bvalid(dpa_ctrl_interconnect_M00_AXI_BVALID),
        .s_axi_rdata(dpa_ctrl_interconnect_M00_AXI_RDATA),
        .s_axi_rready(dpa_ctrl_interconnect_M00_AXI_RREADY),
        .s_axi_rresp(dpa_ctrl_interconnect_M00_AXI_RRESP),
        .s_axi_rvalid(dpa_ctrl_interconnect_M00_AXI_RVALID),
        .s_axi_wdata(dpa_ctrl_interconnect_M00_AXI_WDATA),
        .s_axi_wready(dpa_ctrl_interconnect_M00_AXI_WREADY),
        .s_axi_wstrb(dpa_ctrl_interconnect_M00_AXI_WSTRB),
        .s_axi_wvalid(dpa_ctrl_interconnect_M00_AXI_WVALID),
        .s_axihub_araddr(dpa_ctrl_interconnect_M01_AXI_ARADDR),
        .s_axihub_arready(dpa_ctrl_interconnect_M01_AXI_ARREADY),
        .s_axihub_arvalid(dpa_ctrl_interconnect_M01_AXI_ARVALID),
        .s_axihub_awaddr(dpa_ctrl_interconnect_M01_AXI_AWADDR),
        .s_axihub_awready(dpa_ctrl_interconnect_M01_AXI_AWREADY),
        .s_axihub_awvalid(dpa_ctrl_interconnect_M01_AXI_AWVALID),
        .s_axihub_bready(dpa_ctrl_interconnect_M01_AXI_BREADY),
        .s_axihub_bresp(dpa_ctrl_interconnect_M01_AXI_BRESP),
        .s_axihub_bvalid(dpa_ctrl_interconnect_M01_AXI_BVALID),
        .s_axihub_rdata(dpa_ctrl_interconnect_M01_AXI_RDATA),
        .s_axihub_rready(dpa_ctrl_interconnect_M01_AXI_RREADY),
        .s_axihub_rresp(dpa_ctrl_interconnect_M01_AXI_RRESP),
        .s_axihub_rvalid(dpa_ctrl_interconnect_M01_AXI_RVALID),
        .s_axihub_wdata(dpa_ctrl_interconnect_M01_AXI_WDATA),
        .s_axihub_wready(dpa_ctrl_interconnect_M01_AXI_WREADY),
        .s_axihub_wstrb(dpa_ctrl_interconnect_M01_AXI_WSTRB),
        .s_axihub_wvalid(dpa_ctrl_interconnect_M01_AXI_WVALID),
        .s_aximm_araddr(S_AXIMM_araddr),
        .s_aximm_arburst(S_AXIMM_arburst),
        .s_aximm_aresetn(mon_resetn),
        .s_aximm_arid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_aximm_arlen(S_AXIMM_arlen),
        .s_aximm_arready(S_AXIMM_arready),
        .s_aximm_arsize(S_AXIMM_arsize),
        .s_aximm_arvalid(S_AXIMM_arvalid),
        .s_aximm_awaddr(S_AXIMM_awaddr),
        .s_aximm_awburst(S_AXIMM_awburst),
        .s_aximm_awid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_aximm_awlen(S_AXIMM_awlen),
        .s_aximm_awready(S_AXIMM_awready),
        .s_aximm_awsize(S_AXIMM_awsize),
        .s_aximm_awvalid(S_AXIMM_awvalid),
        .s_aximm_bready(S_AXIMM_bready),
        .s_aximm_bresp(S_AXIMM_bresp),
        .s_aximm_bvalid(S_AXIMM_bvalid),
        .s_aximm_clk(mon_clk),
        .s_aximm_rdata(S_AXIMM_rdata),
        .s_aximm_rlast(S_AXIMM_rlast),
        .s_aximm_rready(S_AXIMM_rready),
        .s_aximm_rresp(S_AXIMM_rresp),
        .s_aximm_rvalid(S_AXIMM_rvalid),
        .s_aximm_wdata(S_AXIMM_wdata),
        .s_aximm_wlast(S_AXIMM_wlast),
        .s_aximm_wready(S_AXIMM_wready),
        .s_aximm_wstrb(S_AXIMM_wstrb),
        .s_aximm_wvalid(S_AXIMM_wvalid),
        .trace_aresetn(mon_resetn),
        .trace_clk(mon_clk),
        .trace_tdata0(dpa_mon0_0_TRACE_OUT_0_TDATA),
        .trace_tdata1(dpa_mon0_0_TRACE_OUT_1_TDATA),
        .trace_tdata2(dpa_mon0_1_TRACE_OUT_0_TDATA),
        .trace_tdata3(dpa_mon0_1_TRACE_OUT_1_TDATA),
        .trace_tdest0(dpa_mon0_0_TRACE_OUT_0_TDEST),
        .trace_tdest1(dpa_mon0_0_TRACE_OUT_1_TDEST),
        .trace_tdest2(dpa_mon0_1_TRACE_OUT_0_TDEST),
        .trace_tdest3(dpa_mon0_1_TRACE_OUT_1_TDEST),
        .trace_tid0(dpa_mon0_0_TRACE_OUT_0_TID),
        .trace_tid1(dpa_mon0_0_TRACE_OUT_1_TID),
        .trace_tid2(dpa_mon0_1_TRACE_OUT_0_TID),
        .trace_tid3(dpa_mon0_1_TRACE_OUT_1_TID),
        .trace_tlast0(dpa_mon0_0_TRACE_OUT_0_TLAST),
        .trace_tlast1(dpa_mon0_0_TRACE_OUT_1_TLAST),
        .trace_tlast2(dpa_mon0_1_TRACE_OUT_0_TLAST),
        .trace_tlast3(dpa_mon0_1_TRACE_OUT_1_TLAST),
        .trace_tready0(dpa_mon0_0_TRACE_OUT_0_TREADY),
        .trace_tready1(dpa_mon0_0_TRACE_OUT_1_TREADY),
        .trace_tready2(dpa_mon0_1_TRACE_OUT_0_TREADY),
        .trace_tready3(dpa_mon0_1_TRACE_OUT_1_TREADY),
        .trace_tvalid0(dpa_mon0_0_TRACE_OUT_0_TVALID),
        .trace_tvalid1(dpa_mon0_0_TRACE_OUT_1_TVALID),
        .trace_tvalid2(dpa_mon0_1_TRACE_OUT_0_TVALID),
        .trace_tvalid3(dpa_mon0_1_TRACE_OUT_1_TVALID));
  (* DPA_IP_FULLNAME = "/cluster_1/m_axi_gmem-HP" *) 
  vitis_design_dpa_mon0_0_0 dpa_mon0_0
       (.m_axis_rd_tdata(dpa_mon0_0_TRACE_OUT_1_TDATA),
        .m_axis_rd_tdest(dpa_mon0_0_TRACE_OUT_1_TDEST),
        .m_axis_rd_tid(dpa_mon0_0_TRACE_OUT_1_TID),
        .m_axis_rd_tlast(dpa_mon0_0_TRACE_OUT_1_TLAST),
        .m_axis_rd_tready(dpa_mon0_0_TRACE_OUT_1_TREADY),
        .m_axis_rd_tvalid(dpa_mon0_0_TRACE_OUT_1_TVALID),
        .m_axis_wr_tdata(dpa_mon0_0_TRACE_OUT_0_TDATA),
        .m_axis_wr_tdest(dpa_mon0_0_TRACE_OUT_0_TDEST),
        .m_axis_wr_tid(dpa_mon0_0_TRACE_OUT_0_TID),
        .m_axis_wr_tlast(dpa_mon0_0_TRACE_OUT_0_TLAST),
        .m_axis_wr_tready(dpa_mon0_0_TRACE_OUT_0_TREADY),
        .m_axis_wr_tvalid(dpa_mon0_0_TRACE_OUT_0_TVALID),
        .mon_ARADDR(MON_M_AXI_araddr),
        .mon_ARBURST(MON_M_AXI_arburst),
        .mon_ARID(MON_M_AXI_arid),
        .mon_ARLEN(MON_M_AXI_arlen),
        .mon_ARREADY(1'b0),
        .mon_ARSIZE(MON_M_AXI_arsize),
        .mon_ARVALID(MON_M_AXI_arvalid),
        .mon_AWADDR(MON_M_AXI_awaddr),
        .mon_AWBURST(MON_M_AXI_awburst),
        .mon_AWID(MON_M_AXI_awid),
        .mon_AWLEN(MON_M_AXI_awlen),
        .mon_AWREADY(MON_M_AXI_awready),
        .mon_AWSIZE(MON_M_AXI_awsize),
        .mon_AWVALID(MON_M_AXI_awvalid),
        .mon_BID(MON_M_AXI_bid),
        .mon_BREADY(MON_M_AXI_bready),
        .mon_BRESP(MON_M_AXI_bresp),
        .mon_BVALID(MON_M_AXI_bvalid),
        .mon_RDATA({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .mon_RID(1'b0),
        .mon_RLAST(1'b0),
        .mon_RREADY(MON_M_AXI_rready),
        .mon_RRESP({1'b0,1'b0}),
        .mon_RVALID(1'b0),
        .mon_WDATA(MON_M_AXI_wdata),
        .mon_WLAST(MON_M_AXI_wlast),
        .mon_WREADY(MON_M_AXI_wready),
        .mon_WSTRB(MON_M_AXI_wstrb),
        .mon_WVALID(MON_M_AXI_wvalid),
        .mon_clk(mon_clk),
        .mon_resetn(mon_resetn),
        .s_axi_araddr(dpa_ctrl_interconnect_M02_AXI_ARADDR),
        .s_axi_araddr_mon({1'b0,MON_S_AXI_araddr}),
        .s_axi_arprot_mon(MON_S_AXI_arprot),
        .s_axi_arready(dpa_ctrl_interconnect_M02_AXI_ARREADY),
        .s_axi_arready_mon(MON_S_AXI_arready),
        .s_axi_arvalid(dpa_ctrl_interconnect_M02_AXI_ARVALID),
        .s_axi_arvalid_mon(MON_S_AXI_arvalid),
        .s_axi_awaddr(dpa_ctrl_interconnect_M02_AXI_AWADDR),
        .s_axi_awaddr_mon({1'b0,MON_S_AXI_awaddr}),
        .s_axi_awprot_mon(MON_S_AXI_awprot),
        .s_axi_awready(dpa_ctrl_interconnect_M02_AXI_AWREADY),
        .s_axi_awready_mon(MON_S_AXI_awready),
        .s_axi_awvalid(dpa_ctrl_interconnect_M02_AXI_AWVALID),
        .s_axi_awvalid_mon(MON_S_AXI_awvalid),
        .s_axi_bready(dpa_ctrl_interconnect_M02_AXI_BREADY),
        .s_axi_bready_mon(MON_S_AXI_bready),
        .s_axi_bresp(dpa_ctrl_interconnect_M02_AXI_BRESP),
        .s_axi_bresp_mon(MON_S_AXI_bresp),
        .s_axi_bvalid(dpa_ctrl_interconnect_M02_AXI_BVALID),
        .s_axi_bvalid_mon(MON_S_AXI_bvalid),
        .s_axi_rdata(dpa_ctrl_interconnect_M02_AXI_RDATA),
        .s_axi_rdata_mon(MON_S_AXI_rdata),
        .s_axi_rready(dpa_ctrl_interconnect_M02_AXI_RREADY),
        .s_axi_rready_mon(MON_S_AXI_rready),
        .s_axi_rresp(dpa_ctrl_interconnect_M02_AXI_RRESP),
        .s_axi_rresp_mon(MON_S_AXI_rresp),
        .s_axi_rvalid(dpa_ctrl_interconnect_M02_AXI_RVALID),
        .s_axi_rvalid_mon(MON_S_AXI_rvalid),
        .s_axi_wdata(dpa_ctrl_interconnect_M02_AXI_WDATA),
        .s_axi_wdata_mon(MON_S_AXI_wdata),
        .s_axi_wready(dpa_ctrl_interconnect_M02_AXI_WREADY),
        .s_axi_wready_mon(MON_S_AXI_wready),
        .s_axi_wstrb(dpa_ctrl_interconnect_M02_AXI_WSTRB),
        .s_axi_wstrb_mon(MON_S_AXI_wstrb),
        .s_axi_wvalid(dpa_ctrl_interconnect_M02_AXI_WVALID),
        .s_axi_wvalid_mon(MON_S_AXI_wvalid),
        .trace_clk(mon_clk),
        .trace_rst(mon_resetn));
  (* DPA_IP_FULLNAME = "/cluster_1/m_axi_gmem-HP0" *) 
  vitis_design_dpa_mon0_1_0 dpa_mon0_1
       (.m_axis_rd_tdata(dpa_mon0_1_TRACE_OUT_1_TDATA),
        .m_axis_rd_tdest(dpa_mon0_1_TRACE_OUT_1_TDEST),
        .m_axis_rd_tid(dpa_mon0_1_TRACE_OUT_1_TID),
        .m_axis_rd_tlast(dpa_mon0_1_TRACE_OUT_1_TLAST),
        .m_axis_rd_tready(dpa_mon0_1_TRACE_OUT_1_TREADY),
        .m_axis_rd_tvalid(dpa_mon0_1_TRACE_OUT_1_TVALID),
        .m_axis_wr_tdata(dpa_mon0_1_TRACE_OUT_0_TDATA),
        .m_axis_wr_tdest(dpa_mon0_1_TRACE_OUT_0_TDEST),
        .m_axis_wr_tid(dpa_mon0_1_TRACE_OUT_0_TID),
        .m_axis_wr_tlast(dpa_mon0_1_TRACE_OUT_0_TLAST),
        .m_axis_wr_tready(dpa_mon0_1_TRACE_OUT_0_TREADY),
        .m_axis_wr_tvalid(dpa_mon0_1_TRACE_OUT_0_TVALID),
        .mon_ARADDR(MON_M_AXI_araddr),
        .mon_ARBURST(MON_M_AXI_arburst),
        .mon_ARID(MON_M_AXI_arid),
        .mon_ARLEN(MON_M_AXI_arlen),
        .mon_ARREADY(1'b0),
        .mon_ARSIZE(MON_M_AXI_arsize),
        .mon_ARVALID(MON_M_AXI_arvalid),
        .mon_AWADDR(MON_M_AXI_awaddr),
        .mon_AWBURST(MON_M_AXI_awburst),
        .mon_AWID(MON_M_AXI_awid),
        .mon_AWLEN(MON_M_AXI_awlen),
        .mon_AWREADY(MON_M_AXI_awready),
        .mon_AWSIZE(MON_M_AXI_awsize),
        .mon_AWVALID(MON_M_AXI_awvalid),
        .mon_BID(MON_M_AXI_bid),
        .mon_BREADY(MON_M_AXI_bready),
        .mon_BRESP(MON_M_AXI_bresp),
        .mon_BVALID(MON_M_AXI_bvalid),
        .mon_RDATA({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .mon_RID(1'b0),
        .mon_RLAST(1'b0),
        .mon_RREADY(MON_M_AXI_rready),
        .mon_RRESP({1'b0,1'b0}),
        .mon_RVALID(1'b0),
        .mon_WDATA(MON_M_AXI_wdata),
        .mon_WLAST(MON_M_AXI_wlast),
        .mon_WREADY(MON_M_AXI_wready),
        .mon_WSTRB(MON_M_AXI_wstrb),
        .mon_WVALID(MON_M_AXI_wvalid),
        .mon_clk(mon_clk),
        .mon_resetn(mon_resetn),
        .s_axi_araddr(dpa_ctrl_interconnect_M03_AXI_ARADDR),
        .s_axi_araddr_mon({1'b0,MON_S_AXI_araddr}),
        .s_axi_arprot_mon(MON_S_AXI_arprot),
        .s_axi_arready(dpa_ctrl_interconnect_M03_AXI_ARREADY),
        .s_axi_arready_mon(MON_S_AXI_arready),
        .s_axi_arvalid(dpa_ctrl_interconnect_M03_AXI_ARVALID),
        .s_axi_arvalid_mon(MON_S_AXI_arvalid),
        .s_axi_awaddr(dpa_ctrl_interconnect_M03_AXI_AWADDR),
        .s_axi_awaddr_mon({1'b0,MON_S_AXI_awaddr}),
        .s_axi_awprot_mon(MON_S_AXI_awprot),
        .s_axi_awready(dpa_ctrl_interconnect_M03_AXI_AWREADY),
        .s_axi_awready_mon(MON_S_AXI_awready),
        .s_axi_awvalid(dpa_ctrl_interconnect_M03_AXI_AWVALID),
        .s_axi_awvalid_mon(MON_S_AXI_awvalid),
        .s_axi_bready(dpa_ctrl_interconnect_M03_AXI_BREADY),
        .s_axi_bready_mon(MON_S_AXI_bready),
        .s_axi_bresp(dpa_ctrl_interconnect_M03_AXI_BRESP),
        .s_axi_bresp_mon(MON_S_AXI_bresp),
        .s_axi_bvalid(dpa_ctrl_interconnect_M03_AXI_BVALID),
        .s_axi_bvalid_mon(MON_S_AXI_bvalid),
        .s_axi_rdata(dpa_ctrl_interconnect_M03_AXI_RDATA),
        .s_axi_rdata_mon(MON_S_AXI_rdata),
        .s_axi_rready(dpa_ctrl_interconnect_M03_AXI_RREADY),
        .s_axi_rready_mon(MON_S_AXI_rready),
        .s_axi_rresp(dpa_ctrl_interconnect_M03_AXI_RRESP),
        .s_axi_rresp_mon(MON_S_AXI_rresp),
        .s_axi_rvalid(dpa_ctrl_interconnect_M03_AXI_RVALID),
        .s_axi_rvalid_mon(MON_S_AXI_rvalid),
        .s_axi_wdata(dpa_ctrl_interconnect_M03_AXI_WDATA),
        .s_axi_wdata_mon(MON_S_AXI_wdata),
        .s_axi_wready(dpa_ctrl_interconnect_M03_AXI_WREADY),
        .s_axi_wready_mon(MON_S_AXI_wready),
        .s_axi_wstrb(dpa_ctrl_interconnect_M03_AXI_WSTRB),
        .s_axi_wstrb_mon(MON_S_AXI_wstrb),
        .s_axi_wvalid(dpa_ctrl_interconnect_M03_AXI_WVALID),
        .s_axi_wvalid_mon(MON_S_AXI_wvalid),
        .trace_clk(mon_clk),
        .trace_rst(mon_resetn));
endmodule

module m00_couplers_imp_1BMDBXH
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arburst,
    M_AXI_arcache,
    M_AXI_arid,
    M_AXI_arlen,
    M_AXI_arlock,
    M_AXI_arprot,
    M_AXI_arqos,
    M_AXI_arready,
    M_AXI_arregion,
    M_AXI_arsize,
    M_AXI_aruser,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awburst,
    M_AXI_awcache,
    M_AXI_awid,
    M_AXI_awlen,
    M_AXI_awlock,
    M_AXI_awprot,
    M_AXI_awqos,
    M_AXI_awready,
    M_AXI_awregion,
    M_AXI_awsize,
    M_AXI_awuser,
    M_AXI_awvalid,
    M_AXI_bid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rid,
    M_AXI_rlast,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wlast,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arregion,
    S_AXI_arsize,
    S_AXI_aruser,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awregion,
    S_AXI_awsize,
    S_AXI_awuser,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  output [1:0]M_AXI_arburst;
  output [3:0]M_AXI_arcache;
  output [15:0]M_AXI_arid;
  output [7:0]M_AXI_arlen;
  output [0:0]M_AXI_arlock;
  output [2:0]M_AXI_arprot;
  output [3:0]M_AXI_arqos;
  input [0:0]M_AXI_arready;
  output [3:0]M_AXI_arregion;
  output [2:0]M_AXI_arsize;
  output [15:0]M_AXI_aruser;
  output [0:0]M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  output [1:0]M_AXI_awburst;
  output [3:0]M_AXI_awcache;
  output [15:0]M_AXI_awid;
  output [7:0]M_AXI_awlen;
  output [0:0]M_AXI_awlock;
  output [2:0]M_AXI_awprot;
  output [3:0]M_AXI_awqos;
  input [0:0]M_AXI_awready;
  output [3:0]M_AXI_awregion;
  output [2:0]M_AXI_awsize;
  output [15:0]M_AXI_awuser;
  output [0:0]M_AXI_awvalid;
  input [15:0]M_AXI_bid;
  output [0:0]M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input [0:0]M_AXI_bvalid;
  input [127:0]M_AXI_rdata;
  input [15:0]M_AXI_rid;
  input [0:0]M_AXI_rlast;
  output [0:0]M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input [0:0]M_AXI_rvalid;
  output [127:0]M_AXI_wdata;
  output [0:0]M_AXI_wlast;
  input [0:0]M_AXI_wready;
  output [15:0]M_AXI_wstrb;
  output [0:0]M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input [0:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output [0:0]S_AXI_arready;
  input [3:0]S_AXI_arregion;
  input [2:0]S_AXI_arsize;
  input [15:0]S_AXI_aruser;
  input [0:0]S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input [0:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output [0:0]S_AXI_awready;
  input [3:0]S_AXI_awregion;
  input [2:0]S_AXI_awsize;
  input [15:0]S_AXI_awuser;
  input [0:0]S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input [0:0]S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output [0:0]S_AXI_bvalid;
  output [127:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output [0:0]S_AXI_rlast;
  input [0:0]S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output [0:0]S_AXI_rvalid;
  input [127:0]S_AXI_wdata;
  input [0:0]S_AXI_wlast;
  output [0:0]S_AXI_wready;
  input [15:0]S_AXI_wstrb;
  input [0:0]S_AXI_wvalid;

  wire [39:0]M_AXI_araddr;
  wire [1:0]M_AXI_arburst;
  wire [3:0]M_AXI_arcache;
  wire [15:0]M_AXI_arid;
  wire [7:0]M_AXI_arlen;
  wire [0:0]M_AXI_arlock;
  wire [2:0]M_AXI_arprot;
  wire [3:0]M_AXI_arqos;
  wire [3:0]M_AXI_arregion;
  wire [2:0]M_AXI_arsize;
  wire [15:0]M_AXI_aruser;
  wire [0:0]M_AXI_arvalid;
  wire [39:0]M_AXI_awaddr;
  wire [1:0]M_AXI_awburst;
  wire [3:0]M_AXI_awcache;
  wire [15:0]M_AXI_awid;
  wire [7:0]M_AXI_awlen;
  wire [0:0]M_AXI_awlock;
  wire [2:0]M_AXI_awprot;
  wire [3:0]M_AXI_awqos;
  wire [3:0]M_AXI_awregion;
  wire [2:0]M_AXI_awsize;
  wire [15:0]M_AXI_awuser;
  wire [0:0]M_AXI_awvalid;
  wire [0:0]M_AXI_bready;
  wire [0:0]M_AXI_rready;
  wire [127:0]M_AXI_wdata;
  wire [0:0]M_AXI_wlast;
  wire [15:0]M_AXI_wstrb;
  wire [0:0]M_AXI_wvalid;
  wire [0:0]S_AXI_arready;
  wire [0:0]S_AXI_awready;
  wire [15:0]S_AXI_bid;
  wire [1:0]S_AXI_bresp;
  wire [0:0]S_AXI_bvalid;
  wire [127:0]S_AXI_rdata;
  wire [15:0]S_AXI_rid;
  wire [0:0]S_AXI_rlast;
  wire [1:0]S_AXI_rresp;
  wire [0:0]S_AXI_rvalid;
  wire [0:0]S_AXI_wready;

  assign M_AXI_araddr = S_AXI_araddr[39:0];
  assign M_AXI_arburst = S_AXI_arburst[1:0];
  assign M_AXI_arcache = S_AXI_arcache[3:0];
  assign M_AXI_arid = S_AXI_arid[15:0];
  assign M_AXI_arlen = S_AXI_arlen[7:0];
  assign M_AXI_arlock = S_AXI_arlock[0];
  assign M_AXI_arprot = S_AXI_arprot[2:0];
  assign M_AXI_arqos = S_AXI_arqos[3:0];
  assign M_AXI_arregion = S_AXI_arregion[3:0];
  assign M_AXI_arsize = S_AXI_arsize[2:0];
  assign M_AXI_aruser = S_AXI_aruser[15:0];
  assign M_AXI_arvalid = S_AXI_arvalid[0];
  assign M_AXI_awaddr = S_AXI_awaddr[39:0];
  assign M_AXI_awburst = S_AXI_awburst[1:0];
  assign M_AXI_awcache = S_AXI_awcache[3:0];
  assign M_AXI_awid = S_AXI_awid[15:0];
  assign M_AXI_awlen = S_AXI_awlen[7:0];
  assign M_AXI_awlock = S_AXI_awlock[0];
  assign M_AXI_awprot = S_AXI_awprot[2:0];
  assign M_AXI_awqos = S_AXI_awqos[3:0];
  assign M_AXI_awregion = S_AXI_awregion[3:0];
  assign M_AXI_awsize = S_AXI_awsize[2:0];
  assign M_AXI_awuser = S_AXI_awuser[15:0];
  assign M_AXI_awvalid = S_AXI_awvalid[0];
  assign M_AXI_bready = S_AXI_bready[0];
  assign M_AXI_rready = S_AXI_rready[0];
  assign M_AXI_wdata = S_AXI_wdata[127:0];
  assign M_AXI_wlast = S_AXI_wlast[0];
  assign M_AXI_wstrb = S_AXI_wstrb[15:0];
  assign M_AXI_wvalid = S_AXI_wvalid[0];
  assign S_AXI_arready = M_AXI_arready[0];
  assign S_AXI_awready = M_AXI_awready[0];
  assign S_AXI_bid = M_AXI_bid[15:0];
  assign S_AXI_bresp = M_AXI_bresp[1:0];
  assign S_AXI_bvalid = M_AXI_bvalid[0];
  assign S_AXI_rdata = M_AXI_rdata[127:0];
  assign S_AXI_rid = M_AXI_rid[15:0];
  assign S_AXI_rlast = M_AXI_rlast[0];
  assign S_AXI_rresp = M_AXI_rresp[1:0];
  assign S_AXI_rvalid = M_AXI_rvalid[0];
  assign S_AXI_wready = M_AXI_wready[0];
endmodule

module m00_couplers_imp_1WHIVE7
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arprot,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awprot,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [7:0]M_AXI_araddr;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [7:0]M_AXI_awaddr;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [2:0]S_AXI_arprot;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [2:0]S_AXI_awprot;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire M_ACLK;
  wire M_ARESETN;
  wire [7:0]M_AXI_araddr;
  wire M_AXI_arready;
  wire M_AXI_arvalid;
  wire [7:0]M_AXI_awaddr;
  wire M_AXI_awready;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [31:0]M_AXI_rdata;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wready;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire [39:0]S_AXI_araddr;
  wire [2:0]S_AXI_arprot;
  wire S_AXI_arready;
  wire S_AXI_arvalid;
  wire [39:0]S_AXI_awaddr;
  wire [2:0]S_AXI_awprot;
  wire S_AXI_awready;
  wire S_AXI_awvalid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [31:0]S_AXI_wdata;
  wire S_AXI_wready;
  wire [3:0]S_AXI_wstrb;
  wire S_AXI_wvalid;

  vitis_design_dpa_ctrl_interconnect_imp_m00_regslice_0 m00_regslice
       (.aclk(M_ACLK),
        .aresetn(M_ARESETN),
        .m_axi_araddr(M_AXI_araddr),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_araddr(S_AXI_araddr[7:0]),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr[7:0]),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
endmodule

module m00_couplers_imp_XAFVM8
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arregion,
    S_AXI_arsize,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awregion,
    S_AXI_awsize,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input [0:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [3:0]S_AXI_arregion;
  input [2:0]S_AXI_arsize;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input [0:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [3:0]S_AXI_awregion;
  input [2:0]S_AXI_awsize;
  input S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [39:0]M_AXI_araddr;
  wire M_AXI_arready;
  wire M_AXI_arvalid;
  wire [39:0]M_AXI_awaddr;
  wire M_AXI_awready;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [31:0]M_AXI_rdata;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wready;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_ACLK;
  wire S_ARESETN;
  wire [39:0]S_AXI_araddr;
  wire [1:0]S_AXI_arburst;
  wire [3:0]S_AXI_arcache;
  wire [15:0]S_AXI_arid;
  wire [7:0]S_AXI_arlen;
  wire [0:0]S_AXI_arlock;
  wire [2:0]S_AXI_arprot;
  wire [3:0]S_AXI_arqos;
  wire S_AXI_arready;
  wire [3:0]S_AXI_arregion;
  wire [2:0]S_AXI_arsize;
  wire S_AXI_arvalid;
  wire [39:0]S_AXI_awaddr;
  wire [1:0]S_AXI_awburst;
  wire [3:0]S_AXI_awcache;
  wire [15:0]S_AXI_awid;
  wire [7:0]S_AXI_awlen;
  wire [0:0]S_AXI_awlock;
  wire [2:0]S_AXI_awprot;
  wire [3:0]S_AXI_awqos;
  wire S_AXI_awready;
  wire [3:0]S_AXI_awregion;
  wire [2:0]S_AXI_awsize;
  wire S_AXI_awvalid;
  wire [15:0]S_AXI_bid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire [15:0]S_AXI_rid;
  wire S_AXI_rlast;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [31:0]S_AXI_wdata;
  wire S_AXI_wlast;
  wire S_AXI_wready;
  wire [3:0]S_AXI_wstrb;
  wire S_AXI_wvalid;

  vitis_design_interconnect_axilite_imp_auto_pc_0 auto_pc
       (.aclk(S_ACLK),
        .aresetn(S_ARESETN),
        .m_axi_araddr(M_AXI_araddr),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_araddr(S_AXI_araddr),
        .s_axi_arburst(S_AXI_arburst),
        .s_axi_arcache(S_AXI_arcache),
        .s_axi_arid(S_AXI_arid),
        .s_axi_arlen(S_AXI_arlen),
        .s_axi_arlock(S_AXI_arlock),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arqos(S_AXI_arqos),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arregion(S_AXI_arregion),
        .s_axi_arsize(S_AXI_arsize),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr),
        .s_axi_awburst(S_AXI_awburst),
        .s_axi_awcache(S_AXI_awcache),
        .s_axi_awid(S_AXI_awid),
        .s_axi_awlen(S_AXI_awlen),
        .s_axi_awlock(S_AXI_awlock),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awqos(S_AXI_awqos),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awregion(S_AXI_awregion),
        .s_axi_awsize(S_AXI_awsize),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bid(S_AXI_bid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rid(S_AXI_rid),
        .s_axi_rlast(S_AXI_rlast),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wlast(S_AXI_wlast),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
endmodule

module m01_couplers_imp_1GB8605
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arburst,
    M_AXI_arlen,
    M_AXI_arready,
    M_AXI_arsize,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awburst,
    M_AXI_awlen,
    M_AXI_awready,
    M_AXI_awsize,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rlast,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wlast,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arregion,
    S_AXI_arsize,
    S_AXI_aruser,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awregion,
    S_AXI_awsize,
    S_AXI_awuser,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [31:0]M_AXI_araddr;
  output [1:0]M_AXI_arburst;
  output [7:0]M_AXI_arlen;
  input M_AXI_arready;
  output [2:0]M_AXI_arsize;
  output M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  output [1:0]M_AXI_awburst;
  output [7:0]M_AXI_awlen;
  input M_AXI_awready;
  output [2:0]M_AXI_awsize;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  input M_AXI_rlast;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  output M_AXI_wlast;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input [0:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [3:0]S_AXI_arregion;
  input [2:0]S_AXI_arsize;
  input [15:0]S_AXI_aruser;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input [0:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [3:0]S_AXI_awregion;
  input [2:0]S_AXI_awsize;
  input [15:0]S_AXI_awuser;
  input S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [127:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [127:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [15:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire M_ACLK;
  wire M_ARESETN;
  wire [31:0]M_AXI_araddr;
  wire [1:0]M_AXI_arburst;
  wire [7:0]M_AXI_arlen;
  wire M_AXI_arready;
  wire [2:0]M_AXI_arsize;
  wire M_AXI_arvalid;
  wire [31:0]M_AXI_awaddr;
  wire [1:0]M_AXI_awburst;
  wire [7:0]M_AXI_awlen;
  wire M_AXI_awready;
  wire [2:0]M_AXI_awsize;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [31:0]M_AXI_rdata;
  wire M_AXI_rlast;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wlast;
  wire M_AXI_wready;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_ACLK;
  wire S_ARESETN;
  wire [39:0]S_AXI_araddr;
  wire [1:0]S_AXI_arburst;
  wire [3:0]S_AXI_arcache;
  wire [15:0]S_AXI_arid;
  wire [7:0]S_AXI_arlen;
  wire [0:0]S_AXI_arlock;
  wire [2:0]S_AXI_arprot;
  wire [3:0]S_AXI_arqos;
  wire S_AXI_arready;
  wire [3:0]S_AXI_arregion;
  wire [2:0]S_AXI_arsize;
  wire [15:0]S_AXI_aruser;
  wire S_AXI_arvalid;
  wire [39:0]S_AXI_awaddr;
  wire [1:0]S_AXI_awburst;
  wire [3:0]S_AXI_awcache;
  wire [15:0]S_AXI_awid;
  wire [7:0]S_AXI_awlen;
  wire [0:0]S_AXI_awlock;
  wire [2:0]S_AXI_awprot;
  wire [3:0]S_AXI_awqos;
  wire S_AXI_awready;
  wire [3:0]S_AXI_awregion;
  wire [2:0]S_AXI_awsize;
  wire [15:0]S_AXI_awuser;
  wire S_AXI_awvalid;
  wire [15:0]S_AXI_bid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [127:0]S_AXI_rdata;
  wire [15:0]S_AXI_rid;
  wire S_AXI_rlast;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [127:0]S_AXI_wdata;
  wire S_AXI_wlast;
  wire S_AXI_wready;
  wire [15:0]S_AXI_wstrb;
  wire S_AXI_wvalid;
  wire [31:0]auto_cc_to_auto_ds_ARADDR;
  wire [1:0]auto_cc_to_auto_ds_ARBURST;
  wire [3:0]auto_cc_to_auto_ds_ARCACHE;
  wire [15:0]auto_cc_to_auto_ds_ARID;
  wire [7:0]auto_cc_to_auto_ds_ARLEN;
  wire [0:0]auto_cc_to_auto_ds_ARLOCK;
  wire [2:0]auto_cc_to_auto_ds_ARPROT;
  wire [3:0]auto_cc_to_auto_ds_ARQOS;
  wire auto_cc_to_auto_ds_ARREADY;
  wire [3:0]auto_cc_to_auto_ds_ARREGION;
  wire [2:0]auto_cc_to_auto_ds_ARSIZE;
  wire auto_cc_to_auto_ds_ARVALID;
  wire [31:0]auto_cc_to_auto_ds_AWADDR;
  wire [1:0]auto_cc_to_auto_ds_AWBURST;
  wire [3:0]auto_cc_to_auto_ds_AWCACHE;
  wire [15:0]auto_cc_to_auto_ds_AWID;
  wire [7:0]auto_cc_to_auto_ds_AWLEN;
  wire [0:0]auto_cc_to_auto_ds_AWLOCK;
  wire [2:0]auto_cc_to_auto_ds_AWPROT;
  wire [3:0]auto_cc_to_auto_ds_AWQOS;
  wire auto_cc_to_auto_ds_AWREADY;
  wire [3:0]auto_cc_to_auto_ds_AWREGION;
  wire [2:0]auto_cc_to_auto_ds_AWSIZE;
  wire auto_cc_to_auto_ds_AWVALID;
  wire [15:0]auto_cc_to_auto_ds_BID;
  wire auto_cc_to_auto_ds_BREADY;
  wire [1:0]auto_cc_to_auto_ds_BRESP;
  wire auto_cc_to_auto_ds_BVALID;
  wire [127:0]auto_cc_to_auto_ds_RDATA;
  wire [15:0]auto_cc_to_auto_ds_RID;
  wire auto_cc_to_auto_ds_RLAST;
  wire auto_cc_to_auto_ds_RREADY;
  wire [1:0]auto_cc_to_auto_ds_RRESP;
  wire auto_cc_to_auto_ds_RVALID;
  wire [127:0]auto_cc_to_auto_ds_WDATA;
  wire auto_cc_to_auto_ds_WLAST;
  wire auto_cc_to_auto_ds_WREADY;
  wire [15:0]auto_cc_to_auto_ds_WSTRB;
  wire auto_cc_to_auto_ds_WVALID;
  wire [31:0]auto_ds_to_m01_regslice_ARADDR;
  wire [1:0]auto_ds_to_m01_regslice_ARBURST;
  wire [3:0]auto_ds_to_m01_regslice_ARCACHE;
  wire [7:0]auto_ds_to_m01_regslice_ARLEN;
  wire [0:0]auto_ds_to_m01_regslice_ARLOCK;
  wire [2:0]auto_ds_to_m01_regslice_ARPROT;
  wire [3:0]auto_ds_to_m01_regslice_ARQOS;
  wire auto_ds_to_m01_regslice_ARREADY;
  wire [3:0]auto_ds_to_m01_regslice_ARREGION;
  wire [2:0]auto_ds_to_m01_regslice_ARSIZE;
  wire auto_ds_to_m01_regslice_ARVALID;
  wire [31:0]auto_ds_to_m01_regslice_AWADDR;
  wire [1:0]auto_ds_to_m01_regslice_AWBURST;
  wire [3:0]auto_ds_to_m01_regslice_AWCACHE;
  wire [7:0]auto_ds_to_m01_regslice_AWLEN;
  wire [0:0]auto_ds_to_m01_regslice_AWLOCK;
  wire [2:0]auto_ds_to_m01_regslice_AWPROT;
  wire [3:0]auto_ds_to_m01_regslice_AWQOS;
  wire auto_ds_to_m01_regslice_AWREADY;
  wire [3:0]auto_ds_to_m01_regslice_AWREGION;
  wire [2:0]auto_ds_to_m01_regslice_AWSIZE;
  wire auto_ds_to_m01_regslice_AWVALID;
  wire auto_ds_to_m01_regslice_BREADY;
  wire [1:0]auto_ds_to_m01_regslice_BRESP;
  wire auto_ds_to_m01_regslice_BVALID;
  wire [31:0]auto_ds_to_m01_regslice_RDATA;
  wire auto_ds_to_m01_regslice_RLAST;
  wire auto_ds_to_m01_regslice_RREADY;
  wire [1:0]auto_ds_to_m01_regslice_RRESP;
  wire auto_ds_to_m01_regslice_RVALID;
  wire [31:0]auto_ds_to_m01_regslice_WDATA;
  wire auto_ds_to_m01_regslice_WLAST;
  wire auto_ds_to_m01_regslice_WREADY;
  wire [3:0]auto_ds_to_m01_regslice_WSTRB;
  wire auto_ds_to_m01_regslice_WVALID;

  vitis_design_interconnect_axihpm0fpd_imp_auto_cc_0 auto_cc
       (.m_axi_aclk(M_ACLK),
        .m_axi_araddr(auto_cc_to_auto_ds_ARADDR),
        .m_axi_arburst(auto_cc_to_auto_ds_ARBURST),
        .m_axi_arcache(auto_cc_to_auto_ds_ARCACHE),
        .m_axi_aresetn(M_ARESETN),
        .m_axi_arid(auto_cc_to_auto_ds_ARID),
        .m_axi_arlen(auto_cc_to_auto_ds_ARLEN),
        .m_axi_arlock(auto_cc_to_auto_ds_ARLOCK),
        .m_axi_arprot(auto_cc_to_auto_ds_ARPROT),
        .m_axi_arqos(auto_cc_to_auto_ds_ARQOS),
        .m_axi_arready(auto_cc_to_auto_ds_ARREADY),
        .m_axi_arregion(auto_cc_to_auto_ds_ARREGION),
        .m_axi_arsize(auto_cc_to_auto_ds_ARSIZE),
        .m_axi_arvalid(auto_cc_to_auto_ds_ARVALID),
        .m_axi_awaddr(auto_cc_to_auto_ds_AWADDR),
        .m_axi_awburst(auto_cc_to_auto_ds_AWBURST),
        .m_axi_awcache(auto_cc_to_auto_ds_AWCACHE),
        .m_axi_awid(auto_cc_to_auto_ds_AWID),
        .m_axi_awlen(auto_cc_to_auto_ds_AWLEN),
        .m_axi_awlock(auto_cc_to_auto_ds_AWLOCK),
        .m_axi_awprot(auto_cc_to_auto_ds_AWPROT),
        .m_axi_awqos(auto_cc_to_auto_ds_AWQOS),
        .m_axi_awready(auto_cc_to_auto_ds_AWREADY),
        .m_axi_awregion(auto_cc_to_auto_ds_AWREGION),
        .m_axi_awsize(auto_cc_to_auto_ds_AWSIZE),
        .m_axi_awvalid(auto_cc_to_auto_ds_AWVALID),
        .m_axi_bid(auto_cc_to_auto_ds_BID),
        .m_axi_bready(auto_cc_to_auto_ds_BREADY),
        .m_axi_bresp(auto_cc_to_auto_ds_BRESP),
        .m_axi_bvalid(auto_cc_to_auto_ds_BVALID),
        .m_axi_rdata(auto_cc_to_auto_ds_RDATA),
        .m_axi_rid(auto_cc_to_auto_ds_RID),
        .m_axi_rlast(auto_cc_to_auto_ds_RLAST),
        .m_axi_rready(auto_cc_to_auto_ds_RREADY),
        .m_axi_rresp(auto_cc_to_auto_ds_RRESP),
        .m_axi_rvalid(auto_cc_to_auto_ds_RVALID),
        .m_axi_wdata(auto_cc_to_auto_ds_WDATA),
        .m_axi_wlast(auto_cc_to_auto_ds_WLAST),
        .m_axi_wready(auto_cc_to_auto_ds_WREADY),
        .m_axi_wstrb(auto_cc_to_auto_ds_WSTRB),
        .m_axi_wvalid(auto_cc_to_auto_ds_WVALID),
        .s_axi_aclk(S_ACLK),
        .s_axi_araddr(S_AXI_araddr[31:0]),
        .s_axi_arburst(S_AXI_arburst),
        .s_axi_arcache(S_AXI_arcache),
        .s_axi_aresetn(S_ARESETN),
        .s_axi_arid(S_AXI_arid),
        .s_axi_arlen(S_AXI_arlen),
        .s_axi_arlock(S_AXI_arlock),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arqos(S_AXI_arqos),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arregion(S_AXI_arregion),
        .s_axi_arsize(S_AXI_arsize),
        .s_axi_aruser(S_AXI_aruser),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr[31:0]),
        .s_axi_awburst(S_AXI_awburst),
        .s_axi_awcache(S_AXI_awcache),
        .s_axi_awid(S_AXI_awid),
        .s_axi_awlen(S_AXI_awlen),
        .s_axi_awlock(S_AXI_awlock),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awqos(S_AXI_awqos),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awregion(S_AXI_awregion),
        .s_axi_awsize(S_AXI_awsize),
        .s_axi_awuser(S_AXI_awuser),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bid(S_AXI_bid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rid(S_AXI_rid),
        .s_axi_rlast(S_AXI_rlast),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wlast(S_AXI_wlast),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
  vitis_design_interconnect_axihpm0fpd_imp_auto_ds_0 auto_ds
       (.m_axi_araddr(auto_ds_to_m01_regslice_ARADDR),
        .m_axi_arburst(auto_ds_to_m01_regslice_ARBURST),
        .m_axi_arcache(auto_ds_to_m01_regslice_ARCACHE),
        .m_axi_arlen(auto_ds_to_m01_regslice_ARLEN),
        .m_axi_arlock(auto_ds_to_m01_regslice_ARLOCK),
        .m_axi_arprot(auto_ds_to_m01_regslice_ARPROT),
        .m_axi_arqos(auto_ds_to_m01_regslice_ARQOS),
        .m_axi_arready(auto_ds_to_m01_regslice_ARREADY),
        .m_axi_arregion(auto_ds_to_m01_regslice_ARREGION),
        .m_axi_arsize(auto_ds_to_m01_regslice_ARSIZE),
        .m_axi_arvalid(auto_ds_to_m01_regslice_ARVALID),
        .m_axi_awaddr(auto_ds_to_m01_regslice_AWADDR),
        .m_axi_awburst(auto_ds_to_m01_regslice_AWBURST),
        .m_axi_awcache(auto_ds_to_m01_regslice_AWCACHE),
        .m_axi_awlen(auto_ds_to_m01_regslice_AWLEN),
        .m_axi_awlock(auto_ds_to_m01_regslice_AWLOCK),
        .m_axi_awprot(auto_ds_to_m01_regslice_AWPROT),
        .m_axi_awqos(auto_ds_to_m01_regslice_AWQOS),
        .m_axi_awready(auto_ds_to_m01_regslice_AWREADY),
        .m_axi_awregion(auto_ds_to_m01_regslice_AWREGION),
        .m_axi_awsize(auto_ds_to_m01_regslice_AWSIZE),
        .m_axi_awvalid(auto_ds_to_m01_regslice_AWVALID),
        .m_axi_bready(auto_ds_to_m01_regslice_BREADY),
        .m_axi_bresp(auto_ds_to_m01_regslice_BRESP),
        .m_axi_bvalid(auto_ds_to_m01_regslice_BVALID),
        .m_axi_rdata(auto_ds_to_m01_regslice_RDATA),
        .m_axi_rlast(auto_ds_to_m01_regslice_RLAST),
        .m_axi_rready(auto_ds_to_m01_regslice_RREADY),
        .m_axi_rresp(auto_ds_to_m01_regslice_RRESP),
        .m_axi_rvalid(auto_ds_to_m01_regslice_RVALID),
        .m_axi_wdata(auto_ds_to_m01_regslice_WDATA),
        .m_axi_wlast(auto_ds_to_m01_regslice_WLAST),
        .m_axi_wready(auto_ds_to_m01_regslice_WREADY),
        .m_axi_wstrb(auto_ds_to_m01_regslice_WSTRB),
        .m_axi_wvalid(auto_ds_to_m01_regslice_WVALID),
        .s_axi_aclk(M_ACLK),
        .s_axi_araddr(auto_cc_to_auto_ds_ARADDR),
        .s_axi_arburst(auto_cc_to_auto_ds_ARBURST),
        .s_axi_arcache(auto_cc_to_auto_ds_ARCACHE),
        .s_axi_aresetn(M_ARESETN),
        .s_axi_arid(auto_cc_to_auto_ds_ARID),
        .s_axi_arlen(auto_cc_to_auto_ds_ARLEN),
        .s_axi_arlock(auto_cc_to_auto_ds_ARLOCK),
        .s_axi_arprot(auto_cc_to_auto_ds_ARPROT),
        .s_axi_arqos(auto_cc_to_auto_ds_ARQOS),
        .s_axi_arready(auto_cc_to_auto_ds_ARREADY),
        .s_axi_arregion(auto_cc_to_auto_ds_ARREGION),
        .s_axi_arsize(auto_cc_to_auto_ds_ARSIZE),
        .s_axi_arvalid(auto_cc_to_auto_ds_ARVALID),
        .s_axi_awaddr(auto_cc_to_auto_ds_AWADDR),
        .s_axi_awburst(auto_cc_to_auto_ds_AWBURST),
        .s_axi_awcache(auto_cc_to_auto_ds_AWCACHE),
        .s_axi_awid(auto_cc_to_auto_ds_AWID),
        .s_axi_awlen(auto_cc_to_auto_ds_AWLEN),
        .s_axi_awlock(auto_cc_to_auto_ds_AWLOCK),
        .s_axi_awprot(auto_cc_to_auto_ds_AWPROT),
        .s_axi_awqos(auto_cc_to_auto_ds_AWQOS),
        .s_axi_awready(auto_cc_to_auto_ds_AWREADY),
        .s_axi_awregion(auto_cc_to_auto_ds_AWREGION),
        .s_axi_awsize(auto_cc_to_auto_ds_AWSIZE),
        .s_axi_awvalid(auto_cc_to_auto_ds_AWVALID),
        .s_axi_bid(auto_cc_to_auto_ds_BID),
        .s_axi_bready(auto_cc_to_auto_ds_BREADY),
        .s_axi_bresp(auto_cc_to_auto_ds_BRESP),
        .s_axi_bvalid(auto_cc_to_auto_ds_BVALID),
        .s_axi_rdata(auto_cc_to_auto_ds_RDATA),
        .s_axi_rid(auto_cc_to_auto_ds_RID),
        .s_axi_rlast(auto_cc_to_auto_ds_RLAST),
        .s_axi_rready(auto_cc_to_auto_ds_RREADY),
        .s_axi_rresp(auto_cc_to_auto_ds_RRESP),
        .s_axi_rvalid(auto_cc_to_auto_ds_RVALID),
        .s_axi_wdata(auto_cc_to_auto_ds_WDATA),
        .s_axi_wlast(auto_cc_to_auto_ds_WLAST),
        .s_axi_wready(auto_cc_to_auto_ds_WREADY),
        .s_axi_wstrb(auto_cc_to_auto_ds_WSTRB),
        .s_axi_wvalid(auto_cc_to_auto_ds_WVALID));
  vitis_design_interconnect_axihpm0fpd_imp_m01_regslice_0 m01_regslice
       (.aclk(M_ACLK),
        .aresetn(M_ARESETN),
        .m_axi_araddr(M_AXI_araddr),
        .m_axi_arburst(M_AXI_arburst),
        .m_axi_arlen(M_AXI_arlen),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arsize(M_AXI_arsize),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awburst(M_AXI_awburst),
        .m_axi_awlen(M_AXI_awlen),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awsize(M_AXI_awsize),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rlast(M_AXI_rlast),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wlast(M_AXI_wlast),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_araddr(auto_ds_to_m01_regslice_ARADDR),
        .s_axi_arburst(auto_ds_to_m01_regslice_ARBURST),
        .s_axi_arcache(auto_ds_to_m01_regslice_ARCACHE),
        .s_axi_arlen(auto_ds_to_m01_regslice_ARLEN),
        .s_axi_arlock(auto_ds_to_m01_regslice_ARLOCK),
        .s_axi_arprot(auto_ds_to_m01_regslice_ARPROT),
        .s_axi_arqos(auto_ds_to_m01_regslice_ARQOS),
        .s_axi_arready(auto_ds_to_m01_regslice_ARREADY),
        .s_axi_arregion(auto_ds_to_m01_regslice_ARREGION),
        .s_axi_arsize(auto_ds_to_m01_regslice_ARSIZE),
        .s_axi_arvalid(auto_ds_to_m01_regslice_ARVALID),
        .s_axi_awaddr(auto_ds_to_m01_regslice_AWADDR),
        .s_axi_awburst(auto_ds_to_m01_regslice_AWBURST),
        .s_axi_awcache(auto_ds_to_m01_regslice_AWCACHE),
        .s_axi_awlen(auto_ds_to_m01_regslice_AWLEN),
        .s_axi_awlock(auto_ds_to_m01_regslice_AWLOCK),
        .s_axi_awprot(auto_ds_to_m01_regslice_AWPROT),
        .s_axi_awqos(auto_ds_to_m01_regslice_AWQOS),
        .s_axi_awready(auto_ds_to_m01_regslice_AWREADY),
        .s_axi_awregion(auto_ds_to_m01_regslice_AWREGION),
        .s_axi_awsize(auto_ds_to_m01_regslice_AWSIZE),
        .s_axi_awvalid(auto_ds_to_m01_regslice_AWVALID),
        .s_axi_bready(auto_ds_to_m01_regslice_BREADY),
        .s_axi_bresp(auto_ds_to_m01_regslice_BRESP),
        .s_axi_bvalid(auto_ds_to_m01_regslice_BVALID),
        .s_axi_rdata(auto_ds_to_m01_regslice_RDATA),
        .s_axi_rlast(auto_ds_to_m01_regslice_RLAST),
        .s_axi_rready(auto_ds_to_m01_regslice_RREADY),
        .s_axi_rresp(auto_ds_to_m01_regslice_RRESP),
        .s_axi_rvalid(auto_ds_to_m01_regslice_RVALID),
        .s_axi_wdata(auto_ds_to_m01_regslice_WDATA),
        .s_axi_wlast(auto_ds_to_m01_regslice_WLAST),
        .s_axi_wready(auto_ds_to_m01_regslice_WREADY),
        .s_axi_wstrb(auto_ds_to_m01_regslice_WSTRB),
        .s_axi_wvalid(auto_ds_to_m01_regslice_WVALID));
endmodule

module m01_couplers_imp_1QPBS8F
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arprot,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awprot,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [7:0]M_AXI_araddr;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [7:0]M_AXI_awaddr;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [2:0]S_AXI_arprot;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [2:0]S_AXI_awprot;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire M_ACLK;
  wire M_ARESETN;
  wire [7:0]M_AXI_araddr;
  wire M_AXI_arready;
  wire M_AXI_arvalid;
  wire [7:0]M_AXI_awaddr;
  wire M_AXI_awready;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [31:0]M_AXI_rdata;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wready;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire [39:0]S_AXI_araddr;
  wire [2:0]S_AXI_arprot;
  wire S_AXI_arready;
  wire S_AXI_arvalid;
  wire [39:0]S_AXI_awaddr;
  wire [2:0]S_AXI_awprot;
  wire S_AXI_awready;
  wire S_AXI_awvalid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [31:0]S_AXI_wdata;
  wire S_AXI_wready;
  wire [3:0]S_AXI_wstrb;
  wire S_AXI_wvalid;

  vitis_design_dpa_ctrl_interconnect_imp_m01_regslice_0 m01_regslice
       (.aclk(M_ACLK),
        .aresetn(M_ARESETN),
        .m_axi_araddr(M_AXI_araddr),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_araddr(S_AXI_araddr[7:0]),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr[7:0]),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
endmodule

module m01_couplers_imp_QV5828
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arprot,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awprot,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arregion,
    S_AXI_arsize,
    S_AXI_aruser,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awregion,
    S_AXI_awsize,
    S_AXI_awuser,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [6:0]M_AXI_araddr;
  output [2:0]M_AXI_arprot;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [6:0]M_AXI_awaddr;
  output [2:0]M_AXI_awprot;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input [0:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [3:0]S_AXI_arregion;
  input [2:0]S_AXI_arsize;
  input [15:0]S_AXI_aruser;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input [0:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [3:0]S_AXI_awregion;
  input [2:0]S_AXI_awsize;
  input [15:0]S_AXI_awuser;
  input S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire M_ACLK;
  wire M_ARESETN;
  wire [6:0]M_AXI_araddr;
  wire [2:0]M_AXI_arprot;
  wire M_AXI_arready;
  wire M_AXI_arvalid;
  wire [6:0]M_AXI_awaddr;
  wire [2:0]M_AXI_awprot;
  wire M_AXI_awready;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [31:0]M_AXI_rdata;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wready;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_ACLK;
  wire S_ARESETN;
  wire [39:0]S_AXI_araddr;
  wire [1:0]S_AXI_arburst;
  wire [3:0]S_AXI_arcache;
  wire [15:0]S_AXI_arid;
  wire [7:0]S_AXI_arlen;
  wire [0:0]S_AXI_arlock;
  wire [2:0]S_AXI_arprot;
  wire [3:0]S_AXI_arqos;
  wire S_AXI_arready;
  wire [3:0]S_AXI_arregion;
  wire [2:0]S_AXI_arsize;
  wire [15:0]S_AXI_aruser;
  wire S_AXI_arvalid;
  wire [39:0]S_AXI_awaddr;
  wire [1:0]S_AXI_awburst;
  wire [3:0]S_AXI_awcache;
  wire [15:0]S_AXI_awid;
  wire [7:0]S_AXI_awlen;
  wire [0:0]S_AXI_awlock;
  wire [2:0]S_AXI_awprot;
  wire [3:0]S_AXI_awqos;
  wire S_AXI_awready;
  wire [3:0]S_AXI_awregion;
  wire [2:0]S_AXI_awsize;
  wire [15:0]S_AXI_awuser;
  wire S_AXI_awvalid;
  wire [15:0]S_AXI_bid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire [15:0]S_AXI_rid;
  wire S_AXI_rlast;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [31:0]S_AXI_wdata;
  wire S_AXI_wlast;
  wire S_AXI_wready;
  wire [3:0]S_AXI_wstrb;
  wire S_AXI_wvalid;
  wire [39:0]auto_cc_to_auto_pc_ARADDR;
  wire [1:0]auto_cc_to_auto_pc_ARBURST;
  wire [3:0]auto_cc_to_auto_pc_ARCACHE;
  wire [15:0]auto_cc_to_auto_pc_ARID;
  wire [7:0]auto_cc_to_auto_pc_ARLEN;
  wire [0:0]auto_cc_to_auto_pc_ARLOCK;
  wire [2:0]auto_cc_to_auto_pc_ARPROT;
  wire [3:0]auto_cc_to_auto_pc_ARQOS;
  wire auto_cc_to_auto_pc_ARREADY;
  wire [3:0]auto_cc_to_auto_pc_ARREGION;
  wire [2:0]auto_cc_to_auto_pc_ARSIZE;
  wire auto_cc_to_auto_pc_ARVALID;
  wire [39:0]auto_cc_to_auto_pc_AWADDR;
  wire [1:0]auto_cc_to_auto_pc_AWBURST;
  wire [3:0]auto_cc_to_auto_pc_AWCACHE;
  wire [15:0]auto_cc_to_auto_pc_AWID;
  wire [7:0]auto_cc_to_auto_pc_AWLEN;
  wire [0:0]auto_cc_to_auto_pc_AWLOCK;
  wire [2:0]auto_cc_to_auto_pc_AWPROT;
  wire [3:0]auto_cc_to_auto_pc_AWQOS;
  wire auto_cc_to_auto_pc_AWREADY;
  wire [3:0]auto_cc_to_auto_pc_AWREGION;
  wire [2:0]auto_cc_to_auto_pc_AWSIZE;
  wire auto_cc_to_auto_pc_AWVALID;
  wire [15:0]auto_cc_to_auto_pc_BID;
  wire auto_cc_to_auto_pc_BREADY;
  wire [1:0]auto_cc_to_auto_pc_BRESP;
  wire auto_cc_to_auto_pc_BVALID;
  wire [31:0]auto_cc_to_auto_pc_RDATA;
  wire [15:0]auto_cc_to_auto_pc_RID;
  wire auto_cc_to_auto_pc_RLAST;
  wire auto_cc_to_auto_pc_RREADY;
  wire [1:0]auto_cc_to_auto_pc_RRESP;
  wire auto_cc_to_auto_pc_RVALID;
  wire [31:0]auto_cc_to_auto_pc_WDATA;
  wire auto_cc_to_auto_pc_WLAST;
  wire auto_cc_to_auto_pc_WREADY;
  wire [3:0]auto_cc_to_auto_pc_WSTRB;
  wire auto_cc_to_auto_pc_WVALID;
  wire [39:0]auto_pc_to_m01_regslice_ARADDR;
  wire [2:0]auto_pc_to_m01_regslice_ARPROT;
  wire auto_pc_to_m01_regslice_ARREADY;
  wire auto_pc_to_m01_regslice_ARVALID;
  wire [39:0]auto_pc_to_m01_regslice_AWADDR;
  wire [2:0]auto_pc_to_m01_regslice_AWPROT;
  wire auto_pc_to_m01_regslice_AWREADY;
  wire auto_pc_to_m01_regslice_AWVALID;
  wire auto_pc_to_m01_regslice_BREADY;
  wire [1:0]auto_pc_to_m01_regslice_BRESP;
  wire auto_pc_to_m01_regslice_BVALID;
  wire [31:0]auto_pc_to_m01_regslice_RDATA;
  wire auto_pc_to_m01_regslice_RREADY;
  wire [1:0]auto_pc_to_m01_regslice_RRESP;
  wire auto_pc_to_m01_regslice_RVALID;
  wire [31:0]auto_pc_to_m01_regslice_WDATA;
  wire auto_pc_to_m01_regslice_WREADY;
  wire [3:0]auto_pc_to_m01_regslice_WSTRB;
  wire auto_pc_to_m01_regslice_WVALID;

  vitis_design_interconnect_axilite_imp_auto_cc_0 auto_cc
       (.m_axi_aclk(M_ACLK),
        .m_axi_araddr(auto_cc_to_auto_pc_ARADDR),
        .m_axi_arburst(auto_cc_to_auto_pc_ARBURST),
        .m_axi_arcache(auto_cc_to_auto_pc_ARCACHE),
        .m_axi_aresetn(M_ARESETN),
        .m_axi_arid(auto_cc_to_auto_pc_ARID),
        .m_axi_arlen(auto_cc_to_auto_pc_ARLEN),
        .m_axi_arlock(auto_cc_to_auto_pc_ARLOCK),
        .m_axi_arprot(auto_cc_to_auto_pc_ARPROT),
        .m_axi_arqos(auto_cc_to_auto_pc_ARQOS),
        .m_axi_arready(auto_cc_to_auto_pc_ARREADY),
        .m_axi_arregion(auto_cc_to_auto_pc_ARREGION),
        .m_axi_arsize(auto_cc_to_auto_pc_ARSIZE),
        .m_axi_arvalid(auto_cc_to_auto_pc_ARVALID),
        .m_axi_awaddr(auto_cc_to_auto_pc_AWADDR),
        .m_axi_awburst(auto_cc_to_auto_pc_AWBURST),
        .m_axi_awcache(auto_cc_to_auto_pc_AWCACHE),
        .m_axi_awid(auto_cc_to_auto_pc_AWID),
        .m_axi_awlen(auto_cc_to_auto_pc_AWLEN),
        .m_axi_awlock(auto_cc_to_auto_pc_AWLOCK),
        .m_axi_awprot(auto_cc_to_auto_pc_AWPROT),
        .m_axi_awqos(auto_cc_to_auto_pc_AWQOS),
        .m_axi_awready(auto_cc_to_auto_pc_AWREADY),
        .m_axi_awregion(auto_cc_to_auto_pc_AWREGION),
        .m_axi_awsize(auto_cc_to_auto_pc_AWSIZE),
        .m_axi_awvalid(auto_cc_to_auto_pc_AWVALID),
        .m_axi_bid(auto_cc_to_auto_pc_BID),
        .m_axi_bready(auto_cc_to_auto_pc_BREADY),
        .m_axi_bresp(auto_cc_to_auto_pc_BRESP),
        .m_axi_bvalid(auto_cc_to_auto_pc_BVALID),
        .m_axi_rdata(auto_cc_to_auto_pc_RDATA),
        .m_axi_rid(auto_cc_to_auto_pc_RID),
        .m_axi_rlast(auto_cc_to_auto_pc_RLAST),
        .m_axi_rready(auto_cc_to_auto_pc_RREADY),
        .m_axi_rresp(auto_cc_to_auto_pc_RRESP),
        .m_axi_rvalid(auto_cc_to_auto_pc_RVALID),
        .m_axi_wdata(auto_cc_to_auto_pc_WDATA),
        .m_axi_wlast(auto_cc_to_auto_pc_WLAST),
        .m_axi_wready(auto_cc_to_auto_pc_WREADY),
        .m_axi_wstrb(auto_cc_to_auto_pc_WSTRB),
        .m_axi_wvalid(auto_cc_to_auto_pc_WVALID),
        .s_axi_aclk(S_ACLK),
        .s_axi_araddr(S_AXI_araddr),
        .s_axi_arburst(S_AXI_arburst),
        .s_axi_arcache(S_AXI_arcache),
        .s_axi_aresetn(S_ARESETN),
        .s_axi_arid(S_AXI_arid),
        .s_axi_arlen(S_AXI_arlen),
        .s_axi_arlock(S_AXI_arlock),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arqos(S_AXI_arqos),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arregion(S_AXI_arregion),
        .s_axi_arsize(S_AXI_arsize),
        .s_axi_aruser(S_AXI_aruser),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr),
        .s_axi_awburst(S_AXI_awburst),
        .s_axi_awcache(S_AXI_awcache),
        .s_axi_awid(S_AXI_awid),
        .s_axi_awlen(S_AXI_awlen),
        .s_axi_awlock(S_AXI_awlock),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awqos(S_AXI_awqos),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awregion(S_AXI_awregion),
        .s_axi_awsize(S_AXI_awsize),
        .s_axi_awuser(S_AXI_awuser),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bid(S_AXI_bid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rid(S_AXI_rid),
        .s_axi_rlast(S_AXI_rlast),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wlast(S_AXI_wlast),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
  vitis_design_interconnect_axilite_imp_auto_pc_1 auto_pc
       (.aclk(M_ACLK),
        .aresetn(M_ARESETN),
        .m_axi_araddr(auto_pc_to_m01_regslice_ARADDR),
        .m_axi_arprot(auto_pc_to_m01_regslice_ARPROT),
        .m_axi_arready(auto_pc_to_m01_regslice_ARREADY),
        .m_axi_arvalid(auto_pc_to_m01_regslice_ARVALID),
        .m_axi_awaddr(auto_pc_to_m01_regslice_AWADDR),
        .m_axi_awprot(auto_pc_to_m01_regslice_AWPROT),
        .m_axi_awready(auto_pc_to_m01_regslice_AWREADY),
        .m_axi_awvalid(auto_pc_to_m01_regslice_AWVALID),
        .m_axi_bready(auto_pc_to_m01_regslice_BREADY),
        .m_axi_bresp(auto_pc_to_m01_regslice_BRESP),
        .m_axi_bvalid(auto_pc_to_m01_regslice_BVALID),
        .m_axi_rdata(auto_pc_to_m01_regslice_RDATA),
        .m_axi_rready(auto_pc_to_m01_regslice_RREADY),
        .m_axi_rresp(auto_pc_to_m01_regslice_RRESP),
        .m_axi_rvalid(auto_pc_to_m01_regslice_RVALID),
        .m_axi_wdata(auto_pc_to_m01_regslice_WDATA),
        .m_axi_wready(auto_pc_to_m01_regslice_WREADY),
        .m_axi_wstrb(auto_pc_to_m01_regslice_WSTRB),
        .m_axi_wvalid(auto_pc_to_m01_regslice_WVALID),
        .s_axi_araddr(auto_cc_to_auto_pc_ARADDR),
        .s_axi_arburst(auto_cc_to_auto_pc_ARBURST),
        .s_axi_arcache(auto_cc_to_auto_pc_ARCACHE),
        .s_axi_arid(auto_cc_to_auto_pc_ARID),
        .s_axi_arlen(auto_cc_to_auto_pc_ARLEN),
        .s_axi_arlock(auto_cc_to_auto_pc_ARLOCK),
        .s_axi_arprot(auto_cc_to_auto_pc_ARPROT),
        .s_axi_arqos(auto_cc_to_auto_pc_ARQOS),
        .s_axi_arready(auto_cc_to_auto_pc_ARREADY),
        .s_axi_arregion(auto_cc_to_auto_pc_ARREGION),
        .s_axi_arsize(auto_cc_to_auto_pc_ARSIZE),
        .s_axi_arvalid(auto_cc_to_auto_pc_ARVALID),
        .s_axi_awaddr(auto_cc_to_auto_pc_AWADDR),
        .s_axi_awburst(auto_cc_to_auto_pc_AWBURST),
        .s_axi_awcache(auto_cc_to_auto_pc_AWCACHE),
        .s_axi_awid(auto_cc_to_auto_pc_AWID),
        .s_axi_awlen(auto_cc_to_auto_pc_AWLEN),
        .s_axi_awlock(auto_cc_to_auto_pc_AWLOCK),
        .s_axi_awprot(auto_cc_to_auto_pc_AWPROT),
        .s_axi_awqos(auto_cc_to_auto_pc_AWQOS),
        .s_axi_awready(auto_cc_to_auto_pc_AWREADY),
        .s_axi_awregion(auto_cc_to_auto_pc_AWREGION),
        .s_axi_awsize(auto_cc_to_auto_pc_AWSIZE),
        .s_axi_awvalid(auto_cc_to_auto_pc_AWVALID),
        .s_axi_bid(auto_cc_to_auto_pc_BID),
        .s_axi_bready(auto_cc_to_auto_pc_BREADY),
        .s_axi_bresp(auto_cc_to_auto_pc_BRESP),
        .s_axi_bvalid(auto_cc_to_auto_pc_BVALID),
        .s_axi_rdata(auto_cc_to_auto_pc_RDATA),
        .s_axi_rid(auto_cc_to_auto_pc_RID),
        .s_axi_rlast(auto_cc_to_auto_pc_RLAST),
        .s_axi_rready(auto_cc_to_auto_pc_RREADY),
        .s_axi_rresp(auto_cc_to_auto_pc_RRESP),
        .s_axi_rvalid(auto_cc_to_auto_pc_RVALID),
        .s_axi_wdata(auto_cc_to_auto_pc_WDATA),
        .s_axi_wlast(auto_cc_to_auto_pc_WLAST),
        .s_axi_wready(auto_cc_to_auto_pc_WREADY),
        .s_axi_wstrb(auto_cc_to_auto_pc_WSTRB),
        .s_axi_wvalid(auto_cc_to_auto_pc_WVALID));
  vitis_design_interconnect_axilite_imp_m01_regslice_0 m01_regslice
       (.aclk(M_ACLK),
        .aresetn(M_ARESETN),
        .m_axi_araddr(M_AXI_araddr),
        .m_axi_arprot(M_AXI_arprot),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awprot(M_AXI_awprot),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_araddr(auto_pc_to_m01_regslice_ARADDR[6:0]),
        .s_axi_arprot(auto_pc_to_m01_regslice_ARPROT),
        .s_axi_arready(auto_pc_to_m01_regslice_ARREADY),
        .s_axi_arvalid(auto_pc_to_m01_regslice_ARVALID),
        .s_axi_awaddr(auto_pc_to_m01_regslice_AWADDR[6:0]),
        .s_axi_awprot(auto_pc_to_m01_regslice_AWPROT),
        .s_axi_awready(auto_pc_to_m01_regslice_AWREADY),
        .s_axi_awvalid(auto_pc_to_m01_regslice_AWVALID),
        .s_axi_bready(auto_pc_to_m01_regslice_BREADY),
        .s_axi_bresp(auto_pc_to_m01_regslice_BRESP),
        .s_axi_bvalid(auto_pc_to_m01_regslice_BVALID),
        .s_axi_rdata(auto_pc_to_m01_regslice_RDATA),
        .s_axi_rready(auto_pc_to_m01_regslice_RREADY),
        .s_axi_rresp(auto_pc_to_m01_regslice_RRESP),
        .s_axi_rvalid(auto_pc_to_m01_regslice_RVALID),
        .s_axi_wdata(auto_pc_to_m01_regslice_WDATA),
        .s_axi_wready(auto_pc_to_m01_regslice_WREADY),
        .s_axi_wstrb(auto_pc_to_m01_regslice_WSTRB),
        .s_axi_wvalid(auto_pc_to_m01_regslice_WVALID));
endmodule

module m02_couplers_imp_1O2QDPR
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arprot,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awprot,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [7:0]M_AXI_araddr;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [7:0]M_AXI_awaddr;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [2:0]S_AXI_arprot;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [2:0]S_AXI_awprot;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire M_ACLK;
  wire M_ARESETN;
  wire [7:0]M_AXI_araddr;
  wire M_AXI_arready;
  wire M_AXI_arvalid;
  wire [7:0]M_AXI_awaddr;
  wire M_AXI_awready;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [31:0]M_AXI_rdata;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wready;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire [39:0]S_AXI_araddr;
  wire [2:0]S_AXI_arprot;
  wire S_AXI_arready;
  wire S_AXI_arvalid;
  wire [39:0]S_AXI_awaddr;
  wire [2:0]S_AXI_awprot;
  wire S_AXI_awready;
  wire S_AXI_awvalid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [31:0]S_AXI_wdata;
  wire S_AXI_wready;
  wire [3:0]S_AXI_wstrb;
  wire S_AXI_wvalid;

  vitis_design_dpa_ctrl_interconnect_imp_m02_regslice_0 m02_regslice
       (.aclk(M_ACLK),
        .aresetn(M_ARESETN),
        .m_axi_araddr(M_AXI_araddr),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_araddr(S_AXI_araddr[7:0]),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr[7:0]),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
endmodule

module m02_couplers_imp_OVNA6O
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arburst,
    M_AXI_arcache,
    M_AXI_arid,
    M_AXI_arlen,
    M_AXI_arlock,
    M_AXI_arprot,
    M_AXI_arqos,
    M_AXI_arready,
    M_AXI_arregion,
    M_AXI_arsize,
    M_AXI_aruser,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awburst,
    M_AXI_awcache,
    M_AXI_awid,
    M_AXI_awlen,
    M_AXI_awlock,
    M_AXI_awprot,
    M_AXI_awqos,
    M_AXI_awready,
    M_AXI_awregion,
    M_AXI_awsize,
    M_AXI_awuser,
    M_AXI_awvalid,
    M_AXI_bid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rid,
    M_AXI_rlast,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wlast,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arregion,
    S_AXI_arsize,
    S_AXI_aruser,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awregion,
    S_AXI_awsize,
    S_AXI_awuser,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  output [1:0]M_AXI_arburst;
  output [3:0]M_AXI_arcache;
  output [15:0]M_AXI_arid;
  output [7:0]M_AXI_arlen;
  output [0:0]M_AXI_arlock;
  output [2:0]M_AXI_arprot;
  output [3:0]M_AXI_arqos;
  input M_AXI_arready;
  output [3:0]M_AXI_arregion;
  output [2:0]M_AXI_arsize;
  output [15:0]M_AXI_aruser;
  output M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  output [1:0]M_AXI_awburst;
  output [3:0]M_AXI_awcache;
  output [15:0]M_AXI_awid;
  output [7:0]M_AXI_awlen;
  output [0:0]M_AXI_awlock;
  output [2:0]M_AXI_awprot;
  output [3:0]M_AXI_awqos;
  input M_AXI_awready;
  output [3:0]M_AXI_awregion;
  output [2:0]M_AXI_awsize;
  output [15:0]M_AXI_awuser;
  output M_AXI_awvalid;
  input [15:0]M_AXI_bid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  input [15:0]M_AXI_rid;
  input M_AXI_rlast;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  output M_AXI_wlast;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input [0:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [3:0]S_AXI_arregion;
  input [2:0]S_AXI_arsize;
  input [15:0]S_AXI_aruser;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input [0:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [3:0]S_AXI_awregion;
  input [2:0]S_AXI_awsize;
  input [15:0]S_AXI_awuser;
  input S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire M_ACLK;
  wire M_ARESETN;
  wire [39:0]M_AXI_araddr;
  wire [1:0]M_AXI_arburst;
  wire [3:0]M_AXI_arcache;
  wire [15:0]M_AXI_arid;
  wire [7:0]M_AXI_arlen;
  wire [0:0]M_AXI_arlock;
  wire [2:0]M_AXI_arprot;
  wire [3:0]M_AXI_arqos;
  wire M_AXI_arready;
  wire [3:0]M_AXI_arregion;
  wire [2:0]M_AXI_arsize;
  wire [15:0]M_AXI_aruser;
  wire M_AXI_arvalid;
  wire [39:0]M_AXI_awaddr;
  wire [1:0]M_AXI_awburst;
  wire [3:0]M_AXI_awcache;
  wire [15:0]M_AXI_awid;
  wire [7:0]M_AXI_awlen;
  wire [0:0]M_AXI_awlock;
  wire [2:0]M_AXI_awprot;
  wire [3:0]M_AXI_awqos;
  wire M_AXI_awready;
  wire [3:0]M_AXI_awregion;
  wire [2:0]M_AXI_awsize;
  wire [15:0]M_AXI_awuser;
  wire M_AXI_awvalid;
  wire [15:0]M_AXI_bid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [31:0]M_AXI_rdata;
  wire [15:0]M_AXI_rid;
  wire M_AXI_rlast;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wlast;
  wire M_AXI_wready;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_ACLK;
  wire S_ARESETN;
  wire [39:0]S_AXI_araddr;
  wire [1:0]S_AXI_arburst;
  wire [3:0]S_AXI_arcache;
  wire [15:0]S_AXI_arid;
  wire [7:0]S_AXI_arlen;
  wire [0:0]S_AXI_arlock;
  wire [2:0]S_AXI_arprot;
  wire [3:0]S_AXI_arqos;
  wire S_AXI_arready;
  wire [3:0]S_AXI_arregion;
  wire [2:0]S_AXI_arsize;
  wire [15:0]S_AXI_aruser;
  wire S_AXI_arvalid;
  wire [39:0]S_AXI_awaddr;
  wire [1:0]S_AXI_awburst;
  wire [3:0]S_AXI_awcache;
  wire [15:0]S_AXI_awid;
  wire [7:0]S_AXI_awlen;
  wire [0:0]S_AXI_awlock;
  wire [2:0]S_AXI_awprot;
  wire [3:0]S_AXI_awqos;
  wire S_AXI_awready;
  wire [3:0]S_AXI_awregion;
  wire [2:0]S_AXI_awsize;
  wire [15:0]S_AXI_awuser;
  wire S_AXI_awvalid;
  wire [15:0]S_AXI_bid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire [15:0]S_AXI_rid;
  wire S_AXI_rlast;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [31:0]S_AXI_wdata;
  wire S_AXI_wlast;
  wire S_AXI_wready;
  wire [3:0]S_AXI_wstrb;
  wire S_AXI_wvalid;
  wire [39:0]auto_cc_to_m02_regslice_ARADDR;
  wire [1:0]auto_cc_to_m02_regslice_ARBURST;
  wire [3:0]auto_cc_to_m02_regslice_ARCACHE;
  wire [15:0]auto_cc_to_m02_regslice_ARID;
  wire [7:0]auto_cc_to_m02_regslice_ARLEN;
  wire [0:0]auto_cc_to_m02_regslice_ARLOCK;
  wire [2:0]auto_cc_to_m02_regslice_ARPROT;
  wire [3:0]auto_cc_to_m02_regslice_ARQOS;
  wire auto_cc_to_m02_regslice_ARREADY;
  wire [3:0]auto_cc_to_m02_regslice_ARREGION;
  wire [2:0]auto_cc_to_m02_regslice_ARSIZE;
  wire [15:0]auto_cc_to_m02_regslice_ARUSER;
  wire auto_cc_to_m02_regslice_ARVALID;
  wire [39:0]auto_cc_to_m02_regslice_AWADDR;
  wire [1:0]auto_cc_to_m02_regslice_AWBURST;
  wire [3:0]auto_cc_to_m02_regslice_AWCACHE;
  wire [15:0]auto_cc_to_m02_regslice_AWID;
  wire [7:0]auto_cc_to_m02_regslice_AWLEN;
  wire [0:0]auto_cc_to_m02_regslice_AWLOCK;
  wire [2:0]auto_cc_to_m02_regslice_AWPROT;
  wire [3:0]auto_cc_to_m02_regslice_AWQOS;
  wire auto_cc_to_m02_regslice_AWREADY;
  wire [3:0]auto_cc_to_m02_regslice_AWREGION;
  wire [2:0]auto_cc_to_m02_regslice_AWSIZE;
  wire [15:0]auto_cc_to_m02_regslice_AWUSER;
  wire auto_cc_to_m02_regslice_AWVALID;
  wire [15:0]auto_cc_to_m02_regslice_BID;
  wire auto_cc_to_m02_regslice_BREADY;
  wire [1:0]auto_cc_to_m02_regslice_BRESP;
  wire auto_cc_to_m02_regslice_BVALID;
  wire [31:0]auto_cc_to_m02_regslice_RDATA;
  wire [15:0]auto_cc_to_m02_regslice_RID;
  wire auto_cc_to_m02_regslice_RLAST;
  wire auto_cc_to_m02_regslice_RREADY;
  wire [1:0]auto_cc_to_m02_regslice_RRESP;
  wire auto_cc_to_m02_regslice_RVALID;
  wire [31:0]auto_cc_to_m02_regslice_WDATA;
  wire auto_cc_to_m02_regslice_WLAST;
  wire auto_cc_to_m02_regslice_WREADY;
  wire [3:0]auto_cc_to_m02_regslice_WSTRB;
  wire auto_cc_to_m02_regslice_WVALID;

  vitis_design_interconnect_axilite_imp_auto_cc_1 auto_cc
       (.m_axi_aclk(M_ACLK),
        .m_axi_araddr(auto_cc_to_m02_regslice_ARADDR),
        .m_axi_arburst(auto_cc_to_m02_regslice_ARBURST),
        .m_axi_arcache(auto_cc_to_m02_regslice_ARCACHE),
        .m_axi_aresetn(M_ARESETN),
        .m_axi_arid(auto_cc_to_m02_regslice_ARID),
        .m_axi_arlen(auto_cc_to_m02_regslice_ARLEN),
        .m_axi_arlock(auto_cc_to_m02_regslice_ARLOCK),
        .m_axi_arprot(auto_cc_to_m02_regslice_ARPROT),
        .m_axi_arqos(auto_cc_to_m02_regslice_ARQOS),
        .m_axi_arready(auto_cc_to_m02_regslice_ARREADY),
        .m_axi_arregion(auto_cc_to_m02_regslice_ARREGION),
        .m_axi_arsize(auto_cc_to_m02_regslice_ARSIZE),
        .m_axi_aruser(auto_cc_to_m02_regslice_ARUSER),
        .m_axi_arvalid(auto_cc_to_m02_regslice_ARVALID),
        .m_axi_awaddr(auto_cc_to_m02_regslice_AWADDR),
        .m_axi_awburst(auto_cc_to_m02_regslice_AWBURST),
        .m_axi_awcache(auto_cc_to_m02_regslice_AWCACHE),
        .m_axi_awid(auto_cc_to_m02_regslice_AWID),
        .m_axi_awlen(auto_cc_to_m02_regslice_AWLEN),
        .m_axi_awlock(auto_cc_to_m02_regslice_AWLOCK),
        .m_axi_awprot(auto_cc_to_m02_regslice_AWPROT),
        .m_axi_awqos(auto_cc_to_m02_regslice_AWQOS),
        .m_axi_awready(auto_cc_to_m02_regslice_AWREADY),
        .m_axi_awregion(auto_cc_to_m02_regslice_AWREGION),
        .m_axi_awsize(auto_cc_to_m02_regslice_AWSIZE),
        .m_axi_awuser(auto_cc_to_m02_regslice_AWUSER),
        .m_axi_awvalid(auto_cc_to_m02_regslice_AWVALID),
        .m_axi_bid(auto_cc_to_m02_regslice_BID),
        .m_axi_bready(auto_cc_to_m02_regslice_BREADY),
        .m_axi_bresp(auto_cc_to_m02_regslice_BRESP),
        .m_axi_bvalid(auto_cc_to_m02_regslice_BVALID),
        .m_axi_rdata(auto_cc_to_m02_regslice_RDATA),
        .m_axi_rid(auto_cc_to_m02_regslice_RID),
        .m_axi_rlast(auto_cc_to_m02_regslice_RLAST),
        .m_axi_rready(auto_cc_to_m02_regslice_RREADY),
        .m_axi_rresp(auto_cc_to_m02_regslice_RRESP),
        .m_axi_rvalid(auto_cc_to_m02_regslice_RVALID),
        .m_axi_wdata(auto_cc_to_m02_regslice_WDATA),
        .m_axi_wlast(auto_cc_to_m02_regslice_WLAST),
        .m_axi_wready(auto_cc_to_m02_regslice_WREADY),
        .m_axi_wstrb(auto_cc_to_m02_regslice_WSTRB),
        .m_axi_wvalid(auto_cc_to_m02_regslice_WVALID),
        .s_axi_aclk(S_ACLK),
        .s_axi_araddr(S_AXI_araddr),
        .s_axi_arburst(S_AXI_arburst),
        .s_axi_arcache(S_AXI_arcache),
        .s_axi_aresetn(S_ARESETN),
        .s_axi_arid(S_AXI_arid),
        .s_axi_arlen(S_AXI_arlen),
        .s_axi_arlock(S_AXI_arlock),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arqos(S_AXI_arqos),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arregion(S_AXI_arregion),
        .s_axi_arsize(S_AXI_arsize),
        .s_axi_aruser(S_AXI_aruser),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr),
        .s_axi_awburst(S_AXI_awburst),
        .s_axi_awcache(S_AXI_awcache),
        .s_axi_awid(S_AXI_awid),
        .s_axi_awlen(S_AXI_awlen),
        .s_axi_awlock(S_AXI_awlock),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awqos(S_AXI_awqos),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awregion(S_AXI_awregion),
        .s_axi_awsize(S_AXI_awsize),
        .s_axi_awuser(S_AXI_awuser),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bid(S_AXI_bid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rid(S_AXI_rid),
        .s_axi_rlast(S_AXI_rlast),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wlast(S_AXI_wlast),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
  vitis_design_interconnect_axilite_imp_m02_regslice_0 m02_regslice
       (.aclk(M_ACLK),
        .aresetn(M_ARESETN),
        .m_axi_araddr(M_AXI_araddr),
        .m_axi_arburst(M_AXI_arburst),
        .m_axi_arcache(M_AXI_arcache),
        .m_axi_arid(M_AXI_arid),
        .m_axi_arlen(M_AXI_arlen),
        .m_axi_arlock(M_AXI_arlock),
        .m_axi_arprot(M_AXI_arprot),
        .m_axi_arqos(M_AXI_arqos),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arregion(M_AXI_arregion),
        .m_axi_arsize(M_AXI_arsize),
        .m_axi_aruser(M_AXI_aruser),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awburst(M_AXI_awburst),
        .m_axi_awcache(M_AXI_awcache),
        .m_axi_awid(M_AXI_awid),
        .m_axi_awlen(M_AXI_awlen),
        .m_axi_awlock(M_AXI_awlock),
        .m_axi_awprot(M_AXI_awprot),
        .m_axi_awqos(M_AXI_awqos),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awregion(M_AXI_awregion),
        .m_axi_awsize(M_AXI_awsize),
        .m_axi_awuser(M_AXI_awuser),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bid(M_AXI_bid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rid(M_AXI_rid),
        .m_axi_rlast(M_AXI_rlast),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wlast(M_AXI_wlast),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_araddr(auto_cc_to_m02_regslice_ARADDR),
        .s_axi_arburst(auto_cc_to_m02_regslice_ARBURST),
        .s_axi_arcache(auto_cc_to_m02_regslice_ARCACHE),
        .s_axi_arid(auto_cc_to_m02_regslice_ARID),
        .s_axi_arlen(auto_cc_to_m02_regslice_ARLEN),
        .s_axi_arlock(auto_cc_to_m02_regslice_ARLOCK),
        .s_axi_arprot(auto_cc_to_m02_regslice_ARPROT),
        .s_axi_arqos(auto_cc_to_m02_regslice_ARQOS),
        .s_axi_arready(auto_cc_to_m02_regslice_ARREADY),
        .s_axi_arregion(auto_cc_to_m02_regslice_ARREGION),
        .s_axi_arsize(auto_cc_to_m02_regslice_ARSIZE),
        .s_axi_aruser(auto_cc_to_m02_regslice_ARUSER),
        .s_axi_arvalid(auto_cc_to_m02_regslice_ARVALID),
        .s_axi_awaddr(auto_cc_to_m02_regslice_AWADDR),
        .s_axi_awburst(auto_cc_to_m02_regslice_AWBURST),
        .s_axi_awcache(auto_cc_to_m02_regslice_AWCACHE),
        .s_axi_awid(auto_cc_to_m02_regslice_AWID),
        .s_axi_awlen(auto_cc_to_m02_regslice_AWLEN),
        .s_axi_awlock(auto_cc_to_m02_regslice_AWLOCK),
        .s_axi_awprot(auto_cc_to_m02_regslice_AWPROT),
        .s_axi_awqos(auto_cc_to_m02_regslice_AWQOS),
        .s_axi_awready(auto_cc_to_m02_regslice_AWREADY),
        .s_axi_awregion(auto_cc_to_m02_regslice_AWREGION),
        .s_axi_awsize(auto_cc_to_m02_regslice_AWSIZE),
        .s_axi_awuser(auto_cc_to_m02_regslice_AWUSER),
        .s_axi_awvalid(auto_cc_to_m02_regslice_AWVALID),
        .s_axi_bid(auto_cc_to_m02_regslice_BID),
        .s_axi_bready(auto_cc_to_m02_regslice_BREADY),
        .s_axi_bresp(auto_cc_to_m02_regslice_BRESP),
        .s_axi_bvalid(auto_cc_to_m02_regslice_BVALID),
        .s_axi_rdata(auto_cc_to_m02_regslice_RDATA),
        .s_axi_rid(auto_cc_to_m02_regslice_RID),
        .s_axi_rlast(auto_cc_to_m02_regslice_RLAST),
        .s_axi_rready(auto_cc_to_m02_regslice_RREADY),
        .s_axi_rresp(auto_cc_to_m02_regslice_RRESP),
        .s_axi_rvalid(auto_cc_to_m02_regslice_RVALID),
        .s_axi_wdata(auto_cc_to_m02_regslice_WDATA),
        .s_axi_wlast(auto_cc_to_m02_regslice_WLAST),
        .s_axi_wready(auto_cc_to_m02_regslice_WREADY),
        .s_axi_wstrb(auto_cc_to_m02_regslice_WSTRB),
        .s_axi_wvalid(auto_cc_to_m02_regslice_WVALID));
endmodule

module m03_couplers_imp_1LMDPNZ
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arprot,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awprot,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [7:0]M_AXI_araddr;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [7:0]M_AXI_awaddr;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [2:0]S_AXI_arprot;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [2:0]S_AXI_awprot;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire M_ACLK;
  wire M_ARESETN;
  wire [7:0]M_AXI_araddr;
  wire M_AXI_arready;
  wire M_AXI_arvalid;
  wire [7:0]M_AXI_awaddr;
  wire M_AXI_awready;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [31:0]M_AXI_rdata;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wready;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire [39:0]S_AXI_araddr;
  wire [2:0]S_AXI_arprot;
  wire S_AXI_arready;
  wire S_AXI_arvalid;
  wire [39:0]S_AXI_awaddr;
  wire [2:0]S_AXI_awprot;
  wire S_AXI_awready;
  wire S_AXI_awvalid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [31:0]S_AXI_wdata;
  wire S_AXI_wready;
  wire [3:0]S_AXI_wstrb;
  wire S_AXI_wvalid;

  vitis_design_dpa_ctrl_interconnect_imp_m03_regslice_0 m03_regslice
       (.aclk(M_ACLK),
        .aresetn(M_ARESETN),
        .m_axi_araddr(M_AXI_araddr),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_araddr(S_AXI_araddr[7:0]),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr[7:0]),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
endmodule

module s00_couplers_imp_115V24D
   (M_ACLK,
    M_ARESETN,
    M_AXI_awaddr,
    M_AXI_awburst,
    M_AXI_awcache,
    M_AXI_awlen,
    M_AXI_awlock,
    M_AXI_awprot,
    M_AXI_awqos,
    M_AXI_awready,
    M_AXI_awsize,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_wdata,
    M_AXI_wlast,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arsize,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awregion,
    S_AXI_awsize,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rready,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [63:0]M_AXI_awaddr;
  output [1:0]M_AXI_awburst;
  output [3:0]M_AXI_awcache;
  output [7:0]M_AXI_awlen;
  output [0:0]M_AXI_awlock;
  output [2:0]M_AXI_awprot;
  output [3:0]M_AXI_awqos;
  input M_AXI_awready;
  output [2:0]M_AXI_awsize;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  output [127:0]M_AXI_wdata;
  output M_AXI_wlast;
  input M_AXI_wready;
  output [15:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [63:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [0:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input [2:0]S_AXI_arsize;
  input S_AXI_arvalid;
  input [63:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [0:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input [1:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [3:0]S_AXI_awregion;
  input [2:0]S_AXI_awsize;
  input S_AXI_awvalid;
  output [0:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  input S_AXI_rready;
  input [63:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [7:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [63:0]M_AXI_awaddr;
  wire [1:0]M_AXI_awburst;
  wire [3:0]M_AXI_awcache;
  wire [7:0]M_AXI_awlen;
  wire [0:0]M_AXI_awlock;
  wire [2:0]M_AXI_awprot;
  wire [3:0]M_AXI_awqos;
  wire M_AXI_awready;
  wire [2:0]M_AXI_awsize;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [127:0]M_AXI_wdata;
  wire M_AXI_wlast;
  wire M_AXI_wready;
  wire [15:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_ACLK;
  wire S_ARESETN;
  wire [63:0]S_AXI_awaddr;
  wire [1:0]S_AXI_awburst;
  wire [3:0]S_AXI_awcache;
  wire [0:0]S_AXI_awid;
  wire [7:0]S_AXI_awlen;
  wire [1:0]S_AXI_awlock;
  wire [2:0]S_AXI_awprot;
  wire [3:0]S_AXI_awqos;
  wire S_AXI_awready;
  wire [3:0]S_AXI_awregion;
  wire [2:0]S_AXI_awsize;
  wire S_AXI_awvalid;
  wire [0:0]S_AXI_bid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [63:0]S_AXI_wdata;
  wire S_AXI_wlast;
  wire S_AXI_wready;
  wire [7:0]S_AXI_wstrb;
  wire S_AXI_wvalid;

  vitis_design_axi_ic_ps_e_S_AXI_HP0_FPD_imp_auto_us_0 auto_us
       (.m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awburst(M_AXI_awburst),
        .m_axi_awcache(M_AXI_awcache),
        .m_axi_awlen(M_AXI_awlen),
        .m_axi_awlock(M_AXI_awlock),
        .m_axi_awprot(M_AXI_awprot),
        .m_axi_awqos(M_AXI_awqos),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awsize(M_AXI_awsize),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wlast(M_AXI_wlast),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_aclk(S_ACLK),
        .s_axi_aresetn(S_ARESETN),
        .s_axi_awaddr(S_AXI_awaddr),
        .s_axi_awburst(S_AXI_awburst),
        .s_axi_awcache(S_AXI_awcache),
        .s_axi_awid(S_AXI_awid),
        .s_axi_awlen(S_AXI_awlen),
        .s_axi_awlock(S_AXI_awlock[0]),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awqos(S_AXI_awqos),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awregion(S_AXI_awregion),
        .s_axi_awsize(S_AXI_awsize),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bid(S_AXI_bid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wlast(S_AXI_wlast),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
endmodule

module s00_couplers_imp_1ERPYLY
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arburst,
    M_AXI_arcache,
    M_AXI_arid,
    M_AXI_arlen,
    M_AXI_arlock,
    M_AXI_arprot,
    M_AXI_arqos,
    M_AXI_arready,
    M_AXI_arsize,
    M_AXI_aruser,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awburst,
    M_AXI_awcache,
    M_AXI_awid,
    M_AXI_awlen,
    M_AXI_awlock,
    M_AXI_awprot,
    M_AXI_awqos,
    M_AXI_awready,
    M_AXI_awsize,
    M_AXI_awuser,
    M_AXI_awvalid,
    M_AXI_bid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rid,
    M_AXI_rlast,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wlast,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arsize,
    S_AXI_aruser,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awsize,
    S_AXI_awuser,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  output [1:0]M_AXI_arburst;
  output [3:0]M_AXI_arcache;
  output [15:0]M_AXI_arid;
  output [7:0]M_AXI_arlen;
  output M_AXI_arlock;
  output [2:0]M_AXI_arprot;
  output [3:0]M_AXI_arqos;
  input M_AXI_arready;
  output [2:0]M_AXI_arsize;
  output [15:0]M_AXI_aruser;
  output M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  output [1:0]M_AXI_awburst;
  output [3:0]M_AXI_awcache;
  output [15:0]M_AXI_awid;
  output [7:0]M_AXI_awlen;
  output M_AXI_awlock;
  output [2:0]M_AXI_awprot;
  output [3:0]M_AXI_awqos;
  input M_AXI_awready;
  output [2:0]M_AXI_awsize;
  output [15:0]M_AXI_awuser;
  output M_AXI_awvalid;
  input [15:0]M_AXI_bid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [127:0]M_AXI_rdata;
  input [15:0]M_AXI_rid;
  input M_AXI_rlast;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [127:0]M_AXI_wdata;
  output M_AXI_wlast;
  input M_AXI_wready;
  output [15:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [2:0]S_AXI_arsize;
  input [15:0]S_AXI_aruser;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [2:0]S_AXI_awsize;
  input [15:0]S_AXI_awuser;
  input S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [127:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [127:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [15:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [39:0]M_AXI_araddr;
  wire [1:0]M_AXI_arburst;
  wire [3:0]M_AXI_arcache;
  wire [15:0]M_AXI_arid;
  wire [7:0]M_AXI_arlen;
  wire M_AXI_arlock;
  wire [2:0]M_AXI_arprot;
  wire [3:0]M_AXI_arqos;
  wire [2:0]M_AXI_arsize;
  wire [15:0]M_AXI_aruser;
  wire M_AXI_arvalid;
  wire [39:0]M_AXI_awaddr;
  wire [1:0]M_AXI_awburst;
  wire [3:0]M_AXI_awcache;
  wire [15:0]M_AXI_awid;
  wire [7:0]M_AXI_awlen;
  wire M_AXI_awlock;
  wire [2:0]M_AXI_awprot;
  wire [3:0]M_AXI_awqos;
  wire [2:0]M_AXI_awsize;
  wire [15:0]M_AXI_awuser;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire M_AXI_rready;
  wire [127:0]M_AXI_wdata;
  wire M_AXI_wlast;
  wire [15:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_AXI_arready;
  wire S_AXI_awready;
  wire [15:0]S_AXI_bid;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [127:0]S_AXI_rdata;
  wire [15:0]S_AXI_rid;
  wire S_AXI_rlast;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire S_AXI_wready;

  assign M_AXI_araddr = S_AXI_araddr[39:0];
  assign M_AXI_arburst = S_AXI_arburst[1:0];
  assign M_AXI_arcache = S_AXI_arcache[3:0];
  assign M_AXI_arid = S_AXI_arid[15:0];
  assign M_AXI_arlen = S_AXI_arlen[7:0];
  assign M_AXI_arlock = S_AXI_arlock;
  assign M_AXI_arprot = S_AXI_arprot[2:0];
  assign M_AXI_arqos = S_AXI_arqos[3:0];
  assign M_AXI_arsize = S_AXI_arsize[2:0];
  assign M_AXI_aruser = S_AXI_aruser[15:0];
  assign M_AXI_arvalid = S_AXI_arvalid;
  assign M_AXI_awaddr = S_AXI_awaddr[39:0];
  assign M_AXI_awburst = S_AXI_awburst[1:0];
  assign M_AXI_awcache = S_AXI_awcache[3:0];
  assign M_AXI_awid = S_AXI_awid[15:0];
  assign M_AXI_awlen = S_AXI_awlen[7:0];
  assign M_AXI_awlock = S_AXI_awlock;
  assign M_AXI_awprot = S_AXI_awprot[2:0];
  assign M_AXI_awqos = S_AXI_awqos[3:0];
  assign M_AXI_awsize = S_AXI_awsize[2:0];
  assign M_AXI_awuser = S_AXI_awuser[15:0];
  assign M_AXI_awvalid = S_AXI_awvalid;
  assign M_AXI_bready = S_AXI_bready;
  assign M_AXI_rready = S_AXI_rready;
  assign M_AXI_wdata = S_AXI_wdata[127:0];
  assign M_AXI_wlast = S_AXI_wlast;
  assign M_AXI_wstrb = S_AXI_wstrb[15:0];
  assign M_AXI_wvalid = S_AXI_wvalid;
  assign S_AXI_arready = M_AXI_arready;
  assign S_AXI_awready = M_AXI_awready;
  assign S_AXI_bid = M_AXI_bid[15:0];
  assign S_AXI_bresp = M_AXI_bresp[1:0];
  assign S_AXI_bvalid = M_AXI_bvalid;
  assign S_AXI_rdata = M_AXI_rdata[127:0];
  assign S_AXI_rid = M_AXI_rid[15:0];
  assign S_AXI_rlast = M_AXI_rlast;
  assign S_AXI_rresp = M_AXI_rresp[1:0];
  assign S_AXI_rvalid = M_AXI_rvalid;
  assign S_AXI_wready = M_AXI_wready;
endmodule

module s00_couplers_imp_1TCYC3G
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arprot,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awprot,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arregion,
    S_AXI_arsize,
    S_AXI_aruser,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awregion,
    S_AXI_awsize,
    S_AXI_awuser,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  output [2:0]M_AXI_arprot;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  output [2:0]M_AXI_awprot;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input [0:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [3:0]S_AXI_arregion;
  input [2:0]S_AXI_arsize;
  input [15:0]S_AXI_aruser;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input [0:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [3:0]S_AXI_awregion;
  input [2:0]S_AXI_awsize;
  input [15:0]S_AXI_awuser;
  input S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [39:0]M_AXI_araddr;
  wire [2:0]M_AXI_arprot;
  wire M_AXI_arready;
  wire M_AXI_arvalid;
  wire [39:0]M_AXI_awaddr;
  wire [2:0]M_AXI_awprot;
  wire M_AXI_awready;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [31:0]M_AXI_rdata;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wready;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_ACLK;
  wire S_ARESETN;
  wire [39:0]S_AXI_araddr;
  wire [1:0]S_AXI_arburst;
  wire [3:0]S_AXI_arcache;
  wire [15:0]S_AXI_arid;
  wire [7:0]S_AXI_arlen;
  wire [0:0]S_AXI_arlock;
  wire [2:0]S_AXI_arprot;
  wire [3:0]S_AXI_arqos;
  wire S_AXI_arready;
  wire [3:0]S_AXI_arregion;
  wire [2:0]S_AXI_arsize;
  wire [15:0]S_AXI_aruser;
  wire S_AXI_arvalid;
  wire [39:0]S_AXI_awaddr;
  wire [1:0]S_AXI_awburst;
  wire [3:0]S_AXI_awcache;
  wire [15:0]S_AXI_awid;
  wire [7:0]S_AXI_awlen;
  wire [0:0]S_AXI_awlock;
  wire [2:0]S_AXI_awprot;
  wire [3:0]S_AXI_awqos;
  wire S_AXI_awready;
  wire [3:0]S_AXI_awregion;
  wire [2:0]S_AXI_awsize;
  wire [15:0]S_AXI_awuser;
  wire S_AXI_awvalid;
  wire [15:0]S_AXI_bid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire [15:0]S_AXI_rid;
  wire S_AXI_rlast;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [31:0]S_AXI_wdata;
  wire S_AXI_wlast;
  wire S_AXI_wready;
  wire [3:0]S_AXI_wstrb;
  wire S_AXI_wvalid;
  wire [39:0]s00_regslice_to_auto_pc_ARADDR;
  wire [1:0]s00_regslice_to_auto_pc_ARBURST;
  wire [3:0]s00_regslice_to_auto_pc_ARCACHE;
  wire [15:0]s00_regslice_to_auto_pc_ARID;
  wire [7:0]s00_regslice_to_auto_pc_ARLEN;
  wire [0:0]s00_regslice_to_auto_pc_ARLOCK;
  wire [2:0]s00_regslice_to_auto_pc_ARPROT;
  wire [3:0]s00_regslice_to_auto_pc_ARQOS;
  wire s00_regslice_to_auto_pc_ARREADY;
  wire [3:0]s00_regslice_to_auto_pc_ARREGION;
  wire [2:0]s00_regslice_to_auto_pc_ARSIZE;
  wire s00_regslice_to_auto_pc_ARVALID;
  wire [39:0]s00_regslice_to_auto_pc_AWADDR;
  wire [1:0]s00_regslice_to_auto_pc_AWBURST;
  wire [3:0]s00_regslice_to_auto_pc_AWCACHE;
  wire [15:0]s00_regslice_to_auto_pc_AWID;
  wire [7:0]s00_regslice_to_auto_pc_AWLEN;
  wire [0:0]s00_regslice_to_auto_pc_AWLOCK;
  wire [2:0]s00_regslice_to_auto_pc_AWPROT;
  wire [3:0]s00_regslice_to_auto_pc_AWQOS;
  wire s00_regslice_to_auto_pc_AWREADY;
  wire [3:0]s00_regslice_to_auto_pc_AWREGION;
  wire [2:0]s00_regslice_to_auto_pc_AWSIZE;
  wire s00_regslice_to_auto_pc_AWVALID;
  wire [15:0]s00_regslice_to_auto_pc_BID;
  wire s00_regslice_to_auto_pc_BREADY;
  wire [1:0]s00_regslice_to_auto_pc_BRESP;
  wire s00_regslice_to_auto_pc_BVALID;
  wire [31:0]s00_regslice_to_auto_pc_RDATA;
  wire [15:0]s00_regslice_to_auto_pc_RID;
  wire s00_regslice_to_auto_pc_RLAST;
  wire s00_regslice_to_auto_pc_RREADY;
  wire [1:0]s00_regslice_to_auto_pc_RRESP;
  wire s00_regslice_to_auto_pc_RVALID;
  wire [31:0]s00_regslice_to_auto_pc_WDATA;
  wire s00_regslice_to_auto_pc_WLAST;
  wire s00_regslice_to_auto_pc_WREADY;
  wire [3:0]s00_regslice_to_auto_pc_WSTRB;
  wire s00_regslice_to_auto_pc_WVALID;

  vitis_design_dpa_ctrl_interconnect_imp_auto_pc_0 auto_pc
       (.aclk(S_ACLK),
        .aresetn(S_ARESETN),
        .m_axi_araddr(M_AXI_araddr),
        .m_axi_arprot(M_AXI_arprot),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awprot(M_AXI_awprot),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_araddr(s00_regslice_to_auto_pc_ARADDR),
        .s_axi_arburst(s00_regslice_to_auto_pc_ARBURST),
        .s_axi_arcache(s00_regslice_to_auto_pc_ARCACHE),
        .s_axi_arid(s00_regslice_to_auto_pc_ARID),
        .s_axi_arlen(s00_regslice_to_auto_pc_ARLEN),
        .s_axi_arlock(s00_regslice_to_auto_pc_ARLOCK),
        .s_axi_arprot(s00_regslice_to_auto_pc_ARPROT),
        .s_axi_arqos(s00_regslice_to_auto_pc_ARQOS),
        .s_axi_arready(s00_regslice_to_auto_pc_ARREADY),
        .s_axi_arregion(s00_regslice_to_auto_pc_ARREGION),
        .s_axi_arsize(s00_regslice_to_auto_pc_ARSIZE),
        .s_axi_arvalid(s00_regslice_to_auto_pc_ARVALID),
        .s_axi_awaddr(s00_regslice_to_auto_pc_AWADDR),
        .s_axi_awburst(s00_regslice_to_auto_pc_AWBURST),
        .s_axi_awcache(s00_regslice_to_auto_pc_AWCACHE),
        .s_axi_awid(s00_regslice_to_auto_pc_AWID),
        .s_axi_awlen(s00_regslice_to_auto_pc_AWLEN),
        .s_axi_awlock(s00_regslice_to_auto_pc_AWLOCK),
        .s_axi_awprot(s00_regslice_to_auto_pc_AWPROT),
        .s_axi_awqos(s00_regslice_to_auto_pc_AWQOS),
        .s_axi_awready(s00_regslice_to_auto_pc_AWREADY),
        .s_axi_awregion(s00_regslice_to_auto_pc_AWREGION),
        .s_axi_awsize(s00_regslice_to_auto_pc_AWSIZE),
        .s_axi_awvalid(s00_regslice_to_auto_pc_AWVALID),
        .s_axi_bid(s00_regslice_to_auto_pc_BID),
        .s_axi_bready(s00_regslice_to_auto_pc_BREADY),
        .s_axi_bresp(s00_regslice_to_auto_pc_BRESP),
        .s_axi_bvalid(s00_regslice_to_auto_pc_BVALID),
        .s_axi_rdata(s00_regslice_to_auto_pc_RDATA),
        .s_axi_rid(s00_regslice_to_auto_pc_RID),
        .s_axi_rlast(s00_regslice_to_auto_pc_RLAST),
        .s_axi_rready(s00_regslice_to_auto_pc_RREADY),
        .s_axi_rresp(s00_regslice_to_auto_pc_RRESP),
        .s_axi_rvalid(s00_regslice_to_auto_pc_RVALID),
        .s_axi_wdata(s00_regslice_to_auto_pc_WDATA),
        .s_axi_wlast(s00_regslice_to_auto_pc_WLAST),
        .s_axi_wready(s00_regslice_to_auto_pc_WREADY),
        .s_axi_wstrb(s00_regslice_to_auto_pc_WSTRB),
        .s_axi_wvalid(s00_regslice_to_auto_pc_WVALID));
  vitis_design_dpa_ctrl_interconnect_imp_s00_regslice_0 s00_regslice
       (.aclk(S_ACLK),
        .aresetn(S_ARESETN),
        .m_axi_araddr(s00_regslice_to_auto_pc_ARADDR),
        .m_axi_arburst(s00_regslice_to_auto_pc_ARBURST),
        .m_axi_arcache(s00_regslice_to_auto_pc_ARCACHE),
        .m_axi_arid(s00_regslice_to_auto_pc_ARID),
        .m_axi_arlen(s00_regslice_to_auto_pc_ARLEN),
        .m_axi_arlock(s00_regslice_to_auto_pc_ARLOCK),
        .m_axi_arprot(s00_regslice_to_auto_pc_ARPROT),
        .m_axi_arqos(s00_regslice_to_auto_pc_ARQOS),
        .m_axi_arready(s00_regslice_to_auto_pc_ARREADY),
        .m_axi_arregion(s00_regslice_to_auto_pc_ARREGION),
        .m_axi_arsize(s00_regslice_to_auto_pc_ARSIZE),
        .m_axi_arvalid(s00_regslice_to_auto_pc_ARVALID),
        .m_axi_awaddr(s00_regslice_to_auto_pc_AWADDR),
        .m_axi_awburst(s00_regslice_to_auto_pc_AWBURST),
        .m_axi_awcache(s00_regslice_to_auto_pc_AWCACHE),
        .m_axi_awid(s00_regslice_to_auto_pc_AWID),
        .m_axi_awlen(s00_regslice_to_auto_pc_AWLEN),
        .m_axi_awlock(s00_regslice_to_auto_pc_AWLOCK),
        .m_axi_awprot(s00_regslice_to_auto_pc_AWPROT),
        .m_axi_awqos(s00_regslice_to_auto_pc_AWQOS),
        .m_axi_awready(s00_regslice_to_auto_pc_AWREADY),
        .m_axi_awregion(s00_regslice_to_auto_pc_AWREGION),
        .m_axi_awsize(s00_regslice_to_auto_pc_AWSIZE),
        .m_axi_awvalid(s00_regslice_to_auto_pc_AWVALID),
        .m_axi_bid(s00_regslice_to_auto_pc_BID),
        .m_axi_bready(s00_regslice_to_auto_pc_BREADY),
        .m_axi_bresp(s00_regslice_to_auto_pc_BRESP),
        .m_axi_bvalid(s00_regslice_to_auto_pc_BVALID),
        .m_axi_rdata(s00_regslice_to_auto_pc_RDATA),
        .m_axi_rid(s00_regslice_to_auto_pc_RID),
        .m_axi_rlast(s00_regslice_to_auto_pc_RLAST),
        .m_axi_rready(s00_regslice_to_auto_pc_RREADY),
        .m_axi_rresp(s00_regslice_to_auto_pc_RRESP),
        .m_axi_rvalid(s00_regslice_to_auto_pc_RVALID),
        .m_axi_wdata(s00_regslice_to_auto_pc_WDATA),
        .m_axi_wlast(s00_regslice_to_auto_pc_WLAST),
        .m_axi_wready(s00_regslice_to_auto_pc_WREADY),
        .m_axi_wstrb(s00_regslice_to_auto_pc_WSTRB),
        .m_axi_wvalid(s00_regslice_to_auto_pc_WVALID),
        .s_axi_araddr(S_AXI_araddr),
        .s_axi_arburst(S_AXI_arburst),
        .s_axi_arcache(S_AXI_arcache),
        .s_axi_arid(S_AXI_arid),
        .s_axi_arlen(S_AXI_arlen),
        .s_axi_arlock(S_AXI_arlock),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arqos(S_AXI_arqos),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arregion(S_AXI_arregion),
        .s_axi_arsize(S_AXI_arsize),
        .s_axi_aruser(S_AXI_aruser),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr),
        .s_axi_awburst(S_AXI_awburst),
        .s_axi_awcache(S_AXI_awcache),
        .s_axi_awid(S_AXI_awid),
        .s_axi_awlen(S_AXI_awlen),
        .s_axi_awlock(S_AXI_awlock),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awqos(S_AXI_awqos),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awregion(S_AXI_awregion),
        .s_axi_awsize(S_AXI_awsize),
        .s_axi_awuser(S_AXI_awuser),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bid(S_AXI_bid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rid(S_AXI_rid),
        .s_axi_rlast(S_AXI_rlast),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wlast(S_AXI_wlast),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
endmodule

module s00_couplers_imp_GT907L
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arburst,
    M_AXI_arcache,
    M_AXI_arlen,
    M_AXI_arlock,
    M_AXI_arprot,
    M_AXI_arqos,
    M_AXI_arready,
    M_AXI_arsize,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awburst,
    M_AXI_awcache,
    M_AXI_awlen,
    M_AXI_awlock,
    M_AXI_awprot,
    M_AXI_awqos,
    M_AXI_awready,
    M_AXI_awsize,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rlast,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wlast,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arregion,
    S_AXI_arsize,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awregion,
    S_AXI_awsize,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [31:0]M_AXI_araddr;
  output [1:0]M_AXI_arburst;
  output [3:0]M_AXI_arcache;
  output [7:0]M_AXI_arlen;
  output M_AXI_arlock;
  output [2:0]M_AXI_arprot;
  output [3:0]M_AXI_arqos;
  input M_AXI_arready;
  output [2:0]M_AXI_arsize;
  output M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  output [1:0]M_AXI_awburst;
  output [3:0]M_AXI_awcache;
  output [7:0]M_AXI_awlen;
  output M_AXI_awlock;
  output [2:0]M_AXI_awprot;
  output [3:0]M_AXI_awqos;
  input M_AXI_awready;
  output [2:0]M_AXI_awsize;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [127:0]M_AXI_rdata;
  input M_AXI_rlast;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [127:0]M_AXI_wdata;
  output M_AXI_wlast;
  input M_AXI_wready;
  output [15:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [31:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [7:0]S_AXI_arlen;
  input [0:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [3:0]S_AXI_arregion;
  input [2:0]S_AXI_arsize;
  input S_AXI_arvalid;
  input [31:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [7:0]S_AXI_awlen;
  input [0:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [3:0]S_AXI_awregion;
  input [2:0]S_AXI_awsize;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [31:0]M_AXI_araddr;
  wire [1:0]M_AXI_arburst;
  wire [3:0]M_AXI_arcache;
  wire [7:0]M_AXI_arlen;
  wire [0:0]\^M_AXI_arlock ;
  wire [2:0]M_AXI_arprot;
  wire [3:0]M_AXI_arqos;
  wire M_AXI_arready;
  wire [2:0]M_AXI_arsize;
  wire M_AXI_arvalid;
  wire [31:0]M_AXI_awaddr;
  wire [1:0]M_AXI_awburst;
  wire [3:0]M_AXI_awcache;
  wire [7:0]M_AXI_awlen;
  wire [0:0]\^M_AXI_awlock ;
  wire [2:0]M_AXI_awprot;
  wire [3:0]M_AXI_awqos;
  wire M_AXI_awready;
  wire [2:0]M_AXI_awsize;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire [1:0]M_AXI_bresp;
  wire M_AXI_bvalid;
  wire [127:0]M_AXI_rdata;
  wire M_AXI_rlast;
  wire M_AXI_rready;
  wire [1:0]M_AXI_rresp;
  wire M_AXI_rvalid;
  wire [127:0]M_AXI_wdata;
  wire M_AXI_wlast;
  wire M_AXI_wready;
  wire [15:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_ACLK;
  wire S_ARESETN;
  wire [31:0]S_AXI_araddr;
  wire [1:0]S_AXI_arburst;
  wire [3:0]S_AXI_arcache;
  wire [7:0]S_AXI_arlen;
  wire [0:0]S_AXI_arlock;
  wire [2:0]S_AXI_arprot;
  wire [3:0]S_AXI_arqos;
  wire S_AXI_arready;
  wire [3:0]S_AXI_arregion;
  wire [2:0]S_AXI_arsize;
  wire S_AXI_arvalid;
  wire [31:0]S_AXI_awaddr;
  wire [1:0]S_AXI_awburst;
  wire [3:0]S_AXI_awcache;
  wire [7:0]S_AXI_awlen;
  wire [0:0]S_AXI_awlock;
  wire [2:0]S_AXI_awprot;
  wire [3:0]S_AXI_awqos;
  wire S_AXI_awready;
  wire [3:0]S_AXI_awregion;
  wire [2:0]S_AXI_awsize;
  wire S_AXI_awvalid;
  wire S_AXI_bready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire S_AXI_rlast;
  wire S_AXI_rready;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire [31:0]S_AXI_wdata;
  wire S_AXI_wlast;
  wire S_AXI_wready;
  wire [3:0]S_AXI_wstrb;
  wire S_AXI_wvalid;

  assign M_AXI_arlock = \^M_AXI_arlock [0];
  assign M_AXI_awlock = \^M_AXI_awlock [0];
  vitis_design_interconnect_axifull_imp_auto_us_0 auto_us
       (.m_axi_araddr(M_AXI_araddr),
        .m_axi_arburst(M_AXI_arburst),
        .m_axi_arcache(M_AXI_arcache),
        .m_axi_arlen(M_AXI_arlen),
        .m_axi_arlock(\^M_AXI_arlock ),
        .m_axi_arprot(M_AXI_arprot),
        .m_axi_arqos(M_AXI_arqos),
        .m_axi_arready(M_AXI_arready),
        .m_axi_arsize(M_AXI_arsize),
        .m_axi_arvalid(M_AXI_arvalid),
        .m_axi_awaddr(M_AXI_awaddr),
        .m_axi_awburst(M_AXI_awburst),
        .m_axi_awcache(M_AXI_awcache),
        .m_axi_awlen(M_AXI_awlen),
        .m_axi_awlock(\^M_AXI_awlock ),
        .m_axi_awprot(M_AXI_awprot),
        .m_axi_awqos(M_AXI_awqos),
        .m_axi_awready(M_AXI_awready),
        .m_axi_awsize(M_AXI_awsize),
        .m_axi_awvalid(M_AXI_awvalid),
        .m_axi_bready(M_AXI_bready),
        .m_axi_bresp(M_AXI_bresp),
        .m_axi_bvalid(M_AXI_bvalid),
        .m_axi_rdata(M_AXI_rdata),
        .m_axi_rlast(M_AXI_rlast),
        .m_axi_rready(M_AXI_rready),
        .m_axi_rresp(M_AXI_rresp),
        .m_axi_rvalid(M_AXI_rvalid),
        .m_axi_wdata(M_AXI_wdata),
        .m_axi_wlast(M_AXI_wlast),
        .m_axi_wready(M_AXI_wready),
        .m_axi_wstrb(M_AXI_wstrb),
        .m_axi_wvalid(M_AXI_wvalid),
        .s_axi_aclk(S_ACLK),
        .s_axi_araddr(S_AXI_araddr),
        .s_axi_arburst(S_AXI_arburst),
        .s_axi_arcache(S_AXI_arcache),
        .s_axi_aresetn(S_ARESETN),
        .s_axi_arlen(S_AXI_arlen),
        .s_axi_arlock(S_AXI_arlock),
        .s_axi_arprot(S_AXI_arprot),
        .s_axi_arqos(S_AXI_arqos),
        .s_axi_arready(S_AXI_arready),
        .s_axi_arregion(S_AXI_arregion),
        .s_axi_arsize(S_AXI_arsize),
        .s_axi_arvalid(S_AXI_arvalid),
        .s_axi_awaddr(S_AXI_awaddr),
        .s_axi_awburst(S_AXI_awburst),
        .s_axi_awcache(S_AXI_awcache),
        .s_axi_awlen(S_AXI_awlen),
        .s_axi_awlock(S_AXI_awlock),
        .s_axi_awprot(S_AXI_awprot),
        .s_axi_awqos(S_AXI_awqos),
        .s_axi_awready(S_AXI_awready),
        .s_axi_awregion(S_AXI_awregion),
        .s_axi_awsize(S_AXI_awsize),
        .s_axi_awvalid(S_AXI_awvalid),
        .s_axi_bready(S_AXI_bready),
        .s_axi_bresp(S_AXI_bresp),
        .s_axi_bvalid(S_AXI_bvalid),
        .s_axi_rdata(S_AXI_rdata),
        .s_axi_rlast(S_AXI_rlast),
        .s_axi_rready(S_AXI_rready),
        .s_axi_rresp(S_AXI_rresp),
        .s_axi_rvalid(S_AXI_rvalid),
        .s_axi_wdata(S_AXI_wdata),
        .s_axi_wlast(S_AXI_wlast),
        .s_axi_wready(S_AXI_wready),
        .s_axi_wstrb(S_AXI_wstrb),
        .s_axi_wvalid(S_AXI_wvalid));
endmodule

module s00_couplers_imp_JZIEG0
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arburst,
    M_AXI_arcache,
    M_AXI_arlen,
    M_AXI_arlock,
    M_AXI_arprot,
    M_AXI_arqos,
    M_AXI_arready,
    M_AXI_arsize,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awburst,
    M_AXI_awcache,
    M_AXI_awlen,
    M_AXI_awlock,
    M_AXI_awprot,
    M_AXI_awqos,
    M_AXI_awready,
    M_AXI_awsize,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rlast,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wlast,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arsize,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awsize,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [31:0]M_AXI_araddr;
  output [1:0]M_AXI_arburst;
  output [3:0]M_AXI_arcache;
  output [7:0]M_AXI_arlen;
  output M_AXI_arlock;
  output [2:0]M_AXI_arprot;
  output [3:0]M_AXI_arqos;
  input M_AXI_arready;
  output [2:0]M_AXI_arsize;
  output M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  output [1:0]M_AXI_awburst;
  output [3:0]M_AXI_awcache;
  output [7:0]M_AXI_awlen;
  output M_AXI_awlock;
  output [2:0]M_AXI_awprot;
  output [3:0]M_AXI_awqos;
  input M_AXI_awready;
  output [2:0]M_AXI_awsize;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  input M_AXI_rlast;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  output M_AXI_wlast;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [31:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [7:0]S_AXI_arlen;
  input S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [2:0]S_AXI_arsize;
  input S_AXI_arvalid;
  input [31:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [7:0]S_AXI_awlen;
  input S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [2:0]S_AXI_awsize;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [31:0]M_AXI_araddr;
  wire [1:0]M_AXI_arburst;
  wire [3:0]M_AXI_arcache;
  wire [7:0]M_AXI_arlen;
  wire M_AXI_arlock;
  wire [2:0]M_AXI_arprot;
  wire [3:0]M_AXI_arqos;
  wire [2:0]M_AXI_arsize;
  wire M_AXI_arvalid;
  wire [31:0]M_AXI_awaddr;
  wire [1:0]M_AXI_awburst;
  wire [3:0]M_AXI_awcache;
  wire [7:0]M_AXI_awlen;
  wire M_AXI_awlock;
  wire [2:0]M_AXI_awprot;
  wire [3:0]M_AXI_awqos;
  wire [2:0]M_AXI_awsize;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire M_AXI_rready;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wlast;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_AXI_arready;
  wire S_AXI_awready;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire S_AXI_rlast;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire S_AXI_wready;

  assign M_AXI_araddr = S_AXI_araddr[31:0];
  assign M_AXI_arburst = S_AXI_arburst[1:0];
  assign M_AXI_arcache = S_AXI_arcache[3:0];
  assign M_AXI_arlen = S_AXI_arlen[7:0];
  assign M_AXI_arlock = S_AXI_arlock;
  assign M_AXI_arprot = S_AXI_arprot[2:0];
  assign M_AXI_arqos = S_AXI_arqos[3:0];
  assign M_AXI_arsize = S_AXI_arsize[2:0];
  assign M_AXI_arvalid = S_AXI_arvalid;
  assign M_AXI_awaddr = S_AXI_awaddr[31:0];
  assign M_AXI_awburst = S_AXI_awburst[1:0];
  assign M_AXI_awcache = S_AXI_awcache[3:0];
  assign M_AXI_awlen = S_AXI_awlen[7:0];
  assign M_AXI_awlock = S_AXI_awlock;
  assign M_AXI_awprot = S_AXI_awprot[2:0];
  assign M_AXI_awqos = S_AXI_awqos[3:0];
  assign M_AXI_awsize = S_AXI_awsize[2:0];
  assign M_AXI_awvalid = S_AXI_awvalid;
  assign M_AXI_bready = S_AXI_bready;
  assign M_AXI_rready = S_AXI_rready;
  assign M_AXI_wdata = S_AXI_wdata[31:0];
  assign M_AXI_wlast = S_AXI_wlast;
  assign M_AXI_wstrb = S_AXI_wstrb[3:0];
  assign M_AXI_wvalid = S_AXI_wvalid;
  assign S_AXI_arready = M_AXI_arready;
  assign S_AXI_awready = M_AXI_awready;
  assign S_AXI_bresp = M_AXI_bresp[1:0];
  assign S_AXI_bvalid = M_AXI_bvalid;
  assign S_AXI_rdata = M_AXI_rdata[31:0];
  assign S_AXI_rlast = M_AXI_rlast;
  assign S_AXI_rresp = M_AXI_rresp[1:0];
  assign S_AXI_rvalid = M_AXI_rvalid;
  assign S_AXI_wready = M_AXI_wready;
endmodule

module s00_couplers_imp_TL41KZ
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arburst,
    M_AXI_arcache,
    M_AXI_arid,
    M_AXI_arlen,
    M_AXI_arlock,
    M_AXI_arprot,
    M_AXI_arqos,
    M_AXI_arready,
    M_AXI_arsize,
    M_AXI_aruser,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awburst,
    M_AXI_awcache,
    M_AXI_awid,
    M_AXI_awlen,
    M_AXI_awlock,
    M_AXI_awprot,
    M_AXI_awqos,
    M_AXI_awready,
    M_AXI_awsize,
    M_AXI_awuser,
    M_AXI_awvalid,
    M_AXI_bid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rid,
    M_AXI_rlast,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wlast,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arsize,
    S_AXI_aruser,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awsize,
    S_AXI_awuser,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  output [1:0]M_AXI_arburst;
  output [3:0]M_AXI_arcache;
  output [15:0]M_AXI_arid;
  output [7:0]M_AXI_arlen;
  output M_AXI_arlock;
  output [2:0]M_AXI_arprot;
  output [3:0]M_AXI_arqos;
  input M_AXI_arready;
  output [2:0]M_AXI_arsize;
  output [15:0]M_AXI_aruser;
  output M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  output [1:0]M_AXI_awburst;
  output [3:0]M_AXI_awcache;
  output [15:0]M_AXI_awid;
  output [7:0]M_AXI_awlen;
  output M_AXI_awlock;
  output [2:0]M_AXI_awprot;
  output [3:0]M_AXI_awqos;
  input M_AXI_awready;
  output [2:0]M_AXI_awsize;
  output [15:0]M_AXI_awuser;
  output M_AXI_awvalid;
  input [15:0]M_AXI_bid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  input [15:0]M_AXI_rid;
  input M_AXI_rlast;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  output M_AXI_wlast;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [2:0]S_AXI_arsize;
  input [15:0]S_AXI_aruser;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [2:0]S_AXI_awsize;
  input [15:0]S_AXI_awuser;
  input S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [39:0]M_AXI_araddr;
  wire [1:0]M_AXI_arburst;
  wire [3:0]M_AXI_arcache;
  wire [15:0]M_AXI_arid;
  wire [7:0]M_AXI_arlen;
  wire M_AXI_arlock;
  wire [2:0]M_AXI_arprot;
  wire [3:0]M_AXI_arqos;
  wire [2:0]M_AXI_arsize;
  wire [15:0]M_AXI_aruser;
  wire M_AXI_arvalid;
  wire [39:0]M_AXI_awaddr;
  wire [1:0]M_AXI_awburst;
  wire [3:0]M_AXI_awcache;
  wire [15:0]M_AXI_awid;
  wire [7:0]M_AXI_awlen;
  wire M_AXI_awlock;
  wire [2:0]M_AXI_awprot;
  wire [3:0]M_AXI_awqos;
  wire [2:0]M_AXI_awsize;
  wire [15:0]M_AXI_awuser;
  wire M_AXI_awvalid;
  wire M_AXI_bready;
  wire M_AXI_rready;
  wire [31:0]M_AXI_wdata;
  wire M_AXI_wlast;
  wire [3:0]M_AXI_wstrb;
  wire M_AXI_wvalid;
  wire S_AXI_arready;
  wire S_AXI_awready;
  wire [15:0]S_AXI_bid;
  wire [1:0]S_AXI_bresp;
  wire S_AXI_bvalid;
  wire [31:0]S_AXI_rdata;
  wire [15:0]S_AXI_rid;
  wire S_AXI_rlast;
  wire [1:0]S_AXI_rresp;
  wire S_AXI_rvalid;
  wire S_AXI_wready;

  assign M_AXI_araddr = S_AXI_araddr[39:0];
  assign M_AXI_arburst = S_AXI_arburst[1:0];
  assign M_AXI_arcache = S_AXI_arcache[3:0];
  assign M_AXI_arid = S_AXI_arid[15:0];
  assign M_AXI_arlen = S_AXI_arlen[7:0];
  assign M_AXI_arlock = S_AXI_arlock;
  assign M_AXI_arprot = S_AXI_arprot[2:0];
  assign M_AXI_arqos = S_AXI_arqos[3:0];
  assign M_AXI_arsize = S_AXI_arsize[2:0];
  assign M_AXI_aruser = S_AXI_aruser[15:0];
  assign M_AXI_arvalid = S_AXI_arvalid;
  assign M_AXI_awaddr = S_AXI_awaddr[39:0];
  assign M_AXI_awburst = S_AXI_awburst[1:0];
  assign M_AXI_awcache = S_AXI_awcache[3:0];
  assign M_AXI_awid = S_AXI_awid[15:0];
  assign M_AXI_awlen = S_AXI_awlen[7:0];
  assign M_AXI_awlock = S_AXI_awlock;
  assign M_AXI_awprot = S_AXI_awprot[2:0];
  assign M_AXI_awqos = S_AXI_awqos[3:0];
  assign M_AXI_awsize = S_AXI_awsize[2:0];
  assign M_AXI_awuser = S_AXI_awuser[15:0];
  assign M_AXI_awvalid = S_AXI_awvalid;
  assign M_AXI_bready = S_AXI_bready;
  assign M_AXI_rready = S_AXI_rready;
  assign M_AXI_wdata = S_AXI_wdata[31:0];
  assign M_AXI_wlast = S_AXI_wlast;
  assign M_AXI_wstrb = S_AXI_wstrb[3:0];
  assign M_AXI_wvalid = S_AXI_wvalid;
  assign S_AXI_arready = M_AXI_arready;
  assign S_AXI_awready = M_AXI_awready;
  assign S_AXI_bid = M_AXI_bid[15:0];
  assign S_AXI_bresp = M_AXI_bresp[1:0];
  assign S_AXI_bvalid = M_AXI_bvalid;
  assign S_AXI_rdata = M_AXI_rdata[31:0];
  assign S_AXI_rid = M_AXI_rid[15:0];
  assign S_AXI_rlast = M_AXI_rlast;
  assign S_AXI_rresp = M_AXI_rresp[1:0];
  assign S_AXI_rvalid = M_AXI_rvalid;
  assign S_AXI_wready = M_AXI_wready;
endmodule

(* CORE_GENERATION_INFO = "vitis_design,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=vitis_design,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=61,numReposBlks=39,numNonXlnxBlks=0,numHierBlks=22,maxHierDepth=1,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=Vitis,synth_mode=None}" *) (* HW_HANDOFF = "vitis_design.hwdef" *) 
module vitis_design
   ();

  wire Net;
  wire [63:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWADDR;
  wire [1:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWBURST;
  wire [3:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWCACHE;
  wire [7:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWLEN;
  wire [0:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWLOCK;
  wire [2:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWPROT;
  wire [3:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWQOS;
  wire axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWREADY;
  wire [2:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWSIZE;
  wire axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWVALID;
  wire axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_BREADY;
  wire [1:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_BRESP;
  wire axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_BVALID;
  wire [127:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WDATA;
  wire axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WLAST;
  wire axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WREADY;
  wire [15:0]axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WSTRB;
  wire axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WVALID;
  wire [31:0]axi_intc_0_intr_1_interrupt_concat_dout;
  wire axi_intc_0_irq;
  wire [31:0]axi_interconnect_0_M00_AXI1_ARADDR;
  wire [1:0]axi_interconnect_0_M00_AXI1_ARBURST;
  wire [3:0]axi_interconnect_0_M00_AXI1_ARCACHE;
  wire [7:0]axi_interconnect_0_M00_AXI1_ARLEN;
  wire axi_interconnect_0_M00_AXI1_ARLOCK;
  wire [2:0]axi_interconnect_0_M00_AXI1_ARPROT;
  wire [3:0]axi_interconnect_0_M00_AXI1_ARQOS;
  wire axi_interconnect_0_M00_AXI1_ARREADY;
  wire [2:0]axi_interconnect_0_M00_AXI1_ARSIZE;
  wire axi_interconnect_0_M00_AXI1_ARVALID;
  wire [31:0]axi_interconnect_0_M00_AXI1_AWADDR;
  wire [1:0]axi_interconnect_0_M00_AXI1_AWBURST;
  wire [3:0]axi_interconnect_0_M00_AXI1_AWCACHE;
  wire [7:0]axi_interconnect_0_M00_AXI1_AWLEN;
  wire axi_interconnect_0_M00_AXI1_AWLOCK;
  wire [2:0]axi_interconnect_0_M00_AXI1_AWPROT;
  wire [3:0]axi_interconnect_0_M00_AXI1_AWQOS;
  wire axi_interconnect_0_M00_AXI1_AWREADY;
  wire [2:0]axi_interconnect_0_M00_AXI1_AWSIZE;
  wire axi_interconnect_0_M00_AXI1_AWVALID;
  wire axi_interconnect_0_M00_AXI1_BREADY;
  wire [1:0]axi_interconnect_0_M00_AXI1_BRESP;
  wire axi_interconnect_0_M00_AXI1_BVALID;
  wire [31:0]axi_interconnect_0_M00_AXI1_RDATA;
  wire axi_interconnect_0_M00_AXI1_RLAST;
  wire axi_interconnect_0_M00_AXI1_RREADY;
  wire [1:0]axi_interconnect_0_M00_AXI1_RRESP;
  wire axi_interconnect_0_M00_AXI1_RVALID;
  wire [31:0]axi_interconnect_0_M00_AXI1_WDATA;
  wire axi_interconnect_0_M00_AXI1_WLAST;
  wire axi_interconnect_0_M00_AXI1_WREADY;
  wire [3:0]axi_interconnect_0_M00_AXI1_WSTRB;
  wire axi_interconnect_0_M00_AXI1_WVALID;
  wire [39:0]axi_interconnect_0_M00_AXI_ARADDR;
  wire axi_interconnect_0_M00_AXI_ARREADY;
  wire axi_interconnect_0_M00_AXI_ARVALID;
  wire [39:0]axi_interconnect_0_M00_AXI_AWADDR;
  wire axi_interconnect_0_M00_AXI_AWREADY;
  wire axi_interconnect_0_M00_AXI_AWVALID;
  wire axi_interconnect_0_M00_AXI_BREADY;
  wire [1:0]axi_interconnect_0_M00_AXI_BRESP;
  wire axi_interconnect_0_M00_AXI_BVALID;
  wire [31:0]axi_interconnect_0_M00_AXI_RDATA;
  wire axi_interconnect_0_M00_AXI_RREADY;
  wire [1:0]axi_interconnect_0_M00_AXI_RRESP;
  wire axi_interconnect_0_M00_AXI_RVALID;
  wire [31:0]axi_interconnect_0_M00_AXI_WDATA;
  wire axi_interconnect_0_M00_AXI_WREADY;
  wire [3:0]axi_interconnect_0_M00_AXI_WSTRB;
  wire axi_interconnect_0_M00_AXI_WVALID;
  wire [31:0]axi_interconnect_1_M00_AXI_ARADDR;
  wire [1:0]axi_interconnect_1_M00_AXI_ARBURST;
  wire [3:0]axi_interconnect_1_M00_AXI_ARCACHE;
  wire [7:0]axi_interconnect_1_M00_AXI_ARLEN;
  wire axi_interconnect_1_M00_AXI_ARLOCK;
  wire [2:0]axi_interconnect_1_M00_AXI_ARPROT;
  wire [3:0]axi_interconnect_1_M00_AXI_ARQOS;
  wire axi_interconnect_1_M00_AXI_ARREADY;
  wire [2:0]axi_interconnect_1_M00_AXI_ARSIZE;
  wire axi_interconnect_1_M00_AXI_ARVALID;
  wire [31:0]axi_interconnect_1_M00_AXI_AWADDR;
  wire [1:0]axi_interconnect_1_M00_AXI_AWBURST;
  wire [3:0]axi_interconnect_1_M00_AXI_AWCACHE;
  wire [7:0]axi_interconnect_1_M00_AXI_AWLEN;
  wire axi_interconnect_1_M00_AXI_AWLOCK;
  wire [2:0]axi_interconnect_1_M00_AXI_AWPROT;
  wire [3:0]axi_interconnect_1_M00_AXI_AWQOS;
  wire axi_interconnect_1_M00_AXI_AWREADY;
  wire [2:0]axi_interconnect_1_M00_AXI_AWSIZE;
  wire axi_interconnect_1_M00_AXI_AWVALID;
  wire axi_interconnect_1_M00_AXI_BREADY;
  wire [1:0]axi_interconnect_1_M00_AXI_BRESP;
  wire axi_interconnect_1_M00_AXI_BVALID;
  wire [127:0]axi_interconnect_1_M00_AXI_RDATA;
  wire axi_interconnect_1_M00_AXI_RLAST;
  wire axi_interconnect_1_M00_AXI_RREADY;
  wire [1:0]axi_interconnect_1_M00_AXI_RRESP;
  wire axi_interconnect_1_M00_AXI_RVALID;
  wire [127:0]axi_interconnect_1_M00_AXI_WDATA;
  wire axi_interconnect_1_M00_AXI_WLAST;
  wire axi_interconnect_1_M00_AXI_WREADY;
  wire [15:0]axi_interconnect_1_M00_AXI_WSTRB;
  wire axi_interconnect_1_M00_AXI_WVALID;
  wire [31:0]axi_vip_0_M_AXI_ARADDR;
  wire [1:0]axi_vip_0_M_AXI_ARBURST;
  wire [3:0]axi_vip_0_M_AXI_ARCACHE;
  wire [7:0]axi_vip_0_M_AXI_ARLEN;
  wire [0:0]axi_vip_0_M_AXI_ARLOCK;
  wire [2:0]axi_vip_0_M_AXI_ARPROT;
  wire [3:0]axi_vip_0_M_AXI_ARQOS;
  wire axi_vip_0_M_AXI_ARREADY;
  wire [3:0]axi_vip_0_M_AXI_ARREGION;
  wire [2:0]axi_vip_0_M_AXI_ARSIZE;
  wire axi_vip_0_M_AXI_ARVALID;
  wire [31:0]axi_vip_0_M_AXI_AWADDR;
  wire [1:0]axi_vip_0_M_AXI_AWBURST;
  wire [3:0]axi_vip_0_M_AXI_AWCACHE;
  wire [7:0]axi_vip_0_M_AXI_AWLEN;
  wire [0:0]axi_vip_0_M_AXI_AWLOCK;
  wire [2:0]axi_vip_0_M_AXI_AWPROT;
  wire [3:0]axi_vip_0_M_AXI_AWQOS;
  wire axi_vip_0_M_AXI_AWREADY;
  wire [3:0]axi_vip_0_M_AXI_AWREGION;
  wire [2:0]axi_vip_0_M_AXI_AWSIZE;
  wire axi_vip_0_M_AXI_AWVALID;
  wire axi_vip_0_M_AXI_BREADY;
  wire [1:0]axi_vip_0_M_AXI_BRESP;
  wire axi_vip_0_M_AXI_BVALID;
  wire [31:0]axi_vip_0_M_AXI_RDATA;
  wire axi_vip_0_M_AXI_RLAST;
  wire axi_vip_0_M_AXI_RREADY;
  wire [1:0]axi_vip_0_M_AXI_RRESP;
  wire axi_vip_0_M_AXI_RVALID;
  wire [31:0]axi_vip_0_M_AXI_WDATA;
  wire axi_vip_0_M_AXI_WLAST;
  wire axi_vip_0_M_AXI_WREADY;
  wire [3:0]axi_vip_0_M_AXI_WSTRB;
  wire axi_vip_0_M_AXI_WVALID;
  wire [31:0]axi_vip_1_M_AXI_ARADDR;
  wire [1:0]axi_vip_1_M_AXI_ARBURST;
  wire [3:0]axi_vip_1_M_AXI_ARCACHE;
  wire [7:0]axi_vip_1_M_AXI_ARLEN;
  wire [0:0]axi_vip_1_M_AXI_ARLOCK;
  wire [2:0]axi_vip_1_M_AXI_ARPROT;
  wire [3:0]axi_vip_1_M_AXI_ARQOS;
  wire axi_vip_1_M_AXI_ARREADY;
  wire [2:0]axi_vip_1_M_AXI_ARSIZE;
  wire axi_vip_1_M_AXI_ARVALID;
  wire [31:0]axi_vip_1_M_AXI_AWADDR;
  wire [1:0]axi_vip_1_M_AXI_AWBURST;
  wire [3:0]axi_vip_1_M_AXI_AWCACHE;
  wire [7:0]axi_vip_1_M_AXI_AWLEN;
  wire [0:0]axi_vip_1_M_AXI_AWLOCK;
  wire [2:0]axi_vip_1_M_AXI_AWPROT;
  wire [3:0]axi_vip_1_M_AXI_AWQOS;
  wire axi_vip_1_M_AXI_AWREADY;
  wire [2:0]axi_vip_1_M_AXI_AWSIZE;
  wire axi_vip_1_M_AXI_AWVALID;
  wire axi_vip_1_M_AXI_BREADY;
  wire [1:0]axi_vip_1_M_AXI_BRESP;
  wire axi_vip_1_M_AXI_BVALID;
  wire [31:0]axi_vip_1_M_AXI_RDATA;
  wire axi_vip_1_M_AXI_RLAST;
  wire axi_vip_1_M_AXI_RREADY;
  wire [1:0]axi_vip_1_M_AXI_RRESP;
  wire axi_vip_1_M_AXI_RVALID;
  wire [31:0]axi_vip_1_M_AXI_WDATA;
  wire axi_vip_1_M_AXI_WLAST;
  wire axi_vip_1_M_AXI_WREADY;
  wire [3:0]axi_vip_1_M_AXI_WSTRB;
  wire axi_vip_1_M_AXI_WVALID;
  wire clk_wiz_0_clk_out2;
  wire clk_wiz_0_clk_out3;
  wire clk_wiz_0_clk_out4;
  wire clk_wiz_0_clk_out5;
  wire clk_wiz_0_clk_out6;
  wire clk_wiz_0_clk_out7;
  wire clk_wiz_0_clk_out8;
  wire clk_wiz_0_locked;
  wire cluster_1_interrupt;
  wire [63:0]cluster_1_m_axi_gmem_ARADDR;
  wire [1:0]cluster_1_m_axi_gmem_ARBURST;
  wire [0:0]cluster_1_m_axi_gmem_ARID;
  wire [7:0]cluster_1_m_axi_gmem_ARLEN;
  wire [2:0]cluster_1_m_axi_gmem_ARSIZE;
  wire cluster_1_m_axi_gmem_ARVALID;
  wire [63:0]cluster_1_m_axi_gmem_AWADDR;
  wire [1:0]cluster_1_m_axi_gmem_AWBURST;
  wire [3:0]cluster_1_m_axi_gmem_AWCACHE;
  wire [0:0]cluster_1_m_axi_gmem_AWID;
  wire [7:0]cluster_1_m_axi_gmem_AWLEN;
  wire [1:0]cluster_1_m_axi_gmem_AWLOCK;
  wire [2:0]cluster_1_m_axi_gmem_AWPROT;
  wire [3:0]cluster_1_m_axi_gmem_AWQOS;
  wire cluster_1_m_axi_gmem_AWREADY;
  wire [3:0]cluster_1_m_axi_gmem_AWREGION;
  wire [2:0]cluster_1_m_axi_gmem_AWSIZE;
  wire cluster_1_m_axi_gmem_AWVALID;
  wire [0:0]cluster_1_m_axi_gmem_BID;
  wire cluster_1_m_axi_gmem_BREADY;
  wire [1:0]cluster_1_m_axi_gmem_BRESP;
  wire cluster_1_m_axi_gmem_BVALID;
  wire cluster_1_m_axi_gmem_RREADY;
  wire [63:0]cluster_1_m_axi_gmem_WDATA;
  wire cluster_1_m_axi_gmem_WLAST;
  wire cluster_1_m_axi_gmem_WREADY;
  wire [7:0]cluster_1_m_axi_gmem_WSTRB;
  wire cluster_1_m_axi_gmem_WVALID;
  wire [39:0]interconnect_axihpm0fpd_M00_AXI_ARADDR;
  wire [1:0]interconnect_axihpm0fpd_M00_AXI_ARBURST;
  wire [3:0]interconnect_axihpm0fpd_M00_AXI_ARCACHE;
  wire [15:0]interconnect_axihpm0fpd_M00_AXI_ARID;
  wire [7:0]interconnect_axihpm0fpd_M00_AXI_ARLEN;
  wire [0:0]interconnect_axihpm0fpd_M00_AXI_ARLOCK;
  wire [2:0]interconnect_axihpm0fpd_M00_AXI_ARPROT;
  wire [3:0]interconnect_axihpm0fpd_M00_AXI_ARQOS;
  wire interconnect_axihpm0fpd_M00_AXI_ARREADY;
  wire [3:0]interconnect_axihpm0fpd_M00_AXI_ARREGION;
  wire [2:0]interconnect_axihpm0fpd_M00_AXI_ARSIZE;
  wire [15:0]interconnect_axihpm0fpd_M00_AXI_ARUSER;
  wire [0:0]interconnect_axihpm0fpd_M00_AXI_ARVALID;
  wire [39:0]interconnect_axihpm0fpd_M00_AXI_AWADDR;
  wire [1:0]interconnect_axihpm0fpd_M00_AXI_AWBURST;
  wire [3:0]interconnect_axihpm0fpd_M00_AXI_AWCACHE;
  wire [15:0]interconnect_axihpm0fpd_M00_AXI_AWID;
  wire [7:0]interconnect_axihpm0fpd_M00_AXI_AWLEN;
  wire [0:0]interconnect_axihpm0fpd_M00_AXI_AWLOCK;
  wire [2:0]interconnect_axihpm0fpd_M00_AXI_AWPROT;
  wire [3:0]interconnect_axihpm0fpd_M00_AXI_AWQOS;
  wire interconnect_axihpm0fpd_M00_AXI_AWREADY;
  wire [3:0]interconnect_axihpm0fpd_M00_AXI_AWREGION;
  wire [2:0]interconnect_axihpm0fpd_M00_AXI_AWSIZE;
  wire [15:0]interconnect_axihpm0fpd_M00_AXI_AWUSER;
  wire [0:0]interconnect_axihpm0fpd_M00_AXI_AWVALID;
  wire [15:0]interconnect_axihpm0fpd_M00_AXI_BID;
  wire [0:0]interconnect_axihpm0fpd_M00_AXI_BREADY;
  wire [1:0]interconnect_axihpm0fpd_M00_AXI_BRESP;
  wire interconnect_axihpm0fpd_M00_AXI_BVALID;
  wire [127:0]interconnect_axihpm0fpd_M00_AXI_RDATA;
  wire [15:0]interconnect_axihpm0fpd_M00_AXI_RID;
  wire interconnect_axihpm0fpd_M00_AXI_RLAST;
  wire [0:0]interconnect_axihpm0fpd_M00_AXI_RREADY;
  wire [1:0]interconnect_axihpm0fpd_M00_AXI_RRESP;
  wire interconnect_axihpm0fpd_M00_AXI_RVALID;
  wire [127:0]interconnect_axihpm0fpd_M00_AXI_WDATA;
  wire [0:0]interconnect_axihpm0fpd_M00_AXI_WLAST;
  wire interconnect_axihpm0fpd_M00_AXI_WREADY;
  wire [15:0]interconnect_axihpm0fpd_M00_AXI_WSTRB;
  wire [0:0]interconnect_axihpm0fpd_M00_AXI_WVALID;
  wire [31:0]interconnect_axihpm0fpd_M01_AXI_ARADDR;
  wire [1:0]interconnect_axihpm0fpd_M01_AXI_ARBURST;
  wire [7:0]interconnect_axihpm0fpd_M01_AXI_ARLEN;
  wire interconnect_axihpm0fpd_M01_AXI_ARREADY;
  wire [2:0]interconnect_axihpm0fpd_M01_AXI_ARSIZE;
  wire interconnect_axihpm0fpd_M01_AXI_ARVALID;
  wire [31:0]interconnect_axihpm0fpd_M01_AXI_AWADDR;
  wire [1:0]interconnect_axihpm0fpd_M01_AXI_AWBURST;
  wire [7:0]interconnect_axihpm0fpd_M01_AXI_AWLEN;
  wire interconnect_axihpm0fpd_M01_AXI_AWREADY;
  wire [2:0]interconnect_axihpm0fpd_M01_AXI_AWSIZE;
  wire interconnect_axihpm0fpd_M01_AXI_AWVALID;
  wire interconnect_axihpm0fpd_M01_AXI_BREADY;
  wire [1:0]interconnect_axihpm0fpd_M01_AXI_BRESP;
  wire interconnect_axihpm0fpd_M01_AXI_BVALID;
  wire [31:0]interconnect_axihpm0fpd_M01_AXI_RDATA;
  wire interconnect_axihpm0fpd_M01_AXI_RLAST;
  wire interconnect_axihpm0fpd_M01_AXI_RREADY;
  wire [1:0]interconnect_axihpm0fpd_M01_AXI_RRESP;
  wire interconnect_axihpm0fpd_M01_AXI_RVALID;
  wire [31:0]interconnect_axihpm0fpd_M01_AXI_WDATA;
  wire interconnect_axihpm0fpd_M01_AXI_WLAST;
  wire interconnect_axihpm0fpd_M01_AXI_WREADY;
  wire [3:0]interconnect_axihpm0fpd_M01_AXI_WSTRB;
  wire interconnect_axihpm0fpd_M01_AXI_WVALID;
  wire [6:0]interconnect_axilite_M01_AXI_ARADDR;
  wire [2:0]interconnect_axilite_M01_AXI_ARPROT;
  wire interconnect_axilite_M01_AXI_ARREADY;
  wire interconnect_axilite_M01_AXI_ARVALID;
  wire [6:0]interconnect_axilite_M01_AXI_AWADDR;
  wire [2:0]interconnect_axilite_M01_AXI_AWPROT;
  wire interconnect_axilite_M01_AXI_AWREADY;
  wire interconnect_axilite_M01_AXI_AWVALID;
  wire interconnect_axilite_M01_AXI_BREADY;
  wire [1:0]interconnect_axilite_M01_AXI_BRESP;
  wire interconnect_axilite_M01_AXI_BVALID;
  wire [31:0]interconnect_axilite_M01_AXI_RDATA;
  wire interconnect_axilite_M01_AXI_RREADY;
  wire [1:0]interconnect_axilite_M01_AXI_RRESP;
  wire interconnect_axilite_M01_AXI_RVALID;
  wire [31:0]interconnect_axilite_M01_AXI_WDATA;
  wire interconnect_axilite_M01_AXI_WREADY;
  wire [3:0]interconnect_axilite_M01_AXI_WSTRB;
  wire interconnect_axilite_M01_AXI_WVALID;
  wire [39:0]interconnect_axilite_M02_AXI_ARADDR;
  wire [1:0]interconnect_axilite_M02_AXI_ARBURST;
  wire [3:0]interconnect_axilite_M02_AXI_ARCACHE;
  wire [15:0]interconnect_axilite_M02_AXI_ARID;
  wire [7:0]interconnect_axilite_M02_AXI_ARLEN;
  wire [0:0]interconnect_axilite_M02_AXI_ARLOCK;
  wire [2:0]interconnect_axilite_M02_AXI_ARPROT;
  wire [3:0]interconnect_axilite_M02_AXI_ARQOS;
  wire interconnect_axilite_M02_AXI_ARREADY;
  wire [3:0]interconnect_axilite_M02_AXI_ARREGION;
  wire [2:0]interconnect_axilite_M02_AXI_ARSIZE;
  wire [15:0]interconnect_axilite_M02_AXI_ARUSER;
  wire interconnect_axilite_M02_AXI_ARVALID;
  wire [39:0]interconnect_axilite_M02_AXI_AWADDR;
  wire [1:0]interconnect_axilite_M02_AXI_AWBURST;
  wire [3:0]interconnect_axilite_M02_AXI_AWCACHE;
  wire [15:0]interconnect_axilite_M02_AXI_AWID;
  wire [7:0]interconnect_axilite_M02_AXI_AWLEN;
  wire [0:0]interconnect_axilite_M02_AXI_AWLOCK;
  wire [2:0]interconnect_axilite_M02_AXI_AWPROT;
  wire [3:0]interconnect_axilite_M02_AXI_AWQOS;
  wire interconnect_axilite_M02_AXI_AWREADY;
  wire [3:0]interconnect_axilite_M02_AXI_AWREGION;
  wire [2:0]interconnect_axilite_M02_AXI_AWSIZE;
  wire [15:0]interconnect_axilite_M02_AXI_AWUSER;
  wire interconnect_axilite_M02_AXI_AWVALID;
  wire [15:0]interconnect_axilite_M02_AXI_BID;
  wire interconnect_axilite_M02_AXI_BREADY;
  wire [1:0]interconnect_axilite_M02_AXI_BRESP;
  wire interconnect_axilite_M02_AXI_BVALID;
  wire [31:0]interconnect_axilite_M02_AXI_RDATA;
  wire [15:0]interconnect_axilite_M02_AXI_RID;
  wire interconnect_axilite_M02_AXI_RLAST;
  wire interconnect_axilite_M02_AXI_RREADY;
  wire [1:0]interconnect_axilite_M02_AXI_RRESP;
  wire interconnect_axilite_M02_AXI_RVALID;
  wire [31:0]interconnect_axilite_M02_AXI_WDATA;
  wire interconnect_axilite_M02_AXI_WLAST;
  wire interconnect_axilite_M02_AXI_WREADY;
  wire [3:0]interconnect_axilite_M02_AXI_WSTRB;
  wire interconnect_axilite_M02_AXI_WVALID;
  wire [0:0]irq_const_tieoff_dout;
  wire [0:0]proc_sys_reset_0_peripheral_aresetn;
  wire [0:0]proc_sys_reset_1_interconnect_aresetn;
  wire [0:0]proc_sys_reset_1_peripheral_aresetn;
  wire [0:0]proc_sys_reset_2_interconnect_aresetn;
  wire [39:0]ps_e_M_AXI_HPM0_FPD_ARADDR;
  wire [1:0]ps_e_M_AXI_HPM0_FPD_ARBURST;
  wire [3:0]ps_e_M_AXI_HPM0_FPD_ARCACHE;
  wire [15:0]ps_e_M_AXI_HPM0_FPD_ARID;
  wire [7:0]ps_e_M_AXI_HPM0_FPD_ARLEN;
  wire ps_e_M_AXI_HPM0_FPD_ARLOCK;
  wire [2:0]ps_e_M_AXI_HPM0_FPD_ARPROT;
  wire [3:0]ps_e_M_AXI_HPM0_FPD_ARQOS;
  wire ps_e_M_AXI_HPM0_FPD_ARREADY;
  wire [2:0]ps_e_M_AXI_HPM0_FPD_ARSIZE;
  wire [15:0]ps_e_M_AXI_HPM0_FPD_ARUSER;
  wire ps_e_M_AXI_HPM0_FPD_ARVALID;
  wire [39:0]ps_e_M_AXI_HPM0_FPD_AWADDR;
  wire [1:0]ps_e_M_AXI_HPM0_FPD_AWBURST;
  wire [3:0]ps_e_M_AXI_HPM0_FPD_AWCACHE;
  wire [15:0]ps_e_M_AXI_HPM0_FPD_AWID;
  wire [7:0]ps_e_M_AXI_HPM0_FPD_AWLEN;
  wire ps_e_M_AXI_HPM0_FPD_AWLOCK;
  wire [2:0]ps_e_M_AXI_HPM0_FPD_AWPROT;
  wire [3:0]ps_e_M_AXI_HPM0_FPD_AWQOS;
  wire ps_e_M_AXI_HPM0_FPD_AWREADY;
  wire [2:0]ps_e_M_AXI_HPM0_FPD_AWSIZE;
  wire [15:0]ps_e_M_AXI_HPM0_FPD_AWUSER;
  wire ps_e_M_AXI_HPM0_FPD_AWVALID;
  wire [15:0]ps_e_M_AXI_HPM0_FPD_BID;
  wire ps_e_M_AXI_HPM0_FPD_BREADY;
  wire [1:0]ps_e_M_AXI_HPM0_FPD_BRESP;
  wire ps_e_M_AXI_HPM0_FPD_BVALID;
  wire [127:0]ps_e_M_AXI_HPM0_FPD_RDATA;
  wire [15:0]ps_e_M_AXI_HPM0_FPD_RID;
  wire ps_e_M_AXI_HPM0_FPD_RLAST;
  wire ps_e_M_AXI_HPM0_FPD_RREADY;
  wire [1:0]ps_e_M_AXI_HPM0_FPD_RRESP;
  wire ps_e_M_AXI_HPM0_FPD_RVALID;
  wire [127:0]ps_e_M_AXI_HPM0_FPD_WDATA;
  wire ps_e_M_AXI_HPM0_FPD_WLAST;
  wire ps_e_M_AXI_HPM0_FPD_WREADY;
  wire [15:0]ps_e_M_AXI_HPM0_FPD_WSTRB;
  wire ps_e_M_AXI_HPM0_FPD_WVALID;
  wire [39:0]ps_e_M_AXI_HPM0_LPD_ARADDR;
  wire [1:0]ps_e_M_AXI_HPM0_LPD_ARBURST;
  wire [3:0]ps_e_M_AXI_HPM0_LPD_ARCACHE;
  wire [15:0]ps_e_M_AXI_HPM0_LPD_ARID;
  wire [7:0]ps_e_M_AXI_HPM0_LPD_ARLEN;
  wire ps_e_M_AXI_HPM0_LPD_ARLOCK;
  wire [2:0]ps_e_M_AXI_HPM0_LPD_ARPROT;
  wire [3:0]ps_e_M_AXI_HPM0_LPD_ARQOS;
  wire ps_e_M_AXI_HPM0_LPD_ARREADY;
  wire [2:0]ps_e_M_AXI_HPM0_LPD_ARSIZE;
  wire [15:0]ps_e_M_AXI_HPM0_LPD_ARUSER;
  wire ps_e_M_AXI_HPM0_LPD_ARVALID;
  wire [39:0]ps_e_M_AXI_HPM0_LPD_AWADDR;
  wire [1:0]ps_e_M_AXI_HPM0_LPD_AWBURST;
  wire [3:0]ps_e_M_AXI_HPM0_LPD_AWCACHE;
  wire [15:0]ps_e_M_AXI_HPM0_LPD_AWID;
  wire [7:0]ps_e_M_AXI_HPM0_LPD_AWLEN;
  wire ps_e_M_AXI_HPM0_LPD_AWLOCK;
  wire [2:0]ps_e_M_AXI_HPM0_LPD_AWPROT;
  wire [3:0]ps_e_M_AXI_HPM0_LPD_AWQOS;
  wire ps_e_M_AXI_HPM0_LPD_AWREADY;
  wire [2:0]ps_e_M_AXI_HPM0_LPD_AWSIZE;
  wire [15:0]ps_e_M_AXI_HPM0_LPD_AWUSER;
  wire ps_e_M_AXI_HPM0_LPD_AWVALID;
  wire [15:0]ps_e_M_AXI_HPM0_LPD_BID;
  wire ps_e_M_AXI_HPM0_LPD_BREADY;
  wire [1:0]ps_e_M_AXI_HPM0_LPD_BRESP;
  wire ps_e_M_AXI_HPM0_LPD_BVALID;
  wire [31:0]ps_e_M_AXI_HPM0_LPD_RDATA;
  wire [15:0]ps_e_M_AXI_HPM0_LPD_RID;
  wire ps_e_M_AXI_HPM0_LPD_RLAST;
  wire ps_e_M_AXI_HPM0_LPD_RREADY;
  wire [1:0]ps_e_M_AXI_HPM0_LPD_RRESP;
  wire ps_e_M_AXI_HPM0_LPD_RVALID;
  wire [31:0]ps_e_M_AXI_HPM0_LPD_WDATA;
  wire ps_e_M_AXI_HPM0_LPD_WLAST;
  wire ps_e_M_AXI_HPM0_LPD_WREADY;
  wire [3:0]ps_e_M_AXI_HPM0_LPD_WSTRB;
  wire ps_e_M_AXI_HPM0_LPD_WVALID;
  wire ps_e_pl_clk0;

  System_DPA_imp_XGY37V System_DPA
       (.MON_M_AXI_araddr(cluster_1_m_axi_gmem_ARADDR),
        .MON_M_AXI_arburst(cluster_1_m_axi_gmem_ARBURST),
        .MON_M_AXI_arid(cluster_1_m_axi_gmem_ARID),
        .MON_M_AXI_arlen(cluster_1_m_axi_gmem_ARLEN),
        .MON_M_AXI_arsize(cluster_1_m_axi_gmem_ARSIZE),
        .MON_M_AXI_arvalid(cluster_1_m_axi_gmem_ARVALID),
        .MON_M_AXI_awaddr(cluster_1_m_axi_gmem_AWADDR),
        .MON_M_AXI_awburst(cluster_1_m_axi_gmem_AWBURST),
        .MON_M_AXI_awcache(cluster_1_m_axi_gmem_AWCACHE),
        .MON_M_AXI_awid(cluster_1_m_axi_gmem_AWID),
        .MON_M_AXI_awlen(cluster_1_m_axi_gmem_AWLEN),
        .MON_M_AXI_awlock(cluster_1_m_axi_gmem_AWLOCK),
        .MON_M_AXI_awprot(cluster_1_m_axi_gmem_AWPROT),
        .MON_M_AXI_awqos(cluster_1_m_axi_gmem_AWQOS),
        .MON_M_AXI_awready(cluster_1_m_axi_gmem_AWREADY),
        .MON_M_AXI_awregion(cluster_1_m_axi_gmem_AWREGION),
        .MON_M_AXI_awsize(cluster_1_m_axi_gmem_AWSIZE),
        .MON_M_AXI_awvalid(cluster_1_m_axi_gmem_AWVALID),
        .MON_M_AXI_bid(cluster_1_m_axi_gmem_BID),
        .MON_M_AXI_bready(cluster_1_m_axi_gmem_BREADY),
        .MON_M_AXI_bresp(cluster_1_m_axi_gmem_BRESP),
        .MON_M_AXI_bvalid(cluster_1_m_axi_gmem_BVALID),
        .MON_M_AXI_rready(cluster_1_m_axi_gmem_RREADY),
        .MON_M_AXI_wdata(cluster_1_m_axi_gmem_WDATA),
        .MON_M_AXI_wlast(cluster_1_m_axi_gmem_WLAST),
        .MON_M_AXI_wready(cluster_1_m_axi_gmem_WREADY),
        .MON_M_AXI_wstrb(cluster_1_m_axi_gmem_WSTRB),
        .MON_M_AXI_wvalid(cluster_1_m_axi_gmem_WVALID),
        .MON_S_AXI_araddr(interconnect_axilite_M01_AXI_ARADDR),
        .MON_S_AXI_arprot(interconnect_axilite_M01_AXI_ARPROT),
        .MON_S_AXI_arready(interconnect_axilite_M01_AXI_ARREADY),
        .MON_S_AXI_arvalid(interconnect_axilite_M01_AXI_ARVALID),
        .MON_S_AXI_awaddr(interconnect_axilite_M01_AXI_AWADDR),
        .MON_S_AXI_awprot(interconnect_axilite_M01_AXI_AWPROT),
        .MON_S_AXI_awready(interconnect_axilite_M01_AXI_AWREADY),
        .MON_S_AXI_awvalid(interconnect_axilite_M01_AXI_AWVALID),
        .MON_S_AXI_bready(interconnect_axilite_M01_AXI_BREADY),
        .MON_S_AXI_bresp(interconnect_axilite_M01_AXI_BRESP),
        .MON_S_AXI_bvalid(interconnect_axilite_M01_AXI_BVALID),
        .MON_S_AXI_rdata(interconnect_axilite_M01_AXI_RDATA),
        .MON_S_AXI_rready(interconnect_axilite_M01_AXI_RREADY),
        .MON_S_AXI_rresp(interconnect_axilite_M01_AXI_RRESP),
        .MON_S_AXI_rvalid(interconnect_axilite_M01_AXI_RVALID),
        .MON_S_AXI_wdata(interconnect_axilite_M01_AXI_WDATA),
        .MON_S_AXI_wready(interconnect_axilite_M01_AXI_WREADY),
        .MON_S_AXI_wstrb(interconnect_axilite_M01_AXI_WSTRB),
        .MON_S_AXI_wvalid(interconnect_axilite_M01_AXI_WVALID),
        .S00_AXI_araddr(interconnect_axilite_M02_AXI_ARADDR),
        .S00_AXI_arburst(interconnect_axilite_M02_AXI_ARBURST),
        .S00_AXI_arcache(interconnect_axilite_M02_AXI_ARCACHE),
        .S00_AXI_arid(interconnect_axilite_M02_AXI_ARID),
        .S00_AXI_arlen(interconnect_axilite_M02_AXI_ARLEN),
        .S00_AXI_arlock(interconnect_axilite_M02_AXI_ARLOCK),
        .S00_AXI_arprot(interconnect_axilite_M02_AXI_ARPROT),
        .S00_AXI_arqos(interconnect_axilite_M02_AXI_ARQOS),
        .S00_AXI_arready(interconnect_axilite_M02_AXI_ARREADY),
        .S00_AXI_arregion(interconnect_axilite_M02_AXI_ARREGION),
        .S00_AXI_arsize(interconnect_axilite_M02_AXI_ARSIZE),
        .S00_AXI_aruser(interconnect_axilite_M02_AXI_ARUSER),
        .S00_AXI_arvalid(interconnect_axilite_M02_AXI_ARVALID),
        .S00_AXI_awaddr(interconnect_axilite_M02_AXI_AWADDR),
        .S00_AXI_awburst(interconnect_axilite_M02_AXI_AWBURST),
        .S00_AXI_awcache(interconnect_axilite_M02_AXI_AWCACHE),
        .S00_AXI_awid(interconnect_axilite_M02_AXI_AWID),
        .S00_AXI_awlen(interconnect_axilite_M02_AXI_AWLEN),
        .S00_AXI_awlock(interconnect_axilite_M02_AXI_AWLOCK),
        .S00_AXI_awprot(interconnect_axilite_M02_AXI_AWPROT),
        .S00_AXI_awqos(interconnect_axilite_M02_AXI_AWQOS),
        .S00_AXI_awready(interconnect_axilite_M02_AXI_AWREADY),
        .S00_AXI_awregion(interconnect_axilite_M02_AXI_AWREGION),
        .S00_AXI_awsize(interconnect_axilite_M02_AXI_AWSIZE),
        .S00_AXI_awuser(interconnect_axilite_M02_AXI_AWUSER),
        .S00_AXI_awvalid(interconnect_axilite_M02_AXI_AWVALID),
        .S00_AXI_bid(interconnect_axilite_M02_AXI_BID),
        .S00_AXI_bready(interconnect_axilite_M02_AXI_BREADY),
        .S00_AXI_bresp(interconnect_axilite_M02_AXI_BRESP),
        .S00_AXI_bvalid(interconnect_axilite_M02_AXI_BVALID),
        .S00_AXI_rdata(interconnect_axilite_M02_AXI_RDATA),
        .S00_AXI_rid(interconnect_axilite_M02_AXI_RID),
        .S00_AXI_rlast(interconnect_axilite_M02_AXI_RLAST),
        .S00_AXI_rready(interconnect_axilite_M02_AXI_RREADY),
        .S00_AXI_rresp(interconnect_axilite_M02_AXI_RRESP),
        .S00_AXI_rvalid(interconnect_axilite_M02_AXI_RVALID),
        .S00_AXI_wdata(interconnect_axilite_M02_AXI_WDATA),
        .S00_AXI_wlast(interconnect_axilite_M02_AXI_WLAST),
        .S00_AXI_wready(interconnect_axilite_M02_AXI_WREADY),
        .S00_AXI_wstrb(interconnect_axilite_M02_AXI_WSTRB),
        .S00_AXI_wvalid(interconnect_axilite_M02_AXI_WVALID),
        .S_AXIMM_araddr(interconnect_axihpm0fpd_M01_AXI_ARADDR),
        .S_AXIMM_arburst(interconnect_axihpm0fpd_M01_AXI_ARBURST),
        .S_AXIMM_arlen(interconnect_axihpm0fpd_M01_AXI_ARLEN),
        .S_AXIMM_arready(interconnect_axihpm0fpd_M01_AXI_ARREADY),
        .S_AXIMM_arsize(interconnect_axihpm0fpd_M01_AXI_ARSIZE),
        .S_AXIMM_arvalid(interconnect_axihpm0fpd_M01_AXI_ARVALID),
        .S_AXIMM_awaddr(interconnect_axihpm0fpd_M01_AXI_AWADDR),
        .S_AXIMM_awburst(interconnect_axihpm0fpd_M01_AXI_AWBURST),
        .S_AXIMM_awlen(interconnect_axihpm0fpd_M01_AXI_AWLEN),
        .S_AXIMM_awready(interconnect_axihpm0fpd_M01_AXI_AWREADY),
        .S_AXIMM_awsize(interconnect_axihpm0fpd_M01_AXI_AWSIZE),
        .S_AXIMM_awvalid(interconnect_axihpm0fpd_M01_AXI_AWVALID),
        .S_AXIMM_bready(interconnect_axihpm0fpd_M01_AXI_BREADY),
        .S_AXIMM_bresp(interconnect_axihpm0fpd_M01_AXI_BRESP),
        .S_AXIMM_bvalid(interconnect_axihpm0fpd_M01_AXI_BVALID),
        .S_AXIMM_rdata(interconnect_axihpm0fpd_M01_AXI_RDATA),
        .S_AXIMM_rlast(interconnect_axihpm0fpd_M01_AXI_RLAST),
        .S_AXIMM_rready(interconnect_axihpm0fpd_M01_AXI_RREADY),
        .S_AXIMM_rresp(interconnect_axihpm0fpd_M01_AXI_RRESP),
        .S_AXIMM_rvalid(interconnect_axihpm0fpd_M01_AXI_RVALID),
        .S_AXIMM_wdata(interconnect_axihpm0fpd_M01_AXI_WDATA),
        .S_AXIMM_wlast(interconnect_axihpm0fpd_M01_AXI_WLAST),
        .S_AXIMM_wready(interconnect_axihpm0fpd_M01_AXI_WREADY),
        .S_AXIMM_wstrb(interconnect_axihpm0fpd_M01_AXI_WSTRB),
        .S_AXIMM_wvalid(interconnect_axihpm0fpd_M01_AXI_WVALID),
        .mon_clk(clk_wiz_0_clk_out4),
        .mon_resetn(proc_sys_reset_0_peripheral_aresetn));
  vitis_design_axi_ic_ps_e_S_AXI_HP0_FPD_0 axi_ic_ps_e_S_AXI_HP0_FPD
       (.ACLK(clk_wiz_0_clk_out4),
        .ARESETN(proc_sys_reset_0_peripheral_aresetn),
        .M00_ACLK(clk_wiz_0_clk_out4),
        .M00_ARESETN(proc_sys_reset_0_peripheral_aresetn),
        .M00_AXI_awaddr(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWADDR),
        .M00_AXI_awburst(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWBURST),
        .M00_AXI_awcache(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWCACHE),
        .M00_AXI_awlen(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWLEN),
        .M00_AXI_awlock(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWLOCK),
        .M00_AXI_awprot(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWPROT),
        .M00_AXI_awqos(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWQOS),
        .M00_AXI_awready(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWREADY),
        .M00_AXI_awsize(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWSIZE),
        .M00_AXI_awvalid(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWVALID),
        .M00_AXI_bready(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_BREADY),
        .M00_AXI_bresp(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_BRESP),
        .M00_AXI_bvalid(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_BVALID),
        .M00_AXI_wdata(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WDATA),
        .M00_AXI_wlast(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WLAST),
        .M00_AXI_wready(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WREADY),
        .M00_AXI_wstrb(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WSTRB),
        .M00_AXI_wvalid(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WVALID),
        .S00_ACLK(clk_wiz_0_clk_out4),
        .S00_ARESETN(proc_sys_reset_0_peripheral_aresetn),
        .S00_AXI_araddr(cluster_1_m_axi_gmem_ARADDR),
        .S00_AXI_arburst(cluster_1_m_axi_gmem_ARBURST),
        .S00_AXI_arid(cluster_1_m_axi_gmem_ARID),
        .S00_AXI_arlen(cluster_1_m_axi_gmem_ARLEN),
        .S00_AXI_arsize(cluster_1_m_axi_gmem_ARSIZE),
        .S00_AXI_arvalid(cluster_1_m_axi_gmem_ARVALID),
        .S00_AXI_awaddr(cluster_1_m_axi_gmem_AWADDR),
        .S00_AXI_awburst(cluster_1_m_axi_gmem_AWBURST),
        .S00_AXI_awcache(cluster_1_m_axi_gmem_AWCACHE),
        .S00_AXI_awid(cluster_1_m_axi_gmem_AWID),
        .S00_AXI_awlen(cluster_1_m_axi_gmem_AWLEN),
        .S00_AXI_awlock(cluster_1_m_axi_gmem_AWLOCK),
        .S00_AXI_awprot(cluster_1_m_axi_gmem_AWPROT),
        .S00_AXI_awqos(cluster_1_m_axi_gmem_AWQOS),
        .S00_AXI_awready(cluster_1_m_axi_gmem_AWREADY),
        .S00_AXI_awregion(cluster_1_m_axi_gmem_AWREGION),
        .S00_AXI_awsize(cluster_1_m_axi_gmem_AWSIZE),
        .S00_AXI_awvalid(cluster_1_m_axi_gmem_AWVALID),
        .S00_AXI_bid(cluster_1_m_axi_gmem_BID),
        .S00_AXI_bready(cluster_1_m_axi_gmem_BREADY),
        .S00_AXI_bresp(cluster_1_m_axi_gmem_BRESP),
        .S00_AXI_bvalid(cluster_1_m_axi_gmem_BVALID),
        .S00_AXI_rready(cluster_1_m_axi_gmem_RREADY),
        .S00_AXI_wdata(cluster_1_m_axi_gmem_WDATA),
        .S00_AXI_wlast(cluster_1_m_axi_gmem_WLAST),
        .S00_AXI_wready(cluster_1_m_axi_gmem_WREADY),
        .S00_AXI_wstrb(cluster_1_m_axi_gmem_WSTRB),
        .S00_AXI_wvalid(cluster_1_m_axi_gmem_WVALID));
  vitis_design_axi_intc_0_0 axi_intc_0
       (.intr(axi_intc_0_intr_1_interrupt_concat_dout),
        .irq(axi_intc_0_irq),
        .s_axi_aclk(clk_wiz_0_clk_out3),
        .s_axi_araddr(axi_interconnect_0_M00_AXI_ARADDR[8:0]),
        .s_axi_aresetn(proc_sys_reset_2_interconnect_aresetn),
        .s_axi_arready(axi_interconnect_0_M00_AXI_ARREADY),
        .s_axi_arvalid(axi_interconnect_0_M00_AXI_ARVALID),
        .s_axi_awaddr(axi_interconnect_0_M00_AXI_AWADDR[8:0]),
        .s_axi_awready(axi_interconnect_0_M00_AXI_AWREADY),
        .s_axi_awvalid(axi_interconnect_0_M00_AXI_AWVALID),
        .s_axi_bready(axi_interconnect_0_M00_AXI_BREADY),
        .s_axi_bresp(axi_interconnect_0_M00_AXI_BRESP),
        .s_axi_bvalid(axi_interconnect_0_M00_AXI_BVALID),
        .s_axi_rdata(axi_interconnect_0_M00_AXI_RDATA),
        .s_axi_rready(axi_interconnect_0_M00_AXI_RREADY),
        .s_axi_rresp(axi_interconnect_0_M00_AXI_RRESP),
        .s_axi_rvalid(axi_interconnect_0_M00_AXI_RVALID),
        .s_axi_wdata(axi_interconnect_0_M00_AXI_WDATA),
        .s_axi_wready(axi_interconnect_0_M00_AXI_WREADY),
        .s_axi_wstrb(axi_interconnect_0_M00_AXI_WSTRB),
        .s_axi_wvalid(axi_interconnect_0_M00_AXI_WVALID));
  vitis_design_axi_intc_0_intr_1_interrupt_concat_0 axi_intc_0_intr_1_interrupt_concat
       (.In0(irq_const_tieoff_dout),
        .In1(cluster_1_interrupt),
        .In10(irq_const_tieoff_dout),
        .In11(irq_const_tieoff_dout),
        .In12(irq_const_tieoff_dout),
        .In13(irq_const_tieoff_dout),
        .In14(irq_const_tieoff_dout),
        .In15(irq_const_tieoff_dout),
        .In16(irq_const_tieoff_dout),
        .In17(irq_const_tieoff_dout),
        .In18(irq_const_tieoff_dout),
        .In19(irq_const_tieoff_dout),
        .In2(irq_const_tieoff_dout),
        .In20(irq_const_tieoff_dout),
        .In21(irq_const_tieoff_dout),
        .In22(irq_const_tieoff_dout),
        .In23(irq_const_tieoff_dout),
        .In24(irq_const_tieoff_dout),
        .In25(irq_const_tieoff_dout),
        .In26(irq_const_tieoff_dout),
        .In27(irq_const_tieoff_dout),
        .In28(irq_const_tieoff_dout),
        .In29(irq_const_tieoff_dout),
        .In3(irq_const_tieoff_dout),
        .In30(irq_const_tieoff_dout),
        .In31(irq_const_tieoff_dout),
        .In4(irq_const_tieoff_dout),
        .In5(irq_const_tieoff_dout),
        .In6(irq_const_tieoff_dout),
        .In7(irq_const_tieoff_dout),
        .In8(irq_const_tieoff_dout),
        .In9(irq_const_tieoff_dout),
        .dout(axi_intc_0_intr_1_interrupt_concat_dout));
  vitis_design_axi_interconnect_lpd_0 axi_interconnect_lpd
       (.ACLK(clk_wiz_0_clk_out2),
        .ARESETN(proc_sys_reset_1_interconnect_aresetn),
        .M00_ACLK(clk_wiz_0_clk_out2),
        .M00_ARESETN(proc_sys_reset_1_interconnect_aresetn),
        .M00_AXI_araddr(axi_interconnect_0_M00_AXI1_ARADDR),
        .M00_AXI_arburst(axi_interconnect_0_M00_AXI1_ARBURST),
        .M00_AXI_arcache(axi_interconnect_0_M00_AXI1_ARCACHE),
        .M00_AXI_arlen(axi_interconnect_0_M00_AXI1_ARLEN),
        .M00_AXI_arlock(axi_interconnect_0_M00_AXI1_ARLOCK),
        .M00_AXI_arprot(axi_interconnect_0_M00_AXI1_ARPROT),
        .M00_AXI_arqos(axi_interconnect_0_M00_AXI1_ARQOS),
        .M00_AXI_arready(axi_interconnect_0_M00_AXI1_ARREADY),
        .M00_AXI_arsize(axi_interconnect_0_M00_AXI1_ARSIZE),
        .M00_AXI_arvalid(axi_interconnect_0_M00_AXI1_ARVALID),
        .M00_AXI_awaddr(axi_interconnect_0_M00_AXI1_AWADDR),
        .M00_AXI_awburst(axi_interconnect_0_M00_AXI1_AWBURST),
        .M00_AXI_awcache(axi_interconnect_0_M00_AXI1_AWCACHE),
        .M00_AXI_awlen(axi_interconnect_0_M00_AXI1_AWLEN),
        .M00_AXI_awlock(axi_interconnect_0_M00_AXI1_AWLOCK),
        .M00_AXI_awprot(axi_interconnect_0_M00_AXI1_AWPROT),
        .M00_AXI_awqos(axi_interconnect_0_M00_AXI1_AWQOS),
        .M00_AXI_awready(axi_interconnect_0_M00_AXI1_AWREADY),
        .M00_AXI_awsize(axi_interconnect_0_M00_AXI1_AWSIZE),
        .M00_AXI_awvalid(axi_interconnect_0_M00_AXI1_AWVALID),
        .M00_AXI_bready(axi_interconnect_0_M00_AXI1_BREADY),
        .M00_AXI_bresp(axi_interconnect_0_M00_AXI1_BRESP),
        .M00_AXI_bvalid(axi_interconnect_0_M00_AXI1_BVALID),
        .M00_AXI_rdata(axi_interconnect_0_M00_AXI1_RDATA),
        .M00_AXI_rlast(axi_interconnect_0_M00_AXI1_RLAST),
        .M00_AXI_rready(axi_interconnect_0_M00_AXI1_RREADY),
        .M00_AXI_rresp(axi_interconnect_0_M00_AXI1_RRESP),
        .M00_AXI_rvalid(axi_interconnect_0_M00_AXI1_RVALID),
        .M00_AXI_wdata(axi_interconnect_0_M00_AXI1_WDATA),
        .M00_AXI_wlast(axi_interconnect_0_M00_AXI1_WLAST),
        .M00_AXI_wready(axi_interconnect_0_M00_AXI1_WREADY),
        .M00_AXI_wstrb(axi_interconnect_0_M00_AXI1_WSTRB),
        .M00_AXI_wvalid(axi_interconnect_0_M00_AXI1_WVALID),
        .S00_ACLK(clk_wiz_0_clk_out2),
        .S00_ARESETN(proc_sys_reset_1_interconnect_aresetn),
        .S00_AXI_araddr(axi_vip_1_M_AXI_ARADDR),
        .S00_AXI_arburst(axi_vip_1_M_AXI_ARBURST),
        .S00_AXI_arcache(axi_vip_1_M_AXI_ARCACHE),
        .S00_AXI_arlen(axi_vip_1_M_AXI_ARLEN),
        .S00_AXI_arlock(axi_vip_1_M_AXI_ARLOCK),
        .S00_AXI_arprot(axi_vip_1_M_AXI_ARPROT),
        .S00_AXI_arqos(axi_vip_1_M_AXI_ARQOS),
        .S00_AXI_arready(axi_vip_1_M_AXI_ARREADY),
        .S00_AXI_arsize(axi_vip_1_M_AXI_ARSIZE),
        .S00_AXI_arvalid(axi_vip_1_M_AXI_ARVALID),
        .S00_AXI_awaddr(axi_vip_1_M_AXI_AWADDR),
        .S00_AXI_awburst(axi_vip_1_M_AXI_AWBURST),
        .S00_AXI_awcache(axi_vip_1_M_AXI_AWCACHE),
        .S00_AXI_awlen(axi_vip_1_M_AXI_AWLEN),
        .S00_AXI_awlock(axi_vip_1_M_AXI_AWLOCK),
        .S00_AXI_awprot(axi_vip_1_M_AXI_AWPROT),
        .S00_AXI_awqos(axi_vip_1_M_AXI_AWQOS),
        .S00_AXI_awready(axi_vip_1_M_AXI_AWREADY),
        .S00_AXI_awsize(axi_vip_1_M_AXI_AWSIZE),
        .S00_AXI_awvalid(axi_vip_1_M_AXI_AWVALID),
        .S00_AXI_bready(axi_vip_1_M_AXI_BREADY),
        .S00_AXI_bresp(axi_vip_1_M_AXI_BRESP),
        .S00_AXI_bvalid(axi_vip_1_M_AXI_BVALID),
        .S00_AXI_rdata(axi_vip_1_M_AXI_RDATA),
        .S00_AXI_rlast(axi_vip_1_M_AXI_RLAST),
        .S00_AXI_rready(axi_vip_1_M_AXI_RREADY),
        .S00_AXI_rresp(axi_vip_1_M_AXI_RRESP),
        .S00_AXI_rvalid(axi_vip_1_M_AXI_RVALID),
        .S00_AXI_wdata(axi_vip_1_M_AXI_WDATA),
        .S00_AXI_wlast(axi_vip_1_M_AXI_WLAST),
        .S00_AXI_wready(axi_vip_1_M_AXI_WREADY),
        .S00_AXI_wstrb(axi_vip_1_M_AXI_WSTRB),
        .S00_AXI_wvalid(axi_vip_1_M_AXI_WVALID));
  vitis_design_axi_register_slice_0_0 axi_register_slice_0
       (.aclk(clk_wiz_0_clk_out2),
        .aresetn(proc_sys_reset_1_peripheral_aresetn),
        .m_axi_arready(1'b0),
        .m_axi_awready(1'b0),
        .m_axi_bid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .m_axi_bresp({1'b0,1'b0}),
        .m_axi_bvalid(1'b0),
        .m_axi_rdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .m_axi_rid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .m_axi_rlast(1'b0),
        .m_axi_rresp({1'b0,1'b0}),
        .m_axi_rvalid(1'b0),
        .m_axi_wready(1'b0),
        .s_axi_araddr(interconnect_axihpm0fpd_M00_AXI_ARADDR),
        .s_axi_arburst(interconnect_axihpm0fpd_M00_AXI_ARBURST),
        .s_axi_arcache(interconnect_axihpm0fpd_M00_AXI_ARCACHE),
        .s_axi_arid(interconnect_axihpm0fpd_M00_AXI_ARID),
        .s_axi_arlen(interconnect_axihpm0fpd_M00_AXI_ARLEN),
        .s_axi_arlock(interconnect_axihpm0fpd_M00_AXI_ARLOCK),
        .s_axi_arprot(interconnect_axihpm0fpd_M00_AXI_ARPROT),
        .s_axi_arqos(interconnect_axihpm0fpd_M00_AXI_ARQOS),
        .s_axi_arready(interconnect_axihpm0fpd_M00_AXI_ARREADY),
        .s_axi_arregion(interconnect_axihpm0fpd_M00_AXI_ARREGION),
        .s_axi_arsize(interconnect_axihpm0fpd_M00_AXI_ARSIZE),
        .s_axi_aruser(interconnect_axihpm0fpd_M00_AXI_ARUSER),
        .s_axi_arvalid(interconnect_axihpm0fpd_M00_AXI_ARVALID),
        .s_axi_awaddr(interconnect_axihpm0fpd_M00_AXI_AWADDR),
        .s_axi_awburst(interconnect_axihpm0fpd_M00_AXI_AWBURST),
        .s_axi_awcache(interconnect_axihpm0fpd_M00_AXI_AWCACHE),
        .s_axi_awid(interconnect_axihpm0fpd_M00_AXI_AWID),
        .s_axi_awlen(interconnect_axihpm0fpd_M00_AXI_AWLEN),
        .s_axi_awlock(interconnect_axihpm0fpd_M00_AXI_AWLOCK),
        .s_axi_awprot(interconnect_axihpm0fpd_M00_AXI_AWPROT),
        .s_axi_awqos(interconnect_axihpm0fpd_M00_AXI_AWQOS),
        .s_axi_awready(interconnect_axihpm0fpd_M00_AXI_AWREADY),
        .s_axi_awregion(interconnect_axihpm0fpd_M00_AXI_AWREGION),
        .s_axi_awsize(interconnect_axihpm0fpd_M00_AXI_AWSIZE),
        .s_axi_awuser(interconnect_axihpm0fpd_M00_AXI_AWUSER),
        .s_axi_awvalid(interconnect_axihpm0fpd_M00_AXI_AWVALID),
        .s_axi_bid(interconnect_axihpm0fpd_M00_AXI_BID),
        .s_axi_bready(interconnect_axihpm0fpd_M00_AXI_BREADY),
        .s_axi_bresp(interconnect_axihpm0fpd_M00_AXI_BRESP),
        .s_axi_bvalid(interconnect_axihpm0fpd_M00_AXI_BVALID),
        .s_axi_rdata(interconnect_axihpm0fpd_M00_AXI_RDATA),
        .s_axi_rid(interconnect_axihpm0fpd_M00_AXI_RID),
        .s_axi_rlast(interconnect_axihpm0fpd_M00_AXI_RLAST),
        .s_axi_rready(interconnect_axihpm0fpd_M00_AXI_RREADY),
        .s_axi_rresp(interconnect_axihpm0fpd_M00_AXI_RRESP),
        .s_axi_rvalid(interconnect_axihpm0fpd_M00_AXI_RVALID),
        .s_axi_wdata(interconnect_axihpm0fpd_M00_AXI_WDATA),
        .s_axi_wlast(interconnect_axihpm0fpd_M00_AXI_WLAST),
        .s_axi_wready(interconnect_axihpm0fpd_M00_AXI_WREADY),
        .s_axi_wstrb(interconnect_axihpm0fpd_M00_AXI_WSTRB),
        .s_axi_wvalid(interconnect_axihpm0fpd_M00_AXI_WVALID));
  vitis_design_axi_vip_0_0 axi_vip_0
       (.aclk(clk_wiz_0_clk_out2),
        .aresetn(proc_sys_reset_1_peripheral_aresetn),
        .m_axi_araddr(axi_vip_0_M_AXI_ARADDR),
        .m_axi_arburst(axi_vip_0_M_AXI_ARBURST),
        .m_axi_arcache(axi_vip_0_M_AXI_ARCACHE),
        .m_axi_arlen(axi_vip_0_M_AXI_ARLEN),
        .m_axi_arlock(axi_vip_0_M_AXI_ARLOCK),
        .m_axi_arprot(axi_vip_0_M_AXI_ARPROT),
        .m_axi_arqos(axi_vip_0_M_AXI_ARQOS),
        .m_axi_arready(axi_vip_0_M_AXI_ARREADY),
        .m_axi_arregion(axi_vip_0_M_AXI_ARREGION),
        .m_axi_arsize(axi_vip_0_M_AXI_ARSIZE),
        .m_axi_arvalid(axi_vip_0_M_AXI_ARVALID),
        .m_axi_awaddr(axi_vip_0_M_AXI_AWADDR),
        .m_axi_awburst(axi_vip_0_M_AXI_AWBURST),
        .m_axi_awcache(axi_vip_0_M_AXI_AWCACHE),
        .m_axi_awlen(axi_vip_0_M_AXI_AWLEN),
        .m_axi_awlock(axi_vip_0_M_AXI_AWLOCK),
        .m_axi_awprot(axi_vip_0_M_AXI_AWPROT),
        .m_axi_awqos(axi_vip_0_M_AXI_AWQOS),
        .m_axi_awready(axi_vip_0_M_AXI_AWREADY),
        .m_axi_awregion(axi_vip_0_M_AXI_AWREGION),
        .m_axi_awsize(axi_vip_0_M_AXI_AWSIZE),
        .m_axi_awvalid(axi_vip_0_M_AXI_AWVALID),
        .m_axi_bready(axi_vip_0_M_AXI_BREADY),
        .m_axi_bresp(axi_vip_0_M_AXI_BRESP),
        .m_axi_bvalid(axi_vip_0_M_AXI_BVALID),
        .m_axi_rdata(axi_vip_0_M_AXI_RDATA),
        .m_axi_rlast(axi_vip_0_M_AXI_RLAST),
        .m_axi_rready(axi_vip_0_M_AXI_RREADY),
        .m_axi_rresp(axi_vip_0_M_AXI_RRESP),
        .m_axi_rvalid(axi_vip_0_M_AXI_RVALID),
        .m_axi_wdata(axi_vip_0_M_AXI_WDATA),
        .m_axi_wlast(axi_vip_0_M_AXI_WLAST),
        .m_axi_wready(axi_vip_0_M_AXI_WREADY),
        .m_axi_wstrb(axi_vip_0_M_AXI_WSTRB),
        .m_axi_wvalid(axi_vip_0_M_AXI_WVALID));
  vitis_design_axi_vip_1_0 axi_vip_1
       (.aclk(clk_wiz_0_clk_out2),
        .aresetn(proc_sys_reset_1_interconnect_aresetn),
        .m_axi_araddr(axi_vip_1_M_AXI_ARADDR),
        .m_axi_arburst(axi_vip_1_M_AXI_ARBURST),
        .m_axi_arcache(axi_vip_1_M_AXI_ARCACHE),
        .m_axi_arlen(axi_vip_1_M_AXI_ARLEN),
        .m_axi_arlock(axi_vip_1_M_AXI_ARLOCK),
        .m_axi_arprot(axi_vip_1_M_AXI_ARPROT),
        .m_axi_arqos(axi_vip_1_M_AXI_ARQOS),
        .m_axi_arready(axi_vip_1_M_AXI_ARREADY),
        .m_axi_arsize(axi_vip_1_M_AXI_ARSIZE),
        .m_axi_arvalid(axi_vip_1_M_AXI_ARVALID),
        .m_axi_awaddr(axi_vip_1_M_AXI_AWADDR),
        .m_axi_awburst(axi_vip_1_M_AXI_AWBURST),
        .m_axi_awcache(axi_vip_1_M_AXI_AWCACHE),
        .m_axi_awlen(axi_vip_1_M_AXI_AWLEN),
        .m_axi_awlock(axi_vip_1_M_AXI_AWLOCK),
        .m_axi_awprot(axi_vip_1_M_AXI_AWPROT),
        .m_axi_awqos(axi_vip_1_M_AXI_AWQOS),
        .m_axi_awready(axi_vip_1_M_AXI_AWREADY),
        .m_axi_awsize(axi_vip_1_M_AXI_AWSIZE),
        .m_axi_awvalid(axi_vip_1_M_AXI_AWVALID),
        .m_axi_bready(axi_vip_1_M_AXI_BREADY),
        .m_axi_bresp(axi_vip_1_M_AXI_BRESP),
        .m_axi_bvalid(axi_vip_1_M_AXI_BVALID),
        .m_axi_rdata(axi_vip_1_M_AXI_RDATA),
        .m_axi_rlast(axi_vip_1_M_AXI_RLAST),
        .m_axi_rready(axi_vip_1_M_AXI_RREADY),
        .m_axi_rresp(axi_vip_1_M_AXI_RRESP),
        .m_axi_rvalid(axi_vip_1_M_AXI_RVALID),
        .m_axi_wdata(axi_vip_1_M_AXI_WDATA),
        .m_axi_wlast(axi_vip_1_M_AXI_WLAST),
        .m_axi_wready(axi_vip_1_M_AXI_WREADY),
        .m_axi_wstrb(axi_vip_1_M_AXI_WSTRB),
        .m_axi_wvalid(axi_vip_1_M_AXI_WVALID));
  vitis_design_clk_wiz_0_0 clk_wiz_0
       (.clk_in1(ps_e_pl_clk0),
        .clk_out1(clk_wiz_0_clk_out4),
        .clk_out2(clk_wiz_0_clk_out2),
        .clk_out3(clk_wiz_0_clk_out3),
        .clk_out4(clk_wiz_0_clk_out5),
        .clk_out5(clk_wiz_0_clk_out6),
        .clk_out6(clk_wiz_0_clk_out7),
        .clk_out7(clk_wiz_0_clk_out8),
        .locked(clk_wiz_0_locked),
        .resetn(Net));
  vitis_design_cluster_1_0 cluster_1
       (.ap_clk(clk_wiz_0_clk_out4),
        .ap_rst_n(proc_sys_reset_0_peripheral_aresetn),
        .interrupt(cluster_1_interrupt),
        .m_axi_gmem_ARADDR(cluster_1_m_axi_gmem_ARADDR),
        .m_axi_gmem_ARBURST(cluster_1_m_axi_gmem_ARBURST),
        .m_axi_gmem_ARID(cluster_1_m_axi_gmem_ARID),
        .m_axi_gmem_ARLEN(cluster_1_m_axi_gmem_ARLEN),
        .m_axi_gmem_ARREADY(1'b0),
        .m_axi_gmem_ARSIZE(cluster_1_m_axi_gmem_ARSIZE),
        .m_axi_gmem_ARVALID(cluster_1_m_axi_gmem_ARVALID),
        .m_axi_gmem_AWADDR(cluster_1_m_axi_gmem_AWADDR),
        .m_axi_gmem_AWBURST(cluster_1_m_axi_gmem_AWBURST),
        .m_axi_gmem_AWCACHE(cluster_1_m_axi_gmem_AWCACHE),
        .m_axi_gmem_AWID(cluster_1_m_axi_gmem_AWID),
        .m_axi_gmem_AWLEN(cluster_1_m_axi_gmem_AWLEN),
        .m_axi_gmem_AWLOCK(cluster_1_m_axi_gmem_AWLOCK),
        .m_axi_gmem_AWPROT(cluster_1_m_axi_gmem_AWPROT),
        .m_axi_gmem_AWQOS(cluster_1_m_axi_gmem_AWQOS),
        .m_axi_gmem_AWREADY(cluster_1_m_axi_gmem_AWREADY),
        .m_axi_gmem_AWREGION(cluster_1_m_axi_gmem_AWREGION),
        .m_axi_gmem_AWSIZE(cluster_1_m_axi_gmem_AWSIZE),
        .m_axi_gmem_AWVALID(cluster_1_m_axi_gmem_AWVALID),
        .m_axi_gmem_BID(cluster_1_m_axi_gmem_BID),
        .m_axi_gmem_BREADY(cluster_1_m_axi_gmem_BREADY),
        .m_axi_gmem_BRESP(cluster_1_m_axi_gmem_BRESP),
        .m_axi_gmem_BVALID(cluster_1_m_axi_gmem_BVALID),
        .m_axi_gmem_RDATA({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .m_axi_gmem_RID(1'b0),
        .m_axi_gmem_RLAST(1'b0),
        .m_axi_gmem_RREADY(cluster_1_m_axi_gmem_RREADY),
        .m_axi_gmem_RRESP({1'b0,1'b0}),
        .m_axi_gmem_RVALID(1'b0),
        .m_axi_gmem_WDATA(cluster_1_m_axi_gmem_WDATA),
        .m_axi_gmem_WLAST(cluster_1_m_axi_gmem_WLAST),
        .m_axi_gmem_WREADY(cluster_1_m_axi_gmem_WREADY),
        .m_axi_gmem_WSTRB(cluster_1_m_axi_gmem_WSTRB),
        .m_axi_gmem_WVALID(cluster_1_m_axi_gmem_WVALID),
        .s_axi_control_ARADDR(interconnect_axilite_M01_AXI_ARADDR),
        .s_axi_control_ARREADY(interconnect_axilite_M01_AXI_ARREADY),
        .s_axi_control_ARVALID(interconnect_axilite_M01_AXI_ARVALID),
        .s_axi_control_AWADDR(interconnect_axilite_M01_AXI_AWADDR),
        .s_axi_control_AWREADY(interconnect_axilite_M01_AXI_AWREADY),
        .s_axi_control_AWVALID(interconnect_axilite_M01_AXI_AWVALID),
        .s_axi_control_BREADY(interconnect_axilite_M01_AXI_BREADY),
        .s_axi_control_BRESP(interconnect_axilite_M01_AXI_BRESP),
        .s_axi_control_BVALID(interconnect_axilite_M01_AXI_BVALID),
        .s_axi_control_RDATA(interconnect_axilite_M01_AXI_RDATA),
        .s_axi_control_RREADY(interconnect_axilite_M01_AXI_RREADY),
        .s_axi_control_RRESP(interconnect_axilite_M01_AXI_RRESP),
        .s_axi_control_RVALID(interconnect_axilite_M01_AXI_RVALID),
        .s_axi_control_WDATA(interconnect_axilite_M01_AXI_WDATA),
        .s_axi_control_WREADY(interconnect_axilite_M01_AXI_WREADY),
        .s_axi_control_WSTRB(interconnect_axilite_M01_AXI_WSTRB),
        .s_axi_control_WVALID(interconnect_axilite_M01_AXI_WVALID));
  (* DPA_TRACE_SLAVE = "true" *) 
  vitis_design_interconnect_axifull_0 interconnect_axifull
       (.ACLK(clk_wiz_0_clk_out2),
        .ARESETN(proc_sys_reset_1_interconnect_aresetn),
        .M00_ACLK(clk_wiz_0_clk_out2),
        .M00_ARESETN(proc_sys_reset_1_interconnect_aresetn),
        .M00_AXI_araddr(axi_interconnect_1_M00_AXI_ARADDR),
        .M00_AXI_arburst(axi_interconnect_1_M00_AXI_ARBURST),
        .M00_AXI_arcache(axi_interconnect_1_M00_AXI_ARCACHE),
        .M00_AXI_arlen(axi_interconnect_1_M00_AXI_ARLEN),
        .M00_AXI_arlock(axi_interconnect_1_M00_AXI_ARLOCK),
        .M00_AXI_arprot(axi_interconnect_1_M00_AXI_ARPROT),
        .M00_AXI_arqos(axi_interconnect_1_M00_AXI_ARQOS),
        .M00_AXI_arready(axi_interconnect_1_M00_AXI_ARREADY),
        .M00_AXI_arsize(axi_interconnect_1_M00_AXI_ARSIZE),
        .M00_AXI_arvalid(axi_interconnect_1_M00_AXI_ARVALID),
        .M00_AXI_awaddr(axi_interconnect_1_M00_AXI_AWADDR),
        .M00_AXI_awburst(axi_interconnect_1_M00_AXI_AWBURST),
        .M00_AXI_awcache(axi_interconnect_1_M00_AXI_AWCACHE),
        .M00_AXI_awlen(axi_interconnect_1_M00_AXI_AWLEN),
        .M00_AXI_awlock(axi_interconnect_1_M00_AXI_AWLOCK),
        .M00_AXI_awprot(axi_interconnect_1_M00_AXI_AWPROT),
        .M00_AXI_awqos(axi_interconnect_1_M00_AXI_AWQOS),
        .M00_AXI_awready(axi_interconnect_1_M00_AXI_AWREADY),
        .M00_AXI_awsize(axi_interconnect_1_M00_AXI_AWSIZE),
        .M00_AXI_awvalid(axi_interconnect_1_M00_AXI_AWVALID),
        .M00_AXI_bready(axi_interconnect_1_M00_AXI_BREADY),
        .M00_AXI_bresp(axi_interconnect_1_M00_AXI_BRESP),
        .M00_AXI_bvalid(axi_interconnect_1_M00_AXI_BVALID),
        .M00_AXI_rdata(axi_interconnect_1_M00_AXI_RDATA),
        .M00_AXI_rlast(axi_interconnect_1_M00_AXI_RLAST),
        .M00_AXI_rready(axi_interconnect_1_M00_AXI_RREADY),
        .M00_AXI_rresp(axi_interconnect_1_M00_AXI_RRESP),
        .M00_AXI_rvalid(axi_interconnect_1_M00_AXI_RVALID),
        .M00_AXI_wdata(axi_interconnect_1_M00_AXI_WDATA),
        .M00_AXI_wlast(axi_interconnect_1_M00_AXI_WLAST),
        .M00_AXI_wready(axi_interconnect_1_M00_AXI_WREADY),
        .M00_AXI_wstrb(axi_interconnect_1_M00_AXI_WSTRB),
        .M00_AXI_wvalid(axi_interconnect_1_M00_AXI_WVALID),
        .S00_ACLK(clk_wiz_0_clk_out2),
        .S00_ARESETN(proc_sys_reset_1_interconnect_aresetn),
        .S00_AXI_araddr(axi_vip_0_M_AXI_ARADDR),
        .S00_AXI_arburst(axi_vip_0_M_AXI_ARBURST),
        .S00_AXI_arcache(axi_vip_0_M_AXI_ARCACHE),
        .S00_AXI_arlen(axi_vip_0_M_AXI_ARLEN),
        .S00_AXI_arlock(axi_vip_0_M_AXI_ARLOCK),
        .S00_AXI_arprot(axi_vip_0_M_AXI_ARPROT),
        .S00_AXI_arqos(axi_vip_0_M_AXI_ARQOS),
        .S00_AXI_arready(axi_vip_0_M_AXI_ARREADY),
        .S00_AXI_arregion(axi_vip_0_M_AXI_ARREGION),
        .S00_AXI_arsize(axi_vip_0_M_AXI_ARSIZE),
        .S00_AXI_arvalid(axi_vip_0_M_AXI_ARVALID),
        .S00_AXI_awaddr(axi_vip_0_M_AXI_AWADDR),
        .S00_AXI_awburst(axi_vip_0_M_AXI_AWBURST),
        .S00_AXI_awcache(axi_vip_0_M_AXI_AWCACHE),
        .S00_AXI_awlen(axi_vip_0_M_AXI_AWLEN),
        .S00_AXI_awlock(axi_vip_0_M_AXI_AWLOCK),
        .S00_AXI_awprot(axi_vip_0_M_AXI_AWPROT),
        .S00_AXI_awqos(axi_vip_0_M_AXI_AWQOS),
        .S00_AXI_awready(axi_vip_0_M_AXI_AWREADY),
        .S00_AXI_awregion(axi_vip_0_M_AXI_AWREGION),
        .S00_AXI_awsize(axi_vip_0_M_AXI_AWSIZE),
        .S00_AXI_awvalid(axi_vip_0_M_AXI_AWVALID),
        .S00_AXI_bready(axi_vip_0_M_AXI_BREADY),
        .S00_AXI_bresp(axi_vip_0_M_AXI_BRESP),
        .S00_AXI_bvalid(axi_vip_0_M_AXI_BVALID),
        .S00_AXI_rdata(axi_vip_0_M_AXI_RDATA),
        .S00_AXI_rlast(axi_vip_0_M_AXI_RLAST),
        .S00_AXI_rready(axi_vip_0_M_AXI_RREADY),
        .S00_AXI_rresp(axi_vip_0_M_AXI_RRESP),
        .S00_AXI_rvalid(axi_vip_0_M_AXI_RVALID),
        .S00_AXI_wdata(axi_vip_0_M_AXI_WDATA),
        .S00_AXI_wlast(axi_vip_0_M_AXI_WLAST),
        .S00_AXI_wready(axi_vip_0_M_AXI_WREADY),
        .S00_AXI_wstrb(axi_vip_0_M_AXI_WSTRB),
        .S00_AXI_wvalid(axi_vip_0_M_AXI_WVALID));
  (* DPA_TRACE_MASTER = "true" *) 
  vitis_design_interconnect_axihpm0fpd_0 interconnect_axihpm0fpd
       (.ACLK(clk_wiz_0_clk_out2),
        .ARESETN(proc_sys_reset_1_interconnect_aresetn),
        .M00_ACLK(clk_wiz_0_clk_out2),
        .M00_ARESETN(proc_sys_reset_1_interconnect_aresetn),
        .M00_AXI_araddr(interconnect_axihpm0fpd_M00_AXI_ARADDR),
        .M00_AXI_arburst(interconnect_axihpm0fpd_M00_AXI_ARBURST),
        .M00_AXI_arcache(interconnect_axihpm0fpd_M00_AXI_ARCACHE),
        .M00_AXI_arid(interconnect_axihpm0fpd_M00_AXI_ARID),
        .M00_AXI_arlen(interconnect_axihpm0fpd_M00_AXI_ARLEN),
        .M00_AXI_arlock(interconnect_axihpm0fpd_M00_AXI_ARLOCK),
        .M00_AXI_arprot(interconnect_axihpm0fpd_M00_AXI_ARPROT),
        .M00_AXI_arqos(interconnect_axihpm0fpd_M00_AXI_ARQOS),
        .M00_AXI_arready(interconnect_axihpm0fpd_M00_AXI_ARREADY),
        .M00_AXI_arregion(interconnect_axihpm0fpd_M00_AXI_ARREGION),
        .M00_AXI_arsize(interconnect_axihpm0fpd_M00_AXI_ARSIZE),
        .M00_AXI_aruser(interconnect_axihpm0fpd_M00_AXI_ARUSER),
        .M00_AXI_arvalid(interconnect_axihpm0fpd_M00_AXI_ARVALID),
        .M00_AXI_awaddr(interconnect_axihpm0fpd_M00_AXI_AWADDR),
        .M00_AXI_awburst(interconnect_axihpm0fpd_M00_AXI_AWBURST),
        .M00_AXI_awcache(interconnect_axihpm0fpd_M00_AXI_AWCACHE),
        .M00_AXI_awid(interconnect_axihpm0fpd_M00_AXI_AWID),
        .M00_AXI_awlen(interconnect_axihpm0fpd_M00_AXI_AWLEN),
        .M00_AXI_awlock(interconnect_axihpm0fpd_M00_AXI_AWLOCK),
        .M00_AXI_awprot(interconnect_axihpm0fpd_M00_AXI_AWPROT),
        .M00_AXI_awqos(interconnect_axihpm0fpd_M00_AXI_AWQOS),
        .M00_AXI_awready(interconnect_axihpm0fpd_M00_AXI_AWREADY),
        .M00_AXI_awregion(interconnect_axihpm0fpd_M00_AXI_AWREGION),
        .M00_AXI_awsize(interconnect_axihpm0fpd_M00_AXI_AWSIZE),
        .M00_AXI_awuser(interconnect_axihpm0fpd_M00_AXI_AWUSER),
        .M00_AXI_awvalid(interconnect_axihpm0fpd_M00_AXI_AWVALID),
        .M00_AXI_bid(interconnect_axihpm0fpd_M00_AXI_BID),
        .M00_AXI_bready(interconnect_axihpm0fpd_M00_AXI_BREADY),
        .M00_AXI_bresp(interconnect_axihpm0fpd_M00_AXI_BRESP),
        .M00_AXI_bvalid(interconnect_axihpm0fpd_M00_AXI_BVALID),
        .M00_AXI_rdata(interconnect_axihpm0fpd_M00_AXI_RDATA),
        .M00_AXI_rid(interconnect_axihpm0fpd_M00_AXI_RID),
        .M00_AXI_rlast(interconnect_axihpm0fpd_M00_AXI_RLAST),
        .M00_AXI_rready(interconnect_axihpm0fpd_M00_AXI_RREADY),
        .M00_AXI_rresp(interconnect_axihpm0fpd_M00_AXI_RRESP),
        .M00_AXI_rvalid(interconnect_axihpm0fpd_M00_AXI_RVALID),
        .M00_AXI_wdata(interconnect_axihpm0fpd_M00_AXI_WDATA),
        .M00_AXI_wlast(interconnect_axihpm0fpd_M00_AXI_WLAST),
        .M00_AXI_wready(interconnect_axihpm0fpd_M00_AXI_WREADY),
        .M00_AXI_wstrb(interconnect_axihpm0fpd_M00_AXI_WSTRB),
        .M00_AXI_wvalid(interconnect_axihpm0fpd_M00_AXI_WVALID),
        .M01_ACLK(clk_wiz_0_clk_out4),
        .M01_ARESETN(proc_sys_reset_0_peripheral_aresetn),
        .M01_AXI_araddr(interconnect_axihpm0fpd_M01_AXI_ARADDR),
        .M01_AXI_arburst(interconnect_axihpm0fpd_M01_AXI_ARBURST),
        .M01_AXI_arlen(interconnect_axihpm0fpd_M01_AXI_ARLEN),
        .M01_AXI_arready(interconnect_axihpm0fpd_M01_AXI_ARREADY),
        .M01_AXI_arsize(interconnect_axihpm0fpd_M01_AXI_ARSIZE),
        .M01_AXI_arvalid(interconnect_axihpm0fpd_M01_AXI_ARVALID),
        .M01_AXI_awaddr(interconnect_axihpm0fpd_M01_AXI_AWADDR),
        .M01_AXI_awburst(interconnect_axihpm0fpd_M01_AXI_AWBURST),
        .M01_AXI_awlen(interconnect_axihpm0fpd_M01_AXI_AWLEN),
        .M01_AXI_awready(interconnect_axihpm0fpd_M01_AXI_AWREADY),
        .M01_AXI_awsize(interconnect_axihpm0fpd_M01_AXI_AWSIZE),
        .M01_AXI_awvalid(interconnect_axihpm0fpd_M01_AXI_AWVALID),
        .M01_AXI_bready(interconnect_axihpm0fpd_M01_AXI_BREADY),
        .M01_AXI_bresp(interconnect_axihpm0fpd_M01_AXI_BRESP),
        .M01_AXI_bvalid(interconnect_axihpm0fpd_M01_AXI_BVALID),
        .M01_AXI_rdata(interconnect_axihpm0fpd_M01_AXI_RDATA),
        .M01_AXI_rlast(interconnect_axihpm0fpd_M01_AXI_RLAST),
        .M01_AXI_rready(interconnect_axihpm0fpd_M01_AXI_RREADY),
        .M01_AXI_rresp(interconnect_axihpm0fpd_M01_AXI_RRESP),
        .M01_AXI_rvalid(interconnect_axihpm0fpd_M01_AXI_RVALID),
        .M01_AXI_wdata(interconnect_axihpm0fpd_M01_AXI_WDATA),
        .M01_AXI_wlast(interconnect_axihpm0fpd_M01_AXI_WLAST),
        .M01_AXI_wready(interconnect_axihpm0fpd_M01_AXI_WREADY),
        .M01_AXI_wstrb(interconnect_axihpm0fpd_M01_AXI_WSTRB),
        .M01_AXI_wvalid(interconnect_axihpm0fpd_M01_AXI_WVALID),
        .S00_ACLK(clk_wiz_0_clk_out2),
        .S00_ARESETN(proc_sys_reset_1_interconnect_aresetn),
        .S00_AXI_araddr(ps_e_M_AXI_HPM0_FPD_ARADDR),
        .S00_AXI_arburst(ps_e_M_AXI_HPM0_FPD_ARBURST),
        .S00_AXI_arcache(ps_e_M_AXI_HPM0_FPD_ARCACHE),
        .S00_AXI_arid(ps_e_M_AXI_HPM0_FPD_ARID),
        .S00_AXI_arlen(ps_e_M_AXI_HPM0_FPD_ARLEN),
        .S00_AXI_arlock(ps_e_M_AXI_HPM0_FPD_ARLOCK),
        .S00_AXI_arprot(ps_e_M_AXI_HPM0_FPD_ARPROT),
        .S00_AXI_arqos(ps_e_M_AXI_HPM0_FPD_ARQOS),
        .S00_AXI_arready(ps_e_M_AXI_HPM0_FPD_ARREADY),
        .S00_AXI_arsize(ps_e_M_AXI_HPM0_FPD_ARSIZE),
        .S00_AXI_aruser(ps_e_M_AXI_HPM0_FPD_ARUSER),
        .S00_AXI_arvalid(ps_e_M_AXI_HPM0_FPD_ARVALID),
        .S00_AXI_awaddr(ps_e_M_AXI_HPM0_FPD_AWADDR),
        .S00_AXI_awburst(ps_e_M_AXI_HPM0_FPD_AWBURST),
        .S00_AXI_awcache(ps_e_M_AXI_HPM0_FPD_AWCACHE),
        .S00_AXI_awid(ps_e_M_AXI_HPM0_FPD_AWID),
        .S00_AXI_awlen(ps_e_M_AXI_HPM0_FPD_AWLEN),
        .S00_AXI_awlock(ps_e_M_AXI_HPM0_FPD_AWLOCK),
        .S00_AXI_awprot(ps_e_M_AXI_HPM0_FPD_AWPROT),
        .S00_AXI_awqos(ps_e_M_AXI_HPM0_FPD_AWQOS),
        .S00_AXI_awready(ps_e_M_AXI_HPM0_FPD_AWREADY),
        .S00_AXI_awsize(ps_e_M_AXI_HPM0_FPD_AWSIZE),
        .S00_AXI_awuser(ps_e_M_AXI_HPM0_FPD_AWUSER),
        .S00_AXI_awvalid(ps_e_M_AXI_HPM0_FPD_AWVALID),
        .S00_AXI_bid(ps_e_M_AXI_HPM0_FPD_BID),
        .S00_AXI_bready(ps_e_M_AXI_HPM0_FPD_BREADY),
        .S00_AXI_bresp(ps_e_M_AXI_HPM0_FPD_BRESP),
        .S00_AXI_bvalid(ps_e_M_AXI_HPM0_FPD_BVALID),
        .S00_AXI_rdata(ps_e_M_AXI_HPM0_FPD_RDATA),
        .S00_AXI_rid(ps_e_M_AXI_HPM0_FPD_RID),
        .S00_AXI_rlast(ps_e_M_AXI_HPM0_FPD_RLAST),
        .S00_AXI_rready(ps_e_M_AXI_HPM0_FPD_RREADY),
        .S00_AXI_rresp(ps_e_M_AXI_HPM0_FPD_RRESP),
        .S00_AXI_rvalid(ps_e_M_AXI_HPM0_FPD_RVALID),
        .S00_AXI_wdata(ps_e_M_AXI_HPM0_FPD_WDATA),
        .S00_AXI_wlast(ps_e_M_AXI_HPM0_FPD_WLAST),
        .S00_AXI_wready(ps_e_M_AXI_HPM0_FPD_WREADY),
        .S00_AXI_wstrb(ps_e_M_AXI_HPM0_FPD_WSTRB),
        .S00_AXI_wvalid(ps_e_M_AXI_HPM0_FPD_WVALID));
  (* DPA_AXILITE_MASTER = "fallback" *) 
  vitis_design_interconnect_axilite_0 interconnect_axilite
       (.ACLK(clk_wiz_0_clk_out3),
        .ARESETN(proc_sys_reset_2_interconnect_aresetn),
        .M00_ACLK(clk_wiz_0_clk_out3),
        .M00_ARESETN(proc_sys_reset_2_interconnect_aresetn),
        .M00_AXI_araddr(axi_interconnect_0_M00_AXI_ARADDR),
        .M00_AXI_arready(axi_interconnect_0_M00_AXI_ARREADY),
        .M00_AXI_arvalid(axi_interconnect_0_M00_AXI_ARVALID),
        .M00_AXI_awaddr(axi_interconnect_0_M00_AXI_AWADDR),
        .M00_AXI_awready(axi_interconnect_0_M00_AXI_AWREADY),
        .M00_AXI_awvalid(axi_interconnect_0_M00_AXI_AWVALID),
        .M00_AXI_bready(axi_interconnect_0_M00_AXI_BREADY),
        .M00_AXI_bresp(axi_interconnect_0_M00_AXI_BRESP),
        .M00_AXI_bvalid(axi_interconnect_0_M00_AXI_BVALID),
        .M00_AXI_rdata(axi_interconnect_0_M00_AXI_RDATA),
        .M00_AXI_rready(axi_interconnect_0_M00_AXI_RREADY),
        .M00_AXI_rresp(axi_interconnect_0_M00_AXI_RRESP),
        .M00_AXI_rvalid(axi_interconnect_0_M00_AXI_RVALID),
        .M00_AXI_wdata(axi_interconnect_0_M00_AXI_WDATA),
        .M00_AXI_wready(axi_interconnect_0_M00_AXI_WREADY),
        .M00_AXI_wstrb(axi_interconnect_0_M00_AXI_WSTRB),
        .M00_AXI_wvalid(axi_interconnect_0_M00_AXI_WVALID),
        .M01_ACLK(clk_wiz_0_clk_out4),
        .M01_ARESETN(proc_sys_reset_0_peripheral_aresetn),
        .M01_AXI_araddr(interconnect_axilite_M01_AXI_ARADDR),
        .M01_AXI_arprot(interconnect_axilite_M01_AXI_ARPROT),
        .M01_AXI_arready(interconnect_axilite_M01_AXI_ARREADY),
        .M01_AXI_arvalid(interconnect_axilite_M01_AXI_ARVALID),
        .M01_AXI_awaddr(interconnect_axilite_M01_AXI_AWADDR),
        .M01_AXI_awprot(interconnect_axilite_M01_AXI_AWPROT),
        .M01_AXI_awready(interconnect_axilite_M01_AXI_AWREADY),
        .M01_AXI_awvalid(interconnect_axilite_M01_AXI_AWVALID),
        .M01_AXI_bready(interconnect_axilite_M01_AXI_BREADY),
        .M01_AXI_bresp(interconnect_axilite_M01_AXI_BRESP),
        .M01_AXI_bvalid(interconnect_axilite_M01_AXI_BVALID),
        .M01_AXI_rdata(interconnect_axilite_M01_AXI_RDATA),
        .M01_AXI_rready(interconnect_axilite_M01_AXI_RREADY),
        .M01_AXI_rresp(interconnect_axilite_M01_AXI_RRESP),
        .M01_AXI_rvalid(interconnect_axilite_M01_AXI_RVALID),
        .M01_AXI_wdata(interconnect_axilite_M01_AXI_WDATA),
        .M01_AXI_wready(interconnect_axilite_M01_AXI_WREADY),
        .M01_AXI_wstrb(interconnect_axilite_M01_AXI_WSTRB),
        .M01_AXI_wvalid(interconnect_axilite_M01_AXI_WVALID),
        .M02_ACLK(clk_wiz_0_clk_out4),
        .M02_ARESETN(proc_sys_reset_0_peripheral_aresetn),
        .M02_AXI_araddr(interconnect_axilite_M02_AXI_ARADDR),
        .M02_AXI_arburst(interconnect_axilite_M02_AXI_ARBURST),
        .M02_AXI_arcache(interconnect_axilite_M02_AXI_ARCACHE),
        .M02_AXI_arid(interconnect_axilite_M02_AXI_ARID),
        .M02_AXI_arlen(interconnect_axilite_M02_AXI_ARLEN),
        .M02_AXI_arlock(interconnect_axilite_M02_AXI_ARLOCK),
        .M02_AXI_arprot(interconnect_axilite_M02_AXI_ARPROT),
        .M02_AXI_arqos(interconnect_axilite_M02_AXI_ARQOS),
        .M02_AXI_arready(interconnect_axilite_M02_AXI_ARREADY),
        .M02_AXI_arregion(interconnect_axilite_M02_AXI_ARREGION),
        .M02_AXI_arsize(interconnect_axilite_M02_AXI_ARSIZE),
        .M02_AXI_aruser(interconnect_axilite_M02_AXI_ARUSER),
        .M02_AXI_arvalid(interconnect_axilite_M02_AXI_ARVALID),
        .M02_AXI_awaddr(interconnect_axilite_M02_AXI_AWADDR),
        .M02_AXI_awburst(interconnect_axilite_M02_AXI_AWBURST),
        .M02_AXI_awcache(interconnect_axilite_M02_AXI_AWCACHE),
        .M02_AXI_awid(interconnect_axilite_M02_AXI_AWID),
        .M02_AXI_awlen(interconnect_axilite_M02_AXI_AWLEN),
        .M02_AXI_awlock(interconnect_axilite_M02_AXI_AWLOCK),
        .M02_AXI_awprot(interconnect_axilite_M02_AXI_AWPROT),
        .M02_AXI_awqos(interconnect_axilite_M02_AXI_AWQOS),
        .M02_AXI_awready(interconnect_axilite_M02_AXI_AWREADY),
        .M02_AXI_awregion(interconnect_axilite_M02_AXI_AWREGION),
        .M02_AXI_awsize(interconnect_axilite_M02_AXI_AWSIZE),
        .M02_AXI_awuser(interconnect_axilite_M02_AXI_AWUSER),
        .M02_AXI_awvalid(interconnect_axilite_M02_AXI_AWVALID),
        .M02_AXI_bid(interconnect_axilite_M02_AXI_BID),
        .M02_AXI_bready(interconnect_axilite_M02_AXI_BREADY),
        .M02_AXI_bresp(interconnect_axilite_M02_AXI_BRESP),
        .M02_AXI_bvalid(interconnect_axilite_M02_AXI_BVALID),
        .M02_AXI_rdata(interconnect_axilite_M02_AXI_RDATA),
        .M02_AXI_rid(interconnect_axilite_M02_AXI_RID),
        .M02_AXI_rlast(interconnect_axilite_M02_AXI_RLAST),
        .M02_AXI_rready(interconnect_axilite_M02_AXI_RREADY),
        .M02_AXI_rresp(interconnect_axilite_M02_AXI_RRESP),
        .M02_AXI_rvalid(interconnect_axilite_M02_AXI_RVALID),
        .M02_AXI_wdata(interconnect_axilite_M02_AXI_WDATA),
        .M02_AXI_wlast(interconnect_axilite_M02_AXI_WLAST),
        .M02_AXI_wready(interconnect_axilite_M02_AXI_WREADY),
        .M02_AXI_wstrb(interconnect_axilite_M02_AXI_WSTRB),
        .M02_AXI_wvalid(interconnect_axilite_M02_AXI_WVALID),
        .S00_ACLK(clk_wiz_0_clk_out3),
        .S00_ARESETN(proc_sys_reset_2_interconnect_aresetn),
        .S00_AXI_araddr(ps_e_M_AXI_HPM0_LPD_ARADDR),
        .S00_AXI_arburst(ps_e_M_AXI_HPM0_LPD_ARBURST),
        .S00_AXI_arcache(ps_e_M_AXI_HPM0_LPD_ARCACHE),
        .S00_AXI_arid(ps_e_M_AXI_HPM0_LPD_ARID),
        .S00_AXI_arlen(ps_e_M_AXI_HPM0_LPD_ARLEN),
        .S00_AXI_arlock(ps_e_M_AXI_HPM0_LPD_ARLOCK),
        .S00_AXI_arprot(ps_e_M_AXI_HPM0_LPD_ARPROT),
        .S00_AXI_arqos(ps_e_M_AXI_HPM0_LPD_ARQOS),
        .S00_AXI_arready(ps_e_M_AXI_HPM0_LPD_ARREADY),
        .S00_AXI_arsize(ps_e_M_AXI_HPM0_LPD_ARSIZE),
        .S00_AXI_aruser(ps_e_M_AXI_HPM0_LPD_ARUSER),
        .S00_AXI_arvalid(ps_e_M_AXI_HPM0_LPD_ARVALID),
        .S00_AXI_awaddr(ps_e_M_AXI_HPM0_LPD_AWADDR),
        .S00_AXI_awburst(ps_e_M_AXI_HPM0_LPD_AWBURST),
        .S00_AXI_awcache(ps_e_M_AXI_HPM0_LPD_AWCACHE),
        .S00_AXI_awid(ps_e_M_AXI_HPM0_LPD_AWID),
        .S00_AXI_awlen(ps_e_M_AXI_HPM0_LPD_AWLEN),
        .S00_AXI_awlock(ps_e_M_AXI_HPM0_LPD_AWLOCK),
        .S00_AXI_awprot(ps_e_M_AXI_HPM0_LPD_AWPROT),
        .S00_AXI_awqos(ps_e_M_AXI_HPM0_LPD_AWQOS),
        .S00_AXI_awready(ps_e_M_AXI_HPM0_LPD_AWREADY),
        .S00_AXI_awsize(ps_e_M_AXI_HPM0_LPD_AWSIZE),
        .S00_AXI_awuser(ps_e_M_AXI_HPM0_LPD_AWUSER),
        .S00_AXI_awvalid(ps_e_M_AXI_HPM0_LPD_AWVALID),
        .S00_AXI_bid(ps_e_M_AXI_HPM0_LPD_BID),
        .S00_AXI_bready(ps_e_M_AXI_HPM0_LPD_BREADY),
        .S00_AXI_bresp(ps_e_M_AXI_HPM0_LPD_BRESP),
        .S00_AXI_bvalid(ps_e_M_AXI_HPM0_LPD_BVALID),
        .S00_AXI_rdata(ps_e_M_AXI_HPM0_LPD_RDATA),
        .S00_AXI_rid(ps_e_M_AXI_HPM0_LPD_RID),
        .S00_AXI_rlast(ps_e_M_AXI_HPM0_LPD_RLAST),
        .S00_AXI_rready(ps_e_M_AXI_HPM0_LPD_RREADY),
        .S00_AXI_rresp(ps_e_M_AXI_HPM0_LPD_RRESP),
        .S00_AXI_rvalid(ps_e_M_AXI_HPM0_LPD_RVALID),
        .S00_AXI_wdata(ps_e_M_AXI_HPM0_LPD_WDATA),
        .S00_AXI_wlast(ps_e_M_AXI_HPM0_LPD_WLAST),
        .S00_AXI_wready(ps_e_M_AXI_HPM0_LPD_WREADY),
        .S00_AXI_wstrb(ps_e_M_AXI_HPM0_LPD_WSTRB),
        .S00_AXI_wvalid(ps_e_M_AXI_HPM0_LPD_WVALID));
  vitis_design_irq_const_tieoff_0 irq_const_tieoff
       (.dout(irq_const_tieoff_dout));
  vitis_design_proc_sys_reset_0_0 proc_sys_reset_0
       (.aux_reset_in(1'b1),
        .dcm_locked(clk_wiz_0_locked),
        .ext_reset_in(Net),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(proc_sys_reset_0_peripheral_aresetn),
        .slowest_sync_clk(clk_wiz_0_clk_out4));
  vitis_design_proc_sys_reset_1_0 proc_sys_reset_1
       (.aux_reset_in(1'b1),
        .dcm_locked(clk_wiz_0_locked),
        .ext_reset_in(Net),
        .interconnect_aresetn(proc_sys_reset_1_interconnect_aresetn),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(proc_sys_reset_1_peripheral_aresetn),
        .slowest_sync_clk(clk_wiz_0_clk_out2));
  vitis_design_proc_sys_reset_2_0 proc_sys_reset_2
       (.aux_reset_in(1'b1),
        .dcm_locked(clk_wiz_0_locked),
        .ext_reset_in(Net),
        .interconnect_aresetn(proc_sys_reset_2_interconnect_aresetn),
        .mb_debug_sys_rst(1'b0),
        .slowest_sync_clk(clk_wiz_0_clk_out3));
  vitis_design_proc_sys_reset_3_0 proc_sys_reset_3
       (.aux_reset_in(1'b1),
        .dcm_locked(clk_wiz_0_locked),
        .ext_reset_in(Net),
        .mb_debug_sys_rst(1'b0),
        .slowest_sync_clk(clk_wiz_0_clk_out5));
  vitis_design_proc_sys_reset_4_0 proc_sys_reset_4
       (.aux_reset_in(1'b1),
        .dcm_locked(clk_wiz_0_locked),
        .ext_reset_in(Net),
        .mb_debug_sys_rst(1'b0),
        .slowest_sync_clk(clk_wiz_0_clk_out6));
  vitis_design_proc_sys_reset_5_0 proc_sys_reset_5
       (.aux_reset_in(1'b1),
        .dcm_locked(clk_wiz_0_locked),
        .ext_reset_in(Net),
        .mb_debug_sys_rst(1'b0),
        .slowest_sync_clk(clk_wiz_0_clk_out7));
  vitis_design_proc_sys_reset_6_0 proc_sys_reset_6
       (.aux_reset_in(1'b1),
        .dcm_locked(clk_wiz_0_locked),
        .ext_reset_in(Net),
        .mb_debug_sys_rst(1'b0),
        .slowest_sync_clk(clk_wiz_0_clk_out8));
  vitis_design_ps_e_0 ps_e
       (.maxigp0_araddr(ps_e_M_AXI_HPM0_FPD_ARADDR),
        .maxigp0_arburst(ps_e_M_AXI_HPM0_FPD_ARBURST),
        .maxigp0_arcache(ps_e_M_AXI_HPM0_FPD_ARCACHE),
        .maxigp0_arid(ps_e_M_AXI_HPM0_FPD_ARID),
        .maxigp0_arlen(ps_e_M_AXI_HPM0_FPD_ARLEN),
        .maxigp0_arlock(ps_e_M_AXI_HPM0_FPD_ARLOCK),
        .maxigp0_arprot(ps_e_M_AXI_HPM0_FPD_ARPROT),
        .maxigp0_arqos(ps_e_M_AXI_HPM0_FPD_ARQOS),
        .maxigp0_arready(ps_e_M_AXI_HPM0_FPD_ARREADY),
        .maxigp0_arsize(ps_e_M_AXI_HPM0_FPD_ARSIZE),
        .maxigp0_aruser(ps_e_M_AXI_HPM0_FPD_ARUSER),
        .maxigp0_arvalid(ps_e_M_AXI_HPM0_FPD_ARVALID),
        .maxigp0_awaddr(ps_e_M_AXI_HPM0_FPD_AWADDR),
        .maxigp0_awburst(ps_e_M_AXI_HPM0_FPD_AWBURST),
        .maxigp0_awcache(ps_e_M_AXI_HPM0_FPD_AWCACHE),
        .maxigp0_awid(ps_e_M_AXI_HPM0_FPD_AWID),
        .maxigp0_awlen(ps_e_M_AXI_HPM0_FPD_AWLEN),
        .maxigp0_awlock(ps_e_M_AXI_HPM0_FPD_AWLOCK),
        .maxigp0_awprot(ps_e_M_AXI_HPM0_FPD_AWPROT),
        .maxigp0_awqos(ps_e_M_AXI_HPM0_FPD_AWQOS),
        .maxigp0_awready(ps_e_M_AXI_HPM0_FPD_AWREADY),
        .maxigp0_awsize(ps_e_M_AXI_HPM0_FPD_AWSIZE),
        .maxigp0_awuser(ps_e_M_AXI_HPM0_FPD_AWUSER),
        .maxigp0_awvalid(ps_e_M_AXI_HPM0_FPD_AWVALID),
        .maxigp0_bid(ps_e_M_AXI_HPM0_FPD_BID),
        .maxigp0_bready(ps_e_M_AXI_HPM0_FPD_BREADY),
        .maxigp0_bresp(ps_e_M_AXI_HPM0_FPD_BRESP),
        .maxigp0_bvalid(ps_e_M_AXI_HPM0_FPD_BVALID),
        .maxigp0_rdata(ps_e_M_AXI_HPM0_FPD_RDATA),
        .maxigp0_rid(ps_e_M_AXI_HPM0_FPD_RID),
        .maxigp0_rlast(ps_e_M_AXI_HPM0_FPD_RLAST),
        .maxigp0_rready(ps_e_M_AXI_HPM0_FPD_RREADY),
        .maxigp0_rresp(ps_e_M_AXI_HPM0_FPD_RRESP),
        .maxigp0_rvalid(ps_e_M_AXI_HPM0_FPD_RVALID),
        .maxigp0_wdata(ps_e_M_AXI_HPM0_FPD_WDATA),
        .maxigp0_wlast(ps_e_M_AXI_HPM0_FPD_WLAST),
        .maxigp0_wready(ps_e_M_AXI_HPM0_FPD_WREADY),
        .maxigp0_wstrb(ps_e_M_AXI_HPM0_FPD_WSTRB),
        .maxigp0_wvalid(ps_e_M_AXI_HPM0_FPD_WVALID),
        .maxigp2_araddr(ps_e_M_AXI_HPM0_LPD_ARADDR),
        .maxigp2_arburst(ps_e_M_AXI_HPM0_LPD_ARBURST),
        .maxigp2_arcache(ps_e_M_AXI_HPM0_LPD_ARCACHE),
        .maxigp2_arid(ps_e_M_AXI_HPM0_LPD_ARID),
        .maxigp2_arlen(ps_e_M_AXI_HPM0_LPD_ARLEN),
        .maxigp2_arlock(ps_e_M_AXI_HPM0_LPD_ARLOCK),
        .maxigp2_arprot(ps_e_M_AXI_HPM0_LPD_ARPROT),
        .maxigp2_arqos(ps_e_M_AXI_HPM0_LPD_ARQOS),
        .maxigp2_arready(ps_e_M_AXI_HPM0_LPD_ARREADY),
        .maxigp2_arsize(ps_e_M_AXI_HPM0_LPD_ARSIZE),
        .maxigp2_aruser(ps_e_M_AXI_HPM0_LPD_ARUSER),
        .maxigp2_arvalid(ps_e_M_AXI_HPM0_LPD_ARVALID),
        .maxigp2_awaddr(ps_e_M_AXI_HPM0_LPD_AWADDR),
        .maxigp2_awburst(ps_e_M_AXI_HPM0_LPD_AWBURST),
        .maxigp2_awcache(ps_e_M_AXI_HPM0_LPD_AWCACHE),
        .maxigp2_awid(ps_e_M_AXI_HPM0_LPD_AWID),
        .maxigp2_awlen(ps_e_M_AXI_HPM0_LPD_AWLEN),
        .maxigp2_awlock(ps_e_M_AXI_HPM0_LPD_AWLOCK),
        .maxigp2_awprot(ps_e_M_AXI_HPM0_LPD_AWPROT),
        .maxigp2_awqos(ps_e_M_AXI_HPM0_LPD_AWQOS),
        .maxigp2_awready(ps_e_M_AXI_HPM0_LPD_AWREADY),
        .maxigp2_awsize(ps_e_M_AXI_HPM0_LPD_AWSIZE),
        .maxigp2_awuser(ps_e_M_AXI_HPM0_LPD_AWUSER),
        .maxigp2_awvalid(ps_e_M_AXI_HPM0_LPD_AWVALID),
        .maxigp2_bid(ps_e_M_AXI_HPM0_LPD_BID),
        .maxigp2_bready(ps_e_M_AXI_HPM0_LPD_BREADY),
        .maxigp2_bresp(ps_e_M_AXI_HPM0_LPD_BRESP),
        .maxigp2_bvalid(ps_e_M_AXI_HPM0_LPD_BVALID),
        .maxigp2_rdata(ps_e_M_AXI_HPM0_LPD_RDATA),
        .maxigp2_rid(ps_e_M_AXI_HPM0_LPD_RID),
        .maxigp2_rlast(ps_e_M_AXI_HPM0_LPD_RLAST),
        .maxigp2_rready(ps_e_M_AXI_HPM0_LPD_RREADY),
        .maxigp2_rresp(ps_e_M_AXI_HPM0_LPD_RRESP),
        .maxigp2_rvalid(ps_e_M_AXI_HPM0_LPD_RVALID),
        .maxigp2_wdata(ps_e_M_AXI_HPM0_LPD_WDATA),
        .maxigp2_wlast(ps_e_M_AXI_HPM0_LPD_WLAST),
        .maxigp2_wready(ps_e_M_AXI_HPM0_LPD_WREADY),
        .maxigp2_wstrb(ps_e_M_AXI_HPM0_LPD_WSTRB),
        .maxigp2_wvalid(ps_e_M_AXI_HPM0_LPD_WVALID),
        .maxihpm0_fpd_aclk(clk_wiz_0_clk_out2),
        .maxihpm0_lpd_aclk(clk_wiz_0_clk_out3),
        .pl_clk0(ps_e_pl_clk0),
        .pl_ps_irq0(axi_intc_0_irq),
        .pl_resetn0(Net),
        .saxi_lpd_aclk(clk_wiz_0_clk_out2),
        .saxigp2_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp2_arburst({1'b0,1'b1}),
        .saxigp2_arcache({1'b0,1'b0,1'b1,1'b1}),
        .saxigp2_arid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp2_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp2_arlock(1'b0),
        .saxigp2_arprot({1'b0,1'b0,1'b0}),
        .saxigp2_arqos({1'b0,1'b0,1'b0,1'b0}),
        .saxigp2_arsize({1'b1,1'b0,1'b0}),
        .saxigp2_aruser(1'b0),
        .saxigp2_arvalid(1'b0),
        .saxigp2_awaddr(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWADDR[48:0]),
        .saxigp2_awburst(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWBURST),
        .saxigp2_awcache(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWCACHE),
        .saxigp2_awid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp2_awlen(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWLEN),
        .saxigp2_awlock(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWLOCK),
        .saxigp2_awprot(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWPROT),
        .saxigp2_awqos(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWQOS),
        .saxigp2_awready(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWREADY),
        .saxigp2_awsize(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWSIZE),
        .saxigp2_awuser(1'b0),
        .saxigp2_awvalid(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_AWVALID),
        .saxigp2_bready(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_BREADY),
        .saxigp2_bresp(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_BRESP),
        .saxigp2_bvalid(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_BVALID),
        .saxigp2_rready(1'b0),
        .saxigp2_wdata(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WDATA),
        .saxigp2_wlast(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WLAST),
        .saxigp2_wready(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WREADY),
        .saxigp2_wstrb(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WSTRB),
        .saxigp2_wvalid(axi_ic_ps_e_S_AXI_HP0_FPD_M00_AXI_WVALID),
        .saxigp5_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,axi_interconnect_1_M00_AXI_ARADDR}),
        .saxigp5_arburst(axi_interconnect_1_M00_AXI_ARBURST),
        .saxigp5_arcache(axi_interconnect_1_M00_AXI_ARCACHE),
        .saxigp5_arid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp5_arlen(axi_interconnect_1_M00_AXI_ARLEN),
        .saxigp5_arlock(axi_interconnect_1_M00_AXI_ARLOCK),
        .saxigp5_arprot(axi_interconnect_1_M00_AXI_ARPROT),
        .saxigp5_arqos(axi_interconnect_1_M00_AXI_ARQOS),
        .saxigp5_arready(axi_interconnect_1_M00_AXI_ARREADY),
        .saxigp5_arsize(axi_interconnect_1_M00_AXI_ARSIZE),
        .saxigp5_aruser(1'b0),
        .saxigp5_arvalid(axi_interconnect_1_M00_AXI_ARVALID),
        .saxigp5_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,axi_interconnect_1_M00_AXI_AWADDR}),
        .saxigp5_awburst(axi_interconnect_1_M00_AXI_AWBURST),
        .saxigp5_awcache(axi_interconnect_1_M00_AXI_AWCACHE),
        .saxigp5_awid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp5_awlen(axi_interconnect_1_M00_AXI_AWLEN),
        .saxigp5_awlock(axi_interconnect_1_M00_AXI_AWLOCK),
        .saxigp5_awprot(axi_interconnect_1_M00_AXI_AWPROT),
        .saxigp5_awqos(axi_interconnect_1_M00_AXI_AWQOS),
        .saxigp5_awready(axi_interconnect_1_M00_AXI_AWREADY),
        .saxigp5_awsize(axi_interconnect_1_M00_AXI_AWSIZE),
        .saxigp5_awuser(1'b0),
        .saxigp5_awvalid(axi_interconnect_1_M00_AXI_AWVALID),
        .saxigp5_bready(axi_interconnect_1_M00_AXI_BREADY),
        .saxigp5_bresp(axi_interconnect_1_M00_AXI_BRESP),
        .saxigp5_bvalid(axi_interconnect_1_M00_AXI_BVALID),
        .saxigp5_rdata(axi_interconnect_1_M00_AXI_RDATA),
        .saxigp5_rlast(axi_interconnect_1_M00_AXI_RLAST),
        .saxigp5_rready(axi_interconnect_1_M00_AXI_RREADY),
        .saxigp5_rresp(axi_interconnect_1_M00_AXI_RRESP),
        .saxigp5_rvalid(axi_interconnect_1_M00_AXI_RVALID),
        .saxigp5_wdata(axi_interconnect_1_M00_AXI_WDATA),
        .saxigp5_wlast(axi_interconnect_1_M00_AXI_WLAST),
        .saxigp5_wready(axi_interconnect_1_M00_AXI_WREADY),
        .saxigp5_wstrb(axi_interconnect_1_M00_AXI_WSTRB),
        .saxigp5_wvalid(axi_interconnect_1_M00_AXI_WVALID),
        .saxigp6_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,axi_interconnect_0_M00_AXI1_ARADDR}),
        .saxigp6_arburst(axi_interconnect_0_M00_AXI1_ARBURST),
        .saxigp6_arcache(axi_interconnect_0_M00_AXI1_ARCACHE),
        .saxigp6_arid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp6_arlen(axi_interconnect_0_M00_AXI1_ARLEN),
        .saxigp6_arlock(axi_interconnect_0_M00_AXI1_ARLOCK),
        .saxigp6_arprot(axi_interconnect_0_M00_AXI1_ARPROT),
        .saxigp6_arqos(axi_interconnect_0_M00_AXI1_ARQOS),
        .saxigp6_arready(axi_interconnect_0_M00_AXI1_ARREADY),
        .saxigp6_arsize(axi_interconnect_0_M00_AXI1_ARSIZE),
        .saxigp6_aruser(1'b0),
        .saxigp6_arvalid(axi_interconnect_0_M00_AXI1_ARVALID),
        .saxigp6_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,axi_interconnect_0_M00_AXI1_AWADDR}),
        .saxigp6_awburst(axi_interconnect_0_M00_AXI1_AWBURST),
        .saxigp6_awcache(axi_interconnect_0_M00_AXI1_AWCACHE),
        .saxigp6_awid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp6_awlen(axi_interconnect_0_M00_AXI1_AWLEN),
        .saxigp6_awlock(axi_interconnect_0_M00_AXI1_AWLOCK),
        .saxigp6_awprot(axi_interconnect_0_M00_AXI1_AWPROT),
        .saxigp6_awqos(axi_interconnect_0_M00_AXI1_AWQOS),
        .saxigp6_awready(axi_interconnect_0_M00_AXI1_AWREADY),
        .saxigp6_awsize(axi_interconnect_0_M00_AXI1_AWSIZE),
        .saxigp6_awuser(1'b0),
        .saxigp6_awvalid(axi_interconnect_0_M00_AXI1_AWVALID),
        .saxigp6_bready(axi_interconnect_0_M00_AXI1_BREADY),
        .saxigp6_bresp(axi_interconnect_0_M00_AXI1_BRESP),
        .saxigp6_bvalid(axi_interconnect_0_M00_AXI1_BVALID),
        .saxigp6_rdata(axi_interconnect_0_M00_AXI1_RDATA),
        .saxigp6_rlast(axi_interconnect_0_M00_AXI1_RLAST),
        .saxigp6_rready(axi_interconnect_0_M00_AXI1_RREADY),
        .saxigp6_rresp(axi_interconnect_0_M00_AXI1_RRESP),
        .saxigp6_rvalid(axi_interconnect_0_M00_AXI1_RVALID),
        .saxigp6_wdata(axi_interconnect_0_M00_AXI1_WDATA),
        .saxigp6_wlast(axi_interconnect_0_M00_AXI1_WLAST),
        .saxigp6_wready(axi_interconnect_0_M00_AXI1_WREADY),
        .saxigp6_wstrb(axi_interconnect_0_M00_AXI1_WSTRB),
        .saxigp6_wvalid(axi_interconnect_0_M00_AXI1_WVALID),
        .saxihp0_fpd_aclk(clk_wiz_0_clk_out4),
        .saxihp3_fpd_aclk(clk_wiz_0_clk_out2));
  vitis_design_sci vitis_design_sci_inst
       ();
endmodule

module vitis_design_axi_ic_ps_e_S_AXI_HP0_FPD_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_awaddr,
    M00_AXI_awburst,
    M00_AXI_awcache,
    M00_AXI_awlen,
    M00_AXI_awlock,
    M00_AXI_awprot,
    M00_AXI_awqos,
    M00_AXI_awready,
    M00_AXI_awsize,
    M00_AXI_awvalid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_wdata,
    M00_AXI_wlast,
    M00_AXI_wready,
    M00_AXI_wstrb,
    M00_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arid,
    S00_AXI_arlen,
    S00_AXI_arsize,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awid,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awregion,
    S00_AXI_awsize,
    S00_AXI_awvalid,
    S00_AXI_bid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rready,
    S00_AXI_wdata,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid);
  input ACLK;
  input ARESETN;
  input M00_ACLK;
  input M00_ARESETN;
  output [63:0]M00_AXI_awaddr;
  output [1:0]M00_AXI_awburst;
  output [3:0]M00_AXI_awcache;
  output [7:0]M00_AXI_awlen;
  output [0:0]M00_AXI_awlock;
  output [2:0]M00_AXI_awprot;
  output [3:0]M00_AXI_awqos;
  input M00_AXI_awready;
  output [2:0]M00_AXI_awsize;
  output M00_AXI_awvalid;
  output M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input M00_AXI_bvalid;
  output [127:0]M00_AXI_wdata;
  output M00_AXI_wlast;
  input M00_AXI_wready;
  output [15:0]M00_AXI_wstrb;
  output M00_AXI_wvalid;
  input S00_ACLK;
  input S00_ARESETN;
  input [63:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [0:0]S00_AXI_arid;
  input [7:0]S00_AXI_arlen;
  input [2:0]S00_AXI_arsize;
  input S00_AXI_arvalid;
  input [63:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [0:0]S00_AXI_awid;
  input [7:0]S00_AXI_awlen;
  input [1:0]S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [3:0]S00_AXI_awregion;
  input [2:0]S00_AXI_awsize;
  input S00_AXI_awvalid;
  output [0:0]S00_AXI_bid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  input S00_AXI_rready;
  input [63:0]S00_AXI_wdata;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [7:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;

  wire M00_ACLK;
  wire M00_ARESETN;
  wire [63:0]M00_AXI_awaddr;
  wire [1:0]M00_AXI_awburst;
  wire [3:0]M00_AXI_awcache;
  wire [7:0]M00_AXI_awlen;
  wire [0:0]M00_AXI_awlock;
  wire [2:0]M00_AXI_awprot;
  wire [3:0]M00_AXI_awqos;
  wire M00_AXI_awready;
  wire [2:0]M00_AXI_awsize;
  wire M00_AXI_awvalid;
  wire M00_AXI_bready;
  wire [1:0]M00_AXI_bresp;
  wire M00_AXI_bvalid;
  wire [127:0]M00_AXI_wdata;
  wire M00_AXI_wlast;
  wire M00_AXI_wready;
  wire [15:0]M00_AXI_wstrb;
  wire M00_AXI_wvalid;
  wire S00_ACLK;
  wire S00_ARESETN;
  wire [63:0]S00_AXI_araddr;
  wire [1:0]S00_AXI_arburst;
  wire [0:0]S00_AXI_arid;
  wire [7:0]S00_AXI_arlen;
  wire [2:0]S00_AXI_arsize;
  wire S00_AXI_arvalid;
  wire [63:0]S00_AXI_awaddr;
  wire [1:0]S00_AXI_awburst;
  wire [3:0]S00_AXI_awcache;
  wire [0:0]S00_AXI_awid;
  wire [7:0]S00_AXI_awlen;
  wire [1:0]S00_AXI_awlock;
  wire [2:0]S00_AXI_awprot;
  wire [3:0]S00_AXI_awqos;
  wire S00_AXI_awready;
  wire [3:0]S00_AXI_awregion;
  wire [2:0]S00_AXI_awsize;
  wire S00_AXI_awvalid;
  wire [0:0]S00_AXI_bid;
  wire S00_AXI_bready;
  wire [1:0]S00_AXI_bresp;
  wire S00_AXI_bvalid;
  wire S00_AXI_rready;
  wire [63:0]S00_AXI_wdata;
  wire S00_AXI_wlast;
  wire S00_AXI_wready;
  wire [7:0]S00_AXI_wstrb;
  wire S00_AXI_wvalid;

  s00_couplers_imp_115V24D s00_couplers
       (.M_ACLK(M00_ACLK),
        .M_ARESETN(M00_ARESETN),
        .M_AXI_awaddr(M00_AXI_awaddr),
        .M_AXI_awburst(M00_AXI_awburst),
        .M_AXI_awcache(M00_AXI_awcache),
        .M_AXI_awlen(M00_AXI_awlen),
        .M_AXI_awlock(M00_AXI_awlock),
        .M_AXI_awprot(M00_AXI_awprot),
        .M_AXI_awqos(M00_AXI_awqos),
        .M_AXI_awready(M00_AXI_awready),
        .M_AXI_awsize(M00_AXI_awsize),
        .M_AXI_awvalid(M00_AXI_awvalid),
        .M_AXI_bready(M00_AXI_bready),
        .M_AXI_bresp(M00_AXI_bresp),
        .M_AXI_bvalid(M00_AXI_bvalid),
        .M_AXI_wdata(M00_AXI_wdata),
        .M_AXI_wlast(M00_AXI_wlast),
        .M_AXI_wready(M00_AXI_wready),
        .M_AXI_wstrb(M00_AXI_wstrb),
        .M_AXI_wvalid(M00_AXI_wvalid),
        .S_ACLK(S00_ACLK),
        .S_ARESETN(S00_ARESETN),
        .S_AXI_araddr(S00_AXI_araddr),
        .S_AXI_arburst(S00_AXI_arburst),
        .S_AXI_arid(S00_AXI_arid),
        .S_AXI_arlen(S00_AXI_arlen),
        .S_AXI_arsize(S00_AXI_arsize),
        .S_AXI_arvalid(S00_AXI_arvalid),
        .S_AXI_awaddr(S00_AXI_awaddr),
        .S_AXI_awburst(S00_AXI_awburst),
        .S_AXI_awcache(S00_AXI_awcache),
        .S_AXI_awid(S00_AXI_awid),
        .S_AXI_awlen(S00_AXI_awlen),
        .S_AXI_awlock(S00_AXI_awlock),
        .S_AXI_awprot(S00_AXI_awprot),
        .S_AXI_awqos(S00_AXI_awqos),
        .S_AXI_awready(S00_AXI_awready),
        .S_AXI_awregion(S00_AXI_awregion),
        .S_AXI_awsize(S00_AXI_awsize),
        .S_AXI_awvalid(S00_AXI_awvalid),
        .S_AXI_bid(S00_AXI_bid),
        .S_AXI_bready(S00_AXI_bready),
        .S_AXI_bresp(S00_AXI_bresp),
        .S_AXI_bvalid(S00_AXI_bvalid),
        .S_AXI_rready(S00_AXI_rready),
        .S_AXI_wdata(S00_AXI_wdata),
        .S_AXI_wlast(S00_AXI_wlast),
        .S_AXI_wready(S00_AXI_wready),
        .S_AXI_wstrb(S00_AXI_wstrb),
        .S_AXI_wvalid(S00_AXI_wvalid));
endmodule

module vitis_design_axi_interconnect_lpd_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_araddr,
    M00_AXI_arburst,
    M00_AXI_arcache,
    M00_AXI_arlen,
    M00_AXI_arlock,
    M00_AXI_arprot,
    M00_AXI_arqos,
    M00_AXI_arready,
    M00_AXI_arsize,
    M00_AXI_arvalid,
    M00_AXI_awaddr,
    M00_AXI_awburst,
    M00_AXI_awcache,
    M00_AXI_awlen,
    M00_AXI_awlock,
    M00_AXI_awprot,
    M00_AXI_awqos,
    M00_AXI_awready,
    M00_AXI_awsize,
    M00_AXI_awvalid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_rdata,
    M00_AXI_rlast,
    M00_AXI_rready,
    M00_AXI_rresp,
    M00_AXI_rvalid,
    M00_AXI_wdata,
    M00_AXI_wlast,
    M00_AXI_wready,
    M00_AXI_wstrb,
    M00_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arlen,
    S00_AXI_arlock,
    S00_AXI_arprot,
    S00_AXI_arqos,
    S00_AXI_arready,
    S00_AXI_arsize,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awsize,
    S00_AXI_awvalid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rdata,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid,
    S00_AXI_wdata,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid);
  input ACLK;
  input ARESETN;
  input M00_ACLK;
  input M00_ARESETN;
  output [31:0]M00_AXI_araddr;
  output [1:0]M00_AXI_arburst;
  output [3:0]M00_AXI_arcache;
  output [7:0]M00_AXI_arlen;
  output M00_AXI_arlock;
  output [2:0]M00_AXI_arprot;
  output [3:0]M00_AXI_arqos;
  input M00_AXI_arready;
  output [2:0]M00_AXI_arsize;
  output M00_AXI_arvalid;
  output [31:0]M00_AXI_awaddr;
  output [1:0]M00_AXI_awburst;
  output [3:0]M00_AXI_awcache;
  output [7:0]M00_AXI_awlen;
  output M00_AXI_awlock;
  output [2:0]M00_AXI_awprot;
  output [3:0]M00_AXI_awqos;
  input M00_AXI_awready;
  output [2:0]M00_AXI_awsize;
  output M00_AXI_awvalid;
  output M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input M00_AXI_bvalid;
  input [31:0]M00_AXI_rdata;
  input M00_AXI_rlast;
  output M00_AXI_rready;
  input [1:0]M00_AXI_rresp;
  input M00_AXI_rvalid;
  output [31:0]M00_AXI_wdata;
  output M00_AXI_wlast;
  input M00_AXI_wready;
  output [3:0]M00_AXI_wstrb;
  output M00_AXI_wvalid;
  input S00_ACLK;
  input S00_ARESETN;
  input [31:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [7:0]S00_AXI_arlen;
  input S00_AXI_arlock;
  input [2:0]S00_AXI_arprot;
  input [3:0]S00_AXI_arqos;
  output S00_AXI_arready;
  input [2:0]S00_AXI_arsize;
  input S00_AXI_arvalid;
  input [31:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [7:0]S00_AXI_awlen;
  input S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [2:0]S00_AXI_awsize;
  input S00_AXI_awvalid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  output [31:0]S00_AXI_rdata;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;
  input [31:0]S00_AXI_wdata;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [3:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;

  wire M00_ACLK;
  wire M00_ARESETN;
  wire [31:0]M00_AXI_araddr;
  wire [1:0]M00_AXI_arburst;
  wire [3:0]M00_AXI_arcache;
  wire [7:0]M00_AXI_arlen;
  wire M00_AXI_arlock;
  wire [2:0]M00_AXI_arprot;
  wire [3:0]M00_AXI_arqos;
  wire M00_AXI_arready;
  wire [2:0]M00_AXI_arsize;
  wire M00_AXI_arvalid;
  wire [31:0]M00_AXI_awaddr;
  wire [1:0]M00_AXI_awburst;
  wire [3:0]M00_AXI_awcache;
  wire [7:0]M00_AXI_awlen;
  wire M00_AXI_awlock;
  wire [2:0]M00_AXI_awprot;
  wire [3:0]M00_AXI_awqos;
  wire M00_AXI_awready;
  wire [2:0]M00_AXI_awsize;
  wire M00_AXI_awvalid;
  wire M00_AXI_bready;
  wire [1:0]M00_AXI_bresp;
  wire M00_AXI_bvalid;
  wire [31:0]M00_AXI_rdata;
  wire M00_AXI_rlast;
  wire M00_AXI_rready;
  wire [1:0]M00_AXI_rresp;
  wire M00_AXI_rvalid;
  wire [31:0]M00_AXI_wdata;
  wire M00_AXI_wlast;
  wire M00_AXI_wready;
  wire [3:0]M00_AXI_wstrb;
  wire M00_AXI_wvalid;
  wire S00_ACLK;
  wire S00_ARESETN;
  wire [31:0]S00_AXI_araddr;
  wire [1:0]S00_AXI_arburst;
  wire [3:0]S00_AXI_arcache;
  wire [7:0]S00_AXI_arlen;
  wire S00_AXI_arlock;
  wire [2:0]S00_AXI_arprot;
  wire [3:0]S00_AXI_arqos;
  wire S00_AXI_arready;
  wire [2:0]S00_AXI_arsize;
  wire S00_AXI_arvalid;
  wire [31:0]S00_AXI_awaddr;
  wire [1:0]S00_AXI_awburst;
  wire [3:0]S00_AXI_awcache;
  wire [7:0]S00_AXI_awlen;
  wire S00_AXI_awlock;
  wire [2:0]S00_AXI_awprot;
  wire [3:0]S00_AXI_awqos;
  wire S00_AXI_awready;
  wire [2:0]S00_AXI_awsize;
  wire S00_AXI_awvalid;
  wire S00_AXI_bready;
  wire [1:0]S00_AXI_bresp;
  wire S00_AXI_bvalid;
  wire [31:0]S00_AXI_rdata;
  wire S00_AXI_rlast;
  wire S00_AXI_rready;
  wire [1:0]S00_AXI_rresp;
  wire S00_AXI_rvalid;
  wire [31:0]S00_AXI_wdata;
  wire S00_AXI_wlast;
  wire S00_AXI_wready;
  wire [3:0]S00_AXI_wstrb;
  wire S00_AXI_wvalid;

  s00_couplers_imp_JZIEG0 s00_couplers
       (.M_ACLK(M00_ACLK),
        .M_ARESETN(M00_ARESETN),
        .M_AXI_araddr(M00_AXI_araddr),
        .M_AXI_arburst(M00_AXI_arburst),
        .M_AXI_arcache(M00_AXI_arcache),
        .M_AXI_arlen(M00_AXI_arlen),
        .M_AXI_arlock(M00_AXI_arlock),
        .M_AXI_arprot(M00_AXI_arprot),
        .M_AXI_arqos(M00_AXI_arqos),
        .M_AXI_arready(M00_AXI_arready),
        .M_AXI_arsize(M00_AXI_arsize),
        .M_AXI_arvalid(M00_AXI_arvalid),
        .M_AXI_awaddr(M00_AXI_awaddr),
        .M_AXI_awburst(M00_AXI_awburst),
        .M_AXI_awcache(M00_AXI_awcache),
        .M_AXI_awlen(M00_AXI_awlen),
        .M_AXI_awlock(M00_AXI_awlock),
        .M_AXI_awprot(M00_AXI_awprot),
        .M_AXI_awqos(M00_AXI_awqos),
        .M_AXI_awready(M00_AXI_awready),
        .M_AXI_awsize(M00_AXI_awsize),
        .M_AXI_awvalid(M00_AXI_awvalid),
        .M_AXI_bready(M00_AXI_bready),
        .M_AXI_bresp(M00_AXI_bresp),
        .M_AXI_bvalid(M00_AXI_bvalid),
        .M_AXI_rdata(M00_AXI_rdata),
        .M_AXI_rlast(M00_AXI_rlast),
        .M_AXI_rready(M00_AXI_rready),
        .M_AXI_rresp(M00_AXI_rresp),
        .M_AXI_rvalid(M00_AXI_rvalid),
        .M_AXI_wdata(M00_AXI_wdata),
        .M_AXI_wlast(M00_AXI_wlast),
        .M_AXI_wready(M00_AXI_wready),
        .M_AXI_wstrb(M00_AXI_wstrb),
        .M_AXI_wvalid(M00_AXI_wvalid),
        .S_ACLK(S00_ACLK),
        .S_ARESETN(S00_ARESETN),
        .S_AXI_araddr(S00_AXI_araddr),
        .S_AXI_arburst(S00_AXI_arburst),
        .S_AXI_arcache(S00_AXI_arcache),
        .S_AXI_arlen(S00_AXI_arlen),
        .S_AXI_arlock(S00_AXI_arlock),
        .S_AXI_arprot(S00_AXI_arprot),
        .S_AXI_arqos(S00_AXI_arqos),
        .S_AXI_arready(S00_AXI_arready),
        .S_AXI_arsize(S00_AXI_arsize),
        .S_AXI_arvalid(S00_AXI_arvalid),
        .S_AXI_awaddr(S00_AXI_awaddr),
        .S_AXI_awburst(S00_AXI_awburst),
        .S_AXI_awcache(S00_AXI_awcache),
        .S_AXI_awlen(S00_AXI_awlen),
        .S_AXI_awlock(S00_AXI_awlock),
        .S_AXI_awprot(S00_AXI_awprot),
        .S_AXI_awqos(S00_AXI_awqos),
        .S_AXI_awready(S00_AXI_awready),
        .S_AXI_awsize(S00_AXI_awsize),
        .S_AXI_awvalid(S00_AXI_awvalid),
        .S_AXI_bready(S00_AXI_bready),
        .S_AXI_bresp(S00_AXI_bresp),
        .S_AXI_bvalid(S00_AXI_bvalid),
        .S_AXI_rdata(S00_AXI_rdata),
        .S_AXI_rlast(S00_AXI_rlast),
        .S_AXI_rready(S00_AXI_rready),
        .S_AXI_rresp(S00_AXI_rresp),
        .S_AXI_rvalid(S00_AXI_rvalid),
        .S_AXI_wdata(S00_AXI_wdata),
        .S_AXI_wlast(S00_AXI_wlast),
        .S_AXI_wready(S00_AXI_wready),
        .S_AXI_wstrb(S00_AXI_wstrb),
        .S_AXI_wvalid(S00_AXI_wvalid));
endmodule

module vitis_design_dpa_ctrl_interconnect_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_araddr,
    M00_AXI_arready,
    M00_AXI_arvalid,
    M00_AXI_awaddr,
    M00_AXI_awready,
    M00_AXI_awvalid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_rdata,
    M00_AXI_rready,
    M00_AXI_rresp,
    M00_AXI_rvalid,
    M00_AXI_wdata,
    M00_AXI_wready,
    M00_AXI_wstrb,
    M00_AXI_wvalid,
    M01_ACLK,
    M01_ARESETN,
    M01_AXI_araddr,
    M01_AXI_arready,
    M01_AXI_arvalid,
    M01_AXI_awaddr,
    M01_AXI_awready,
    M01_AXI_awvalid,
    M01_AXI_bready,
    M01_AXI_bresp,
    M01_AXI_bvalid,
    M01_AXI_rdata,
    M01_AXI_rready,
    M01_AXI_rresp,
    M01_AXI_rvalid,
    M01_AXI_wdata,
    M01_AXI_wready,
    M01_AXI_wstrb,
    M01_AXI_wvalid,
    M02_ACLK,
    M02_ARESETN,
    M02_AXI_araddr,
    M02_AXI_arready,
    M02_AXI_arvalid,
    M02_AXI_awaddr,
    M02_AXI_awready,
    M02_AXI_awvalid,
    M02_AXI_bready,
    M02_AXI_bresp,
    M02_AXI_bvalid,
    M02_AXI_rdata,
    M02_AXI_rready,
    M02_AXI_rresp,
    M02_AXI_rvalid,
    M02_AXI_wdata,
    M02_AXI_wready,
    M02_AXI_wstrb,
    M02_AXI_wvalid,
    M03_ACLK,
    M03_ARESETN,
    M03_AXI_araddr,
    M03_AXI_arready,
    M03_AXI_arvalid,
    M03_AXI_awaddr,
    M03_AXI_awready,
    M03_AXI_awvalid,
    M03_AXI_bready,
    M03_AXI_bresp,
    M03_AXI_bvalid,
    M03_AXI_rdata,
    M03_AXI_rready,
    M03_AXI_rresp,
    M03_AXI_rvalid,
    M03_AXI_wdata,
    M03_AXI_wready,
    M03_AXI_wstrb,
    M03_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arid,
    S00_AXI_arlen,
    S00_AXI_arlock,
    S00_AXI_arprot,
    S00_AXI_arqos,
    S00_AXI_arready,
    S00_AXI_arregion,
    S00_AXI_arsize,
    S00_AXI_aruser,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awid,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awregion,
    S00_AXI_awsize,
    S00_AXI_awuser,
    S00_AXI_awvalid,
    S00_AXI_bid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rdata,
    S00_AXI_rid,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid,
    S00_AXI_wdata,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid);
  input ACLK;
  input ARESETN;
  input M00_ACLK;
  input M00_ARESETN;
  output [7:0]M00_AXI_araddr;
  input M00_AXI_arready;
  output M00_AXI_arvalid;
  output [7:0]M00_AXI_awaddr;
  input M00_AXI_awready;
  output M00_AXI_awvalid;
  output M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input M00_AXI_bvalid;
  input [31:0]M00_AXI_rdata;
  output M00_AXI_rready;
  input [1:0]M00_AXI_rresp;
  input M00_AXI_rvalid;
  output [31:0]M00_AXI_wdata;
  input M00_AXI_wready;
  output [3:0]M00_AXI_wstrb;
  output M00_AXI_wvalid;
  input M01_ACLK;
  input M01_ARESETN;
  output [7:0]M01_AXI_araddr;
  input M01_AXI_arready;
  output M01_AXI_arvalid;
  output [7:0]M01_AXI_awaddr;
  input M01_AXI_awready;
  output M01_AXI_awvalid;
  output M01_AXI_bready;
  input [1:0]M01_AXI_bresp;
  input M01_AXI_bvalid;
  input [31:0]M01_AXI_rdata;
  output M01_AXI_rready;
  input [1:0]M01_AXI_rresp;
  input M01_AXI_rvalid;
  output [31:0]M01_AXI_wdata;
  input M01_AXI_wready;
  output [3:0]M01_AXI_wstrb;
  output M01_AXI_wvalid;
  input M02_ACLK;
  input M02_ARESETN;
  output [7:0]M02_AXI_araddr;
  input M02_AXI_arready;
  output M02_AXI_arvalid;
  output [7:0]M02_AXI_awaddr;
  input M02_AXI_awready;
  output M02_AXI_awvalid;
  output M02_AXI_bready;
  input [1:0]M02_AXI_bresp;
  input M02_AXI_bvalid;
  input [31:0]M02_AXI_rdata;
  output M02_AXI_rready;
  input [1:0]M02_AXI_rresp;
  input M02_AXI_rvalid;
  output [31:0]M02_AXI_wdata;
  input M02_AXI_wready;
  output [3:0]M02_AXI_wstrb;
  output M02_AXI_wvalid;
  input M03_ACLK;
  input M03_ARESETN;
  output [7:0]M03_AXI_araddr;
  input M03_AXI_arready;
  output M03_AXI_arvalid;
  output [7:0]M03_AXI_awaddr;
  input M03_AXI_awready;
  output M03_AXI_awvalid;
  output M03_AXI_bready;
  input [1:0]M03_AXI_bresp;
  input M03_AXI_bvalid;
  input [31:0]M03_AXI_rdata;
  output M03_AXI_rready;
  input [1:0]M03_AXI_rresp;
  input M03_AXI_rvalid;
  output [31:0]M03_AXI_wdata;
  input M03_AXI_wready;
  output [3:0]M03_AXI_wstrb;
  output M03_AXI_wvalid;
  input S00_ACLK;
  input S00_ARESETN;
  input [39:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [15:0]S00_AXI_arid;
  input [7:0]S00_AXI_arlen;
  input [0:0]S00_AXI_arlock;
  input [2:0]S00_AXI_arprot;
  input [3:0]S00_AXI_arqos;
  output S00_AXI_arready;
  input [3:0]S00_AXI_arregion;
  input [2:0]S00_AXI_arsize;
  input [15:0]S00_AXI_aruser;
  input S00_AXI_arvalid;
  input [39:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [15:0]S00_AXI_awid;
  input [7:0]S00_AXI_awlen;
  input [0:0]S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [3:0]S00_AXI_awregion;
  input [2:0]S00_AXI_awsize;
  input [15:0]S00_AXI_awuser;
  input S00_AXI_awvalid;
  output [15:0]S00_AXI_bid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  output [31:0]S00_AXI_rdata;
  output [15:0]S00_AXI_rid;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;
  input [31:0]S00_AXI_wdata;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [3:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;

  wire ACLK;
  wire ARESETN;
  wire [7:0]M00_AXI_araddr;
  wire M00_AXI_arready;
  wire M00_AXI_arvalid;
  wire [7:0]M00_AXI_awaddr;
  wire M00_AXI_awready;
  wire M00_AXI_awvalid;
  wire M00_AXI_bready;
  wire [1:0]M00_AXI_bresp;
  wire M00_AXI_bvalid;
  wire [31:0]M00_AXI_rdata;
  wire M00_AXI_rready;
  wire [1:0]M00_AXI_rresp;
  wire M00_AXI_rvalid;
  wire [31:0]M00_AXI_wdata;
  wire M00_AXI_wready;
  wire [3:0]M00_AXI_wstrb;
  wire M00_AXI_wvalid;
  wire [7:0]M01_AXI_araddr;
  wire M01_AXI_arready;
  wire M01_AXI_arvalid;
  wire [7:0]M01_AXI_awaddr;
  wire M01_AXI_awready;
  wire M01_AXI_awvalid;
  wire M01_AXI_bready;
  wire [1:0]M01_AXI_bresp;
  wire M01_AXI_bvalid;
  wire [31:0]M01_AXI_rdata;
  wire M01_AXI_rready;
  wire [1:0]M01_AXI_rresp;
  wire M01_AXI_rvalid;
  wire [31:0]M01_AXI_wdata;
  wire M01_AXI_wready;
  wire [3:0]M01_AXI_wstrb;
  wire M01_AXI_wvalid;
  wire [7:0]M02_AXI_araddr;
  wire M02_AXI_arready;
  wire M02_AXI_arvalid;
  wire [7:0]M02_AXI_awaddr;
  wire M02_AXI_awready;
  wire M02_AXI_awvalid;
  wire M02_AXI_bready;
  wire [1:0]M02_AXI_bresp;
  wire M02_AXI_bvalid;
  wire [31:0]M02_AXI_rdata;
  wire M02_AXI_rready;
  wire [1:0]M02_AXI_rresp;
  wire M02_AXI_rvalid;
  wire [31:0]M02_AXI_wdata;
  wire M02_AXI_wready;
  wire [3:0]M02_AXI_wstrb;
  wire M02_AXI_wvalid;
  wire [7:0]M03_AXI_araddr;
  wire M03_AXI_arready;
  wire M03_AXI_arvalid;
  wire [7:0]M03_AXI_awaddr;
  wire M03_AXI_awready;
  wire M03_AXI_awvalid;
  wire M03_AXI_bready;
  wire [1:0]M03_AXI_bresp;
  wire M03_AXI_bvalid;
  wire [31:0]M03_AXI_rdata;
  wire M03_AXI_rready;
  wire [1:0]M03_AXI_rresp;
  wire M03_AXI_rvalid;
  wire [31:0]M03_AXI_wdata;
  wire M03_AXI_wready;
  wire [3:0]M03_AXI_wstrb;
  wire M03_AXI_wvalid;
  wire [39:0]S00_AXI_araddr;
  wire [1:0]S00_AXI_arburst;
  wire [3:0]S00_AXI_arcache;
  wire [15:0]S00_AXI_arid;
  wire [7:0]S00_AXI_arlen;
  wire [0:0]S00_AXI_arlock;
  wire [2:0]S00_AXI_arprot;
  wire [3:0]S00_AXI_arqos;
  wire S00_AXI_arready;
  wire [3:0]S00_AXI_arregion;
  wire [2:0]S00_AXI_arsize;
  wire [15:0]S00_AXI_aruser;
  wire S00_AXI_arvalid;
  wire [39:0]S00_AXI_awaddr;
  wire [1:0]S00_AXI_awburst;
  wire [3:0]S00_AXI_awcache;
  wire [15:0]S00_AXI_awid;
  wire [7:0]S00_AXI_awlen;
  wire [0:0]S00_AXI_awlock;
  wire [2:0]S00_AXI_awprot;
  wire [3:0]S00_AXI_awqos;
  wire S00_AXI_awready;
  wire [3:0]S00_AXI_awregion;
  wire [2:0]S00_AXI_awsize;
  wire [15:0]S00_AXI_awuser;
  wire S00_AXI_awvalid;
  wire [15:0]S00_AXI_bid;
  wire S00_AXI_bready;
  wire [1:0]S00_AXI_bresp;
  wire S00_AXI_bvalid;
  wire [31:0]S00_AXI_rdata;
  wire [15:0]S00_AXI_rid;
  wire S00_AXI_rlast;
  wire S00_AXI_rready;
  wire [1:0]S00_AXI_rresp;
  wire S00_AXI_rvalid;
  wire [31:0]S00_AXI_wdata;
  wire S00_AXI_wlast;
  wire S00_AXI_wready;
  wire [3:0]S00_AXI_wstrb;
  wire S00_AXI_wvalid;
  wire [39:0]s00_couplers_to_xbar_ARADDR;
  wire [2:0]s00_couplers_to_xbar_ARPROT;
  wire [0:0]s00_couplers_to_xbar_ARREADY;
  wire s00_couplers_to_xbar_ARVALID;
  wire [39:0]s00_couplers_to_xbar_AWADDR;
  wire [2:0]s00_couplers_to_xbar_AWPROT;
  wire [0:0]s00_couplers_to_xbar_AWREADY;
  wire s00_couplers_to_xbar_AWVALID;
  wire s00_couplers_to_xbar_BREADY;
  wire [1:0]s00_couplers_to_xbar_BRESP;
  wire [0:0]s00_couplers_to_xbar_BVALID;
  wire [31:0]s00_couplers_to_xbar_RDATA;
  wire s00_couplers_to_xbar_RREADY;
  wire [1:0]s00_couplers_to_xbar_RRESP;
  wire [0:0]s00_couplers_to_xbar_RVALID;
  wire [31:0]s00_couplers_to_xbar_WDATA;
  wire [0:0]s00_couplers_to_xbar_WREADY;
  wire [3:0]s00_couplers_to_xbar_WSTRB;
  wire s00_couplers_to_xbar_WVALID;
  wire [39:0]xbar_to_m00_couplers_ARADDR;
  wire [2:0]xbar_to_m00_couplers_ARPROT;
  wire xbar_to_m00_couplers_ARREADY;
  wire [0:0]xbar_to_m00_couplers_ARVALID;
  wire [39:0]xbar_to_m00_couplers_AWADDR;
  wire [2:0]xbar_to_m00_couplers_AWPROT;
  wire xbar_to_m00_couplers_AWREADY;
  wire [0:0]xbar_to_m00_couplers_AWVALID;
  wire [0:0]xbar_to_m00_couplers_BREADY;
  wire [1:0]xbar_to_m00_couplers_BRESP;
  wire xbar_to_m00_couplers_BVALID;
  wire [31:0]xbar_to_m00_couplers_RDATA;
  wire [0:0]xbar_to_m00_couplers_RREADY;
  wire [1:0]xbar_to_m00_couplers_RRESP;
  wire xbar_to_m00_couplers_RVALID;
  wire [31:0]xbar_to_m00_couplers_WDATA;
  wire xbar_to_m00_couplers_WREADY;
  wire [3:0]xbar_to_m00_couplers_WSTRB;
  wire [0:0]xbar_to_m00_couplers_WVALID;
  wire [79:40]xbar_to_m01_couplers_ARADDR;
  wire [5:3]xbar_to_m01_couplers_ARPROT;
  wire xbar_to_m01_couplers_ARREADY;
  wire [1:1]xbar_to_m01_couplers_ARVALID;
  wire [79:40]xbar_to_m01_couplers_AWADDR;
  wire [5:3]xbar_to_m01_couplers_AWPROT;
  wire xbar_to_m01_couplers_AWREADY;
  wire [1:1]xbar_to_m01_couplers_AWVALID;
  wire [1:1]xbar_to_m01_couplers_BREADY;
  wire [1:0]xbar_to_m01_couplers_BRESP;
  wire xbar_to_m01_couplers_BVALID;
  wire [31:0]xbar_to_m01_couplers_RDATA;
  wire [1:1]xbar_to_m01_couplers_RREADY;
  wire [1:0]xbar_to_m01_couplers_RRESP;
  wire xbar_to_m01_couplers_RVALID;
  wire [63:32]xbar_to_m01_couplers_WDATA;
  wire xbar_to_m01_couplers_WREADY;
  wire [7:4]xbar_to_m01_couplers_WSTRB;
  wire [1:1]xbar_to_m01_couplers_WVALID;
  wire [119:80]xbar_to_m02_couplers_ARADDR;
  wire [8:6]xbar_to_m02_couplers_ARPROT;
  wire xbar_to_m02_couplers_ARREADY;
  wire [2:2]xbar_to_m02_couplers_ARVALID;
  wire [119:80]xbar_to_m02_couplers_AWADDR;
  wire [8:6]xbar_to_m02_couplers_AWPROT;
  wire xbar_to_m02_couplers_AWREADY;
  wire [2:2]xbar_to_m02_couplers_AWVALID;
  wire [2:2]xbar_to_m02_couplers_BREADY;
  wire [1:0]xbar_to_m02_couplers_BRESP;
  wire xbar_to_m02_couplers_BVALID;
  wire [31:0]xbar_to_m02_couplers_RDATA;
  wire [2:2]xbar_to_m02_couplers_RREADY;
  wire [1:0]xbar_to_m02_couplers_RRESP;
  wire xbar_to_m02_couplers_RVALID;
  wire [95:64]xbar_to_m02_couplers_WDATA;
  wire xbar_to_m02_couplers_WREADY;
  wire [11:8]xbar_to_m02_couplers_WSTRB;
  wire [2:2]xbar_to_m02_couplers_WVALID;
  wire [159:120]xbar_to_m03_couplers_ARADDR;
  wire [11:9]xbar_to_m03_couplers_ARPROT;
  wire xbar_to_m03_couplers_ARREADY;
  wire [3:3]xbar_to_m03_couplers_ARVALID;
  wire [159:120]xbar_to_m03_couplers_AWADDR;
  wire [11:9]xbar_to_m03_couplers_AWPROT;
  wire xbar_to_m03_couplers_AWREADY;
  wire [3:3]xbar_to_m03_couplers_AWVALID;
  wire [3:3]xbar_to_m03_couplers_BREADY;
  wire [1:0]xbar_to_m03_couplers_BRESP;
  wire xbar_to_m03_couplers_BVALID;
  wire [31:0]xbar_to_m03_couplers_RDATA;
  wire [3:3]xbar_to_m03_couplers_RREADY;
  wire [1:0]xbar_to_m03_couplers_RRESP;
  wire xbar_to_m03_couplers_RVALID;
  wire [127:96]xbar_to_m03_couplers_WDATA;
  wire xbar_to_m03_couplers_WREADY;
  wire [15:12]xbar_to_m03_couplers_WSTRB;
  wire [3:3]xbar_to_m03_couplers_WVALID;

  m00_couplers_imp_1WHIVE7 m00_couplers
       (.M_ACLK(ACLK),
        .M_ARESETN(ARESETN),
        .M_AXI_araddr(M00_AXI_araddr),
        .M_AXI_arready(M00_AXI_arready),
        .M_AXI_arvalid(M00_AXI_arvalid),
        .M_AXI_awaddr(M00_AXI_awaddr),
        .M_AXI_awready(M00_AXI_awready),
        .M_AXI_awvalid(M00_AXI_awvalid),
        .M_AXI_bready(M00_AXI_bready),
        .M_AXI_bresp(M00_AXI_bresp),
        .M_AXI_bvalid(M00_AXI_bvalid),
        .M_AXI_rdata(M00_AXI_rdata),
        .M_AXI_rready(M00_AXI_rready),
        .M_AXI_rresp(M00_AXI_rresp),
        .M_AXI_rvalid(M00_AXI_rvalid),
        .M_AXI_wdata(M00_AXI_wdata),
        .M_AXI_wready(M00_AXI_wready),
        .M_AXI_wstrb(M00_AXI_wstrb),
        .M_AXI_wvalid(M00_AXI_wvalid),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(xbar_to_m00_couplers_ARADDR),
        .S_AXI_arprot(xbar_to_m00_couplers_ARPROT),
        .S_AXI_arready(xbar_to_m00_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m00_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m00_couplers_AWADDR),
        .S_AXI_awprot(xbar_to_m00_couplers_AWPROT),
        .S_AXI_awready(xbar_to_m00_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m00_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m00_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m00_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m00_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m00_couplers_RDATA),
        .S_AXI_rready(xbar_to_m00_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m00_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m00_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m00_couplers_WDATA),
        .S_AXI_wready(xbar_to_m00_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m00_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m00_couplers_WVALID));
  m01_couplers_imp_1QPBS8F m01_couplers
       (.M_ACLK(ACLK),
        .M_ARESETN(ARESETN),
        .M_AXI_araddr(M01_AXI_araddr),
        .M_AXI_arready(M01_AXI_arready),
        .M_AXI_arvalid(M01_AXI_arvalid),
        .M_AXI_awaddr(M01_AXI_awaddr),
        .M_AXI_awready(M01_AXI_awready),
        .M_AXI_awvalid(M01_AXI_awvalid),
        .M_AXI_bready(M01_AXI_bready),
        .M_AXI_bresp(M01_AXI_bresp),
        .M_AXI_bvalid(M01_AXI_bvalid),
        .M_AXI_rdata(M01_AXI_rdata),
        .M_AXI_rready(M01_AXI_rready),
        .M_AXI_rresp(M01_AXI_rresp),
        .M_AXI_rvalid(M01_AXI_rvalid),
        .M_AXI_wdata(M01_AXI_wdata),
        .M_AXI_wready(M01_AXI_wready),
        .M_AXI_wstrb(M01_AXI_wstrb),
        .M_AXI_wvalid(M01_AXI_wvalid),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(xbar_to_m01_couplers_ARADDR),
        .S_AXI_arprot(xbar_to_m01_couplers_ARPROT),
        .S_AXI_arready(xbar_to_m01_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m01_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m01_couplers_AWADDR),
        .S_AXI_awprot(xbar_to_m01_couplers_AWPROT),
        .S_AXI_awready(xbar_to_m01_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m01_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m01_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m01_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m01_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m01_couplers_RDATA),
        .S_AXI_rready(xbar_to_m01_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m01_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m01_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m01_couplers_WDATA),
        .S_AXI_wready(xbar_to_m01_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m01_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m01_couplers_WVALID));
  m02_couplers_imp_1O2QDPR m02_couplers
       (.M_ACLK(ACLK),
        .M_ARESETN(ARESETN),
        .M_AXI_araddr(M02_AXI_araddr),
        .M_AXI_arready(M02_AXI_arready),
        .M_AXI_arvalid(M02_AXI_arvalid),
        .M_AXI_awaddr(M02_AXI_awaddr),
        .M_AXI_awready(M02_AXI_awready),
        .M_AXI_awvalid(M02_AXI_awvalid),
        .M_AXI_bready(M02_AXI_bready),
        .M_AXI_bresp(M02_AXI_bresp),
        .M_AXI_bvalid(M02_AXI_bvalid),
        .M_AXI_rdata(M02_AXI_rdata),
        .M_AXI_rready(M02_AXI_rready),
        .M_AXI_rresp(M02_AXI_rresp),
        .M_AXI_rvalid(M02_AXI_rvalid),
        .M_AXI_wdata(M02_AXI_wdata),
        .M_AXI_wready(M02_AXI_wready),
        .M_AXI_wstrb(M02_AXI_wstrb),
        .M_AXI_wvalid(M02_AXI_wvalid),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(xbar_to_m02_couplers_ARADDR),
        .S_AXI_arprot(xbar_to_m02_couplers_ARPROT),
        .S_AXI_arready(xbar_to_m02_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m02_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m02_couplers_AWADDR),
        .S_AXI_awprot(xbar_to_m02_couplers_AWPROT),
        .S_AXI_awready(xbar_to_m02_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m02_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m02_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m02_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m02_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m02_couplers_RDATA),
        .S_AXI_rready(xbar_to_m02_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m02_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m02_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m02_couplers_WDATA),
        .S_AXI_wready(xbar_to_m02_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m02_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m02_couplers_WVALID));
  m03_couplers_imp_1LMDPNZ m03_couplers
       (.M_ACLK(ACLK),
        .M_ARESETN(ARESETN),
        .M_AXI_araddr(M03_AXI_araddr),
        .M_AXI_arready(M03_AXI_arready),
        .M_AXI_arvalid(M03_AXI_arvalid),
        .M_AXI_awaddr(M03_AXI_awaddr),
        .M_AXI_awready(M03_AXI_awready),
        .M_AXI_awvalid(M03_AXI_awvalid),
        .M_AXI_bready(M03_AXI_bready),
        .M_AXI_bresp(M03_AXI_bresp),
        .M_AXI_bvalid(M03_AXI_bvalid),
        .M_AXI_rdata(M03_AXI_rdata),
        .M_AXI_rready(M03_AXI_rready),
        .M_AXI_rresp(M03_AXI_rresp),
        .M_AXI_rvalid(M03_AXI_rvalid),
        .M_AXI_wdata(M03_AXI_wdata),
        .M_AXI_wready(M03_AXI_wready),
        .M_AXI_wstrb(M03_AXI_wstrb),
        .M_AXI_wvalid(M03_AXI_wvalid),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(xbar_to_m03_couplers_ARADDR),
        .S_AXI_arprot(xbar_to_m03_couplers_ARPROT),
        .S_AXI_arready(xbar_to_m03_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m03_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m03_couplers_AWADDR),
        .S_AXI_awprot(xbar_to_m03_couplers_AWPROT),
        .S_AXI_awready(xbar_to_m03_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m03_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m03_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m03_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m03_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m03_couplers_RDATA),
        .S_AXI_rready(xbar_to_m03_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m03_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m03_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m03_couplers_WDATA),
        .S_AXI_wready(xbar_to_m03_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m03_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m03_couplers_WVALID));
  s00_couplers_imp_1TCYC3G s00_couplers
       (.M_ACLK(ACLK),
        .M_ARESETN(ARESETN),
        .M_AXI_araddr(s00_couplers_to_xbar_ARADDR),
        .M_AXI_arprot(s00_couplers_to_xbar_ARPROT),
        .M_AXI_arready(s00_couplers_to_xbar_ARREADY),
        .M_AXI_arvalid(s00_couplers_to_xbar_ARVALID),
        .M_AXI_awaddr(s00_couplers_to_xbar_AWADDR),
        .M_AXI_awprot(s00_couplers_to_xbar_AWPROT),
        .M_AXI_awready(s00_couplers_to_xbar_AWREADY),
        .M_AXI_awvalid(s00_couplers_to_xbar_AWVALID),
        .M_AXI_bready(s00_couplers_to_xbar_BREADY),
        .M_AXI_bresp(s00_couplers_to_xbar_BRESP),
        .M_AXI_bvalid(s00_couplers_to_xbar_BVALID),
        .M_AXI_rdata(s00_couplers_to_xbar_RDATA),
        .M_AXI_rready(s00_couplers_to_xbar_RREADY),
        .M_AXI_rresp(s00_couplers_to_xbar_RRESP),
        .M_AXI_rvalid(s00_couplers_to_xbar_RVALID),
        .M_AXI_wdata(s00_couplers_to_xbar_WDATA),
        .M_AXI_wready(s00_couplers_to_xbar_WREADY),
        .M_AXI_wstrb(s00_couplers_to_xbar_WSTRB),
        .M_AXI_wvalid(s00_couplers_to_xbar_WVALID),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(S00_AXI_araddr),
        .S_AXI_arburst(S00_AXI_arburst),
        .S_AXI_arcache(S00_AXI_arcache),
        .S_AXI_arid(S00_AXI_arid),
        .S_AXI_arlen(S00_AXI_arlen),
        .S_AXI_arlock(S00_AXI_arlock),
        .S_AXI_arprot(S00_AXI_arprot),
        .S_AXI_arqos(S00_AXI_arqos),
        .S_AXI_arready(S00_AXI_arready),
        .S_AXI_arregion(S00_AXI_arregion),
        .S_AXI_arsize(S00_AXI_arsize),
        .S_AXI_aruser(S00_AXI_aruser),
        .S_AXI_arvalid(S00_AXI_arvalid),
        .S_AXI_awaddr(S00_AXI_awaddr),
        .S_AXI_awburst(S00_AXI_awburst),
        .S_AXI_awcache(S00_AXI_awcache),
        .S_AXI_awid(S00_AXI_awid),
        .S_AXI_awlen(S00_AXI_awlen),
        .S_AXI_awlock(S00_AXI_awlock),
        .S_AXI_awprot(S00_AXI_awprot),
        .S_AXI_awqos(S00_AXI_awqos),
        .S_AXI_awready(S00_AXI_awready),
        .S_AXI_awregion(S00_AXI_awregion),
        .S_AXI_awsize(S00_AXI_awsize),
        .S_AXI_awuser(S00_AXI_awuser),
        .S_AXI_awvalid(S00_AXI_awvalid),
        .S_AXI_bid(S00_AXI_bid),
        .S_AXI_bready(S00_AXI_bready),
        .S_AXI_bresp(S00_AXI_bresp),
        .S_AXI_bvalid(S00_AXI_bvalid),
        .S_AXI_rdata(S00_AXI_rdata),
        .S_AXI_rid(S00_AXI_rid),
        .S_AXI_rlast(S00_AXI_rlast),
        .S_AXI_rready(S00_AXI_rready),
        .S_AXI_rresp(S00_AXI_rresp),
        .S_AXI_rvalid(S00_AXI_rvalid),
        .S_AXI_wdata(S00_AXI_wdata),
        .S_AXI_wlast(S00_AXI_wlast),
        .S_AXI_wready(S00_AXI_wready),
        .S_AXI_wstrb(S00_AXI_wstrb),
        .S_AXI_wvalid(S00_AXI_wvalid));
  vitis_design_dpa_ctrl_interconnect_upgraded_ipi_imp_xbar_0 xbar
       (.aclk(ACLK),
        .aresetn(ARESETN),
        .m_axi_araddr({xbar_to_m03_couplers_ARADDR,xbar_to_m02_couplers_ARADDR,xbar_to_m01_couplers_ARADDR,xbar_to_m00_couplers_ARADDR}),
        .m_axi_arprot({xbar_to_m03_couplers_ARPROT,xbar_to_m02_couplers_ARPROT,xbar_to_m01_couplers_ARPROT,xbar_to_m00_couplers_ARPROT}),
        .m_axi_arready({xbar_to_m03_couplers_ARREADY,xbar_to_m02_couplers_ARREADY,xbar_to_m01_couplers_ARREADY,xbar_to_m00_couplers_ARREADY}),
        .m_axi_arvalid({xbar_to_m03_couplers_ARVALID,xbar_to_m02_couplers_ARVALID,xbar_to_m01_couplers_ARVALID,xbar_to_m00_couplers_ARVALID}),
        .m_axi_awaddr({xbar_to_m03_couplers_AWADDR,xbar_to_m02_couplers_AWADDR,xbar_to_m01_couplers_AWADDR,xbar_to_m00_couplers_AWADDR}),
        .m_axi_awprot({xbar_to_m03_couplers_AWPROT,xbar_to_m02_couplers_AWPROT,xbar_to_m01_couplers_AWPROT,xbar_to_m00_couplers_AWPROT}),
        .m_axi_awready({xbar_to_m03_couplers_AWREADY,xbar_to_m02_couplers_AWREADY,xbar_to_m01_couplers_AWREADY,xbar_to_m00_couplers_AWREADY}),
        .m_axi_awvalid({xbar_to_m03_couplers_AWVALID,xbar_to_m02_couplers_AWVALID,xbar_to_m01_couplers_AWVALID,xbar_to_m00_couplers_AWVALID}),
        .m_axi_bready({xbar_to_m03_couplers_BREADY,xbar_to_m02_couplers_BREADY,xbar_to_m01_couplers_BREADY,xbar_to_m00_couplers_BREADY}),
        .m_axi_bresp({xbar_to_m03_couplers_BRESP,xbar_to_m02_couplers_BRESP,xbar_to_m01_couplers_BRESP,xbar_to_m00_couplers_BRESP}),
        .m_axi_bvalid({xbar_to_m03_couplers_BVALID,xbar_to_m02_couplers_BVALID,xbar_to_m01_couplers_BVALID,xbar_to_m00_couplers_BVALID}),
        .m_axi_rdata({xbar_to_m03_couplers_RDATA,xbar_to_m02_couplers_RDATA,xbar_to_m01_couplers_RDATA,xbar_to_m00_couplers_RDATA}),
        .m_axi_rready({xbar_to_m03_couplers_RREADY,xbar_to_m02_couplers_RREADY,xbar_to_m01_couplers_RREADY,xbar_to_m00_couplers_RREADY}),
        .m_axi_rresp({xbar_to_m03_couplers_RRESP,xbar_to_m02_couplers_RRESP,xbar_to_m01_couplers_RRESP,xbar_to_m00_couplers_RRESP}),
        .m_axi_rvalid({xbar_to_m03_couplers_RVALID,xbar_to_m02_couplers_RVALID,xbar_to_m01_couplers_RVALID,xbar_to_m00_couplers_RVALID}),
        .m_axi_wdata({xbar_to_m03_couplers_WDATA,xbar_to_m02_couplers_WDATA,xbar_to_m01_couplers_WDATA,xbar_to_m00_couplers_WDATA}),
        .m_axi_wready({xbar_to_m03_couplers_WREADY,xbar_to_m02_couplers_WREADY,xbar_to_m01_couplers_WREADY,xbar_to_m00_couplers_WREADY}),
        .m_axi_wstrb({xbar_to_m03_couplers_WSTRB,xbar_to_m02_couplers_WSTRB,xbar_to_m01_couplers_WSTRB,xbar_to_m00_couplers_WSTRB}),
        .m_axi_wvalid({xbar_to_m03_couplers_WVALID,xbar_to_m02_couplers_WVALID,xbar_to_m01_couplers_WVALID,xbar_to_m00_couplers_WVALID}),
        .s_axi_araddr(s00_couplers_to_xbar_ARADDR),
        .s_axi_arprot(s00_couplers_to_xbar_ARPROT),
        .s_axi_arready(s00_couplers_to_xbar_ARREADY),
        .s_axi_arvalid(s00_couplers_to_xbar_ARVALID),
        .s_axi_awaddr(s00_couplers_to_xbar_AWADDR),
        .s_axi_awprot(s00_couplers_to_xbar_AWPROT),
        .s_axi_awready(s00_couplers_to_xbar_AWREADY),
        .s_axi_awvalid(s00_couplers_to_xbar_AWVALID),
        .s_axi_bready(s00_couplers_to_xbar_BREADY),
        .s_axi_bresp(s00_couplers_to_xbar_BRESP),
        .s_axi_bvalid(s00_couplers_to_xbar_BVALID),
        .s_axi_rdata(s00_couplers_to_xbar_RDATA),
        .s_axi_rready(s00_couplers_to_xbar_RREADY),
        .s_axi_rresp(s00_couplers_to_xbar_RRESP),
        .s_axi_rvalid(s00_couplers_to_xbar_RVALID),
        .s_axi_wdata(s00_couplers_to_xbar_WDATA),
        .s_axi_wready(s00_couplers_to_xbar_WREADY),
        .s_axi_wstrb(s00_couplers_to_xbar_WSTRB),
        .s_axi_wvalid(s00_couplers_to_xbar_WVALID));
endmodule

module vitis_design_interconnect_axifull_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_araddr,
    M00_AXI_arburst,
    M00_AXI_arcache,
    M00_AXI_arlen,
    M00_AXI_arlock,
    M00_AXI_arprot,
    M00_AXI_arqos,
    M00_AXI_arready,
    M00_AXI_arsize,
    M00_AXI_arvalid,
    M00_AXI_awaddr,
    M00_AXI_awburst,
    M00_AXI_awcache,
    M00_AXI_awlen,
    M00_AXI_awlock,
    M00_AXI_awprot,
    M00_AXI_awqos,
    M00_AXI_awready,
    M00_AXI_awsize,
    M00_AXI_awvalid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_rdata,
    M00_AXI_rlast,
    M00_AXI_rready,
    M00_AXI_rresp,
    M00_AXI_rvalid,
    M00_AXI_wdata,
    M00_AXI_wlast,
    M00_AXI_wready,
    M00_AXI_wstrb,
    M00_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arlen,
    S00_AXI_arlock,
    S00_AXI_arprot,
    S00_AXI_arqos,
    S00_AXI_arready,
    S00_AXI_arregion,
    S00_AXI_arsize,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awregion,
    S00_AXI_awsize,
    S00_AXI_awvalid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rdata,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid,
    S00_AXI_wdata,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid);
  input ACLK;
  input ARESETN;
  input M00_ACLK;
  input M00_ARESETN;
  output [31:0]M00_AXI_araddr;
  output [1:0]M00_AXI_arburst;
  output [3:0]M00_AXI_arcache;
  output [7:0]M00_AXI_arlen;
  output M00_AXI_arlock;
  output [2:0]M00_AXI_arprot;
  output [3:0]M00_AXI_arqos;
  input M00_AXI_arready;
  output [2:0]M00_AXI_arsize;
  output M00_AXI_arvalid;
  output [31:0]M00_AXI_awaddr;
  output [1:0]M00_AXI_awburst;
  output [3:0]M00_AXI_awcache;
  output [7:0]M00_AXI_awlen;
  output M00_AXI_awlock;
  output [2:0]M00_AXI_awprot;
  output [3:0]M00_AXI_awqos;
  input M00_AXI_awready;
  output [2:0]M00_AXI_awsize;
  output M00_AXI_awvalid;
  output M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input M00_AXI_bvalid;
  input [127:0]M00_AXI_rdata;
  input M00_AXI_rlast;
  output M00_AXI_rready;
  input [1:0]M00_AXI_rresp;
  input M00_AXI_rvalid;
  output [127:0]M00_AXI_wdata;
  output M00_AXI_wlast;
  input M00_AXI_wready;
  output [15:0]M00_AXI_wstrb;
  output M00_AXI_wvalid;
  input S00_ACLK;
  input S00_ARESETN;
  input [31:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [7:0]S00_AXI_arlen;
  input [0:0]S00_AXI_arlock;
  input [2:0]S00_AXI_arprot;
  input [3:0]S00_AXI_arqos;
  output S00_AXI_arready;
  input [3:0]S00_AXI_arregion;
  input [2:0]S00_AXI_arsize;
  input S00_AXI_arvalid;
  input [31:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [7:0]S00_AXI_awlen;
  input [0:0]S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [3:0]S00_AXI_awregion;
  input [2:0]S00_AXI_awsize;
  input S00_AXI_awvalid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  output [31:0]S00_AXI_rdata;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;
  input [31:0]S00_AXI_wdata;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [3:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;

  wire M00_ACLK;
  wire M00_ARESETN;
  wire [31:0]M00_AXI_araddr;
  wire [1:0]M00_AXI_arburst;
  wire [3:0]M00_AXI_arcache;
  wire [7:0]M00_AXI_arlen;
  wire M00_AXI_arlock;
  wire [2:0]M00_AXI_arprot;
  wire [3:0]M00_AXI_arqos;
  wire M00_AXI_arready;
  wire [2:0]M00_AXI_arsize;
  wire M00_AXI_arvalid;
  wire [31:0]M00_AXI_awaddr;
  wire [1:0]M00_AXI_awburst;
  wire [3:0]M00_AXI_awcache;
  wire [7:0]M00_AXI_awlen;
  wire M00_AXI_awlock;
  wire [2:0]M00_AXI_awprot;
  wire [3:0]M00_AXI_awqos;
  wire M00_AXI_awready;
  wire [2:0]M00_AXI_awsize;
  wire M00_AXI_awvalid;
  wire M00_AXI_bready;
  wire [1:0]M00_AXI_bresp;
  wire M00_AXI_bvalid;
  wire [127:0]M00_AXI_rdata;
  wire M00_AXI_rlast;
  wire M00_AXI_rready;
  wire [1:0]M00_AXI_rresp;
  wire M00_AXI_rvalid;
  wire [127:0]M00_AXI_wdata;
  wire M00_AXI_wlast;
  wire M00_AXI_wready;
  wire [15:0]M00_AXI_wstrb;
  wire M00_AXI_wvalid;
  wire S00_ACLK;
  wire S00_ARESETN;
  wire [31:0]S00_AXI_araddr;
  wire [1:0]S00_AXI_arburst;
  wire [3:0]S00_AXI_arcache;
  wire [7:0]S00_AXI_arlen;
  wire [0:0]S00_AXI_arlock;
  wire [2:0]S00_AXI_arprot;
  wire [3:0]S00_AXI_arqos;
  wire S00_AXI_arready;
  wire [3:0]S00_AXI_arregion;
  wire [2:0]S00_AXI_arsize;
  wire S00_AXI_arvalid;
  wire [31:0]S00_AXI_awaddr;
  wire [1:0]S00_AXI_awburst;
  wire [3:0]S00_AXI_awcache;
  wire [7:0]S00_AXI_awlen;
  wire [0:0]S00_AXI_awlock;
  wire [2:0]S00_AXI_awprot;
  wire [3:0]S00_AXI_awqos;
  wire S00_AXI_awready;
  wire [3:0]S00_AXI_awregion;
  wire [2:0]S00_AXI_awsize;
  wire S00_AXI_awvalid;
  wire S00_AXI_bready;
  wire [1:0]S00_AXI_bresp;
  wire S00_AXI_bvalid;
  wire [31:0]S00_AXI_rdata;
  wire S00_AXI_rlast;
  wire S00_AXI_rready;
  wire [1:0]S00_AXI_rresp;
  wire S00_AXI_rvalid;
  wire [31:0]S00_AXI_wdata;
  wire S00_AXI_wlast;
  wire S00_AXI_wready;
  wire [3:0]S00_AXI_wstrb;
  wire S00_AXI_wvalid;

  s00_couplers_imp_GT907L s00_couplers
       (.M_ACLK(M00_ACLK),
        .M_ARESETN(M00_ARESETN),
        .M_AXI_araddr(M00_AXI_araddr),
        .M_AXI_arburst(M00_AXI_arburst),
        .M_AXI_arcache(M00_AXI_arcache),
        .M_AXI_arlen(M00_AXI_arlen),
        .M_AXI_arlock(M00_AXI_arlock),
        .M_AXI_arprot(M00_AXI_arprot),
        .M_AXI_arqos(M00_AXI_arqos),
        .M_AXI_arready(M00_AXI_arready),
        .M_AXI_arsize(M00_AXI_arsize),
        .M_AXI_arvalid(M00_AXI_arvalid),
        .M_AXI_awaddr(M00_AXI_awaddr),
        .M_AXI_awburst(M00_AXI_awburst),
        .M_AXI_awcache(M00_AXI_awcache),
        .M_AXI_awlen(M00_AXI_awlen),
        .M_AXI_awlock(M00_AXI_awlock),
        .M_AXI_awprot(M00_AXI_awprot),
        .M_AXI_awqos(M00_AXI_awqos),
        .M_AXI_awready(M00_AXI_awready),
        .M_AXI_awsize(M00_AXI_awsize),
        .M_AXI_awvalid(M00_AXI_awvalid),
        .M_AXI_bready(M00_AXI_bready),
        .M_AXI_bresp(M00_AXI_bresp),
        .M_AXI_bvalid(M00_AXI_bvalid),
        .M_AXI_rdata(M00_AXI_rdata),
        .M_AXI_rlast(M00_AXI_rlast),
        .M_AXI_rready(M00_AXI_rready),
        .M_AXI_rresp(M00_AXI_rresp),
        .M_AXI_rvalid(M00_AXI_rvalid),
        .M_AXI_wdata(M00_AXI_wdata),
        .M_AXI_wlast(M00_AXI_wlast),
        .M_AXI_wready(M00_AXI_wready),
        .M_AXI_wstrb(M00_AXI_wstrb),
        .M_AXI_wvalid(M00_AXI_wvalid),
        .S_ACLK(S00_ACLK),
        .S_ARESETN(S00_ARESETN),
        .S_AXI_araddr(S00_AXI_araddr),
        .S_AXI_arburst(S00_AXI_arburst),
        .S_AXI_arcache(S00_AXI_arcache),
        .S_AXI_arlen(S00_AXI_arlen),
        .S_AXI_arlock(S00_AXI_arlock),
        .S_AXI_arprot(S00_AXI_arprot),
        .S_AXI_arqos(S00_AXI_arqos),
        .S_AXI_arready(S00_AXI_arready),
        .S_AXI_arregion(S00_AXI_arregion),
        .S_AXI_arsize(S00_AXI_arsize),
        .S_AXI_arvalid(S00_AXI_arvalid),
        .S_AXI_awaddr(S00_AXI_awaddr),
        .S_AXI_awburst(S00_AXI_awburst),
        .S_AXI_awcache(S00_AXI_awcache),
        .S_AXI_awlen(S00_AXI_awlen),
        .S_AXI_awlock(S00_AXI_awlock),
        .S_AXI_awprot(S00_AXI_awprot),
        .S_AXI_awqos(S00_AXI_awqos),
        .S_AXI_awready(S00_AXI_awready),
        .S_AXI_awregion(S00_AXI_awregion),
        .S_AXI_awsize(S00_AXI_awsize),
        .S_AXI_awvalid(S00_AXI_awvalid),
        .S_AXI_bready(S00_AXI_bready),
        .S_AXI_bresp(S00_AXI_bresp),
        .S_AXI_bvalid(S00_AXI_bvalid),
        .S_AXI_rdata(S00_AXI_rdata),
        .S_AXI_rlast(S00_AXI_rlast),
        .S_AXI_rready(S00_AXI_rready),
        .S_AXI_rresp(S00_AXI_rresp),
        .S_AXI_rvalid(S00_AXI_rvalid),
        .S_AXI_wdata(S00_AXI_wdata),
        .S_AXI_wlast(S00_AXI_wlast),
        .S_AXI_wready(S00_AXI_wready),
        .S_AXI_wstrb(S00_AXI_wstrb),
        .S_AXI_wvalid(S00_AXI_wvalid));
endmodule

module vitis_design_interconnect_axihpm0fpd_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_araddr,
    M00_AXI_arburst,
    M00_AXI_arcache,
    M00_AXI_arid,
    M00_AXI_arlen,
    M00_AXI_arlock,
    M00_AXI_arprot,
    M00_AXI_arqos,
    M00_AXI_arready,
    M00_AXI_arregion,
    M00_AXI_arsize,
    M00_AXI_aruser,
    M00_AXI_arvalid,
    M00_AXI_awaddr,
    M00_AXI_awburst,
    M00_AXI_awcache,
    M00_AXI_awid,
    M00_AXI_awlen,
    M00_AXI_awlock,
    M00_AXI_awprot,
    M00_AXI_awqos,
    M00_AXI_awready,
    M00_AXI_awregion,
    M00_AXI_awsize,
    M00_AXI_awuser,
    M00_AXI_awvalid,
    M00_AXI_bid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_rdata,
    M00_AXI_rid,
    M00_AXI_rlast,
    M00_AXI_rready,
    M00_AXI_rresp,
    M00_AXI_rvalid,
    M00_AXI_wdata,
    M00_AXI_wlast,
    M00_AXI_wready,
    M00_AXI_wstrb,
    M00_AXI_wvalid,
    M01_ACLK,
    M01_ARESETN,
    M01_AXI_araddr,
    M01_AXI_arburst,
    M01_AXI_arlen,
    M01_AXI_arready,
    M01_AXI_arsize,
    M01_AXI_arvalid,
    M01_AXI_awaddr,
    M01_AXI_awburst,
    M01_AXI_awlen,
    M01_AXI_awready,
    M01_AXI_awsize,
    M01_AXI_awvalid,
    M01_AXI_bready,
    M01_AXI_bresp,
    M01_AXI_bvalid,
    M01_AXI_rdata,
    M01_AXI_rlast,
    M01_AXI_rready,
    M01_AXI_rresp,
    M01_AXI_rvalid,
    M01_AXI_wdata,
    M01_AXI_wlast,
    M01_AXI_wready,
    M01_AXI_wstrb,
    M01_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arid,
    S00_AXI_arlen,
    S00_AXI_arlock,
    S00_AXI_arprot,
    S00_AXI_arqos,
    S00_AXI_arready,
    S00_AXI_arsize,
    S00_AXI_aruser,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awid,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awsize,
    S00_AXI_awuser,
    S00_AXI_awvalid,
    S00_AXI_bid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rdata,
    S00_AXI_rid,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid,
    S00_AXI_wdata,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid);
  input ACLK;
  input ARESETN;
  input M00_ACLK;
  input M00_ARESETN;
  output [39:0]M00_AXI_araddr;
  output [1:0]M00_AXI_arburst;
  output [3:0]M00_AXI_arcache;
  output [15:0]M00_AXI_arid;
  output [7:0]M00_AXI_arlen;
  output [0:0]M00_AXI_arlock;
  output [2:0]M00_AXI_arprot;
  output [3:0]M00_AXI_arqos;
  input [0:0]M00_AXI_arready;
  output [3:0]M00_AXI_arregion;
  output [2:0]M00_AXI_arsize;
  output [15:0]M00_AXI_aruser;
  output [0:0]M00_AXI_arvalid;
  output [39:0]M00_AXI_awaddr;
  output [1:0]M00_AXI_awburst;
  output [3:0]M00_AXI_awcache;
  output [15:0]M00_AXI_awid;
  output [7:0]M00_AXI_awlen;
  output [0:0]M00_AXI_awlock;
  output [2:0]M00_AXI_awprot;
  output [3:0]M00_AXI_awqos;
  input [0:0]M00_AXI_awready;
  output [3:0]M00_AXI_awregion;
  output [2:0]M00_AXI_awsize;
  output [15:0]M00_AXI_awuser;
  output [0:0]M00_AXI_awvalid;
  input [15:0]M00_AXI_bid;
  output [0:0]M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input [0:0]M00_AXI_bvalid;
  input [127:0]M00_AXI_rdata;
  input [15:0]M00_AXI_rid;
  input [0:0]M00_AXI_rlast;
  output [0:0]M00_AXI_rready;
  input [1:0]M00_AXI_rresp;
  input [0:0]M00_AXI_rvalid;
  output [127:0]M00_AXI_wdata;
  output [0:0]M00_AXI_wlast;
  input [0:0]M00_AXI_wready;
  output [15:0]M00_AXI_wstrb;
  output [0:0]M00_AXI_wvalid;
  input M01_ACLK;
  input M01_ARESETN;
  output [31:0]M01_AXI_araddr;
  output [1:0]M01_AXI_arburst;
  output [7:0]M01_AXI_arlen;
  input M01_AXI_arready;
  output [2:0]M01_AXI_arsize;
  output M01_AXI_arvalid;
  output [31:0]M01_AXI_awaddr;
  output [1:0]M01_AXI_awburst;
  output [7:0]M01_AXI_awlen;
  input M01_AXI_awready;
  output [2:0]M01_AXI_awsize;
  output M01_AXI_awvalid;
  output M01_AXI_bready;
  input [1:0]M01_AXI_bresp;
  input M01_AXI_bvalid;
  input [31:0]M01_AXI_rdata;
  input M01_AXI_rlast;
  output M01_AXI_rready;
  input [1:0]M01_AXI_rresp;
  input M01_AXI_rvalid;
  output [31:0]M01_AXI_wdata;
  output M01_AXI_wlast;
  input M01_AXI_wready;
  output [3:0]M01_AXI_wstrb;
  output M01_AXI_wvalid;
  input S00_ACLK;
  input S00_ARESETN;
  input [39:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [15:0]S00_AXI_arid;
  input [7:0]S00_AXI_arlen;
  input S00_AXI_arlock;
  input [2:0]S00_AXI_arprot;
  input [3:0]S00_AXI_arqos;
  output S00_AXI_arready;
  input [2:0]S00_AXI_arsize;
  input [15:0]S00_AXI_aruser;
  input S00_AXI_arvalid;
  input [39:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [15:0]S00_AXI_awid;
  input [7:0]S00_AXI_awlen;
  input S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [2:0]S00_AXI_awsize;
  input [15:0]S00_AXI_awuser;
  input S00_AXI_awvalid;
  output [15:0]S00_AXI_bid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  output [127:0]S00_AXI_rdata;
  output [15:0]S00_AXI_rid;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;
  input [127:0]S00_AXI_wdata;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [15:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;

  wire ACLK;
  wire ARESETN;
  wire M00_ACLK;
  wire M00_ARESETN;
  wire [39:0]M00_AXI_araddr;
  wire [1:0]M00_AXI_arburst;
  wire [3:0]M00_AXI_arcache;
  wire [15:0]M00_AXI_arid;
  wire [7:0]M00_AXI_arlen;
  wire [0:0]M00_AXI_arlock;
  wire [2:0]M00_AXI_arprot;
  wire [3:0]M00_AXI_arqos;
  wire [0:0]M00_AXI_arready;
  wire [3:0]M00_AXI_arregion;
  wire [2:0]M00_AXI_arsize;
  wire [15:0]M00_AXI_aruser;
  wire [0:0]M00_AXI_arvalid;
  wire [39:0]M00_AXI_awaddr;
  wire [1:0]M00_AXI_awburst;
  wire [3:0]M00_AXI_awcache;
  wire [15:0]M00_AXI_awid;
  wire [7:0]M00_AXI_awlen;
  wire [0:0]M00_AXI_awlock;
  wire [2:0]M00_AXI_awprot;
  wire [3:0]M00_AXI_awqos;
  wire [0:0]M00_AXI_awready;
  wire [3:0]M00_AXI_awregion;
  wire [2:0]M00_AXI_awsize;
  wire [15:0]M00_AXI_awuser;
  wire [0:0]M00_AXI_awvalid;
  wire [15:0]M00_AXI_bid;
  wire [0:0]M00_AXI_bready;
  wire [1:0]M00_AXI_bresp;
  wire [0:0]M00_AXI_bvalid;
  wire [127:0]M00_AXI_rdata;
  wire [15:0]M00_AXI_rid;
  wire [0:0]M00_AXI_rlast;
  wire [0:0]M00_AXI_rready;
  wire [1:0]M00_AXI_rresp;
  wire [0:0]M00_AXI_rvalid;
  wire [127:0]M00_AXI_wdata;
  wire [0:0]M00_AXI_wlast;
  wire [0:0]M00_AXI_wready;
  wire [15:0]M00_AXI_wstrb;
  wire [0:0]M00_AXI_wvalid;
  wire M01_ACLK;
  wire M01_ARESETN;
  wire [31:0]M01_AXI_araddr;
  wire [1:0]M01_AXI_arburst;
  wire [7:0]M01_AXI_arlen;
  wire M01_AXI_arready;
  wire [2:0]M01_AXI_arsize;
  wire M01_AXI_arvalid;
  wire [31:0]M01_AXI_awaddr;
  wire [1:0]M01_AXI_awburst;
  wire [7:0]M01_AXI_awlen;
  wire M01_AXI_awready;
  wire [2:0]M01_AXI_awsize;
  wire M01_AXI_awvalid;
  wire M01_AXI_bready;
  wire [1:0]M01_AXI_bresp;
  wire M01_AXI_bvalid;
  wire [31:0]M01_AXI_rdata;
  wire M01_AXI_rlast;
  wire M01_AXI_rready;
  wire [1:0]M01_AXI_rresp;
  wire M01_AXI_rvalid;
  wire [31:0]M01_AXI_wdata;
  wire M01_AXI_wlast;
  wire M01_AXI_wready;
  wire [3:0]M01_AXI_wstrb;
  wire M01_AXI_wvalid;
  wire S00_ACLK;
  wire S00_ARESETN;
  wire [39:0]S00_AXI_araddr;
  wire [1:0]S00_AXI_arburst;
  wire [3:0]S00_AXI_arcache;
  wire [15:0]S00_AXI_arid;
  wire [7:0]S00_AXI_arlen;
  wire S00_AXI_arlock;
  wire [2:0]S00_AXI_arprot;
  wire [3:0]S00_AXI_arqos;
  wire S00_AXI_arready;
  wire [2:0]S00_AXI_arsize;
  wire [15:0]S00_AXI_aruser;
  wire S00_AXI_arvalid;
  wire [39:0]S00_AXI_awaddr;
  wire [1:0]S00_AXI_awburst;
  wire [3:0]S00_AXI_awcache;
  wire [15:0]S00_AXI_awid;
  wire [7:0]S00_AXI_awlen;
  wire S00_AXI_awlock;
  wire [2:0]S00_AXI_awprot;
  wire [3:0]S00_AXI_awqos;
  wire S00_AXI_awready;
  wire [2:0]S00_AXI_awsize;
  wire [15:0]S00_AXI_awuser;
  wire S00_AXI_awvalid;
  wire [15:0]S00_AXI_bid;
  wire S00_AXI_bready;
  wire [1:0]S00_AXI_bresp;
  wire S00_AXI_bvalid;
  wire [127:0]S00_AXI_rdata;
  wire [15:0]S00_AXI_rid;
  wire S00_AXI_rlast;
  wire S00_AXI_rready;
  wire [1:0]S00_AXI_rresp;
  wire S00_AXI_rvalid;
  wire [127:0]S00_AXI_wdata;
  wire S00_AXI_wlast;
  wire S00_AXI_wready;
  wire [15:0]S00_AXI_wstrb;
  wire S00_AXI_wvalid;
  wire [39:0]s00_couplers_to_xbar_ARADDR;
  wire [1:0]s00_couplers_to_xbar_ARBURST;
  wire [3:0]s00_couplers_to_xbar_ARCACHE;
  wire [15:0]s00_couplers_to_xbar_ARID;
  wire [7:0]s00_couplers_to_xbar_ARLEN;
  wire s00_couplers_to_xbar_ARLOCK;
  wire [2:0]s00_couplers_to_xbar_ARPROT;
  wire [3:0]s00_couplers_to_xbar_ARQOS;
  wire [0:0]s00_couplers_to_xbar_ARREADY;
  wire [2:0]s00_couplers_to_xbar_ARSIZE;
  wire [15:0]s00_couplers_to_xbar_ARUSER;
  wire s00_couplers_to_xbar_ARVALID;
  wire [39:0]s00_couplers_to_xbar_AWADDR;
  wire [1:0]s00_couplers_to_xbar_AWBURST;
  wire [3:0]s00_couplers_to_xbar_AWCACHE;
  wire [15:0]s00_couplers_to_xbar_AWID;
  wire [7:0]s00_couplers_to_xbar_AWLEN;
  wire s00_couplers_to_xbar_AWLOCK;
  wire [2:0]s00_couplers_to_xbar_AWPROT;
  wire [3:0]s00_couplers_to_xbar_AWQOS;
  wire [0:0]s00_couplers_to_xbar_AWREADY;
  wire [2:0]s00_couplers_to_xbar_AWSIZE;
  wire [15:0]s00_couplers_to_xbar_AWUSER;
  wire s00_couplers_to_xbar_AWVALID;
  wire [15:0]s00_couplers_to_xbar_BID;
  wire s00_couplers_to_xbar_BREADY;
  wire [1:0]s00_couplers_to_xbar_BRESP;
  wire [0:0]s00_couplers_to_xbar_BVALID;
  wire [127:0]s00_couplers_to_xbar_RDATA;
  wire [15:0]s00_couplers_to_xbar_RID;
  wire [0:0]s00_couplers_to_xbar_RLAST;
  wire s00_couplers_to_xbar_RREADY;
  wire [1:0]s00_couplers_to_xbar_RRESP;
  wire [0:0]s00_couplers_to_xbar_RVALID;
  wire [127:0]s00_couplers_to_xbar_WDATA;
  wire s00_couplers_to_xbar_WLAST;
  wire [0:0]s00_couplers_to_xbar_WREADY;
  wire [15:0]s00_couplers_to_xbar_WSTRB;
  wire s00_couplers_to_xbar_WVALID;
  wire [39:0]xbar_to_m00_couplers_ARADDR;
  wire [1:0]xbar_to_m00_couplers_ARBURST;
  wire [3:0]xbar_to_m00_couplers_ARCACHE;
  wire [15:0]xbar_to_m00_couplers_ARID;
  wire [7:0]xbar_to_m00_couplers_ARLEN;
  wire [0:0]xbar_to_m00_couplers_ARLOCK;
  wire [2:0]xbar_to_m00_couplers_ARPROT;
  wire [3:0]xbar_to_m00_couplers_ARQOS;
  wire [0:0]xbar_to_m00_couplers_ARREADY;
  wire [3:0]xbar_to_m00_couplers_ARREGION;
  wire [2:0]xbar_to_m00_couplers_ARSIZE;
  wire [15:0]xbar_to_m00_couplers_ARUSER;
  wire [0:0]xbar_to_m00_couplers_ARVALID;
  wire [39:0]xbar_to_m00_couplers_AWADDR;
  wire [1:0]xbar_to_m00_couplers_AWBURST;
  wire [3:0]xbar_to_m00_couplers_AWCACHE;
  wire [15:0]xbar_to_m00_couplers_AWID;
  wire [7:0]xbar_to_m00_couplers_AWLEN;
  wire [0:0]xbar_to_m00_couplers_AWLOCK;
  wire [2:0]xbar_to_m00_couplers_AWPROT;
  wire [3:0]xbar_to_m00_couplers_AWQOS;
  wire [0:0]xbar_to_m00_couplers_AWREADY;
  wire [3:0]xbar_to_m00_couplers_AWREGION;
  wire [2:0]xbar_to_m00_couplers_AWSIZE;
  wire [15:0]xbar_to_m00_couplers_AWUSER;
  wire [0:0]xbar_to_m00_couplers_AWVALID;
  wire [15:0]xbar_to_m00_couplers_BID;
  wire [0:0]xbar_to_m00_couplers_BREADY;
  wire [1:0]xbar_to_m00_couplers_BRESP;
  wire [0:0]xbar_to_m00_couplers_BVALID;
  wire [127:0]xbar_to_m00_couplers_RDATA;
  wire [15:0]xbar_to_m00_couplers_RID;
  wire [0:0]xbar_to_m00_couplers_RLAST;
  wire [0:0]xbar_to_m00_couplers_RREADY;
  wire [1:0]xbar_to_m00_couplers_RRESP;
  wire [0:0]xbar_to_m00_couplers_RVALID;
  wire [127:0]xbar_to_m00_couplers_WDATA;
  wire [0:0]xbar_to_m00_couplers_WLAST;
  wire [0:0]xbar_to_m00_couplers_WREADY;
  wire [15:0]xbar_to_m00_couplers_WSTRB;
  wire [0:0]xbar_to_m00_couplers_WVALID;
  wire [79:40]xbar_to_m01_couplers_ARADDR;
  wire [3:2]xbar_to_m01_couplers_ARBURST;
  wire [7:4]xbar_to_m01_couplers_ARCACHE;
  wire [31:16]xbar_to_m01_couplers_ARID;
  wire [15:8]xbar_to_m01_couplers_ARLEN;
  wire [1:1]xbar_to_m01_couplers_ARLOCK;
  wire [5:3]xbar_to_m01_couplers_ARPROT;
  wire [7:4]xbar_to_m01_couplers_ARQOS;
  wire xbar_to_m01_couplers_ARREADY;
  wire [7:4]xbar_to_m01_couplers_ARREGION;
  wire [5:3]xbar_to_m01_couplers_ARSIZE;
  wire [31:16]xbar_to_m01_couplers_ARUSER;
  wire [1:1]xbar_to_m01_couplers_ARVALID;
  wire [79:40]xbar_to_m01_couplers_AWADDR;
  wire [3:2]xbar_to_m01_couplers_AWBURST;
  wire [7:4]xbar_to_m01_couplers_AWCACHE;
  wire [31:16]xbar_to_m01_couplers_AWID;
  wire [15:8]xbar_to_m01_couplers_AWLEN;
  wire [1:1]xbar_to_m01_couplers_AWLOCK;
  wire [5:3]xbar_to_m01_couplers_AWPROT;
  wire [7:4]xbar_to_m01_couplers_AWQOS;
  wire xbar_to_m01_couplers_AWREADY;
  wire [7:4]xbar_to_m01_couplers_AWREGION;
  wire [5:3]xbar_to_m01_couplers_AWSIZE;
  wire [31:16]xbar_to_m01_couplers_AWUSER;
  wire [1:1]xbar_to_m01_couplers_AWVALID;
  wire [15:0]xbar_to_m01_couplers_BID;
  wire [1:1]xbar_to_m01_couplers_BREADY;
  wire [1:0]xbar_to_m01_couplers_BRESP;
  wire xbar_to_m01_couplers_BVALID;
  wire [127:0]xbar_to_m01_couplers_RDATA;
  wire [15:0]xbar_to_m01_couplers_RID;
  wire xbar_to_m01_couplers_RLAST;
  wire [1:1]xbar_to_m01_couplers_RREADY;
  wire [1:0]xbar_to_m01_couplers_RRESP;
  wire xbar_to_m01_couplers_RVALID;
  wire [255:128]xbar_to_m01_couplers_WDATA;
  wire [1:1]xbar_to_m01_couplers_WLAST;
  wire xbar_to_m01_couplers_WREADY;
  wire [31:16]xbar_to_m01_couplers_WSTRB;
  wire [1:1]xbar_to_m01_couplers_WVALID;

  m00_couplers_imp_1BMDBXH m00_couplers
       (.M_ACLK(M00_ACLK),
        .M_ARESETN(M00_ARESETN),
        .M_AXI_araddr(M00_AXI_araddr),
        .M_AXI_arburst(M00_AXI_arburst),
        .M_AXI_arcache(M00_AXI_arcache),
        .M_AXI_arid(M00_AXI_arid),
        .M_AXI_arlen(M00_AXI_arlen),
        .M_AXI_arlock(M00_AXI_arlock),
        .M_AXI_arprot(M00_AXI_arprot),
        .M_AXI_arqos(M00_AXI_arqos),
        .M_AXI_arready(M00_AXI_arready),
        .M_AXI_arregion(M00_AXI_arregion),
        .M_AXI_arsize(M00_AXI_arsize),
        .M_AXI_aruser(M00_AXI_aruser),
        .M_AXI_arvalid(M00_AXI_arvalid),
        .M_AXI_awaddr(M00_AXI_awaddr),
        .M_AXI_awburst(M00_AXI_awburst),
        .M_AXI_awcache(M00_AXI_awcache),
        .M_AXI_awid(M00_AXI_awid),
        .M_AXI_awlen(M00_AXI_awlen),
        .M_AXI_awlock(M00_AXI_awlock),
        .M_AXI_awprot(M00_AXI_awprot),
        .M_AXI_awqos(M00_AXI_awqos),
        .M_AXI_awready(M00_AXI_awready),
        .M_AXI_awregion(M00_AXI_awregion),
        .M_AXI_awsize(M00_AXI_awsize),
        .M_AXI_awuser(M00_AXI_awuser),
        .M_AXI_awvalid(M00_AXI_awvalid),
        .M_AXI_bid(M00_AXI_bid),
        .M_AXI_bready(M00_AXI_bready),
        .M_AXI_bresp(M00_AXI_bresp),
        .M_AXI_bvalid(M00_AXI_bvalid),
        .M_AXI_rdata(M00_AXI_rdata),
        .M_AXI_rid(M00_AXI_rid),
        .M_AXI_rlast(M00_AXI_rlast),
        .M_AXI_rready(M00_AXI_rready),
        .M_AXI_rresp(M00_AXI_rresp),
        .M_AXI_rvalid(M00_AXI_rvalid),
        .M_AXI_wdata(M00_AXI_wdata),
        .M_AXI_wlast(M00_AXI_wlast),
        .M_AXI_wready(M00_AXI_wready),
        .M_AXI_wstrb(M00_AXI_wstrb),
        .M_AXI_wvalid(M00_AXI_wvalid),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(xbar_to_m00_couplers_ARADDR),
        .S_AXI_arburst(xbar_to_m00_couplers_ARBURST),
        .S_AXI_arcache(xbar_to_m00_couplers_ARCACHE),
        .S_AXI_arid(xbar_to_m00_couplers_ARID),
        .S_AXI_arlen(xbar_to_m00_couplers_ARLEN),
        .S_AXI_arlock(xbar_to_m00_couplers_ARLOCK),
        .S_AXI_arprot(xbar_to_m00_couplers_ARPROT),
        .S_AXI_arqos(xbar_to_m00_couplers_ARQOS),
        .S_AXI_arready(xbar_to_m00_couplers_ARREADY),
        .S_AXI_arregion(xbar_to_m00_couplers_ARREGION),
        .S_AXI_arsize(xbar_to_m00_couplers_ARSIZE),
        .S_AXI_aruser(xbar_to_m00_couplers_ARUSER),
        .S_AXI_arvalid(xbar_to_m00_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m00_couplers_AWADDR),
        .S_AXI_awburst(xbar_to_m00_couplers_AWBURST),
        .S_AXI_awcache(xbar_to_m00_couplers_AWCACHE),
        .S_AXI_awid(xbar_to_m00_couplers_AWID),
        .S_AXI_awlen(xbar_to_m00_couplers_AWLEN),
        .S_AXI_awlock(xbar_to_m00_couplers_AWLOCK),
        .S_AXI_awprot(xbar_to_m00_couplers_AWPROT),
        .S_AXI_awqos(xbar_to_m00_couplers_AWQOS),
        .S_AXI_awready(xbar_to_m00_couplers_AWREADY),
        .S_AXI_awregion(xbar_to_m00_couplers_AWREGION),
        .S_AXI_awsize(xbar_to_m00_couplers_AWSIZE),
        .S_AXI_awuser(xbar_to_m00_couplers_AWUSER),
        .S_AXI_awvalid(xbar_to_m00_couplers_AWVALID),
        .S_AXI_bid(xbar_to_m00_couplers_BID),
        .S_AXI_bready(xbar_to_m00_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m00_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m00_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m00_couplers_RDATA),
        .S_AXI_rid(xbar_to_m00_couplers_RID),
        .S_AXI_rlast(xbar_to_m00_couplers_RLAST),
        .S_AXI_rready(xbar_to_m00_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m00_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m00_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m00_couplers_WDATA),
        .S_AXI_wlast(xbar_to_m00_couplers_WLAST),
        .S_AXI_wready(xbar_to_m00_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m00_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m00_couplers_WVALID));
  m01_couplers_imp_1GB8605 m01_couplers
       (.M_ACLK(M01_ACLK),
        .M_ARESETN(M01_ARESETN),
        .M_AXI_araddr(M01_AXI_araddr),
        .M_AXI_arburst(M01_AXI_arburst),
        .M_AXI_arlen(M01_AXI_arlen),
        .M_AXI_arready(M01_AXI_arready),
        .M_AXI_arsize(M01_AXI_arsize),
        .M_AXI_arvalid(M01_AXI_arvalid),
        .M_AXI_awaddr(M01_AXI_awaddr),
        .M_AXI_awburst(M01_AXI_awburst),
        .M_AXI_awlen(M01_AXI_awlen),
        .M_AXI_awready(M01_AXI_awready),
        .M_AXI_awsize(M01_AXI_awsize),
        .M_AXI_awvalid(M01_AXI_awvalid),
        .M_AXI_bready(M01_AXI_bready),
        .M_AXI_bresp(M01_AXI_bresp),
        .M_AXI_bvalid(M01_AXI_bvalid),
        .M_AXI_rdata(M01_AXI_rdata),
        .M_AXI_rlast(M01_AXI_rlast),
        .M_AXI_rready(M01_AXI_rready),
        .M_AXI_rresp(M01_AXI_rresp),
        .M_AXI_rvalid(M01_AXI_rvalid),
        .M_AXI_wdata(M01_AXI_wdata),
        .M_AXI_wlast(M01_AXI_wlast),
        .M_AXI_wready(M01_AXI_wready),
        .M_AXI_wstrb(M01_AXI_wstrb),
        .M_AXI_wvalid(M01_AXI_wvalid),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(xbar_to_m01_couplers_ARADDR),
        .S_AXI_arburst(xbar_to_m01_couplers_ARBURST),
        .S_AXI_arcache(xbar_to_m01_couplers_ARCACHE),
        .S_AXI_arid(xbar_to_m01_couplers_ARID),
        .S_AXI_arlen(xbar_to_m01_couplers_ARLEN),
        .S_AXI_arlock(xbar_to_m01_couplers_ARLOCK),
        .S_AXI_arprot(xbar_to_m01_couplers_ARPROT),
        .S_AXI_arqos(xbar_to_m01_couplers_ARQOS),
        .S_AXI_arready(xbar_to_m01_couplers_ARREADY),
        .S_AXI_arregion(xbar_to_m01_couplers_ARREGION),
        .S_AXI_arsize(xbar_to_m01_couplers_ARSIZE),
        .S_AXI_aruser(xbar_to_m01_couplers_ARUSER),
        .S_AXI_arvalid(xbar_to_m01_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m01_couplers_AWADDR),
        .S_AXI_awburst(xbar_to_m01_couplers_AWBURST),
        .S_AXI_awcache(xbar_to_m01_couplers_AWCACHE),
        .S_AXI_awid(xbar_to_m01_couplers_AWID),
        .S_AXI_awlen(xbar_to_m01_couplers_AWLEN),
        .S_AXI_awlock(xbar_to_m01_couplers_AWLOCK),
        .S_AXI_awprot(xbar_to_m01_couplers_AWPROT),
        .S_AXI_awqos(xbar_to_m01_couplers_AWQOS),
        .S_AXI_awready(xbar_to_m01_couplers_AWREADY),
        .S_AXI_awregion(xbar_to_m01_couplers_AWREGION),
        .S_AXI_awsize(xbar_to_m01_couplers_AWSIZE),
        .S_AXI_awuser(xbar_to_m01_couplers_AWUSER),
        .S_AXI_awvalid(xbar_to_m01_couplers_AWVALID),
        .S_AXI_bid(xbar_to_m01_couplers_BID),
        .S_AXI_bready(xbar_to_m01_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m01_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m01_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m01_couplers_RDATA),
        .S_AXI_rid(xbar_to_m01_couplers_RID),
        .S_AXI_rlast(xbar_to_m01_couplers_RLAST),
        .S_AXI_rready(xbar_to_m01_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m01_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m01_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m01_couplers_WDATA),
        .S_AXI_wlast(xbar_to_m01_couplers_WLAST),
        .S_AXI_wready(xbar_to_m01_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m01_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m01_couplers_WVALID));
  s00_couplers_imp_1ERPYLY s00_couplers
       (.M_ACLK(ACLK),
        .M_ARESETN(ARESETN),
        .M_AXI_araddr(s00_couplers_to_xbar_ARADDR),
        .M_AXI_arburst(s00_couplers_to_xbar_ARBURST),
        .M_AXI_arcache(s00_couplers_to_xbar_ARCACHE),
        .M_AXI_arid(s00_couplers_to_xbar_ARID),
        .M_AXI_arlen(s00_couplers_to_xbar_ARLEN),
        .M_AXI_arlock(s00_couplers_to_xbar_ARLOCK),
        .M_AXI_arprot(s00_couplers_to_xbar_ARPROT),
        .M_AXI_arqos(s00_couplers_to_xbar_ARQOS),
        .M_AXI_arready(s00_couplers_to_xbar_ARREADY),
        .M_AXI_arsize(s00_couplers_to_xbar_ARSIZE),
        .M_AXI_aruser(s00_couplers_to_xbar_ARUSER),
        .M_AXI_arvalid(s00_couplers_to_xbar_ARVALID),
        .M_AXI_awaddr(s00_couplers_to_xbar_AWADDR),
        .M_AXI_awburst(s00_couplers_to_xbar_AWBURST),
        .M_AXI_awcache(s00_couplers_to_xbar_AWCACHE),
        .M_AXI_awid(s00_couplers_to_xbar_AWID),
        .M_AXI_awlen(s00_couplers_to_xbar_AWLEN),
        .M_AXI_awlock(s00_couplers_to_xbar_AWLOCK),
        .M_AXI_awprot(s00_couplers_to_xbar_AWPROT),
        .M_AXI_awqos(s00_couplers_to_xbar_AWQOS),
        .M_AXI_awready(s00_couplers_to_xbar_AWREADY),
        .M_AXI_awsize(s00_couplers_to_xbar_AWSIZE),
        .M_AXI_awuser(s00_couplers_to_xbar_AWUSER),
        .M_AXI_awvalid(s00_couplers_to_xbar_AWVALID),
        .M_AXI_bid(s00_couplers_to_xbar_BID),
        .M_AXI_bready(s00_couplers_to_xbar_BREADY),
        .M_AXI_bresp(s00_couplers_to_xbar_BRESP),
        .M_AXI_bvalid(s00_couplers_to_xbar_BVALID),
        .M_AXI_rdata(s00_couplers_to_xbar_RDATA),
        .M_AXI_rid(s00_couplers_to_xbar_RID),
        .M_AXI_rlast(s00_couplers_to_xbar_RLAST),
        .M_AXI_rready(s00_couplers_to_xbar_RREADY),
        .M_AXI_rresp(s00_couplers_to_xbar_RRESP),
        .M_AXI_rvalid(s00_couplers_to_xbar_RVALID),
        .M_AXI_wdata(s00_couplers_to_xbar_WDATA),
        .M_AXI_wlast(s00_couplers_to_xbar_WLAST),
        .M_AXI_wready(s00_couplers_to_xbar_WREADY),
        .M_AXI_wstrb(s00_couplers_to_xbar_WSTRB),
        .M_AXI_wvalid(s00_couplers_to_xbar_WVALID),
        .S_ACLK(S00_ACLK),
        .S_ARESETN(S00_ARESETN),
        .S_AXI_araddr(S00_AXI_araddr),
        .S_AXI_arburst(S00_AXI_arburst),
        .S_AXI_arcache(S00_AXI_arcache),
        .S_AXI_arid(S00_AXI_arid),
        .S_AXI_arlen(S00_AXI_arlen),
        .S_AXI_arlock(S00_AXI_arlock),
        .S_AXI_arprot(S00_AXI_arprot),
        .S_AXI_arqos(S00_AXI_arqos),
        .S_AXI_arready(S00_AXI_arready),
        .S_AXI_arsize(S00_AXI_arsize),
        .S_AXI_aruser(S00_AXI_aruser),
        .S_AXI_arvalid(S00_AXI_arvalid),
        .S_AXI_awaddr(S00_AXI_awaddr),
        .S_AXI_awburst(S00_AXI_awburst),
        .S_AXI_awcache(S00_AXI_awcache),
        .S_AXI_awid(S00_AXI_awid),
        .S_AXI_awlen(S00_AXI_awlen),
        .S_AXI_awlock(S00_AXI_awlock),
        .S_AXI_awprot(S00_AXI_awprot),
        .S_AXI_awqos(S00_AXI_awqos),
        .S_AXI_awready(S00_AXI_awready),
        .S_AXI_awsize(S00_AXI_awsize),
        .S_AXI_awuser(S00_AXI_awuser),
        .S_AXI_awvalid(S00_AXI_awvalid),
        .S_AXI_bid(S00_AXI_bid),
        .S_AXI_bready(S00_AXI_bready),
        .S_AXI_bresp(S00_AXI_bresp),
        .S_AXI_bvalid(S00_AXI_bvalid),
        .S_AXI_rdata(S00_AXI_rdata),
        .S_AXI_rid(S00_AXI_rid),
        .S_AXI_rlast(S00_AXI_rlast),
        .S_AXI_rready(S00_AXI_rready),
        .S_AXI_rresp(S00_AXI_rresp),
        .S_AXI_rvalid(S00_AXI_rvalid),
        .S_AXI_wdata(S00_AXI_wdata),
        .S_AXI_wlast(S00_AXI_wlast),
        .S_AXI_wready(S00_AXI_wready),
        .S_AXI_wstrb(S00_AXI_wstrb),
        .S_AXI_wvalid(S00_AXI_wvalid));
  vitis_design_interconnect_axihpm0fpd_upgraded_ipi_imp_xbar_0 xbar
       (.aclk(ACLK),
        .aresetn(ARESETN),
        .m_axi_araddr({xbar_to_m01_couplers_ARADDR,xbar_to_m00_couplers_ARADDR}),
        .m_axi_arburst({xbar_to_m01_couplers_ARBURST,xbar_to_m00_couplers_ARBURST}),
        .m_axi_arcache({xbar_to_m01_couplers_ARCACHE,xbar_to_m00_couplers_ARCACHE}),
        .m_axi_arid({xbar_to_m01_couplers_ARID,xbar_to_m00_couplers_ARID}),
        .m_axi_arlen({xbar_to_m01_couplers_ARLEN,xbar_to_m00_couplers_ARLEN}),
        .m_axi_arlock({xbar_to_m01_couplers_ARLOCK,xbar_to_m00_couplers_ARLOCK}),
        .m_axi_arprot({xbar_to_m01_couplers_ARPROT,xbar_to_m00_couplers_ARPROT}),
        .m_axi_arqos({xbar_to_m01_couplers_ARQOS,xbar_to_m00_couplers_ARQOS}),
        .m_axi_arready({xbar_to_m01_couplers_ARREADY,xbar_to_m00_couplers_ARREADY}),
        .m_axi_arregion({xbar_to_m01_couplers_ARREGION,xbar_to_m00_couplers_ARREGION}),
        .m_axi_arsize({xbar_to_m01_couplers_ARSIZE,xbar_to_m00_couplers_ARSIZE}),
        .m_axi_aruser({xbar_to_m01_couplers_ARUSER,xbar_to_m00_couplers_ARUSER}),
        .m_axi_arvalid({xbar_to_m01_couplers_ARVALID,xbar_to_m00_couplers_ARVALID}),
        .m_axi_awaddr({xbar_to_m01_couplers_AWADDR,xbar_to_m00_couplers_AWADDR}),
        .m_axi_awburst({xbar_to_m01_couplers_AWBURST,xbar_to_m00_couplers_AWBURST}),
        .m_axi_awcache({xbar_to_m01_couplers_AWCACHE,xbar_to_m00_couplers_AWCACHE}),
        .m_axi_awid({xbar_to_m01_couplers_AWID,xbar_to_m00_couplers_AWID}),
        .m_axi_awlen({xbar_to_m01_couplers_AWLEN,xbar_to_m00_couplers_AWLEN}),
        .m_axi_awlock({xbar_to_m01_couplers_AWLOCK,xbar_to_m00_couplers_AWLOCK}),
        .m_axi_awprot({xbar_to_m01_couplers_AWPROT,xbar_to_m00_couplers_AWPROT}),
        .m_axi_awqos({xbar_to_m01_couplers_AWQOS,xbar_to_m00_couplers_AWQOS}),
        .m_axi_awready({xbar_to_m01_couplers_AWREADY,xbar_to_m00_couplers_AWREADY}),
        .m_axi_awregion({xbar_to_m01_couplers_AWREGION,xbar_to_m00_couplers_AWREGION}),
        .m_axi_awsize({xbar_to_m01_couplers_AWSIZE,xbar_to_m00_couplers_AWSIZE}),
        .m_axi_awuser({xbar_to_m01_couplers_AWUSER,xbar_to_m00_couplers_AWUSER}),
        .m_axi_awvalid({xbar_to_m01_couplers_AWVALID,xbar_to_m00_couplers_AWVALID}),
        .m_axi_bid({xbar_to_m01_couplers_BID,xbar_to_m00_couplers_BID}),
        .m_axi_bready({xbar_to_m01_couplers_BREADY,xbar_to_m00_couplers_BREADY}),
        .m_axi_bresp({xbar_to_m01_couplers_BRESP,xbar_to_m00_couplers_BRESP}),
        .m_axi_bvalid({xbar_to_m01_couplers_BVALID,xbar_to_m00_couplers_BVALID}),
        .m_axi_rdata({xbar_to_m01_couplers_RDATA,xbar_to_m00_couplers_RDATA}),
        .m_axi_rid({xbar_to_m01_couplers_RID,xbar_to_m00_couplers_RID}),
        .m_axi_rlast({xbar_to_m01_couplers_RLAST,xbar_to_m00_couplers_RLAST}),
        .m_axi_rready({xbar_to_m01_couplers_RREADY,xbar_to_m00_couplers_RREADY}),
        .m_axi_rresp({xbar_to_m01_couplers_RRESP,xbar_to_m00_couplers_RRESP}),
        .m_axi_rvalid({xbar_to_m01_couplers_RVALID,xbar_to_m00_couplers_RVALID}),
        .m_axi_wdata({xbar_to_m01_couplers_WDATA,xbar_to_m00_couplers_WDATA}),
        .m_axi_wlast({xbar_to_m01_couplers_WLAST,xbar_to_m00_couplers_WLAST}),
        .m_axi_wready({xbar_to_m01_couplers_WREADY,xbar_to_m00_couplers_WREADY}),
        .m_axi_wstrb({xbar_to_m01_couplers_WSTRB,xbar_to_m00_couplers_WSTRB}),
        .m_axi_wvalid({xbar_to_m01_couplers_WVALID,xbar_to_m00_couplers_WVALID}),
        .s_axi_araddr(s00_couplers_to_xbar_ARADDR),
        .s_axi_arburst(s00_couplers_to_xbar_ARBURST),
        .s_axi_arcache(s00_couplers_to_xbar_ARCACHE),
        .s_axi_arid(s00_couplers_to_xbar_ARID),
        .s_axi_arlen(s00_couplers_to_xbar_ARLEN),
        .s_axi_arlock(s00_couplers_to_xbar_ARLOCK),
        .s_axi_arprot(s00_couplers_to_xbar_ARPROT),
        .s_axi_arqos(s00_couplers_to_xbar_ARQOS),
        .s_axi_arready(s00_couplers_to_xbar_ARREADY),
        .s_axi_arsize(s00_couplers_to_xbar_ARSIZE),
        .s_axi_aruser(s00_couplers_to_xbar_ARUSER),
        .s_axi_arvalid(s00_couplers_to_xbar_ARVALID),
        .s_axi_awaddr(s00_couplers_to_xbar_AWADDR),
        .s_axi_awburst(s00_couplers_to_xbar_AWBURST),
        .s_axi_awcache(s00_couplers_to_xbar_AWCACHE),
        .s_axi_awid(s00_couplers_to_xbar_AWID),
        .s_axi_awlen(s00_couplers_to_xbar_AWLEN),
        .s_axi_awlock(s00_couplers_to_xbar_AWLOCK),
        .s_axi_awprot(s00_couplers_to_xbar_AWPROT),
        .s_axi_awqos(s00_couplers_to_xbar_AWQOS),
        .s_axi_awready(s00_couplers_to_xbar_AWREADY),
        .s_axi_awsize(s00_couplers_to_xbar_AWSIZE),
        .s_axi_awuser(s00_couplers_to_xbar_AWUSER),
        .s_axi_awvalid(s00_couplers_to_xbar_AWVALID),
        .s_axi_bid(s00_couplers_to_xbar_BID),
        .s_axi_bready(s00_couplers_to_xbar_BREADY),
        .s_axi_bresp(s00_couplers_to_xbar_BRESP),
        .s_axi_bvalid(s00_couplers_to_xbar_BVALID),
        .s_axi_rdata(s00_couplers_to_xbar_RDATA),
        .s_axi_rid(s00_couplers_to_xbar_RID),
        .s_axi_rlast(s00_couplers_to_xbar_RLAST),
        .s_axi_rready(s00_couplers_to_xbar_RREADY),
        .s_axi_rresp(s00_couplers_to_xbar_RRESP),
        .s_axi_rvalid(s00_couplers_to_xbar_RVALID),
        .s_axi_wdata(s00_couplers_to_xbar_WDATA),
        .s_axi_wlast(s00_couplers_to_xbar_WLAST),
        .s_axi_wready(s00_couplers_to_xbar_WREADY),
        .s_axi_wstrb(s00_couplers_to_xbar_WSTRB),
        .s_axi_wvalid(s00_couplers_to_xbar_WVALID));
endmodule

module vitis_design_interconnect_axilite_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_araddr,
    M00_AXI_arready,
    M00_AXI_arvalid,
    M00_AXI_awaddr,
    M00_AXI_awready,
    M00_AXI_awvalid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_rdata,
    M00_AXI_rready,
    M00_AXI_rresp,
    M00_AXI_rvalid,
    M00_AXI_wdata,
    M00_AXI_wready,
    M00_AXI_wstrb,
    M00_AXI_wvalid,
    M01_ACLK,
    M01_ARESETN,
    M01_AXI_araddr,
    M01_AXI_arprot,
    M01_AXI_arready,
    M01_AXI_arvalid,
    M01_AXI_awaddr,
    M01_AXI_awprot,
    M01_AXI_awready,
    M01_AXI_awvalid,
    M01_AXI_bready,
    M01_AXI_bresp,
    M01_AXI_bvalid,
    M01_AXI_rdata,
    M01_AXI_rready,
    M01_AXI_rresp,
    M01_AXI_rvalid,
    M01_AXI_wdata,
    M01_AXI_wready,
    M01_AXI_wstrb,
    M01_AXI_wvalid,
    M02_ACLK,
    M02_ARESETN,
    M02_AXI_araddr,
    M02_AXI_arburst,
    M02_AXI_arcache,
    M02_AXI_arid,
    M02_AXI_arlen,
    M02_AXI_arlock,
    M02_AXI_arprot,
    M02_AXI_arqos,
    M02_AXI_arready,
    M02_AXI_arregion,
    M02_AXI_arsize,
    M02_AXI_aruser,
    M02_AXI_arvalid,
    M02_AXI_awaddr,
    M02_AXI_awburst,
    M02_AXI_awcache,
    M02_AXI_awid,
    M02_AXI_awlen,
    M02_AXI_awlock,
    M02_AXI_awprot,
    M02_AXI_awqos,
    M02_AXI_awready,
    M02_AXI_awregion,
    M02_AXI_awsize,
    M02_AXI_awuser,
    M02_AXI_awvalid,
    M02_AXI_bid,
    M02_AXI_bready,
    M02_AXI_bresp,
    M02_AXI_bvalid,
    M02_AXI_rdata,
    M02_AXI_rid,
    M02_AXI_rlast,
    M02_AXI_rready,
    M02_AXI_rresp,
    M02_AXI_rvalid,
    M02_AXI_wdata,
    M02_AXI_wlast,
    M02_AXI_wready,
    M02_AXI_wstrb,
    M02_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arid,
    S00_AXI_arlen,
    S00_AXI_arlock,
    S00_AXI_arprot,
    S00_AXI_arqos,
    S00_AXI_arready,
    S00_AXI_arsize,
    S00_AXI_aruser,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awid,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awsize,
    S00_AXI_awuser,
    S00_AXI_awvalid,
    S00_AXI_bid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rdata,
    S00_AXI_rid,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid,
    S00_AXI_wdata,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid);
  input ACLK;
  input ARESETN;
  input M00_ACLK;
  input M00_ARESETN;
  output [39:0]M00_AXI_araddr;
  input M00_AXI_arready;
  output M00_AXI_arvalid;
  output [39:0]M00_AXI_awaddr;
  input M00_AXI_awready;
  output M00_AXI_awvalid;
  output M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input M00_AXI_bvalid;
  input [31:0]M00_AXI_rdata;
  output M00_AXI_rready;
  input [1:0]M00_AXI_rresp;
  input M00_AXI_rvalid;
  output [31:0]M00_AXI_wdata;
  input M00_AXI_wready;
  output [3:0]M00_AXI_wstrb;
  output M00_AXI_wvalid;
  input M01_ACLK;
  input M01_ARESETN;
  output [6:0]M01_AXI_araddr;
  output [2:0]M01_AXI_arprot;
  input M01_AXI_arready;
  output M01_AXI_arvalid;
  output [6:0]M01_AXI_awaddr;
  output [2:0]M01_AXI_awprot;
  input M01_AXI_awready;
  output M01_AXI_awvalid;
  output M01_AXI_bready;
  input [1:0]M01_AXI_bresp;
  input M01_AXI_bvalid;
  input [31:0]M01_AXI_rdata;
  output M01_AXI_rready;
  input [1:0]M01_AXI_rresp;
  input M01_AXI_rvalid;
  output [31:0]M01_AXI_wdata;
  input M01_AXI_wready;
  output [3:0]M01_AXI_wstrb;
  output M01_AXI_wvalid;
  input M02_ACLK;
  input M02_ARESETN;
  output [39:0]M02_AXI_araddr;
  output [1:0]M02_AXI_arburst;
  output [3:0]M02_AXI_arcache;
  output [15:0]M02_AXI_arid;
  output [7:0]M02_AXI_arlen;
  output [0:0]M02_AXI_arlock;
  output [2:0]M02_AXI_arprot;
  output [3:0]M02_AXI_arqos;
  input M02_AXI_arready;
  output [3:0]M02_AXI_arregion;
  output [2:0]M02_AXI_arsize;
  output [15:0]M02_AXI_aruser;
  output M02_AXI_arvalid;
  output [39:0]M02_AXI_awaddr;
  output [1:0]M02_AXI_awburst;
  output [3:0]M02_AXI_awcache;
  output [15:0]M02_AXI_awid;
  output [7:0]M02_AXI_awlen;
  output [0:0]M02_AXI_awlock;
  output [2:0]M02_AXI_awprot;
  output [3:0]M02_AXI_awqos;
  input M02_AXI_awready;
  output [3:0]M02_AXI_awregion;
  output [2:0]M02_AXI_awsize;
  output [15:0]M02_AXI_awuser;
  output M02_AXI_awvalid;
  input [15:0]M02_AXI_bid;
  output M02_AXI_bready;
  input [1:0]M02_AXI_bresp;
  input M02_AXI_bvalid;
  input [31:0]M02_AXI_rdata;
  input [15:0]M02_AXI_rid;
  input M02_AXI_rlast;
  output M02_AXI_rready;
  input [1:0]M02_AXI_rresp;
  input M02_AXI_rvalid;
  output [31:0]M02_AXI_wdata;
  output M02_AXI_wlast;
  input M02_AXI_wready;
  output [3:0]M02_AXI_wstrb;
  output M02_AXI_wvalid;
  input S00_ACLK;
  input S00_ARESETN;
  input [39:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [15:0]S00_AXI_arid;
  input [7:0]S00_AXI_arlen;
  input S00_AXI_arlock;
  input [2:0]S00_AXI_arprot;
  input [3:0]S00_AXI_arqos;
  output S00_AXI_arready;
  input [2:0]S00_AXI_arsize;
  input [15:0]S00_AXI_aruser;
  input S00_AXI_arvalid;
  input [39:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [15:0]S00_AXI_awid;
  input [7:0]S00_AXI_awlen;
  input S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [2:0]S00_AXI_awsize;
  input [15:0]S00_AXI_awuser;
  input S00_AXI_awvalid;
  output [15:0]S00_AXI_bid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  output [31:0]S00_AXI_rdata;
  output [15:0]S00_AXI_rid;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;
  input [31:0]S00_AXI_wdata;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [3:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;

  wire ACLK;
  wire ARESETN;
  wire M00_ACLK;
  wire M00_ARESETN;
  wire [39:0]M00_AXI_araddr;
  wire M00_AXI_arready;
  wire M00_AXI_arvalid;
  wire [39:0]M00_AXI_awaddr;
  wire M00_AXI_awready;
  wire M00_AXI_awvalid;
  wire M00_AXI_bready;
  wire [1:0]M00_AXI_bresp;
  wire M00_AXI_bvalid;
  wire [31:0]M00_AXI_rdata;
  wire M00_AXI_rready;
  wire [1:0]M00_AXI_rresp;
  wire M00_AXI_rvalid;
  wire [31:0]M00_AXI_wdata;
  wire M00_AXI_wready;
  wire [3:0]M00_AXI_wstrb;
  wire M00_AXI_wvalid;
  wire M01_ACLK;
  wire M01_ARESETN;
  wire [6:0]M01_AXI_araddr;
  wire [2:0]M01_AXI_arprot;
  wire M01_AXI_arready;
  wire M01_AXI_arvalid;
  wire [6:0]M01_AXI_awaddr;
  wire [2:0]M01_AXI_awprot;
  wire M01_AXI_awready;
  wire M01_AXI_awvalid;
  wire M01_AXI_bready;
  wire [1:0]M01_AXI_bresp;
  wire M01_AXI_bvalid;
  wire [31:0]M01_AXI_rdata;
  wire M01_AXI_rready;
  wire [1:0]M01_AXI_rresp;
  wire M01_AXI_rvalid;
  wire [31:0]M01_AXI_wdata;
  wire M01_AXI_wready;
  wire [3:0]M01_AXI_wstrb;
  wire M01_AXI_wvalid;
  wire M02_ACLK;
  wire M02_ARESETN;
  wire [39:0]M02_AXI_araddr;
  wire [1:0]M02_AXI_arburst;
  wire [3:0]M02_AXI_arcache;
  wire [15:0]M02_AXI_arid;
  wire [7:0]M02_AXI_arlen;
  wire [0:0]M02_AXI_arlock;
  wire [2:0]M02_AXI_arprot;
  wire [3:0]M02_AXI_arqos;
  wire M02_AXI_arready;
  wire [3:0]M02_AXI_arregion;
  wire [2:0]M02_AXI_arsize;
  wire [15:0]M02_AXI_aruser;
  wire M02_AXI_arvalid;
  wire [39:0]M02_AXI_awaddr;
  wire [1:0]M02_AXI_awburst;
  wire [3:0]M02_AXI_awcache;
  wire [15:0]M02_AXI_awid;
  wire [7:0]M02_AXI_awlen;
  wire [0:0]M02_AXI_awlock;
  wire [2:0]M02_AXI_awprot;
  wire [3:0]M02_AXI_awqos;
  wire M02_AXI_awready;
  wire [3:0]M02_AXI_awregion;
  wire [2:0]M02_AXI_awsize;
  wire [15:0]M02_AXI_awuser;
  wire M02_AXI_awvalid;
  wire [15:0]M02_AXI_bid;
  wire M02_AXI_bready;
  wire [1:0]M02_AXI_bresp;
  wire M02_AXI_bvalid;
  wire [31:0]M02_AXI_rdata;
  wire [15:0]M02_AXI_rid;
  wire M02_AXI_rlast;
  wire M02_AXI_rready;
  wire [1:0]M02_AXI_rresp;
  wire M02_AXI_rvalid;
  wire [31:0]M02_AXI_wdata;
  wire M02_AXI_wlast;
  wire M02_AXI_wready;
  wire [3:0]M02_AXI_wstrb;
  wire M02_AXI_wvalid;
  wire S00_ACLK;
  wire S00_ARESETN;
  wire [39:0]S00_AXI_araddr;
  wire [1:0]S00_AXI_arburst;
  wire [3:0]S00_AXI_arcache;
  wire [15:0]S00_AXI_arid;
  wire [7:0]S00_AXI_arlen;
  wire S00_AXI_arlock;
  wire [2:0]S00_AXI_arprot;
  wire [3:0]S00_AXI_arqos;
  wire S00_AXI_arready;
  wire [2:0]S00_AXI_arsize;
  wire [15:0]S00_AXI_aruser;
  wire S00_AXI_arvalid;
  wire [39:0]S00_AXI_awaddr;
  wire [1:0]S00_AXI_awburst;
  wire [3:0]S00_AXI_awcache;
  wire [15:0]S00_AXI_awid;
  wire [7:0]S00_AXI_awlen;
  wire S00_AXI_awlock;
  wire [2:0]S00_AXI_awprot;
  wire [3:0]S00_AXI_awqos;
  wire S00_AXI_awready;
  wire [2:0]S00_AXI_awsize;
  wire [15:0]S00_AXI_awuser;
  wire S00_AXI_awvalid;
  wire [15:0]S00_AXI_bid;
  wire S00_AXI_bready;
  wire [1:0]S00_AXI_bresp;
  wire S00_AXI_bvalid;
  wire [31:0]S00_AXI_rdata;
  wire [15:0]S00_AXI_rid;
  wire S00_AXI_rlast;
  wire S00_AXI_rready;
  wire [1:0]S00_AXI_rresp;
  wire S00_AXI_rvalid;
  wire [31:0]S00_AXI_wdata;
  wire S00_AXI_wlast;
  wire S00_AXI_wready;
  wire [3:0]S00_AXI_wstrb;
  wire S00_AXI_wvalid;
  wire [39:0]s00_couplers_to_xbar_ARADDR;
  wire [1:0]s00_couplers_to_xbar_ARBURST;
  wire [3:0]s00_couplers_to_xbar_ARCACHE;
  wire [15:0]s00_couplers_to_xbar_ARID;
  wire [7:0]s00_couplers_to_xbar_ARLEN;
  wire s00_couplers_to_xbar_ARLOCK;
  wire [2:0]s00_couplers_to_xbar_ARPROT;
  wire [3:0]s00_couplers_to_xbar_ARQOS;
  wire [0:0]s00_couplers_to_xbar_ARREADY;
  wire [2:0]s00_couplers_to_xbar_ARSIZE;
  wire [15:0]s00_couplers_to_xbar_ARUSER;
  wire s00_couplers_to_xbar_ARVALID;
  wire [39:0]s00_couplers_to_xbar_AWADDR;
  wire [1:0]s00_couplers_to_xbar_AWBURST;
  wire [3:0]s00_couplers_to_xbar_AWCACHE;
  wire [15:0]s00_couplers_to_xbar_AWID;
  wire [7:0]s00_couplers_to_xbar_AWLEN;
  wire s00_couplers_to_xbar_AWLOCK;
  wire [2:0]s00_couplers_to_xbar_AWPROT;
  wire [3:0]s00_couplers_to_xbar_AWQOS;
  wire [0:0]s00_couplers_to_xbar_AWREADY;
  wire [2:0]s00_couplers_to_xbar_AWSIZE;
  wire [15:0]s00_couplers_to_xbar_AWUSER;
  wire s00_couplers_to_xbar_AWVALID;
  wire [15:0]s00_couplers_to_xbar_BID;
  wire s00_couplers_to_xbar_BREADY;
  wire [1:0]s00_couplers_to_xbar_BRESP;
  wire [0:0]s00_couplers_to_xbar_BVALID;
  wire [31:0]s00_couplers_to_xbar_RDATA;
  wire [15:0]s00_couplers_to_xbar_RID;
  wire [0:0]s00_couplers_to_xbar_RLAST;
  wire s00_couplers_to_xbar_RREADY;
  wire [1:0]s00_couplers_to_xbar_RRESP;
  wire [0:0]s00_couplers_to_xbar_RVALID;
  wire [31:0]s00_couplers_to_xbar_WDATA;
  wire s00_couplers_to_xbar_WLAST;
  wire [0:0]s00_couplers_to_xbar_WREADY;
  wire [3:0]s00_couplers_to_xbar_WSTRB;
  wire s00_couplers_to_xbar_WVALID;
  wire [39:0]xbar_to_m00_couplers_ARADDR;
  wire [1:0]xbar_to_m00_couplers_ARBURST;
  wire [3:0]xbar_to_m00_couplers_ARCACHE;
  wire [15:0]xbar_to_m00_couplers_ARID;
  wire [7:0]xbar_to_m00_couplers_ARLEN;
  wire [0:0]xbar_to_m00_couplers_ARLOCK;
  wire [2:0]xbar_to_m00_couplers_ARPROT;
  wire [3:0]xbar_to_m00_couplers_ARQOS;
  wire xbar_to_m00_couplers_ARREADY;
  wire [3:0]xbar_to_m00_couplers_ARREGION;
  wire [2:0]xbar_to_m00_couplers_ARSIZE;
  wire [0:0]xbar_to_m00_couplers_ARVALID;
  wire [39:0]xbar_to_m00_couplers_AWADDR;
  wire [1:0]xbar_to_m00_couplers_AWBURST;
  wire [3:0]xbar_to_m00_couplers_AWCACHE;
  wire [15:0]xbar_to_m00_couplers_AWID;
  wire [7:0]xbar_to_m00_couplers_AWLEN;
  wire [0:0]xbar_to_m00_couplers_AWLOCK;
  wire [2:0]xbar_to_m00_couplers_AWPROT;
  wire [3:0]xbar_to_m00_couplers_AWQOS;
  wire xbar_to_m00_couplers_AWREADY;
  wire [3:0]xbar_to_m00_couplers_AWREGION;
  wire [2:0]xbar_to_m00_couplers_AWSIZE;
  wire [0:0]xbar_to_m00_couplers_AWVALID;
  wire [15:0]xbar_to_m00_couplers_BID;
  wire [0:0]xbar_to_m00_couplers_BREADY;
  wire [1:0]xbar_to_m00_couplers_BRESP;
  wire xbar_to_m00_couplers_BVALID;
  wire [31:0]xbar_to_m00_couplers_RDATA;
  wire [15:0]xbar_to_m00_couplers_RID;
  wire xbar_to_m00_couplers_RLAST;
  wire [0:0]xbar_to_m00_couplers_RREADY;
  wire [1:0]xbar_to_m00_couplers_RRESP;
  wire xbar_to_m00_couplers_RVALID;
  wire [31:0]xbar_to_m00_couplers_WDATA;
  wire [0:0]xbar_to_m00_couplers_WLAST;
  wire xbar_to_m00_couplers_WREADY;
  wire [3:0]xbar_to_m00_couplers_WSTRB;
  wire [0:0]xbar_to_m00_couplers_WVALID;
  wire [79:40]xbar_to_m01_couplers_ARADDR;
  wire [3:2]xbar_to_m01_couplers_ARBURST;
  wire [7:4]xbar_to_m01_couplers_ARCACHE;
  wire [31:16]xbar_to_m01_couplers_ARID;
  wire [15:8]xbar_to_m01_couplers_ARLEN;
  wire [1:1]xbar_to_m01_couplers_ARLOCK;
  wire [5:3]xbar_to_m01_couplers_ARPROT;
  wire [7:4]xbar_to_m01_couplers_ARQOS;
  wire xbar_to_m01_couplers_ARREADY;
  wire [7:4]xbar_to_m01_couplers_ARREGION;
  wire [5:3]xbar_to_m01_couplers_ARSIZE;
  wire [31:16]xbar_to_m01_couplers_ARUSER;
  wire [1:1]xbar_to_m01_couplers_ARVALID;
  wire [79:40]xbar_to_m01_couplers_AWADDR;
  wire [3:2]xbar_to_m01_couplers_AWBURST;
  wire [7:4]xbar_to_m01_couplers_AWCACHE;
  wire [31:16]xbar_to_m01_couplers_AWID;
  wire [15:8]xbar_to_m01_couplers_AWLEN;
  wire [1:1]xbar_to_m01_couplers_AWLOCK;
  wire [5:3]xbar_to_m01_couplers_AWPROT;
  wire [7:4]xbar_to_m01_couplers_AWQOS;
  wire xbar_to_m01_couplers_AWREADY;
  wire [7:4]xbar_to_m01_couplers_AWREGION;
  wire [5:3]xbar_to_m01_couplers_AWSIZE;
  wire [31:16]xbar_to_m01_couplers_AWUSER;
  wire [1:1]xbar_to_m01_couplers_AWVALID;
  wire [15:0]xbar_to_m01_couplers_BID;
  wire [1:1]xbar_to_m01_couplers_BREADY;
  wire [1:0]xbar_to_m01_couplers_BRESP;
  wire xbar_to_m01_couplers_BVALID;
  wire [31:0]xbar_to_m01_couplers_RDATA;
  wire [15:0]xbar_to_m01_couplers_RID;
  wire xbar_to_m01_couplers_RLAST;
  wire [1:1]xbar_to_m01_couplers_RREADY;
  wire [1:0]xbar_to_m01_couplers_RRESP;
  wire xbar_to_m01_couplers_RVALID;
  wire [63:32]xbar_to_m01_couplers_WDATA;
  wire [1:1]xbar_to_m01_couplers_WLAST;
  wire xbar_to_m01_couplers_WREADY;
  wire [7:4]xbar_to_m01_couplers_WSTRB;
  wire [1:1]xbar_to_m01_couplers_WVALID;
  wire [119:80]xbar_to_m02_couplers_ARADDR;
  wire [5:4]xbar_to_m02_couplers_ARBURST;
  wire [11:8]xbar_to_m02_couplers_ARCACHE;
  wire [47:32]xbar_to_m02_couplers_ARID;
  wire [23:16]xbar_to_m02_couplers_ARLEN;
  wire [2:2]xbar_to_m02_couplers_ARLOCK;
  wire [8:6]xbar_to_m02_couplers_ARPROT;
  wire [11:8]xbar_to_m02_couplers_ARQOS;
  wire xbar_to_m02_couplers_ARREADY;
  wire [11:8]xbar_to_m02_couplers_ARREGION;
  wire [8:6]xbar_to_m02_couplers_ARSIZE;
  wire [47:32]xbar_to_m02_couplers_ARUSER;
  wire [2:2]xbar_to_m02_couplers_ARVALID;
  wire [119:80]xbar_to_m02_couplers_AWADDR;
  wire [5:4]xbar_to_m02_couplers_AWBURST;
  wire [11:8]xbar_to_m02_couplers_AWCACHE;
  wire [47:32]xbar_to_m02_couplers_AWID;
  wire [23:16]xbar_to_m02_couplers_AWLEN;
  wire [2:2]xbar_to_m02_couplers_AWLOCK;
  wire [8:6]xbar_to_m02_couplers_AWPROT;
  wire [11:8]xbar_to_m02_couplers_AWQOS;
  wire xbar_to_m02_couplers_AWREADY;
  wire [11:8]xbar_to_m02_couplers_AWREGION;
  wire [8:6]xbar_to_m02_couplers_AWSIZE;
  wire [47:32]xbar_to_m02_couplers_AWUSER;
  wire [2:2]xbar_to_m02_couplers_AWVALID;
  wire [15:0]xbar_to_m02_couplers_BID;
  wire [2:2]xbar_to_m02_couplers_BREADY;
  wire [1:0]xbar_to_m02_couplers_BRESP;
  wire xbar_to_m02_couplers_BVALID;
  wire [31:0]xbar_to_m02_couplers_RDATA;
  wire [15:0]xbar_to_m02_couplers_RID;
  wire xbar_to_m02_couplers_RLAST;
  wire [2:2]xbar_to_m02_couplers_RREADY;
  wire [1:0]xbar_to_m02_couplers_RRESP;
  wire xbar_to_m02_couplers_RVALID;
  wire [95:64]xbar_to_m02_couplers_WDATA;
  wire [2:2]xbar_to_m02_couplers_WLAST;
  wire xbar_to_m02_couplers_WREADY;
  wire [11:8]xbar_to_m02_couplers_WSTRB;
  wire [2:2]xbar_to_m02_couplers_WVALID;
  wire [47:0]NLW_xbar_m_axi_aruser_UNCONNECTED;
  wire [47:0]NLW_xbar_m_axi_awuser_UNCONNECTED;

  m00_couplers_imp_XAFVM8 m00_couplers
       (.M_ACLK(M00_ACLK),
        .M_ARESETN(M00_ARESETN),
        .M_AXI_araddr(M00_AXI_araddr),
        .M_AXI_arready(M00_AXI_arready),
        .M_AXI_arvalid(M00_AXI_arvalid),
        .M_AXI_awaddr(M00_AXI_awaddr),
        .M_AXI_awready(M00_AXI_awready),
        .M_AXI_awvalid(M00_AXI_awvalid),
        .M_AXI_bready(M00_AXI_bready),
        .M_AXI_bresp(M00_AXI_bresp),
        .M_AXI_bvalid(M00_AXI_bvalid),
        .M_AXI_rdata(M00_AXI_rdata),
        .M_AXI_rready(M00_AXI_rready),
        .M_AXI_rresp(M00_AXI_rresp),
        .M_AXI_rvalid(M00_AXI_rvalid),
        .M_AXI_wdata(M00_AXI_wdata),
        .M_AXI_wready(M00_AXI_wready),
        .M_AXI_wstrb(M00_AXI_wstrb),
        .M_AXI_wvalid(M00_AXI_wvalid),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(xbar_to_m00_couplers_ARADDR),
        .S_AXI_arburst(xbar_to_m00_couplers_ARBURST),
        .S_AXI_arcache(xbar_to_m00_couplers_ARCACHE),
        .S_AXI_arid(xbar_to_m00_couplers_ARID),
        .S_AXI_arlen(xbar_to_m00_couplers_ARLEN),
        .S_AXI_arlock(xbar_to_m00_couplers_ARLOCK),
        .S_AXI_arprot(xbar_to_m00_couplers_ARPROT),
        .S_AXI_arqos(xbar_to_m00_couplers_ARQOS),
        .S_AXI_arready(xbar_to_m00_couplers_ARREADY),
        .S_AXI_arregion(xbar_to_m00_couplers_ARREGION),
        .S_AXI_arsize(xbar_to_m00_couplers_ARSIZE),
        .S_AXI_arvalid(xbar_to_m00_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m00_couplers_AWADDR),
        .S_AXI_awburst(xbar_to_m00_couplers_AWBURST),
        .S_AXI_awcache(xbar_to_m00_couplers_AWCACHE),
        .S_AXI_awid(xbar_to_m00_couplers_AWID),
        .S_AXI_awlen(xbar_to_m00_couplers_AWLEN),
        .S_AXI_awlock(xbar_to_m00_couplers_AWLOCK),
        .S_AXI_awprot(xbar_to_m00_couplers_AWPROT),
        .S_AXI_awqos(xbar_to_m00_couplers_AWQOS),
        .S_AXI_awready(xbar_to_m00_couplers_AWREADY),
        .S_AXI_awregion(xbar_to_m00_couplers_AWREGION),
        .S_AXI_awsize(xbar_to_m00_couplers_AWSIZE),
        .S_AXI_awvalid(xbar_to_m00_couplers_AWVALID),
        .S_AXI_bid(xbar_to_m00_couplers_BID),
        .S_AXI_bready(xbar_to_m00_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m00_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m00_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m00_couplers_RDATA),
        .S_AXI_rid(xbar_to_m00_couplers_RID),
        .S_AXI_rlast(xbar_to_m00_couplers_RLAST),
        .S_AXI_rready(xbar_to_m00_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m00_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m00_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m00_couplers_WDATA),
        .S_AXI_wlast(xbar_to_m00_couplers_WLAST),
        .S_AXI_wready(xbar_to_m00_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m00_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m00_couplers_WVALID));
  m01_couplers_imp_QV5828 m01_couplers
       (.M_ACLK(M01_ACLK),
        .M_ARESETN(M01_ARESETN),
        .M_AXI_araddr(M01_AXI_araddr),
        .M_AXI_arprot(M01_AXI_arprot),
        .M_AXI_arready(M01_AXI_arready),
        .M_AXI_arvalid(M01_AXI_arvalid),
        .M_AXI_awaddr(M01_AXI_awaddr),
        .M_AXI_awprot(M01_AXI_awprot),
        .M_AXI_awready(M01_AXI_awready),
        .M_AXI_awvalid(M01_AXI_awvalid),
        .M_AXI_bready(M01_AXI_bready),
        .M_AXI_bresp(M01_AXI_bresp),
        .M_AXI_bvalid(M01_AXI_bvalid),
        .M_AXI_rdata(M01_AXI_rdata),
        .M_AXI_rready(M01_AXI_rready),
        .M_AXI_rresp(M01_AXI_rresp),
        .M_AXI_rvalid(M01_AXI_rvalid),
        .M_AXI_wdata(M01_AXI_wdata),
        .M_AXI_wready(M01_AXI_wready),
        .M_AXI_wstrb(M01_AXI_wstrb),
        .M_AXI_wvalid(M01_AXI_wvalid),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(xbar_to_m01_couplers_ARADDR),
        .S_AXI_arburst(xbar_to_m01_couplers_ARBURST),
        .S_AXI_arcache(xbar_to_m01_couplers_ARCACHE),
        .S_AXI_arid(xbar_to_m01_couplers_ARID),
        .S_AXI_arlen(xbar_to_m01_couplers_ARLEN),
        .S_AXI_arlock(xbar_to_m01_couplers_ARLOCK),
        .S_AXI_arprot(xbar_to_m01_couplers_ARPROT),
        .S_AXI_arqos(xbar_to_m01_couplers_ARQOS),
        .S_AXI_arready(xbar_to_m01_couplers_ARREADY),
        .S_AXI_arregion(xbar_to_m01_couplers_ARREGION),
        .S_AXI_arsize(xbar_to_m01_couplers_ARSIZE),
        .S_AXI_aruser(xbar_to_m01_couplers_ARUSER),
        .S_AXI_arvalid(xbar_to_m01_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m01_couplers_AWADDR),
        .S_AXI_awburst(xbar_to_m01_couplers_AWBURST),
        .S_AXI_awcache(xbar_to_m01_couplers_AWCACHE),
        .S_AXI_awid(xbar_to_m01_couplers_AWID),
        .S_AXI_awlen(xbar_to_m01_couplers_AWLEN),
        .S_AXI_awlock(xbar_to_m01_couplers_AWLOCK),
        .S_AXI_awprot(xbar_to_m01_couplers_AWPROT),
        .S_AXI_awqos(xbar_to_m01_couplers_AWQOS),
        .S_AXI_awready(xbar_to_m01_couplers_AWREADY),
        .S_AXI_awregion(xbar_to_m01_couplers_AWREGION),
        .S_AXI_awsize(xbar_to_m01_couplers_AWSIZE),
        .S_AXI_awuser(xbar_to_m01_couplers_AWUSER),
        .S_AXI_awvalid(xbar_to_m01_couplers_AWVALID),
        .S_AXI_bid(xbar_to_m01_couplers_BID),
        .S_AXI_bready(xbar_to_m01_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m01_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m01_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m01_couplers_RDATA),
        .S_AXI_rid(xbar_to_m01_couplers_RID),
        .S_AXI_rlast(xbar_to_m01_couplers_RLAST),
        .S_AXI_rready(xbar_to_m01_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m01_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m01_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m01_couplers_WDATA),
        .S_AXI_wlast(xbar_to_m01_couplers_WLAST),
        .S_AXI_wready(xbar_to_m01_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m01_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m01_couplers_WVALID));
  m02_couplers_imp_OVNA6O m02_couplers
       (.M_ACLK(M02_ACLK),
        .M_ARESETN(M02_ARESETN),
        .M_AXI_araddr(M02_AXI_araddr),
        .M_AXI_arburst(M02_AXI_arburst),
        .M_AXI_arcache(M02_AXI_arcache),
        .M_AXI_arid(M02_AXI_arid),
        .M_AXI_arlen(M02_AXI_arlen),
        .M_AXI_arlock(M02_AXI_arlock),
        .M_AXI_arprot(M02_AXI_arprot),
        .M_AXI_arqos(M02_AXI_arqos),
        .M_AXI_arready(M02_AXI_arready),
        .M_AXI_arregion(M02_AXI_arregion),
        .M_AXI_arsize(M02_AXI_arsize),
        .M_AXI_aruser(M02_AXI_aruser),
        .M_AXI_arvalid(M02_AXI_arvalid),
        .M_AXI_awaddr(M02_AXI_awaddr),
        .M_AXI_awburst(M02_AXI_awburst),
        .M_AXI_awcache(M02_AXI_awcache),
        .M_AXI_awid(M02_AXI_awid),
        .M_AXI_awlen(M02_AXI_awlen),
        .M_AXI_awlock(M02_AXI_awlock),
        .M_AXI_awprot(M02_AXI_awprot),
        .M_AXI_awqos(M02_AXI_awqos),
        .M_AXI_awready(M02_AXI_awready),
        .M_AXI_awregion(M02_AXI_awregion),
        .M_AXI_awsize(M02_AXI_awsize),
        .M_AXI_awuser(M02_AXI_awuser),
        .M_AXI_awvalid(M02_AXI_awvalid),
        .M_AXI_bid(M02_AXI_bid),
        .M_AXI_bready(M02_AXI_bready),
        .M_AXI_bresp(M02_AXI_bresp),
        .M_AXI_bvalid(M02_AXI_bvalid),
        .M_AXI_rdata(M02_AXI_rdata),
        .M_AXI_rid(M02_AXI_rid),
        .M_AXI_rlast(M02_AXI_rlast),
        .M_AXI_rready(M02_AXI_rready),
        .M_AXI_rresp(M02_AXI_rresp),
        .M_AXI_rvalid(M02_AXI_rvalid),
        .M_AXI_wdata(M02_AXI_wdata),
        .M_AXI_wlast(M02_AXI_wlast),
        .M_AXI_wready(M02_AXI_wready),
        .M_AXI_wstrb(M02_AXI_wstrb),
        .M_AXI_wvalid(M02_AXI_wvalid),
        .S_ACLK(ACLK),
        .S_ARESETN(ARESETN),
        .S_AXI_araddr(xbar_to_m02_couplers_ARADDR),
        .S_AXI_arburst(xbar_to_m02_couplers_ARBURST),
        .S_AXI_arcache(xbar_to_m02_couplers_ARCACHE),
        .S_AXI_arid(xbar_to_m02_couplers_ARID),
        .S_AXI_arlen(xbar_to_m02_couplers_ARLEN),
        .S_AXI_arlock(xbar_to_m02_couplers_ARLOCK),
        .S_AXI_arprot(xbar_to_m02_couplers_ARPROT),
        .S_AXI_arqos(xbar_to_m02_couplers_ARQOS),
        .S_AXI_arready(xbar_to_m02_couplers_ARREADY),
        .S_AXI_arregion(xbar_to_m02_couplers_ARREGION),
        .S_AXI_arsize(xbar_to_m02_couplers_ARSIZE),
        .S_AXI_aruser(xbar_to_m02_couplers_ARUSER),
        .S_AXI_arvalid(xbar_to_m02_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m02_couplers_AWADDR),
        .S_AXI_awburst(xbar_to_m02_couplers_AWBURST),
        .S_AXI_awcache(xbar_to_m02_couplers_AWCACHE),
        .S_AXI_awid(xbar_to_m02_couplers_AWID),
        .S_AXI_awlen(xbar_to_m02_couplers_AWLEN),
        .S_AXI_awlock(xbar_to_m02_couplers_AWLOCK),
        .S_AXI_awprot(xbar_to_m02_couplers_AWPROT),
        .S_AXI_awqos(xbar_to_m02_couplers_AWQOS),
        .S_AXI_awready(xbar_to_m02_couplers_AWREADY),
        .S_AXI_awregion(xbar_to_m02_couplers_AWREGION),
        .S_AXI_awsize(xbar_to_m02_couplers_AWSIZE),
        .S_AXI_awuser(xbar_to_m02_couplers_AWUSER),
        .S_AXI_awvalid(xbar_to_m02_couplers_AWVALID),
        .S_AXI_bid(xbar_to_m02_couplers_BID),
        .S_AXI_bready(xbar_to_m02_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m02_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m02_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m02_couplers_RDATA),
        .S_AXI_rid(xbar_to_m02_couplers_RID),
        .S_AXI_rlast(xbar_to_m02_couplers_RLAST),
        .S_AXI_rready(xbar_to_m02_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m02_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m02_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m02_couplers_WDATA),
        .S_AXI_wlast(xbar_to_m02_couplers_WLAST),
        .S_AXI_wready(xbar_to_m02_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m02_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m02_couplers_WVALID));
  s00_couplers_imp_TL41KZ s00_couplers
       (.M_ACLK(ACLK),
        .M_ARESETN(ARESETN),
        .M_AXI_araddr(s00_couplers_to_xbar_ARADDR),
        .M_AXI_arburst(s00_couplers_to_xbar_ARBURST),
        .M_AXI_arcache(s00_couplers_to_xbar_ARCACHE),
        .M_AXI_arid(s00_couplers_to_xbar_ARID),
        .M_AXI_arlen(s00_couplers_to_xbar_ARLEN),
        .M_AXI_arlock(s00_couplers_to_xbar_ARLOCK),
        .M_AXI_arprot(s00_couplers_to_xbar_ARPROT),
        .M_AXI_arqos(s00_couplers_to_xbar_ARQOS),
        .M_AXI_arready(s00_couplers_to_xbar_ARREADY),
        .M_AXI_arsize(s00_couplers_to_xbar_ARSIZE),
        .M_AXI_aruser(s00_couplers_to_xbar_ARUSER),
        .M_AXI_arvalid(s00_couplers_to_xbar_ARVALID),
        .M_AXI_awaddr(s00_couplers_to_xbar_AWADDR),
        .M_AXI_awburst(s00_couplers_to_xbar_AWBURST),
        .M_AXI_awcache(s00_couplers_to_xbar_AWCACHE),
        .M_AXI_awid(s00_couplers_to_xbar_AWID),
        .M_AXI_awlen(s00_couplers_to_xbar_AWLEN),
        .M_AXI_awlock(s00_couplers_to_xbar_AWLOCK),
        .M_AXI_awprot(s00_couplers_to_xbar_AWPROT),
        .M_AXI_awqos(s00_couplers_to_xbar_AWQOS),
        .M_AXI_awready(s00_couplers_to_xbar_AWREADY),
        .M_AXI_awsize(s00_couplers_to_xbar_AWSIZE),
        .M_AXI_awuser(s00_couplers_to_xbar_AWUSER),
        .M_AXI_awvalid(s00_couplers_to_xbar_AWVALID),
        .M_AXI_bid(s00_couplers_to_xbar_BID),
        .M_AXI_bready(s00_couplers_to_xbar_BREADY),
        .M_AXI_bresp(s00_couplers_to_xbar_BRESP),
        .M_AXI_bvalid(s00_couplers_to_xbar_BVALID),
        .M_AXI_rdata(s00_couplers_to_xbar_RDATA),
        .M_AXI_rid(s00_couplers_to_xbar_RID),
        .M_AXI_rlast(s00_couplers_to_xbar_RLAST),
        .M_AXI_rready(s00_couplers_to_xbar_RREADY),
        .M_AXI_rresp(s00_couplers_to_xbar_RRESP),
        .M_AXI_rvalid(s00_couplers_to_xbar_RVALID),
        .M_AXI_wdata(s00_couplers_to_xbar_WDATA),
        .M_AXI_wlast(s00_couplers_to_xbar_WLAST),
        .M_AXI_wready(s00_couplers_to_xbar_WREADY),
        .M_AXI_wstrb(s00_couplers_to_xbar_WSTRB),
        .M_AXI_wvalid(s00_couplers_to_xbar_WVALID),
        .S_ACLK(S00_ACLK),
        .S_ARESETN(S00_ARESETN),
        .S_AXI_araddr(S00_AXI_araddr),
        .S_AXI_arburst(S00_AXI_arburst),
        .S_AXI_arcache(S00_AXI_arcache),
        .S_AXI_arid(S00_AXI_arid),
        .S_AXI_arlen(S00_AXI_arlen),
        .S_AXI_arlock(S00_AXI_arlock),
        .S_AXI_arprot(S00_AXI_arprot),
        .S_AXI_arqos(S00_AXI_arqos),
        .S_AXI_arready(S00_AXI_arready),
        .S_AXI_arsize(S00_AXI_arsize),
        .S_AXI_aruser(S00_AXI_aruser),
        .S_AXI_arvalid(S00_AXI_arvalid),
        .S_AXI_awaddr(S00_AXI_awaddr),
        .S_AXI_awburst(S00_AXI_awburst),
        .S_AXI_awcache(S00_AXI_awcache),
        .S_AXI_awid(S00_AXI_awid),
        .S_AXI_awlen(S00_AXI_awlen),
        .S_AXI_awlock(S00_AXI_awlock),
        .S_AXI_awprot(S00_AXI_awprot),
        .S_AXI_awqos(S00_AXI_awqos),
        .S_AXI_awready(S00_AXI_awready),
        .S_AXI_awsize(S00_AXI_awsize),
        .S_AXI_awuser(S00_AXI_awuser),
        .S_AXI_awvalid(S00_AXI_awvalid),
        .S_AXI_bid(S00_AXI_bid),
        .S_AXI_bready(S00_AXI_bready),
        .S_AXI_bresp(S00_AXI_bresp),
        .S_AXI_bvalid(S00_AXI_bvalid),
        .S_AXI_rdata(S00_AXI_rdata),
        .S_AXI_rid(S00_AXI_rid),
        .S_AXI_rlast(S00_AXI_rlast),
        .S_AXI_rready(S00_AXI_rready),
        .S_AXI_rresp(S00_AXI_rresp),
        .S_AXI_rvalid(S00_AXI_rvalid),
        .S_AXI_wdata(S00_AXI_wdata),
        .S_AXI_wlast(S00_AXI_wlast),
        .S_AXI_wready(S00_AXI_wready),
        .S_AXI_wstrb(S00_AXI_wstrb),
        .S_AXI_wvalid(S00_AXI_wvalid));
  vitis_design_interconnect_axilite_upgraded_ipi_imp_xbar_0 xbar
       (.aclk(ACLK),
        .aresetn(ARESETN),
        .m_axi_araddr({xbar_to_m02_couplers_ARADDR,xbar_to_m01_couplers_ARADDR,xbar_to_m00_couplers_ARADDR}),
        .m_axi_arburst({xbar_to_m02_couplers_ARBURST,xbar_to_m01_couplers_ARBURST,xbar_to_m00_couplers_ARBURST}),
        .m_axi_arcache({xbar_to_m02_couplers_ARCACHE,xbar_to_m01_couplers_ARCACHE,xbar_to_m00_couplers_ARCACHE}),
        .m_axi_arid({xbar_to_m02_couplers_ARID,xbar_to_m01_couplers_ARID,xbar_to_m00_couplers_ARID}),
        .m_axi_arlen({xbar_to_m02_couplers_ARLEN,xbar_to_m01_couplers_ARLEN,xbar_to_m00_couplers_ARLEN}),
        .m_axi_arlock({xbar_to_m02_couplers_ARLOCK,xbar_to_m01_couplers_ARLOCK,xbar_to_m00_couplers_ARLOCK}),
        .m_axi_arprot({xbar_to_m02_couplers_ARPROT,xbar_to_m01_couplers_ARPROT,xbar_to_m00_couplers_ARPROT}),
        .m_axi_arqos({xbar_to_m02_couplers_ARQOS,xbar_to_m01_couplers_ARQOS,xbar_to_m00_couplers_ARQOS}),
        .m_axi_arready({xbar_to_m02_couplers_ARREADY,xbar_to_m01_couplers_ARREADY,xbar_to_m00_couplers_ARREADY}),
        .m_axi_arregion({xbar_to_m02_couplers_ARREGION,xbar_to_m01_couplers_ARREGION,xbar_to_m00_couplers_ARREGION}),
        .m_axi_arsize({xbar_to_m02_couplers_ARSIZE,xbar_to_m01_couplers_ARSIZE,xbar_to_m00_couplers_ARSIZE}),
        .m_axi_aruser({xbar_to_m02_couplers_ARUSER,xbar_to_m01_couplers_ARUSER,NLW_xbar_m_axi_aruser_UNCONNECTED[15:0]}),
        .m_axi_arvalid({xbar_to_m02_couplers_ARVALID,xbar_to_m01_couplers_ARVALID,xbar_to_m00_couplers_ARVALID}),
        .m_axi_awaddr({xbar_to_m02_couplers_AWADDR,xbar_to_m01_couplers_AWADDR,xbar_to_m00_couplers_AWADDR}),
        .m_axi_awburst({xbar_to_m02_couplers_AWBURST,xbar_to_m01_couplers_AWBURST,xbar_to_m00_couplers_AWBURST}),
        .m_axi_awcache({xbar_to_m02_couplers_AWCACHE,xbar_to_m01_couplers_AWCACHE,xbar_to_m00_couplers_AWCACHE}),
        .m_axi_awid({xbar_to_m02_couplers_AWID,xbar_to_m01_couplers_AWID,xbar_to_m00_couplers_AWID}),
        .m_axi_awlen({xbar_to_m02_couplers_AWLEN,xbar_to_m01_couplers_AWLEN,xbar_to_m00_couplers_AWLEN}),
        .m_axi_awlock({xbar_to_m02_couplers_AWLOCK,xbar_to_m01_couplers_AWLOCK,xbar_to_m00_couplers_AWLOCK}),
        .m_axi_awprot({xbar_to_m02_couplers_AWPROT,xbar_to_m01_couplers_AWPROT,xbar_to_m00_couplers_AWPROT}),
        .m_axi_awqos({xbar_to_m02_couplers_AWQOS,xbar_to_m01_couplers_AWQOS,xbar_to_m00_couplers_AWQOS}),
        .m_axi_awready({xbar_to_m02_couplers_AWREADY,xbar_to_m01_couplers_AWREADY,xbar_to_m00_couplers_AWREADY}),
        .m_axi_awregion({xbar_to_m02_couplers_AWREGION,xbar_to_m01_couplers_AWREGION,xbar_to_m00_couplers_AWREGION}),
        .m_axi_awsize({xbar_to_m02_couplers_AWSIZE,xbar_to_m01_couplers_AWSIZE,xbar_to_m00_couplers_AWSIZE}),
        .m_axi_awuser({xbar_to_m02_couplers_AWUSER,xbar_to_m01_couplers_AWUSER,NLW_xbar_m_axi_awuser_UNCONNECTED[15:0]}),
        .m_axi_awvalid({xbar_to_m02_couplers_AWVALID,xbar_to_m01_couplers_AWVALID,xbar_to_m00_couplers_AWVALID}),
        .m_axi_bid({xbar_to_m02_couplers_BID,xbar_to_m01_couplers_BID,xbar_to_m00_couplers_BID}),
        .m_axi_bready({xbar_to_m02_couplers_BREADY,xbar_to_m01_couplers_BREADY,xbar_to_m00_couplers_BREADY}),
        .m_axi_bresp({xbar_to_m02_couplers_BRESP,xbar_to_m01_couplers_BRESP,xbar_to_m00_couplers_BRESP}),
        .m_axi_bvalid({xbar_to_m02_couplers_BVALID,xbar_to_m01_couplers_BVALID,xbar_to_m00_couplers_BVALID}),
        .m_axi_rdata({xbar_to_m02_couplers_RDATA,xbar_to_m01_couplers_RDATA,xbar_to_m00_couplers_RDATA}),
        .m_axi_rid({xbar_to_m02_couplers_RID,xbar_to_m01_couplers_RID,xbar_to_m00_couplers_RID}),
        .m_axi_rlast({xbar_to_m02_couplers_RLAST,xbar_to_m01_couplers_RLAST,xbar_to_m00_couplers_RLAST}),
        .m_axi_rready({xbar_to_m02_couplers_RREADY,xbar_to_m01_couplers_RREADY,xbar_to_m00_couplers_RREADY}),
        .m_axi_rresp({xbar_to_m02_couplers_RRESP,xbar_to_m01_couplers_RRESP,xbar_to_m00_couplers_RRESP}),
        .m_axi_rvalid({xbar_to_m02_couplers_RVALID,xbar_to_m01_couplers_RVALID,xbar_to_m00_couplers_RVALID}),
        .m_axi_wdata({xbar_to_m02_couplers_WDATA,xbar_to_m01_couplers_WDATA,xbar_to_m00_couplers_WDATA}),
        .m_axi_wlast({xbar_to_m02_couplers_WLAST,xbar_to_m01_couplers_WLAST,xbar_to_m00_couplers_WLAST}),
        .m_axi_wready({xbar_to_m02_couplers_WREADY,xbar_to_m01_couplers_WREADY,xbar_to_m00_couplers_WREADY}),
        .m_axi_wstrb({xbar_to_m02_couplers_WSTRB,xbar_to_m01_couplers_WSTRB,xbar_to_m00_couplers_WSTRB}),
        .m_axi_wvalid({xbar_to_m02_couplers_WVALID,xbar_to_m01_couplers_WVALID,xbar_to_m00_couplers_WVALID}),
        .s_axi_araddr(s00_couplers_to_xbar_ARADDR),
        .s_axi_arburst(s00_couplers_to_xbar_ARBURST),
        .s_axi_arcache(s00_couplers_to_xbar_ARCACHE),
        .s_axi_arid(s00_couplers_to_xbar_ARID),
        .s_axi_arlen(s00_couplers_to_xbar_ARLEN),
        .s_axi_arlock(s00_couplers_to_xbar_ARLOCK),
        .s_axi_arprot(s00_couplers_to_xbar_ARPROT),
        .s_axi_arqos(s00_couplers_to_xbar_ARQOS),
        .s_axi_arready(s00_couplers_to_xbar_ARREADY),
        .s_axi_arsize(s00_couplers_to_xbar_ARSIZE),
        .s_axi_aruser(s00_couplers_to_xbar_ARUSER),
        .s_axi_arvalid(s00_couplers_to_xbar_ARVALID),
        .s_axi_awaddr(s00_couplers_to_xbar_AWADDR),
        .s_axi_awburst(s00_couplers_to_xbar_AWBURST),
        .s_axi_awcache(s00_couplers_to_xbar_AWCACHE),
        .s_axi_awid(s00_couplers_to_xbar_AWID),
        .s_axi_awlen(s00_couplers_to_xbar_AWLEN),
        .s_axi_awlock(s00_couplers_to_xbar_AWLOCK),
        .s_axi_awprot(s00_couplers_to_xbar_AWPROT),
        .s_axi_awqos(s00_couplers_to_xbar_AWQOS),
        .s_axi_awready(s00_couplers_to_xbar_AWREADY),
        .s_axi_awsize(s00_couplers_to_xbar_AWSIZE),
        .s_axi_awuser(s00_couplers_to_xbar_AWUSER),
        .s_axi_awvalid(s00_couplers_to_xbar_AWVALID),
        .s_axi_bid(s00_couplers_to_xbar_BID),
        .s_axi_bready(s00_couplers_to_xbar_BREADY),
        .s_axi_bresp(s00_couplers_to_xbar_BRESP),
        .s_axi_bvalid(s00_couplers_to_xbar_BVALID),
        .s_axi_rdata(s00_couplers_to_xbar_RDATA),
        .s_axi_rid(s00_couplers_to_xbar_RID),
        .s_axi_rlast(s00_couplers_to_xbar_RLAST),
        .s_axi_rready(s00_couplers_to_xbar_RREADY),
        .s_axi_rresp(s00_couplers_to_xbar_RRESP),
        .s_axi_rvalid(s00_couplers_to_xbar_RVALID),
        .s_axi_wdata(s00_couplers_to_xbar_WDATA),
        .s_axi_wlast(s00_couplers_to_xbar_WLAST),
        .s_axi_wready(s00_couplers_to_xbar_WREADY),
        .s_axi_wstrb(s00_couplers_to_xbar_WSTRB),
        .s_axi_wvalid(s00_couplers_to_xbar_WVALID));
endmodule
