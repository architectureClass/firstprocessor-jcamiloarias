library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Sum32 is
    Port ( x : in  STD_LOGIC_VECTOR (31 downto 0);
           y : in  STD_LOGIC_VECTOR (31 downto 0);
           add_out : out  STD_LOGIC_VECTOR (31 downto 0));
end Sum32;

architecture Behavioral of Sum32 is

begin

process (x, y)
	begin
		
		add_out <= x + y; 
	
	end process;

end Behavioral;


