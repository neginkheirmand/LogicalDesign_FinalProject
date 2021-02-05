/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 9831023
--  Student Name: Negin Kheirmand
--  Student Mail: neginkheirmand@aut.ac.ir
--  *******************************************************
--  Additional Comments:
--	 	in contribution to Arvand Darvish
--*/

/*-----------------------------------------------------------
---  Module Name: Memory Unit
---  Description: Module6:	a simple memmory unit
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module MemoryUnit (
	input         arst , // async  reset
	input         clk  , // clock  posedge
	input         wren , // write  enabledata
	input  [34:0] din  , // input  data
	output reg [34:0] dout   // output data
);
	always @(posedge clk or posedge arst)  
    begin  
      if (arst)  
        dout = 35'b00000000000000000000000000000000000;  
      else  
        if (wren)  
          dout = din;  
    end 

endmodule
