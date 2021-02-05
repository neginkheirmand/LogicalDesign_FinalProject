`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:43:45 02/05/2021
// Design Name:   MemoryUnit
// Module Name:   C:/Users/venus/Desktop/uni2/3rd_SEMESTER/madar mantegh/FinalProject/Module6/MemoryUnit_TESTBENCH.v
// Project Name:  Module6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MemoryUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MemoryUnit_TESTBENCH;

	// Inputs
	reg arst;
	reg clk;
	reg wren;
	reg [34:0] din;

	// Outputs
	wire [34:0] dout;

	// Instantiate the Unit Under Test (UUT)
	MemoryUnit uut (
		.arst(arst), 
		.clk(clk), 
		.wren(wren), 
		.din(din), 
		.dout(dout)
	);

	initial begin
		// Initialize Inputs
		arst = 1;
		clk = 0;
		wren = 0;
		din = 0;

		// Wait 100 ns for global reset to finish
		#100;
		arst = 1'b0;
		din = 35'b00000001111111000000011111110000000;
		#100;
		wren = 1'b1;
		#100;
		wren = 1'b0;
		din = 35'b00000000000000000000011111110000000;
		#300;
		wren = 1'b1;
        
		// Add stimulus here

	end
	initial 
	begin
	clk = 1;
		forever
		begin
			#25 
			clk = ~clk;
		end
	end
      
endmodule