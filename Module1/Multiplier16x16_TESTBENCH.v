`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// 
// 	Multiplier16x16_TESTBENCH
// 	for additional information visit: https://github.com/neginkheirmand/LogicalDesign_FinalProject
////////////////////////////////////////////////////////////////////////////////
module Multiplier16x16_TESTBENCH;
	// Inputs
	reg [15:0] A;
	reg [15:0] B;

	// Outputs
	wire [31:0] P;

	// Instantiate the Unit Under Test (UUT)
	Multiplier16x16 uut (
		.A(A), 
		.B(B), 
		.P(P)
	);

initial 
		begin
			A = 16'b0000000000000000;
			B = 16'b0000000000000000;
			#100
			repeat (4)
			begin
				#20 
				A = A + 16'b0000000000000011;
				B = 16'b0000000000000000;
				repeat (4)
				#20 B = B + 16'b0000000000000101;
			end
		end
      
endmodule
