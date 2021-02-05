`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:03:36 02/02/2021
// Design Name:   LightDance
// Module Name:   D:/Arvand/uni/term 3/madar manteqi/lab/final-2/tb_LightDance.v
// Project Name:  final-2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LightDance
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_LightDance;

	// Inputs
	reg arst;
	reg clk;
	reg din;
	reg load;
	reg [7:0] pdata;

	// Outputs
	wire [7:0] qdata;

	// Instantiate the Unit Under Test (UUT)
	LightDance uut (
		.arst(arst), 
		.clk(clk), 
		.din(din), 
		.load(load), 
		.pdata(pdata), 
		.qdata(qdata)
	);

	initial begin
		// Initialize Inputs
		arst = 1;
		din = 0;
		load = 0;
		pdata = 0;

		// Wait 100 ns for global reset to finish
		#100;
      arst = 0;
		din = 1'b1;
		load = 1'b1;
		pdata = 8'b01001101;
		#100;
		load = 1'b0;
		#100;
		din = 1'b0;
		// Add stimulus here

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

