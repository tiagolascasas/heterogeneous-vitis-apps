-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.1 (64-bit)
-- Tool Version Limit: 2024.05
-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
-- 
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity cluster_control_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 8;
    C_S_AXI_DATA_WIDTH    : INTEGER := 32);
port (
    ACLK                  :in   STD_LOGIC;
    ARESET                :in   STD_LOGIC;
    ACLK_EN               :in   STD_LOGIC;
    AWADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    AWVALID               :in   STD_LOGIC;
    AWREADY               :out  STD_LOGIC;
    WDATA                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    WSTRB                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH/8-1 downto 0);
    WVALID                :in   STD_LOGIC;
    WREADY                :out  STD_LOGIC;
    BRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    BVALID                :out  STD_LOGIC;
    BREADY                :in   STD_LOGIC;
    ARADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    ARVALID               :in   STD_LOGIC;
    ARREADY               :out  STD_LOGIC;
    RDATA                 :out  STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    RRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    RVALID                :out  STD_LOGIC;
    RREADY                :in   STD_LOGIC;
    interrupt             :out  STD_LOGIC;
    Ileft_w               :out  STD_LOGIC_VECTOR(31 downto 0);
    Ileft_h               :out  STD_LOGIC_VECTOR(31 downto 0);
    Ileft_data            :out  STD_LOGIC_VECTOR(63 downto 0);
    Iright_w              :out  STD_LOGIC_VECTOR(31 downto 0);
    Iright_h              :out  STD_LOGIC_VECTOR(31 downto 0);
    Iright_data           :out  STD_LOGIC_VECTOR(63 downto 0);
    Iright_moved_w        :out  STD_LOGIC_VECTOR(31 downto 0);
    Iright_moved_h        :out  STD_LOGIC_VECTOR(31 downto 0);
    Iright_moved_data     :out  STD_LOGIC_VECTOR(63 downto 0);
    win_sz                :out  STD_LOGIC_VECTOR(31 downto 0);
    disparity             :out  STD_LOGIC_VECTOR(31 downto 0);
    SAD_w                 :out  STD_LOGIC_VECTOR(31 downto 0);
    SAD_h                 :out  STD_LOGIC_VECTOR(31 downto 0);
    SAD_data              :out  STD_LOGIC_VECTOR(63 downto 0);
    integralImg_w         :out  STD_LOGIC_VECTOR(31 downto 0);
    integralImg_h         :out  STD_LOGIC_VECTOR(31 downto 0);
    integralImg_data      :out  STD_LOGIC_VECTOR(63 downto 0);
    retSAD_w              :out  STD_LOGIC_VECTOR(31 downto 0);
    retSAD_h              :out  STD_LOGIC_VECTOR(31 downto 0);
    retSAD_data           :out  STD_LOGIC_VECTOR(63 downto 0);
    range_w               :out  STD_LOGIC_VECTOR(31 downto 0);
    range_h               :out  STD_LOGIC_VECTOR(31 downto 0);
    range_data            :out  STD_LOGIC_VECTOR(63 downto 0);
    ap_start              :out  STD_LOGIC;
    ap_done               :in   STD_LOGIC;
    ap_ready              :in   STD_LOGIC;
    ap_continue           :out  STD_LOGIC;
    ap_idle               :in   STD_LOGIC
);
end entity cluster_control_s_axi;

