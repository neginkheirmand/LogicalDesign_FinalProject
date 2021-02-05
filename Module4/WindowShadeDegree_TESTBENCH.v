`timescale 1ns / 1ps


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
--			in contribution to Arvand Darvash
--*/

/*-----------------------------------------------------------
---  Module Name: Active Lights
---  Description: Module4: LampState IC
-----------------------------------------------------------*/

module WindowShadeDegree_TESTBENCH;

	// Inputs
	reg [3:0] tcode;
	reg [3:0] ulight;

	// Outputs
	wire [3:0] wshade;

	// Instantiate the Unit Under Test (UUT)
	WindowShadeDegree uut (
		.tcode(tcode), 
		.ulight(ulight), 
		.wshade(wshade)
	);

	initial begin
		tcode = 4'b0000;
		ulight = 4'b0100;
		#50;
		tcode = 4'b0010;
		ulight = 4'b0001;
		#50;
		tcode = 4'b0100;
		ulight = 4'b1000;
		#50;
		tcode = 4'b1000;
		ulight = 4'b0000;
		#50;
		tcode = 4'b0001;
		ulight = 4'b0100;
		#50;
		tcode = 4'b0010;
		ulight = 4'b1010;
		#50;
		tcode = 4'b0100;
		ulight = 4'b0010;
		#50;
		tcode = 4'b1000;
		ulight = 4'b0001;
		#50;
		//
		tcode = 4'b0001;
		ulight = 4'b1010;
		#50;
		tcode = 4'b0000;
		ulight = 4'b1010;
		#50;
		tcode = 4'b0010;
		ulight = 4'b0001;
		#50;
		tcode = 4'b0100;
		ulight = 4'b1000;
		#50;
		tcode = 4'b1000;
		ulight = 4'b0000;
       

	end
      
endmodule

