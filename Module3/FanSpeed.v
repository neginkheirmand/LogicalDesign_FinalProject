/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce.aut.ac.ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 9831023
--  Student Name: Negin Kheirmand
--  Student Mail: neginkheirmand@gaut.ac.ir
--  *******************************************************
--*/

/*-----------------------------------------------------------
---  Module Name: Fan Speed (PWM)
---  Description: part of Module3's ICs
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module FanSpeed (
	input        arst     , // reset [asynch]  
	input        clk      , // clock [posedge] 
	input  [7:0] speed    , // speed [duty-cycle]  
	output reg      pwm_data   // data  [output]
);
	reg [8:0]  count = 9'b000000000;
	 always @ (posedge clk or negedge arst)
		if(~arst)
			begin
				pwm_data = 1'b0;
				count = 9'b000000000;
			end
		else
			begin
				if(count == 9'b100000000)
					count = 9'b000000000;
				if(count < speed)
					pwm_data = 1'b1;
				else
					pwm_data = 1'b0;
				count = count + 9'b000000001;
			end
endmodule