-- ------------------------Address Info-------------------
-- Protocol Used: ap_ctrl_chain
--
-- 0x00 : Control signals
--        bit 0  - ap_start (Read/Write/COH)
--        bit 1  - ap_done (Read)
--        bit 2  - ap_idle (Read)
--        bit 3  - ap_ready (Read/COR)
--        bit 4  - ap_continue (Read/Write/SC)
--        bit 7  - auto_restart (Read/Write)
--        bit 9  - interrupt (Read)
--        others - reserved
-- 0x04 : Global Interrupt Enable Register
--        bit 0  - Global Interrupt Enable (Read/Write)
--        others - reserved
-- 0x08 : IP Interrupt Enable Register (Read/Write)
--        bit 0 - enable ap_done interrupt (Read/Write)
--        bit 1 - enable ap_ready interrupt (Read/Write)
--        others - reserved
-- 0x0c : IP Interrupt Status Register (Read/TOW)
--        bit 0 - ap_done (Read/TOW)
--        bit 1 - ap_ready (Read/TOW)
--        others - reserved
-- 0x10 : Data signal of Ileft_w
--        bit 31~0 - Ileft_w[31:0] (Read/Write)
-- 0x14 : reserved
-- 0x18 : Data signal of Ileft_h
--        bit 31~0 - Ileft_h[31:0] (Read/Write)
-- 0x1c : reserved
-- 0x20 : Data signal of Ileft_data
--        bit 31~0 - Ileft_data[31:0] (Read/Write)
-- 0x24 : Data signal of Ileft_data
--        bit 31~0 - Ileft_data[63:32] (Read/Write)
-- 0x28 : reserved
-- 0x2c : Data signal of Iright_w
--        bit 31~0 - Iright_w[31:0] (Read/Write)
-- 0x30 : reserved
-- 0x34 : Data signal of Iright_h
--        bit 31~0 - Iright_h[31:0] (Read/Write)
-- 0x38 : reserved
-- 0x3c : Data signal of Iright_data
--        bit 31~0 - Iright_data[31:0] (Read/Write)
-- 0x40 : Data signal of Iright_data
--        bit 31~0 - Iright_data[63:32] (Read/Write)
-- 0x44 : reserved
-- 0x48 : Data signal of Iright_moved_w
--        bit 31~0 - Iright_moved_w[31:0] (Read/Write)
-- 0x4c : reserved
-- 0x50 : Data signal of Iright_moved_h
--        bit 31~0 - Iright_moved_h[31:0] (Read/Write)
-- 0x54 : reserved
-- 0x58 : Data signal of Iright_moved_data
--        bit 31~0 - Iright_moved_data[31:0] (Read/Write)
-- 0x5c : Data signal of Iright_moved_data
--        bit 31~0 - Iright_moved_data[63:32] (Read/Write)
-- 0x60 : reserved
-- 0x64 : Data signal of win_sz
--        bit 31~0 - win_sz[31:0] (Read/Write)
-- 0x68 : reserved
-- 0x6c : Data signal of disparity
--        bit 31~0 - disparity[31:0] (Read/Write)
-- 0x70 : reserved
-- 0x74 : Data signal of SAD_w
--        bit 31~0 - SAD_w[31:0] (Read/Write)
-- 0x78 : reserved
-- 0x7c : Data signal of SAD_h
--        bit 31~0 - SAD_h[31:0] (Read/Write)
-- 0x80 : reserved
-- 0x84 : Data signal of SAD_data
--        bit 31~0 - SAD_data[31:0] (Read/Write)
-- 0x88 : Data signal of SAD_data
--        bit 31~0 - SAD_data[63:32] (Read/Write)
-- 0x8c : reserved
-- 0x90 : Data signal of integralImg_w
--        bit 31~0 - integralImg_w[31:0] (Read/Write)
-- 0x94 : reserved
-- 0x98 : Data signal of integralImg_h
--        bit 31~0 - integralImg_h[31:0] (Read/Write)
-- 0x9c : reserved
-- 0xa0 : Data signal of integralImg_data
--        bit 31~0 - integralImg_data[31:0] (Read/Write)
-- 0xa4 : Data signal of integralImg_data
--        bit 31~0 - integralImg_data[63:32] (Read/Write)
-- 0xa8 : reserved
-- 0xac : Data signal of retSAD_w
--        bit 31~0 - retSAD_w[31:0] (Read/Write)
-- 0xb0 : reserved
-- 0xb4 : Data signal of retSAD_h
--        bit 31~0 - retSAD_h[31:0] (Read/Write)
-- 0xb8 : reserved
-- 0xbc : Data signal of retSAD_data
--        bit 31~0 - retSAD_data[31:0] (Read/Write)
-- 0xc0 : Data signal of retSAD_data
--        bit 31~0 - retSAD_data[63:32] (Read/Write)
-- 0xc4 : reserved
-- 0xc8 : Data signal of range_w
--        bit 31~0 - range_w[31:0] (Read/Write)
-- 0xcc : reserved
-- 0xd0 : Data signal of range_h
--        bit 31~0 - range_h[31:0] (Read/Write)
-- 0xd4 : reserved
-- 0xd8 : Data signal of range_data
--        bit 31~0 - range_data[31:0] (Read/Write)
-- 0xdc : Data signal of range_data
--        bit 31~0 - range_data[63:32] (Read/Write)
-- 0xe0 : reserved
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of cluster_control_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_AP_CTRL                  : INTEGER := 16#00#;
    constant ADDR_GIE                      : INTEGER := 16#04#;
    constant ADDR_IER                      : INTEGER := 16#08#;
    constant ADDR_ISR                      : INTEGER := 16#0c#;
    constant ADDR_ILEFT_W_DATA_0           : INTEGER := 16#10#;
    constant ADDR_ILEFT_W_CTRL             : INTEGER := 16#14#;
    constant ADDR_ILEFT_H_DATA_0           : INTEGER := 16#18#;
    constant ADDR_ILEFT_H_CTRL             : INTEGER := 16#1c#;
    constant ADDR_ILEFT_DATA_DATA_0        : INTEGER := 16#20#;
    constant ADDR_ILEFT_DATA_DATA_1        : INTEGER := 16#24#;
    constant ADDR_ILEFT_DATA_CTRL          : INTEGER := 16#28#;
    constant ADDR_IRIGHT_W_DATA_0          : INTEGER := 16#2c#;
    constant ADDR_IRIGHT_W_CTRL            : INTEGER := 16#30#;
    constant ADDR_IRIGHT_H_DATA_0          : INTEGER := 16#34#;
    constant ADDR_IRIGHT_H_CTRL            : INTEGER := 16#38#;
    constant ADDR_IRIGHT_DATA_DATA_0       : INTEGER := 16#3c#;
    constant ADDR_IRIGHT_DATA_DATA_1       : INTEGER := 16#40#;
    constant ADDR_IRIGHT_DATA_CTRL         : INTEGER := 16#44#;
    constant ADDR_IRIGHT_MOVED_W_DATA_0    : INTEGER := 16#48#;
    constant ADDR_IRIGHT_MOVED_W_CTRL      : INTEGER := 16#4c#;
    constant ADDR_IRIGHT_MOVED_H_DATA_0    : INTEGER := 16#50#;
    constant ADDR_IRIGHT_MOVED_H_CTRL      : INTEGER := 16#54#;
    constant ADDR_IRIGHT_MOVED_DATA_DATA_0 : INTEGER := 16#58#;
    constant ADDR_IRIGHT_MOVED_DATA_DATA_1 : INTEGER := 16#5c#;
    constant ADDR_IRIGHT_MOVED_DATA_CTRL   : INTEGER := 16#60#;
    constant ADDR_WIN_SZ_DATA_0            : INTEGER := 16#64#;
    constant ADDR_WIN_SZ_CTRL              : INTEGER := 16#68#;
    constant ADDR_DISPARITY_DATA_0         : INTEGER := 16#6c#;
    constant ADDR_DISPARITY_CTRL           : INTEGER := 16#70#;
    constant ADDR_SAD_W_DATA_0             : INTEGER := 16#74#;
    constant ADDR_SAD_W_CTRL               : INTEGER := 16#78#;
    constant ADDR_SAD_H_DATA_0             : INTEGER := 16#7c#;
    constant ADDR_SAD_H_CTRL               : INTEGER := 16#80#;
    constant ADDR_SAD_DATA_DATA_0          : INTEGER := 16#84#;
    constant ADDR_SAD_DATA_DATA_1          : INTEGER := 16#88#;
    constant ADDR_SAD_DATA_CTRL            : INTEGER := 16#8c#;
    constant ADDR_INTEGRALIMG_W_DATA_0     : INTEGER := 16#90#;
    constant ADDR_INTEGRALIMG_W_CTRL       : INTEGER := 16#94#;
    constant ADDR_INTEGRALIMG_H_DATA_0     : INTEGER := 16#98#;
    constant ADDR_INTEGRALIMG_H_CTRL       : INTEGER := 16#9c#;
    constant ADDR_INTEGRALIMG_DATA_DATA_0  : INTEGER := 16#a0#;
    constant ADDR_INTEGRALIMG_DATA_DATA_1  : INTEGER := 16#a4#;
    constant ADDR_INTEGRALIMG_DATA_CTRL    : INTEGER := 16#a8#;
    constant ADDR_RETSAD_W_DATA_0          : INTEGER := 16#ac#;
    constant ADDR_RETSAD_W_CTRL            : INTEGER := 16#b0#;
    constant ADDR_RETSAD_H_DATA_0          : INTEGER := 16#b4#;
    constant ADDR_RETSAD_H_CTRL            : INTEGER := 16#b8#;
    constant ADDR_RETSAD_DATA_DATA_0       : INTEGER := 16#bc#;
    constant ADDR_RETSAD_DATA_DATA_1       : INTEGER := 16#c0#;
    constant ADDR_RETSAD_DATA_CTRL         : INTEGER := 16#c4#;
    constant ADDR_RANGE_W_DATA_0           : INTEGER := 16#c8#;
    constant ADDR_RANGE_W_CTRL             : INTEGER := 16#cc#;
    constant ADDR_RANGE_H_DATA_0           : INTEGER := 16#d0#;
    constant ADDR_RANGE_H_CTRL             : INTEGER := 16#d4#;
    constant ADDR_RANGE_DATA_DATA_0        : INTEGER := 16#d8#;
    constant ADDR_RANGE_DATA_DATA_1        : INTEGER := 16#dc#;
    constant ADDR_RANGE_DATA_CTRL          : INTEGER := 16#e0#;
    constant ADDR_BITS         : INTEGER := 8;

    signal waddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal wmask               : UNSIGNED(C_S_AXI_DATA_WIDTH-1 downto 0);
    signal aw_hs               : STD_LOGIC;
    signal w_hs                : STD_LOGIC;
    signal rdata_data          : UNSIGNED(C_S_AXI_DATA_WIDTH-1 downto 0);
    signal ar_hs               : STD_LOGIC;
    signal raddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal AWREADY_t           : STD_LOGIC;
    signal WREADY_t            : STD_LOGIC;
    signal ARREADY_t           : STD_LOGIC;
    signal RVALID_t            : STD_LOGIC;
    -- internal registers
    signal int_ap_idle         : STD_LOGIC := '0';
    signal int_ap_continue     : STD_LOGIC := '0';
    signal int_ap_ready        : STD_LOGIC := '0';
    signal task_ap_ready       : STD_LOGIC;
    signal int_ap_done         : STD_LOGIC := '0';
    signal task_ap_done        : STD_LOGIC;
    signal int_task_ap_done    : STD_LOGIC := '0';
    signal int_ap_start        : STD_LOGIC := '0';
    signal int_interrupt       : STD_LOGIC := '0';
    signal int_auto_restart    : STD_LOGIC := '0';
    signal auto_restart_status : STD_LOGIC := '0';
    signal auto_restart_done   : STD_LOGIC := '0';
    signal int_gie             : STD_LOGIC := '0';
    signal int_ier             : UNSIGNED(1 downto 0) := (others => '0');
    signal int_isr             : UNSIGNED(1 downto 0) := (others => '0');
    signal int_Ileft_w         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_Ileft_h         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_Ileft_data      : UNSIGNED(63 downto 0) := (others => '0');
    signal int_Iright_w        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_Iright_h        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_Iright_data     : UNSIGNED(63 downto 0) := (others => '0');
    signal int_Iright_moved_w  : UNSIGNED(31 downto 0) := (others => '0');
    signal int_Iright_moved_h  : UNSIGNED(31 downto 0) := (others => '0');
    signal int_Iright_moved_data : UNSIGNED(63 downto 0) := (others => '0');
    signal int_win_sz          : UNSIGNED(31 downto 0) := (others => '0');
    signal int_disparity       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_SAD_w           : UNSIGNED(31 downto 0) := (others => '0');
    signal int_SAD_h           : UNSIGNED(31 downto 0) := (others => '0');
    signal int_SAD_data        : UNSIGNED(63 downto 0) := (others => '0');
    signal int_integralImg_w   : UNSIGNED(31 downto 0) := (others => '0');
    signal int_integralImg_h   : UNSIGNED(31 downto 0) := (others => '0');
    signal int_integralImg_data : UNSIGNED(63 downto 0) := (others => '0');
    signal int_retSAD_w        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_retSAD_h        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_retSAD_data     : UNSIGNED(63 downto 0) := (others => '0');
    signal int_range_w         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_range_h         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_range_data      : UNSIGNED(63 downto 0) := (others => '0');


