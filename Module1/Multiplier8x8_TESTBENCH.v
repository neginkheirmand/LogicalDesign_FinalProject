`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// 
// 	Multiplier8x8_TESTBENCH
// 	for additional information visit: https://github.com/neginkheirmand/LogicalDesign_FinalProject
////////////////////////////////////////////////////////////////////////////////

module Multiplier8x8_TESTBENCH;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;

	// Outputs
	wire [15:0] P;

	// Instantiate the Unit Under Test (UUT)
	Multiplier8x8 uut (
		.A(A), 
		.B(B), 
		.P(P)
	);

	initial begin
		// Initialize Inputs
		A = 8'b00000000;
		B = 8'b00000000;
		// Wait 100 ns for global reset to finish
		#100;
		
		A = 8'b00000001;
		B = 8'b00000000;
		
		#100;
		
		A = 8'b00000001;
		B = 8'b00000001;
		
		#100;
		
		A = 8'b00000101;
		B = 8'b00000011;
		
		
		
	end
      
endmodule

