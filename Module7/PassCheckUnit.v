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
--		in contribution to Arvand Darvish
--*/

/*-----------------------------------------------------------
---  Module Name: Password Checker Unit
---  Description: Module7: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module PassCheckUnit (
	input  [ 1:0] pass   , // input  [user   password]
	input  [ 1:0] key    , // input  [system password]
	output        equal    // output [(pass==key) : 1]
);

	assign equal = (pass == key) ? 1'b1: 1'b0;

endmodule