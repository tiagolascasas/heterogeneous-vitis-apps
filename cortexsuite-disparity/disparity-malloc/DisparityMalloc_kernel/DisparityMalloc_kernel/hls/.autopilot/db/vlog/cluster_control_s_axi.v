// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.1 (64-bit)
// Tool Version Limit: 2024.05
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
`timescale 1ns/1ps
module cluster_control_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 8,
    C_S_AXI_DATA_WIDTH = 32
)(
    input  wire                          ACLK,
    input  wire                          ARESET,
    input  wire                          ACLK_EN,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] AWADDR,
    input  wire                          AWVALID,
    output wire                          AWREADY,
    input  wire [C_S_AXI_DATA_WIDTH-1:0] WDATA,
    input  wire [C_S_AXI_DATA_WIDTH/8-1:0] WSTRB,
    input  wire                          WVALID,
    output wire                          WREADY,
    output wire [1:0]                    BRESP,
    output wire                          BVALID,
    input  wire                          BREADY,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] ARADDR,
    input  wire                          ARVALID,
    output wire                          ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1:0] RDATA,
    output wire [1:0]                    RRESP,
    output wire                          RVALID,
    input  wire                          RREADY,
    output wire                          interrupt,
    output wire [31:0]                   Ileft_w,
    output wire [31:0]                   Ileft_h,
    output wire [63:0]                   Ileft_data,
    output wire [31:0]                   Iright_w,
    output wire [31:0]                   Iright_h,
    output wire [63:0]                   Iright_data,
    output wire [31:0]                   Iright_moved_w,
    output wire [31:0]                   Iright_moved_h,
    output wire [63:0]                   Iright_moved_data,
    output wire [31:0]                   win_sz,
    output wire [31:0]                   disparity,
    output wire [31:0]                   SAD_w,
    output wire [31:0]                   SAD_h,
    output wire [63:0]                   SAD_data,
    output wire [31:0]                   integralImg_w,
    output wire [31:0]                   integralImg_h,
    output wire [63:0]                   integralImg_data,
    output wire [31:0]                   retSAD_w,
    output wire [31:0]                   retSAD_h,
    output wire [63:0]                   retSAD_data,
    output wire [31:0]                   range_w,
    output wire [31:0]                   range_h,
    output wire [63:0]                   range_data,
    output wire                          ap_start,
    input  wire                          ap_done,
    input  wire                          ap_ready,
    output wire                          ap_continue,
    input  wire                          ap_idle
);
//------------------------Address Info-------------------
// Protocol Used: ap_ctrl_chain
//
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read/COR)
//        bit 4  - ap_continue (Read/Write/SC)
//        bit 7  - auto_restart (Read/Write)
//        bit 9  - interrupt (Read)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0 - enable ap_done interrupt (Read/Write)
//        bit 1 - enable ap_ready interrupt (Read/Write)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0 - ap_done (Read/TOW)
//        bit 1 - ap_ready (Read/TOW)
//        others - reserved
// 0x10 : Data signal of Ileft_w
//        bit 31~0 - Ileft_w[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of Ileft_h
//        bit 31~0 - Ileft_h[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of Ileft_data
//        bit 31~0 - Ileft_data[31:0] (Read/Write)
// 0x24 : Data signal of Ileft_data
//        bit 31~0 - Ileft_data[63:32] (Read/Write)
// 0x28 : reserved
// 0x2c : Data signal of Iright_w
//        bit 31~0 - Iright_w[31:0] (Read/Write)
// 0x30 : reserved
// 0x34 : Data signal of Iright_h
//        bit 31~0 - Iright_h[31:0] (Read/Write)
// 0x38 : reserved
// 0x3c : Data signal of Iright_data
//        bit 31~0 - Iright_data[31:0] (Read/Write)
// 0x40 : Data signal of Iright_data
//        bit 31~0 - Iright_data[63:32] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of Iright_moved_w
//        bit 31~0 - Iright_moved_w[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of Iright_moved_h
//        bit 31~0 - Iright_moved_h[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of Iright_moved_data
//        bit 31~0 - Iright_moved_data[31:0] (Read/Write)
// 0x5c : Data signal of Iright_moved_data
//        bit 31~0 - Iright_moved_data[63:32] (Read/Write)
// 0x60 : reserved
// 0x64 : Data signal of win_sz
//        bit 31~0 - win_sz[31:0] (Read/Write)
// 0x68 : reserved
// 0x6c : Data signal of disparity
//        bit 31~0 - disparity[31:0] (Read/Write)
// 0x70 : reserved
// 0x74 : Data signal of SAD_w
//        bit 31~0 - SAD_w[31:0] (Read/Write)
// 0x78 : reserved
// 0x7c : Data signal of SAD_h
//        bit 31~0 - SAD_h[31:0] (Read/Write)
// 0x80 : reserved
// 0x84 : Data signal of SAD_data
//        bit 31~0 - SAD_data[31:0] (Read/Write)
// 0x88 : Data signal of SAD_data
//        bit 31~0 - SAD_data[63:32] (Read/Write)
// 0x8c : reserved
// 0x90 : Data signal of integralImg_w
//        bit 31~0 - integralImg_w[31:0] (Read/Write)
// 0x94 : reserved
// 0x98 : Data signal of integralImg_h
//        bit 31~0 - integralImg_h[31:0] (Read/Write)
// 0x9c : reserved
// 0xa0 : Data signal of integralImg_data
//        bit 31~0 - integralImg_data[31:0] (Read/Write)
// 0xa4 : Data signal of integralImg_data
//        bit 31~0 - integralImg_data[63:32] (Read/Write)
// 0xa8 : reserved
// 0xac : Data signal of retSAD_w
//        bit 31~0 - retSAD_w[31:0] (Read/Write)
// 0xb0 : reserved
// 0xb4 : Data signal of retSAD_h
//        bit 31~0 - retSAD_h[31:0] (Read/Write)
// 0xb8 : reserved
// 0xbc : Data signal of retSAD_data
//        bit 31~0 - retSAD_data[31:0] (Read/Write)
// 0xc0 : Data signal of retSAD_data
//        bit 31~0 - retSAD_data[63:32] (Read/Write)
// 0xc4 : reserved
// 0xc8 : Data signal of range_w
//        bit 31~0 - range_w[31:0] (Read/Write)
// 0xcc : reserved
// 0xd0 : Data signal of range_h
//        bit 31~0 - range_h[31:0] (Read/Write)
// 0xd4 : reserved
// 0xd8 : Data signal of range_data
//        bit 31~0 - range_data[31:0] (Read/Write)
// 0xdc : Data signal of range_data
//        bit 31~0 - range_data[63:32] (Read/Write)
// 0xe0 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL                  = 8'h00,
    ADDR_GIE                      = 8'h04,
    ADDR_IER                      = 8'h08,
    ADDR_ISR                      = 8'h0c,
    ADDR_ILEFT_W_DATA_0           = 8'h10,
    ADDR_ILEFT_W_CTRL             = 8'h14,
    ADDR_ILEFT_H_DATA_0           = 8'h18,
    ADDR_ILEFT_H_CTRL             = 8'h1c,
    ADDR_ILEFT_DATA_DATA_0        = 8'h20,
    ADDR_ILEFT_DATA_DATA_1        = 8'h24,
    ADDR_ILEFT_DATA_CTRL          = 8'h28,
    ADDR_IRIGHT_W_DATA_0          = 8'h2c,
    ADDR_IRIGHT_W_CTRL            = 8'h30,
    ADDR_IRIGHT_H_DATA_0          = 8'h34,
    ADDR_IRIGHT_H_CTRL            = 8'h38,
    ADDR_IRIGHT_DATA_DATA_0       = 8'h3c,
    ADDR_IRIGHT_DATA_DATA_1       = 8'h40,
    ADDR_IRIGHT_DATA_CTRL         = 8'h44,
    ADDR_IRIGHT_MOVED_W_DATA_0    = 8'h48,
    ADDR_IRIGHT_MOVED_W_CTRL      = 8'h4c,
    ADDR_IRIGHT_MOVED_H_DATA_0    = 8'h50,
    ADDR_IRIGHT_MOVED_H_CTRL      = 8'h54,
    ADDR_IRIGHT_MOVED_DATA_DATA_0 = 8'h58,
    ADDR_IRIGHT_MOVED_DATA_DATA_1 = 8'h5c,
    ADDR_IRIGHT_MOVED_DATA_CTRL   = 8'h60,
    ADDR_WIN_SZ_DATA_0            = 8'h64,
    ADDR_WIN_SZ_CTRL              = 8'h68,
    ADDR_DISPARITY_DATA_0         = 8'h6c,
    ADDR_DISPARITY_CTRL           = 8'h70,
    ADDR_SAD_W_DATA_0             = 8'h74,
    ADDR_SAD_W_CTRL               = 8'h78,
    ADDR_SAD_H_DATA_0             = 8'h7c,
    ADDR_SAD_H_CTRL               = 8'h80,
    ADDR_SAD_DATA_DATA_0          = 8'h84,
    ADDR_SAD_DATA_DATA_1          = 8'h88,
    ADDR_SAD_DATA_CTRL            = 8'h8c,
    ADDR_INTEGRALIMG_W_DATA_0     = 8'h90,
    ADDR_INTEGRALIMG_W_CTRL       = 8'h94,
    ADDR_INTEGRALIMG_H_DATA_0     = 8'h98,
    ADDR_INTEGRALIMG_H_CTRL       = 8'h9c,
    ADDR_INTEGRALIMG_DATA_DATA_0  = 8'ha0,
    ADDR_INTEGRALIMG_DATA_DATA_1  = 8'ha4,
    ADDR_INTEGRALIMG_DATA_CTRL    = 8'ha8,
    ADDR_RETSAD_W_DATA_0          = 8'hac,
    ADDR_RETSAD_W_CTRL            = 8'hb0,
    ADDR_RETSAD_H_DATA_0          = 8'hb4,
    ADDR_RETSAD_H_CTRL            = 8'hb8,
    ADDR_RETSAD_DATA_DATA_0       = 8'hbc,
    ADDR_RETSAD_DATA_DATA_1       = 8'hc0,
    ADDR_RETSAD_DATA_CTRL         = 8'hc4,
    ADDR_RANGE_W_DATA_0           = 8'hc8,
    ADDR_RANGE_W_CTRL             = 8'hcc,
    ADDR_RANGE_H_DATA_0           = 8'hd0,
    ADDR_RANGE_H_CTRL             = 8'hd4,
    ADDR_RANGE_DATA_DATA_0        = 8'hd8,
    ADDR_RANGE_DATA_DATA_1        = 8'hdc,
    ADDR_RANGE_DATA_CTRL          = 8'he0,
    WRIDLE                        = 2'd0,
    WRDATA                        = 2'd1,
    WRRESP                        = 2'd2,
    WRRESET                       = 2'd3,
    RDIDLE                        = 2'd0,
    RDDATA                        = 2'd1,
    RDRESET                       = 2'd2,
    ADDR_BITS                = 8;

//------------------------Local signal-------------------
    reg  [1:0]                    wstate = WRRESET;
    reg  [1:0]                    wnext;
    reg  [ADDR_BITS-1:0]          waddr;
    wire [C_S_AXI_DATA_WIDTH-1:0] wmask;
    wire                          aw_hs;
    wire                          w_hs;
    reg  [1:0]                    rstate = RDRESET;
    reg  [1:0]                    rnext;
    reg  [C_S_AXI_DATA_WIDTH-1:0] rdata;
    wire                          ar_hs;
    wire [ADDR_BITS-1:0]          raddr;
    // internal registers
    reg                           int_ap_idle = 1'b0;
    reg                           int_ap_continue = 1'b0;
    reg                           int_ap_ready = 1'b0;
    wire                          task_ap_ready;
    reg                           int_ap_done = 1'b0;
    wire                          task_ap_done;
    reg                           int_task_ap_done = 1'b0;
    reg                           int_ap_start = 1'b0;
    reg                           int_interrupt = 1'b0;
    reg                           int_auto_restart = 1'b0;
    reg                           auto_restart_status = 1'b0;
    reg                           auto_restart_done = 1'b0;
    reg                           int_gie = 1'b0;
    reg  [1:0]                    int_ier = 2'b0;
    reg  [1:0]                    int_isr = 2'b0;
    reg  [31:0]                   int_Ileft_w = 'b0;
    reg  [31:0]                   int_Ileft_h = 'b0;
    reg  [63:0]                   int_Ileft_data = 'b0;
    reg  [31:0]                   int_Iright_w = 'b0;
    reg  [31:0]                   int_Iright_h = 'b0;
    reg  [63:0]                   int_Iright_data = 'b0;
    reg  [31:0]                   int_Iright_moved_w = 'b0;
    reg  [31:0]                   int_Iright_moved_h = 'b0;
    reg  [63:0]                   int_Iright_moved_data = 'b0;
    reg  [31:0]                   int_win_sz = 'b0;
    reg  [31:0]                   int_disparity = 'b0;
    reg  [31:0]                   int_SAD_w = 'b0;
    reg  [31:0]                   int_SAD_h = 'b0;
    reg  [63:0]                   int_SAD_data = 'b0;
    reg  [31:0]                   int_integralImg_w = 'b0;
    reg  [31:0]                   int_integralImg_h = 'b0;
    reg  [63:0]                   int_integralImg_data = 'b0;
    reg  [31:0]                   int_retSAD_w = 'b0;
    reg  [31:0]                   int_retSAD_h = 'b0;
    reg  [63:0]                   int_retSAD_data = 'b0;
    reg  [31:0]                   int_range_w = 'b0;
    reg  [31:0]                   int_range_h = 'b0;
    reg  [63:0]                   int_range_data = 'b0;

//------------------------Instantiation------------------


//------------------------AXI write fsm------------------
assign AWREADY = (wstate == WRIDLE);
assign WREADY  = (wstate == WRDATA);
assign BRESP   = 2'b00;  // OKAY
assign BVALID  = (wstate == WRRESP);
assign wmask   = { {8{WSTRB[3]}}, {8{WSTRB[2]}}, {8{WSTRB[1]}}, {8{WSTRB[0]}} };
assign aw_hs   = AWVALID & AWREADY;
assign w_hs    = WVALID & WREADY;

// wstate
always @(posedge ACLK) begin
    if (ARESET)
        wstate <= WRRESET;
    else if (ACLK_EN)
        wstate <= wnext;
end

// wnext
always @(*) begin
    case (wstate)
        WRIDLE:
            if (AWVALID)
                wnext = WRDATA;
            else
                wnext = WRIDLE;
        WRDATA:
            if (WVALID)
                wnext = WRRESP;
            else
                wnext = WRDATA;
        WRRESP:
            if (BREADY)
                wnext = WRIDLE;
            else
                wnext = WRRESP;
        default:
            wnext = WRIDLE;
    endcase
end

// waddr
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (aw_hs)
            waddr <= {AWADDR[ADDR_BITS-1:2], {2{1'b0}}};
    end
end

//------------------------AXI read fsm-------------------
assign ARREADY = (rstate == RDIDLE);
assign RDATA   = rdata;
assign RRESP   = 2'b00;  // OKAY
assign RVALID  = (rstate == RDDATA);
assign ar_hs   = ARVALID & ARREADY;
assign raddr   = ARADDR[ADDR_BITS-1:0];

// rstate
always @(posedge ACLK) begin
    if (ARESET)
        rstate <= RDRESET;
    else if (ACLK_EN)
        rstate <= rnext;
end

// rnext
always @(*) begin
    case (rstate)
        RDIDLE:
            if (ARVALID)
                rnext = RDDATA;
            else
                rnext = RDIDLE;
        RDDATA:
            if (RREADY & RVALID)
                rnext = RDIDLE;
            else
                rnext = RDDATA;
        default:
            rnext = RDIDLE;
    endcase
end

// rdata
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (ar_hs) begin
            rdata <= 'b0;
            case (raddr)
                ADDR_AP_CTRL: begin
                    rdata[0] <= int_ap_start;
                    rdata[1] <= int_task_ap_done;
                    rdata[2] <= int_ap_idle;
                    rdata[3] <= int_ap_ready;
                    rdata[4] <= int_ap_continue;
                    rdata[7] <= int_auto_restart;
                    rdata[9] <= int_interrupt;
                end
                ADDR_GIE: begin
                    rdata <= int_gie;
                end
                ADDR_IER: begin
                    rdata <= int_ier;
                end
                ADDR_ISR: begin
                    rdata <= int_isr;
                end
                ADDR_ILEFT_W_DATA_0: begin
                    rdata <= int_Ileft_w[31:0];
                end
                ADDR_ILEFT_H_DATA_0: begin
                    rdata <= int_Ileft_h[31:0];
                end
                ADDR_ILEFT_DATA_DATA_0: begin
                    rdata <= int_Ileft_data[31:0];
                end
                ADDR_ILEFT_DATA_DATA_1: begin
                    rdata <= int_Ileft_data[63:32];
                end
                ADDR_IRIGHT_W_DATA_0: begin
                    rdata <= int_Iright_w[31:0];
                end
                ADDR_IRIGHT_H_DATA_0: begin
                    rdata <= int_Iright_h[31:0];
                end
                ADDR_IRIGHT_DATA_DATA_0: begin
                    rdata <= int_Iright_data[31:0];
                end
                ADDR_IRIGHT_DATA_DATA_1: begin
                    rdata <= int_Iright_data[63:32];
                end
                ADDR_IRIGHT_MOVED_W_DATA_0: begin
                    rdata <= int_Iright_moved_w[31:0];
                end
                ADDR_IRIGHT_MOVED_H_DATA_0: begin
                    rdata <= int_Iright_moved_h[31:0];
                end
                ADDR_IRIGHT_MOVED_DATA_DATA_0: begin
                    rdata <= int_Iright_moved_data[31:0];
                end
                ADDR_IRIGHT_MOVED_DATA_DATA_1: begin
                    rdata <= int_Iright_moved_data[63:32];
                end
                ADDR_WIN_SZ_DATA_0: begin
                    rdata <= int_win_sz[31:0];
                end
                ADDR_DISPARITY_DATA_0: begin
                    rdata <= int_disparity[31:0];
                end
                ADDR_SAD_W_DATA_0: begin
                    rdata <= int_SAD_w[31:0];
                end
                ADDR_SAD_H_DATA_0: begin
                    rdata <= int_SAD_h[31:0];
                end
                ADDR_SAD_DATA_DATA_0: begin
                    rdata <= int_SAD_data[31:0];
                end
                ADDR_SAD_DATA_DATA_1: begin
                    rdata <= int_SAD_data[63:32];
                end
                ADDR_INTEGRALIMG_W_DATA_0: begin
                    rdata <= int_integralImg_w[31:0];
                end
                ADDR_INTEGRALIMG_H_DATA_0: begin
                    rdata <= int_integralImg_h[31:0];
                end
                ADDR_INTEGRALIMG_DATA_DATA_0: begin
                    rdata <= int_integralImg_data[31:0];
                end
                ADDR_INTEGRALIMG_DATA_DATA_1: begin
                    rdata <= int_integralImg_data[63:32];
                end
                ADDR_RETSAD_W_DATA_0: begin
                    rdata <= int_retSAD_w[31:0];
                end
                ADDR_RETSAD_H_DATA_0: begin
                    rdata <= int_retSAD_h[31:0];
                end
                ADDR_RETSAD_DATA_DATA_0: begin
                    rdata <= int_retSAD_data[31:0];
                end
                ADDR_RETSAD_DATA_DATA_1: begin
                    rdata <= int_retSAD_data[63:32];
                end
                ADDR_RANGE_W_DATA_0: begin
                    rdata <= int_range_w[31:0];
                end
                ADDR_RANGE_H_DATA_0: begin
                    rdata <= int_range_h[31:0];
                end
                ADDR_RANGE_DATA_DATA_0: begin
                    rdata <= int_range_data[31:0];
                end
                ADDR_RANGE_DATA_DATA_1: begin
                    rdata <= int_range_data[63:32];
                end
            endcase
        end
    end
end


//------------------------Register logic-----------------
assign interrupt         = int_interrupt;
assign ap_start          = int_ap_start;
assign task_ap_done      = (ap_done && !auto_restart_status) || auto_restart_done;
assign task_ap_ready     = ap_ready && !int_auto_restart;
assign ap_continue       = int_ap_continue || auto_restart_status;
assign Ileft_w           = int_Ileft_w;
assign Ileft_h           = int_Ileft_h;
assign Ileft_data        = int_Ileft_data;
assign Iright_w          = int_Iright_w;
assign Iright_h          = int_Iright_h;
assign Iright_data       = int_Iright_data;
assign Iright_moved_w    = int_Iright_moved_w;
assign Iright_moved_h    = int_Iright_moved_h;
assign Iright_moved_data = int_Iright_moved_data;
assign win_sz            = int_win_sz;
assign disparity         = int_disparity;
assign SAD_w             = int_SAD_w;
assign SAD_h             = int_SAD_h;
assign SAD_data          = int_SAD_data;
assign integralImg_w     = int_integralImg_w;
assign integralImg_h     = int_integralImg_h;
assign integralImg_data  = int_integralImg_data;
assign retSAD_w          = int_retSAD_w;
assign retSAD_h          = int_retSAD_h;
assign retSAD_data       = int_retSAD_data;
assign range_w           = int_range_w;
assign range_h           = int_range_h;
assign range_data        = int_range_data;
// int_interrupt
always @(posedge ACLK) begin
    if (ARESET)
        int_interrupt <= 1'b0;
    else if (ACLK_EN) begin
        if (int_gie && (|int_isr))
            int_interrupt <= 1'b1;
        else
            int_interrupt <= 1'b0;
    end
end

// int_ap_start
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_start <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0] && WDATA[0])
            int_ap_start <= 1'b1;
        else if (ap_ready)
            int_ap_start <= int_auto_restart; // clear on handshake/auto restart
    end
end

// int_ap_done
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_done <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_done <= ap_done;
    end
end

// int_task_ap_done
always @(posedge ACLK) begin
    if (ARESET)
        int_task_ap_done <= 1'b0;
    else if (ACLK_EN) begin
            int_task_ap_done <= task_ap_done && !int_ap_continue;
    end
end

// int_ap_idle
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_idle <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_idle <= ap_idle;
    end
end

// int_ap_ready
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_ready <= 1'b0;
    else if (ACLK_EN) begin
        if (task_ap_ready)
            int_ap_ready <= 1'b1;
        else if (ar_hs && raddr == ADDR_AP_CTRL)
            int_ap_ready <= 1'b0;
    end
end

// int_ap_continue
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_continue <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0] && WDATA[4])
            int_ap_continue <= 1'b1;
        else
            int_ap_continue <= 1'b0; // self clear
    end
end

// int_auto_restart
always @(posedge ACLK) begin
    if (ARESET)
        int_auto_restart <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0])
            int_auto_restart <= WDATA[7];
    end
end

// auto_restart_status
always @(posedge ACLK) begin
    if (ARESET)
        auto_restart_status <= 1'b0;
    else if (ACLK_EN) begin
        if (int_auto_restart)
            auto_restart_status <= 1'b1;
        else if (ap_idle)
            auto_restart_status <= 1'b0;
    end
end

// auto_restart_done
always @(posedge ACLK) begin
    if (ARESET)
        auto_restart_done <= 1'b0;
    else if (ACLK_EN) begin
        if (auto_restart_status && (ap_idle && !int_ap_idle))
            auto_restart_done <= 1'b1;
        else if (int_ap_continue)
            auto_restart_done <= 1'b0;
    end
end

// int_gie
always @(posedge ACLK) begin
    if (ARESET)
        int_gie <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_GIE && WSTRB[0])
            int_gie <= WDATA[0];
    end
end

// int_ier
always @(posedge ACLK) begin
    if (ARESET)
        int_ier <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IER && WSTRB[0])
            int_ier <= WDATA[1:0];
    end
end

// int_isr[0]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[0] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[0] & ap_done)
            int_isr[0] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[0] <= int_isr[0] ^ WDATA[0]; // toggle on write
    end
end

// int_isr[1]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[1] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[1] & ap_ready)
            int_isr[1] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[1] <= int_isr[1] ^ WDATA[1]; // toggle on write
    end
end

// int_Ileft_w[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_Ileft_w[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_ILEFT_W_DATA_0)
            int_Ileft_w[31:0] <= (WDATA[31:0] & wmask) | (int_Ileft_w[31:0] & ~wmask);
    end
end

// int_Ileft_h[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_Ileft_h[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_ILEFT_H_DATA_0)
            int_Ileft_h[31:0] <= (WDATA[31:0] & wmask) | (int_Ileft_h[31:0] & ~wmask);
    end
end

// int_Ileft_data[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_Ileft_data[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_ILEFT_DATA_DATA_0)
            int_Ileft_data[31:0] <= (WDATA[31:0] & wmask) | (int_Ileft_data[31:0] & ~wmask);
    end
end

// int_Ileft_data[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_Ileft_data[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_ILEFT_DATA_DATA_1)
            int_Ileft_data[63:32] <= (WDATA[31:0] & wmask) | (int_Ileft_data[63:32] & ~wmask);
    end
end

// int_Iright_w[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_Iright_w[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IRIGHT_W_DATA_0)
            int_Iright_w[31:0] <= (WDATA[31:0] & wmask) | (int_Iright_w[31:0] & ~wmask);
    end
end

// int_Iright_h[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_Iright_h[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IRIGHT_H_DATA_0)
            int_Iright_h[31:0] <= (WDATA[31:0] & wmask) | (int_Iright_h[31:0] & ~wmask);
    end
end

// int_Iright_data[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_Iright_data[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IRIGHT_DATA_DATA_0)
            int_Iright_data[31:0] <= (WDATA[31:0] & wmask) | (int_Iright_data[31:0] & ~wmask);
    end
end

// int_Iright_data[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_Iright_data[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IRIGHT_DATA_DATA_1)
            int_Iright_data[63:32] <= (WDATA[31:0] & wmask) | (int_Iright_data[63:32] & ~wmask);
    end
end

// int_Iright_moved_w[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_Iright_moved_w[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IRIGHT_MOVED_W_DATA_0)
            int_Iright_moved_w[31:0] <= (WDATA[31:0] & wmask) | (int_Iright_moved_w[31:0] & ~wmask);
    end
end

// int_Iright_moved_h[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_Iright_moved_h[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IRIGHT_MOVED_H_DATA_0)
            int_Iright_moved_h[31:0] <= (WDATA[31:0] & wmask) | (int_Iright_moved_h[31:0] & ~wmask);
    end
end

// int_Iright_moved_data[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_Iright_moved_data[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IRIGHT_MOVED_DATA_DATA_0)
            int_Iright_moved_data[31:0] <= (WDATA[31:0] & wmask) | (int_Iright_moved_data[31:0] & ~wmask);
    end
end

// int_Iright_moved_data[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_Iright_moved_data[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IRIGHT_MOVED_DATA_DATA_1)
            int_Iright_moved_data[63:32] <= (WDATA[31:0] & wmask) | (int_Iright_moved_data[63:32] & ~wmask);
    end
end

// int_win_sz[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_win_sz[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WIN_SZ_DATA_0)
            int_win_sz[31:0] <= (WDATA[31:0] & wmask) | (int_win_sz[31:0] & ~wmask);
    end
end

// int_disparity[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_disparity[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_DISPARITY_DATA_0)
            int_disparity[31:0] <= (WDATA[31:0] & wmask) | (int_disparity[31:0] & ~wmask);
    end
end

// int_SAD_w[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_SAD_w[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_SAD_W_DATA_0)
            int_SAD_w[31:0] <= (WDATA[31:0] & wmask) | (int_SAD_w[31:0] & ~wmask);
    end
end

// int_SAD_h[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_SAD_h[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_SAD_H_DATA_0)
            int_SAD_h[31:0] <= (WDATA[31:0] & wmask) | (int_SAD_h[31:0] & ~wmask);
    end
end

// int_SAD_data[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_SAD_data[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_SAD_DATA_DATA_0)
            int_SAD_data[31:0] <= (WDATA[31:0] & wmask) | (int_SAD_data[31:0] & ~wmask);
    end
end

// int_SAD_data[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_SAD_data[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_SAD_DATA_DATA_1)
            int_SAD_data[63:32] <= (WDATA[31:0] & wmask) | (int_SAD_data[63:32] & ~wmask);
    end
end

// int_integralImg_w[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_integralImg_w[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INTEGRALIMG_W_DATA_0)
            int_integralImg_w[31:0] <= (WDATA[31:0] & wmask) | (int_integralImg_w[31:0] & ~wmask);
    end
end

// int_integralImg_h[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_integralImg_h[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INTEGRALIMG_H_DATA_0)
            int_integralImg_h[31:0] <= (WDATA[31:0] & wmask) | (int_integralImg_h[31:0] & ~wmask);
    end
end

// int_integralImg_data[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_integralImg_data[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INTEGRALIMG_DATA_DATA_0)
            int_integralImg_data[31:0] <= (WDATA[31:0] & wmask) | (int_integralImg_data[31:0] & ~wmask);
    end
end

// int_integralImg_data[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_integralImg_data[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INTEGRALIMG_DATA_DATA_1)
            int_integralImg_data[63:32] <= (WDATA[31:0] & wmask) | (int_integralImg_data[63:32] & ~wmask);
    end
end

// int_retSAD_w[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_retSAD_w[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_RETSAD_W_DATA_0)
            int_retSAD_w[31:0] <= (WDATA[31:0] & wmask) | (int_retSAD_w[31:0] & ~wmask);
    end
end

// int_retSAD_h[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_retSAD_h[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_RETSAD_H_DATA_0)
            int_retSAD_h[31:0] <= (WDATA[31:0] & wmask) | (int_retSAD_h[31:0] & ~wmask);
    end
end

// int_retSAD_data[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_retSAD_data[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_RETSAD_DATA_DATA_0)
            int_retSAD_data[31:0] <= (WDATA[31:0] & wmask) | (int_retSAD_data[31:0] & ~wmask);
    end
end

// int_retSAD_data[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_retSAD_data[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_RETSAD_DATA_DATA_1)
            int_retSAD_data[63:32] <= (WDATA[31:0] & wmask) | (int_retSAD_data[63:32] & ~wmask);
    end
end

// int_range_w[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_range_w[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_RANGE_W_DATA_0)
            int_range_w[31:0] <= (WDATA[31:0] & wmask) | (int_range_w[31:0] & ~wmask);
    end
end

// int_range_h[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_range_h[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_RANGE_H_DATA_0)
            int_range_h[31:0] <= (WDATA[31:0] & wmask) | (int_range_h[31:0] & ~wmask);
    end
end

// int_range_data[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_range_data[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_RANGE_DATA_DATA_0)
            int_range_data[31:0] <= (WDATA[31:0] & wmask) | (int_range_data[31:0] & ~wmask);
    end
end

// int_range_data[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_range_data[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_RANGE_DATA_DATA_1)
            int_range_data[63:32] <= (WDATA[31:0] & wmask) | (int_range_data[63:32] & ~wmask);
    end
end

//synthesis translate_off
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (int_gie & ~int_isr[0] & int_ier[0] & ap_done)
            $display ("// Interrupt Monitor : interrupt for ap_done detected @ \"%0t\"", $time);
        if (int_gie & ~int_isr[1] & int_ier[1] & ap_ready)
            $display ("// Interrupt Monitor : interrupt for ap_ready detected @ \"%0t\"", $time);
    end
end
//synthesis translate_on

//------------------------Memory logic-------------------

endmodule