begin
-- ----------------------- Instantiation------------------


-- ----------------------- AXI WRITE ---------------------
    AWREADY_t <=  '1' when wstate = wridle else '0';
    AWREADY   <=  AWREADY_t;
    WREADY_t  <=  '1' when wstate = wrdata else '0';
    WREADY    <=  WREADY_t;
    BRESP     <=  "00";  -- OKAY
    BVALID    <=  '1' when wstate = wrresp else '0';
    wmask     <=  (31 downto 24 => WSTRB(3), 23 downto 16 => WSTRB(2), 15 downto 8 => WSTRB(1), 7 downto 0 => WSTRB(0));
    aw_hs     <=  AWVALID and AWREADY_t;
    w_hs      <=  WVALID and WREADY_t;

    -- write FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                wstate <= wrreset;
            elsif (ACLK_EN = '1') then
                wstate <= wnext;
            end if;
        end if;
    end process;

    process (wstate, AWVALID, WVALID, BREADY)
    begin
        case (wstate) is
        when wridle =>
            if (AWVALID = '1') then
                wnext <= wrdata;
            else
                wnext <= wridle;
            end if;
        when wrdata =>
            if (WVALID = '1') then
                wnext <= wrresp;
            else
                wnext <= wrdata;
            end if;
        when wrresp =>
            if (BREADY = '1') then
                wnext <= wridle;
            else
                wnext <= wrresp;
            end if;
        when others =>
            wnext <= wridle;
        end case;
    end process;

    waddr_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (aw_hs = '1') then
                    waddr <= UNSIGNED(AWADDR(ADDR_BITS-1 downto 2) & (1 downto 0 => '0'));
                end if;
            end if;
        end if;
    end process;

