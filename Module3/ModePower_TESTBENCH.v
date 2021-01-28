`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// dev: Negin Kheirmand 																			/
// dev email: 		neginkheirmand@gmail.com													/
// Create Date:    17:45:02 01/28/2021 														/
// Project Name: Final Logical Circuits project												/
// Description: a simple ModePower System	testbench										/
//																											/
//////////////////////////////////////////////////////////////////////////////////

module ModePower_TESTBENCH;

	// Inputs
	reg [7:0] chs_conf;

	// Outputs
	wire [3:0] chs_power;
	wire chs_mode;

	// Instantiate the Unit Under Test (UUT)
	ModePower uut (
		.chs_conf(chs_conf), 
		.chs_power(chs_power), 
		.chs_mode(chs_mode)
	);

	initial begin
		chs_conf = 8'b00000000;
		#100;
		chs_conf = 8'b10010110;
		#100;
		chs_conf = 8'b11000111;
		#100;
		chs_conf = 8'b1101000;
		#100;
		chs_conf = 8'b10010010;
        

	end
      
endmodule

