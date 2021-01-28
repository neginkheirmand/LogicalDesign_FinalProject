`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// dev: Negin Kheirmand 																			/
// dev email: 		neginkheirmand@gmail.com													/
// Create Date:    17:45:02 01/28/2021 														/
// Project Name: Final Logical Circuits project												/
// Description: a simple Fan Speed testbench													/
//																											/
//////////////////////////////////////////////////////////////////////////////////


module FanSpeed_TESTBENCH;

	// Inputs
	reg arst;
	reg clk;
	reg [7:0] speed;

	// Outputs
	wire pwm_data;

	// Instantiate the Unit Under Test (UUT)
	FanSpeed uut (
		.arst(arst), 
		.clk(clk), 
		.speed(speed), 
		.pwm_data(pwm_data)
	);


 initial begin
	arst = 1'b1;
	speed = 8'b01000000;
	#15 
	arst = 1'b0;
	
 end
 
 
	initial 
	begin
	clk = 0;
		forever
		begin
			#5 
			clk = ~clk;
		end
	end
      
         
endmodule

