`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// 
// 	AdderSubtractor32bit_TEST BENCH
// 	for additional information visit: https://github.com/neginkheirmand/LogicalDesign_FinalProject
////////////////////////////////////////////////////////////////////////////////

module AdderSubtractor32bit_TESTBENCH;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg sel;

	// Outputs
	wire [31:0] S;

	// Instantiate the Unit Under Test (UUT)
	AdderSubtractor32bit uut (
		.A(A), 
		.B(B), 
		.sel(sel), 
		.S(S)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 32'b00000000000000000000000000000001;
		B = 32'b00000000000000000000000000000001;
		#100;
		A = 32'b00000000000000000000000000000010;
		B = 32'b00000000000000000000000000000001;
		sel = 1'b1;
        
		// Add stimulus here

	end
      
endmodule

