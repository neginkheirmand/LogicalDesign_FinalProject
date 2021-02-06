`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:55:05 02/06/2021
// Design Name:   ControlUnit
// Module Name:   C:/Users/venus/Desktop/uni2/3rd_SEMESTER/madar mantegh/FinalProject/Module7/ControlUnit_TESTBENCH.v
// Project Name:  Module7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ControlUnit_TESTBENCH;

	// Inputs
	reg arst;
	reg clk;
	reg request;
	reg confirm;
	reg [1:0] password;
	reg [1:0] syskey;
	reg [34:0] configin;

	// Outputs
	wire [34:0] configout;
	wire write_en;
	wire [2:0] dbg_state;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.arst(arst), 
		.clk(clk), 
		.request(request), 
		.confirm(confirm), 
		.password(password), 
		.syskey(syskey), 
		.configin(configin), 
		.configout(configout), 
		.write_en(write_en), 
		.dbg_state(dbg_state)
	);

	initial begin
		// Initialize Inputs
		arst = 0;
		clk = 0;
		request = 0;
		confirm = 0;
		password = 0;
		syskey = 0;
		configin = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

