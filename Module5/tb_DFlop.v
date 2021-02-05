`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:02:32 02/01/2021
// Design Name:   DFlop
// Module Name:   D:/Arvand/uni/term 3/madar manteqi/lab/final-2/tb_DFlop.v
// Project Name:  final-2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DFlop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_DFlop;

	// Inputs
	reg arst;
	reg clk;
	reg din;
	reg load;

	// Outputs
	wire dout;

	// Instantiate the Unit Under Test (UUT)
	DFlop uut (
		.arst(arst), 
		.clk(clk), 
		.din(din), 
		.load(load), 
		.dout(dout)
	);

	initial begin
		// Initialize Inputs
		arst = 1;
		din = 0;
		load = 0;

		// Wait 100 ns for global reset to finish
	
		#100;
		arst = 1'b0;
		din = 1'b1;
		#100;
		load = 1'b1;
		#100;
		din = 1'b0;
		#100;
		load = 1'b0;
		din = 1'b0;
		#100;
		din = 1'b1;
		#100;
		din = 1'b0;
		#100;
		load = 1'b1;

	end
	
	initial 
	begin
	clk = 1;
		forever
		begin
			#20 
			clk = ~clk;
		end
	end
      
endmodule

