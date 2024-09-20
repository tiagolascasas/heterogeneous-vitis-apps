-- ==============================================================
-- Generated by Vitis HLS v2024.1
-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity edgedetect_edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2_convolve2d_vertical_unsigcud is 
    generic(
             DataWidth     : integer := 8; 
             AddressWidth     : integer := 4; 
             AddressRange    : integer := 9
    ); 
    port (
 
          address0        : in std_logic_vector(AddressWidth-1 downto 0); 
          ce0             : in std_logic; 
          q0              : out std_logic_vector(DataWidth-1 downto 0);

          reset               : in std_logic;
          clk                 : in std_logic
    ); 
end entity; 


architecture rtl of edgedetect_edgedetect_Pipeline_VITIS_LOOP_97_1_VITIS_LOOP_99_2_convolve2d_vertical_unsigcud is 
 
signal address0_tmp : std_logic_vector(AddressWidth-1 downto 0); 

type mem_array is array (0 to AddressRange-1) of std_logic_vector (DataWidth-1 downto 0); 

signal mem0 : mem_array := (
    0 => "11111111", 1 => "00000000", 2 => "00000001", 3 => "11111110", 
    4 => "00000000", 5 => "00000001", 6 => "00000000", 7 => "00000001", 
    8 => "00000000");



begin 

 
memory_access_guard_0: process (address0) 
begin
      address0_tmp <= address0;
--synthesis translate_off
      if (CONV_INTEGER(address0) > AddressRange-1) then
           address0_tmp <= (others => '0');
      else 
           address0_tmp <= address0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
 
        if (ce0 = '1') then  
            q0 <= mem0(CONV_INTEGER(address0_tmp)); 
        end if;

end if;
end process;

end rtl;

