library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity ProgramCounter is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           data_in : in  STD_LOGIC_VECTOR (31 downto 0);
           data_out : out  STD_LOGIC_VECTOR (31 downto 0));
end ProgramCounter;

architecture Behavioral of ProgramCounter is

begin
--dice cual es la instruccion actual 
process (clk, rst, data_in)
	begin
		if (rst = '1') then
			data_out <= (others => '0');
		else
			if(rising_edge(clk)) then
				data_out <= data_in;
			end if;
		end if;
end process;

end Behavioral;