-- ==============================================================
-- Generated by Vitis HLS v2024.1
-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity edgedetect_mask_table_ROM_AUTO_1R is 
    generic(
             DataWidth     : integer := 52; 
             AddressWidth     : integer := 6; 
             AddressRange    : integer := 64
    ); 
    port (
 
          address0        : in std_logic_vector(AddressWidth-1 downto 0); 
          ce0             : in std_logic; 
          q0              : out std_logic_vector(DataWidth-1 downto 0);

          reset               : in std_logic;
          clk                 : in std_logic
    ); 
end entity; 


architecture rtl of edgedetect_mask_table_ROM_AUTO_1R is 
 
signal address0_tmp : std_logic_vector(AddressWidth-1 downto 0); 

type mem_array is array (0 to AddressRange-1) of std_logic_vector (DataWidth-1 downto 0); 

signal mem0 : mem_array := (
    0 => "0111111111111111111111111111111111111111111111111111", 1 => "0011111111111111111111111111111111111111111111111111", 2 => "0001111111111111111111111111111111111111111111111111", 3 => "0000111111111111111111111111111111111111111111111111", 
    4 => "0000011111111111111111111111111111111111111111111111", 5 => "0000001111111111111111111111111111111111111111111111", 6 => "0000000111111111111111111111111111111111111111111111", 7 => "0000000011111111111111111111111111111111111111111111", 
    8 => "0000000001111111111111111111111111111111111111111111", 9 => "0000000000111111111111111111111111111111111111111111", 10 => "0000000000011111111111111111111111111111111111111111", 11 => "0000000000001111111111111111111111111111111111111111", 
    12 => "0000000000000111111111111111111111111111111111111111", 13 => "0000000000000011111111111111111111111111111111111111", 14 => "0000000000000001111111111111111111111111111111111111", 15 => "0000000000000000111111111111111111111111111111111111", 
    16 => "0000000000000000011111111111111111111111111111111111", 17 => "0000000000000000001111111111111111111111111111111111", 18 => "0000000000000000000111111111111111111111111111111111", 19 => "0000000000000000000011111111111111111111111111111111", 
    20 => "0000000000000000000001111111111111111111111111111111", 21 => "0000000000000000000000111111111111111111111111111111", 22 => "0000000000000000000000011111111111111111111111111111", 23 => "0000000000000000000000001111111111111111111111111111", 
    24 => "0000000000000000000000000111111111111111111111111111", 25 => "0000000000000000000000000011111111111111111111111111", 26 => "0000000000000000000000000001111111111111111111111111", 27 => "0000000000000000000000000000111111111111111111111111", 
    28 => "0000000000000000000000000000011111111111111111111111", 29 => "0000000000000000000000000000001111111111111111111111", 30 => "0000000000000000000000000000000111111111111111111111", 31 => "0000000000000000000000000000000011111111111111111111", 
    32 => "0000000000000000000000000000000001111111111111111111", 33 => "0000000000000000000000000000000000111111111111111111", 34 => "0000000000000000000000000000000000011111111111111111", 35 => "0000000000000000000000000000000000001111111111111111", 
    36 => "0000000000000000000000000000000000000111111111111111", 37 => "0000000000000000000000000000000000000011111111111111", 38 => "0000000000000000000000000000000000000001111111111111", 39 => "0000000000000000000000000000000000000000111111111111", 
    40 => "0000000000000000000000000000000000000000011111111111", 41 => "0000000000000000000000000000000000000000001111111111", 42 => "0000000000000000000000000000000000000000000111111111", 43 => "0000000000000000000000000000000000000000000011111111", 
    44 => "0000000000000000000000000000000000000000000001111111", 45 => "0000000000000000000000000000000000000000000000111111", 46 => "0000000000000000000000000000000000000000000000011111", 47 => "0000000000000000000000000000000000000000000000001111", 
    48 => "0000000000000000000000000000000000000000000000000111", 49 => "0000000000000000000000000000000000000000000000000011", 50 => "0000000000000000000000000000000000000000000000000001", 51 => "0000000000000000000000000000000000000000000000000000", 
    52 => "0000000000000000000000000000000000000000000000000000", 53 => "0000000000000000000000000000000000000000000000000000", 54 => "0000000000000000000000000000000000000000000000000000", 55 => "0000000000000000000000000000000000000000000000000000", 
    56 => "0000000000000000000000000000000000000000000000000000", 57 => "0000000000000000000000000000000000000000000000000000", 58 => "0000000000000000000000000000000000000000000000000000", 59 => "0000000000000000000000000000000000000000000000000000", 
    60 => "0000000000000000000000000000000000000000000000000000", 61 => "0000000000000000000000000000000000000000000000000000", 62 => "1111111111111111111111111111111111111111111111111111", 63 => "1111111111111111111111111111111111111111111111111111");



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