-- ----------------------- AXI READ ----------------------
    ARREADY_t <= '1' when (rstate = rdidle) else '0';
    ARREADY <= ARREADY_t;
    RDATA   <= STD_LOGIC_VECTOR(rdata_data);
    RRESP   <= "00";  -- OKAY
    RVALID_t  <= '1' when (rstate = rddata) else '0';
    RVALID    <= RVALID_t;
    ar_hs   <= ARVALID and ARREADY_t;
    raddr   <= UNSIGNED(ARADDR(ADDR_BITS-1 downto 0));

    -- read FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                rstate <= rdreset;
            elsif (ACLK_EN = '1') then
                rstate <= rnext;
            end if;
        end if;
    end process;

    process (rstate, ARVALID, RREADY, RVALID_t)
    begin
        case (rstate) is
        when rdidle =>
            if (ARVALID = '1') then
                rnext <= rddata;
            else
                rnext <= rdidle;
            end if;
        when rddata =>
            if (RREADY = '1' and RVALID_t = '1') then
                rnext <= rdidle;
            else
                rnext <= rddata;
            end if;
        when others =>
            rnext <= rdidle;
        end case;
    end process;

    rdata_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (ar_hs = '1') then
                    rdata_data <= (others => '0');
                    case (TO_INTEGER(raddr)) is
                    when ADDR_AP_CTRL =>
                        rdata_data(9) <= int_interrupt;
                        rdata_data(7) <= int_auto_restart;
                        rdata_data(4) <= int_ap_continue;
                        rdata_data(3) <= int_ap_ready;
                        rdata_data(2) <= int_ap_idle;
                        rdata_data(1) <= int_task_ap_done;
                        rdata_data(0) <= int_ap_start;
                    when ADDR_GIE =>
                        rdata_data(0) <= int_gie;
                    when ADDR_IER =>
                        rdata_data(1 downto 0) <= int_ier;
                    when ADDR_ISR =>
                        rdata_data(1 downto 0) <= int_isr;
                    when ADDR_ILEFT_W_DATA_0 =>
                        rdata_data <= RESIZE(int_Ileft_w(31 downto 0), 32);
                    when ADDR_ILEFT_H_DATA_0 =>
                        rdata_data <= RESIZE(int_Ileft_h(31 downto 0), 32);
                    when ADDR_ILEFT_DATA_DATA_0 =>
                        rdata_data <= RESIZE(int_Ileft_data(31 downto 0), 32);
                    when ADDR_ILEFT_DATA_DATA_1 =>
                        rdata_data <= RESIZE(int_Ileft_data(63 downto 32), 32);
                    when ADDR_IRIGHT_W_DATA_0 =>
                        rdata_data <= RESIZE(int_Iright_w(31 downto 0), 32);
                    when ADDR_IRIGHT_H_DATA_0 =>
                        rdata_data <= RESIZE(int_Iright_h(31 downto 0), 32);
                    when ADDR_IRIGHT_DATA_DATA_0 =>
                        rdata_data <= RESIZE(int_Iright_data(31 downto 0), 32);
                    when ADDR_IRIGHT_DATA_DATA_1 =>
                        rdata_data <= RESIZE(int_Iright_data(63 downto 32), 32);
                    when ADDR_IRIGHT_MOVED_W_DATA_0 =>
                        rdata_data <= RESIZE(int_Iright_moved_w(31 downto 0), 32);
                    when ADDR_IRIGHT_MOVED_H_DATA_0 =>
                        rdata_data <= RESIZE(int_Iright_moved_h(31 downto 0), 32);
                    when ADDR_IRIGHT_MOVED_DATA_DATA_0 =>
                        rdata_data <= RESIZE(int_Iright_moved_data(31 downto 0), 32);
                    when ADDR_IRIGHT_MOVED_DATA_DATA_1 =>
                        rdata_data <= RESIZE(int_Iright_moved_data(63 downto 32), 32);
                    when ADDR_WIN_SZ_DATA_0 =>
                        rdata_data <= RESIZE(int_win_sz(31 downto 0), 32);
                    when ADDR_DISPARITY_DATA_0 =>
                        rdata_data <= RESIZE(int_disparity(31 downto 0), 32);
                    when ADDR_SAD_W_DATA_0 =>
                        rdata_data <= RESIZE(int_SAD_w(31 downto 0), 32);
                    when ADDR_SAD_H_DATA_0 =>
                        rdata_data <= RESIZE(int_SAD_h(31 downto 0), 32);
                    when ADDR_SAD_DATA_DATA_0 =>
                        rdata_data <= RESIZE(int_SAD_data(31 downto 0), 32);
                    when ADDR_SAD_DATA_DATA_1 =>
                        rdata_data <= RESIZE(int_SAD_data(63 downto 32), 32);
                    when ADDR_INTEGRALIMG_W_DATA_0 =>
                        rdata_data <= RESIZE(int_integralImg_w(31 downto 0), 32);
                    when ADDR_INTEGRALIMG_H_DATA_0 =>
                        rdata_data <= RESIZE(int_integralImg_h(31 downto 0), 32);
                    when ADDR_INTEGRALIMG_DATA_DATA_0 =>
                        rdata_data <= RESIZE(int_integralImg_data(31 downto 0), 32);
                    when ADDR_INTEGRALIMG_DATA_DATA_1 =>
                        rdata_data <= RESIZE(int_integralImg_data(63 downto 32), 32);
                    when ADDR_RETSAD_W_DATA_0 =>
                        rdata_data <= RESIZE(int_retSAD_w(31 downto 0), 32);
                    when ADDR_RETSAD_H_DATA_0 =>
                        rdata_data <= RESIZE(int_retSAD_h(31 downto 0), 32);
                    when ADDR_RETSAD_DATA_DATA_0 =>
                        rdata_data <= RESIZE(int_retSAD_data(31 downto 0), 32);
                    when ADDR_RETSAD_DATA_DATA_1 =>
                        rdata_data <= RESIZE(int_retSAD_data(63 downto 32), 32);
                    when ADDR_RANGE_W_DATA_0 =>
                        rdata_data <= RESIZE(int_range_w(31 downto 0), 32);
                    when ADDR_RANGE_H_DATA_0 =>
                        rdata_data <= RESIZE(int_range_h(31 downto 0), 32);
                    when ADDR_RANGE_DATA_DATA_0 =>
                        rdata_data <= RESIZE(int_range_data(31 downto 0), 32);
                    when ADDR_RANGE_DATA_DATA_1 =>
                        rdata_data <= RESIZE(int_range_data(63 downto 32), 32);
                    when others =>
                        NULL;
                    end case;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------
    interrupt            <= int_interrupt;
    ap_start             <= int_ap_start;
    task_ap_done         <= (ap_done and not auto_restart_status) or auto_restart_done;
    task_ap_ready        <= ap_ready and not int_auto_restart;
    ap_continue          <= int_ap_continue or auto_restart_status;
    Ileft_w              <= STD_LOGIC_VECTOR(int_Ileft_w);
    Ileft_h              <= STD_LOGIC_VECTOR(int_Ileft_h);
    Ileft_data           <= STD_LOGIC_VECTOR(int_Ileft_data);
    Iright_w             <= STD_LOGIC_VECTOR(int_Iright_w);
    Iright_h             <= STD_LOGIC_VECTOR(int_Iright_h);
    Iright_data          <= STD_LOGIC_VECTOR(int_Iright_data);
    Iright_moved_w       <= STD_LOGIC_VECTOR(int_Iright_moved_w);
    Iright_moved_h       <= STD_LOGIC_VECTOR(int_Iright_moved_h);
    Iright_moved_data    <= STD_LOGIC_VECTOR(int_Iright_moved_data);
    win_sz               <= STD_LOGIC_VECTOR(int_win_sz);
    disparity            <= STD_LOGIC_VECTOR(int_disparity);
    SAD_w                <= STD_LOGIC_VECTOR(int_SAD_w);
    SAD_h                <= STD_LOGIC_VECTOR(int_SAD_h);
    SAD_data             <= STD_LOGIC_VECTOR(int_SAD_data);
    integralImg_w        <= STD_LOGIC_VECTOR(int_integralImg_w);
    integralImg_h        <= STD_LOGIC_VECTOR(int_integralImg_h);
    integralImg_data     <= STD_LOGIC_VECTOR(int_integralImg_data);
    retSAD_w             <= STD_LOGIC_VECTOR(int_retSAD_w);
    retSAD_h             <= STD_LOGIC_VECTOR(int_retSAD_h);
    retSAD_data          <= STD_LOGIC_VECTOR(int_retSAD_data);
    range_w              <= STD_LOGIC_VECTOR(int_range_w);
    range_h              <= STD_LOGIC_VECTOR(int_range_h);
    range_data           <= STD_LOGIC_VECTOR(int_range_data);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_interrupt <= '0';
            elsif (ACLK_EN = '1') then
                if (int_gie = '1' and (int_isr(0) or int_isr(1)) = '1') then
                    int_interrupt <= '1';
                else
                    int_interrupt <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_start <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_AP_CTRL and WSTRB(0) = '1' and WDATA(0) = '1') then
                    int_ap_start <= '1';
                elsif (ap_ready = '1') then
                    int_ap_start <= int_auto_restart; -- clear on handshake/auto restart
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_done <= '0';
            elsif (ACLK_EN = '1') then
                if (true) then
                    int_ap_done <= ap_done;
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_task_ap_done <= '0';
            elsif (ACLK_EN = '1') then
                if (int_ap_continue = '1') then
                    int_task_ap_done <= '0';
                elsif (task_ap_done = '1') then
                    int_task_ap_done <= '1';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_idle <= '0';
            elsif (ACLK_EN = '1') then
                if (true) then
                    int_ap_idle <= ap_idle;
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_ready <= '0';
            elsif (ACLK_EN = '1') then
                if (task_ap_ready = '1') then
                    int_ap_ready <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_AP_CTRL) then
                    int_ap_ready <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_continue <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_AP_CTRL and WSTRB(0) = '1' and WDATA(4) = '1') then
                    int_ap_continue <= '1';
                else
                    int_ap_continue <= '0'; -- self clear
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_auto_restart <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_AP_CTRL and WSTRB(0) = '1') then
                    int_auto_restart <= WDATA(7);
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                auto_restart_status <= '0';
            elsif (ACLK_EN = '1') then
                if (int_auto_restart = '1') then
                    auto_restart_status <= '1';
                elsif (ap_idle = '1') then
                    auto_restart_status <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                auto_restart_done <= '0';
            elsif (ACLK_EN = '1') then
                if (auto_restart_status = '1' and (ap_idle = '1' and int_ap_idle = '0')) then
                    auto_restart_done <= '1';
                elsif (int_ap_continue = '1') then
                    auto_restart_done <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_gie <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_GIE and WSTRB(0) = '1') then
                    int_gie <= WDATA(0);
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ier <= (others=>'0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IER and WSTRB(0) = '1') then
                    int_ier <= UNSIGNED(WDATA(1 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_isr(0) <= '0';
            elsif (ACLK_EN = '1') then
                if (int_ier(0) = '1' and ap_done = '1') then
                    int_isr(0) <= '1';
                elsif (w_hs = '1' and waddr = ADDR_ISR and WSTRB(0) = '1') then
                    int_isr(0) <= int_isr(0) xor WDATA(0); -- toggle on write
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_isr(1) <= '0';
            elsif (ACLK_EN = '1') then
                if (int_ier(1) = '1' and ap_ready = '1') then
                    int_isr(1) <= '1';
                elsif (w_hs = '1' and waddr = ADDR_ISR and WSTRB(0) = '1') then
                    int_isr(1) <= int_isr(1) xor WDATA(1); -- toggle on write
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Ileft_w(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_ILEFT_W_DATA_0) then
                    int_Ileft_w(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Ileft_w(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Ileft_h(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_ILEFT_H_DATA_0) then
                    int_Ileft_h(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Ileft_h(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Ileft_data(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_ILEFT_DATA_DATA_0) then
                    int_Ileft_data(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Ileft_data(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Ileft_data(63 downto 32) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_ILEFT_DATA_DATA_1) then
                    int_Ileft_data(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Ileft_data(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Iright_w(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IRIGHT_W_DATA_0) then
                    int_Iright_w(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Iright_w(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Iright_h(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IRIGHT_H_DATA_0) then
                    int_Iright_h(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Iright_h(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Iright_data(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IRIGHT_DATA_DATA_0) then
                    int_Iright_data(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Iright_data(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Iright_data(63 downto 32) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IRIGHT_DATA_DATA_1) then
                    int_Iright_data(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Iright_data(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Iright_moved_w(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IRIGHT_MOVED_W_DATA_0) then
                    int_Iright_moved_w(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Iright_moved_w(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Iright_moved_h(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IRIGHT_MOVED_H_DATA_0) then
                    int_Iright_moved_h(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Iright_moved_h(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Iright_moved_data(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IRIGHT_MOVED_DATA_DATA_0) then
                    int_Iright_moved_data(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Iright_moved_data(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_Iright_moved_data(63 downto 32) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IRIGHT_MOVED_DATA_DATA_1) then
                    int_Iright_moved_data(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_Iright_moved_data(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_win_sz(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_WIN_SZ_DATA_0) then
                    int_win_sz(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_win_sz(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_disparity(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_DISPARITY_DATA_0) then
                    int_disparity(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_disparity(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_SAD_w(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_SAD_W_DATA_0) then
                    int_SAD_w(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_SAD_w(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_SAD_h(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_SAD_H_DATA_0) then
                    int_SAD_h(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_SAD_h(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_SAD_data(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_SAD_DATA_DATA_0) then
                    int_SAD_data(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_SAD_data(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_SAD_data(63 downto 32) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_SAD_DATA_DATA_1) then
                    int_SAD_data(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_SAD_data(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_integralImg_w(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INTEGRALIMG_W_DATA_0) then
                    int_integralImg_w(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_integralImg_w(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_integralImg_h(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INTEGRALIMG_H_DATA_0) then
                    int_integralImg_h(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_integralImg_h(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_integralImg_data(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INTEGRALIMG_DATA_DATA_0) then
                    int_integralImg_data(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_integralImg_data(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_integralImg_data(63 downto 32) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INTEGRALIMG_DATA_DATA_1) then
                    int_integralImg_data(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_integralImg_data(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_retSAD_w(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_RETSAD_W_DATA_0) then
                    int_retSAD_w(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_retSAD_w(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_retSAD_h(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_RETSAD_H_DATA_0) then
                    int_retSAD_h(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_retSAD_h(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_retSAD_data(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_RETSAD_DATA_DATA_0) then
                    int_retSAD_data(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_retSAD_data(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_retSAD_data(63 downto 32) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_RETSAD_DATA_DATA_1) then
                    int_retSAD_data(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_retSAD_data(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_range_w(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_RANGE_W_DATA_0) then
                    int_range_w(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_range_w(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_range_h(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_RANGE_H_DATA_0) then
                    int_range_h(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_range_h(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_range_data(31 downto 0) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_RANGE_DATA_DATA_0) then
                    int_range_data(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_range_data(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_range_data(63 downto 32) <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_RANGE_DATA_DATA_1) then
                    int_range_data(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_range_data(63 downto 32));
                end if;
            end if;
        end if;
    end process;


-- ----------------------- Memory logic ------------------

end architecture behave;
