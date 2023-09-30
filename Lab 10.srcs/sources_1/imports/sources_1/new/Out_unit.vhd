----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 08/18/2022 03:27:05 AM
-- Design Name: 
-- Module Name: Out_unit - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Out_unit is
    Port ( A : in STD_LOGIC_VECTOR (7 downto 0);
           S7_seg : out STD_LOGIC_VECTOR (6 downto 0);
           Anode_sig : out STD_LOGIC_VECTOR (3 downto 0);
           LED : out STD_LOGIC_VECTOR (7 downto 0));
end Out_unit;

architecture Behavioral of Out_unit is
component LUT_16_7 port (
    Address : in STD_LOGIC_VECTOR (3 downto 0);
    Data : out STD_LOGIC_VECTOR (6 downto 0)
    );
end component;
SIGNAL lut1,lut2 : STD_LOGIC_VECTOR (3 downto 0);
SIGNAL cath1 : STD_LOGIC_VECTOR (6 downto 0):="1111111";
SIGNAL cath2 : STD_LOGIC_VECTOR (6 downto 0);
begin
LUT_0 : LUT_16_7 port map(
    Address=>lut1,
    Data=>cath1
    );
LUT_1 : LUT_16_7 port map(
    Address=>lut2,
    Data=>cath2
    );
    lut1<=A(3 downto 0);
    lut2<=A(7 downto 4);
    LED<=A;
    process
    begin
    Anode_sig<="1110";
    S7_seg<=cath1;
    wait for 100ns;
    Anode_sig<="1101";
    S7_seg<=cath2;
    wait for 100ns;
    end process;
end Behavioral;
