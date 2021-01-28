`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// dev: Negin Kheirmand 																			/
// dev email: 		neginkheirmand@gmail.com													/
// Create Date:    17:45:02 01/28/2021 														/
// Design Name: 	 CoolHeatSystem																/
// Module Name:    CoolHeatSystem 																/
// Project Name: Final Logical Circuits project												/
// Description: a simmple Cool & Heat System													/
//																											/
//////////////////////////////////////////////////////////////////////////////////
module CoolHeatSystem(
	input        arst     , // reset [asynch]  
	input        clk      , // clock [posedge] 
	input  [7:0] speed    , // speed [duty-cycle]  
	output reg   pwm_data   // data  [output]
    );
	reg [8:0]  count = 9'b000000000;
	 always @ (posedge clk or negedge arst)
		if(~arst)
			begin
			//first we put a 0 in the output, without having in account the duty cycle
				//reset the pwm_data
				pwm_data = 1'b0;
				//reset the counter
				count = 9'b000000000;
			end
		else
			begin
				//when the 256 clocks are over you go and start all over again
				if(count == 9'b100000000)
					count = 9'b000000000;
				if(count < speed)
					pwm_data = 1'b1;
				else
					pwm_data = 1'b0;
				count = count + 9'b000000001;
			end
endmodule
