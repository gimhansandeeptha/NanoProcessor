----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 08/17/2022 11:35:52 PM
-- Design Name: 
-- Module Name: TB_Nano - Behavioral
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

entity TB_Nano is
--  Port ( );
end TB_Nano;

architecture Behavioral of TB_Nano is
component NanoProcessor port(
       Clk_in : in STD_LOGIC;
       Reset : in STD_LOGIC;
       OverFlow : out STD_LOGIC;
       Zero : out STD_LOGIC;
       Neg : out STD_LOGIC;
       S7_seg : out STD_LOGIC_VECTOR (6 downto 0);
       Anode_sig : out STD_LOGIC_VECTOR (3 downto 0);
       LED : out STD_LOGIC_VECTOR (7 downto 0)
    );
end component;
SIGNAL Clk_in,Reset,OverFlow,Zero,Neg : STD_LOGIC;
SIGNAL S7_seg : STD_LOGIC_VECTOR (6 downto 0);
SIGNAL Anode_sig : STD_LOGIC_VECTOR (3 downto 0);
SIGNAL LED : STD_LOGIC_VECTOR (7 downto 0);
SIGNAL clk_status : STD_LOGIC :='0';
begin
UUT : Nanoprocessor port map(
    Clk_in=>Clk_in,
    Reset=>Reset,
    OverFlow=>OverFlow,
    Zero=>Zero,
    Neg=>Neg,
    S7_seg=>S7_seg,
    Anode_sig=>Anode_sig,
    LED=>LED
    );
    Clk_in<=clk_status;
    process
    begin
    Clk_status<=not(Clk_status);
    wait for 5ns;
    end process;
end Behavioral;
