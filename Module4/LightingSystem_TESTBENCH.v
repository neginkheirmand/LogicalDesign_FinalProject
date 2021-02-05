`timescale 1ns / 1ps

module LightingSystem_TESTBENCH;

	// Inputs
	reg [3:0] tcode;
	reg [3:0] ulight;
	reg [3:0] lenght;

	// Outputs
	wire [3:0] wshade;
	wire [3:0] lightnum;
	wire [15:0] lightstate;

	// Instantiate the Unit Under Test (UUT)
	LightingSystem uut (
		.tcode(tcode), 
		.ulight(ulight), 
		.lenght(lenght), 
		.wshade(wshade), 
		.lightnum(lightnum), 
		.lightstate(lightstate)
	);

	initial begin
		// Initialize Inputs
		tcode = 4'b0000;
		//S4
		ulight = 4'b0000;
		lenght = 4'b1000;
		#30;
		ulight = 4'b1010;
		lenght = 4'b1000;
		#30;
		ulight = 4'b0000;
		lenght = 4'b1010;
		#30;
		ulight = 4'b1001;
		lenght = 4'b1110;
		#30;
		ulight = 4'b1100;
		lenght = 4'b0110;
		#30;
		ulight = 4'b0110;
		lenght = 4'b1010;
		#30;
		////
		tcode = 4'b1000;
		//S3
		ulight = 4'b0000;
		lenght = 4'b1000;
		#30;
		ulight = 4'b1010;
		lenght = 4'b1000;
		#30;
		ulight = 4'b0000;
		lenght = 4'b1010;
		#30;
		ulight = 4'b1001;
		lenght = 4'b1110;
		#30;
		ulight = 4'b1100;
		lenght = 4'b0110;
		#30;
		ulight = 4'b0110;
		lenght = 4'b1010;
		#30;
		////
		tcode = 4'b0100;
		//S2
		ulight = 4'b0000;
		lenght = 4'b1000;
		#30;
		ulight = 4'b1010;
		lenght = 4'b1000;
		#30;
		ulight = 4'b0000;
		lenght = 4'b1010;
		#30;
		ulight = 4'b1001;
		lenght = 4'b1110;
		#30;
		ulight = 4'b1100;
		lenght = 4'b0110;
		#30;
		ulight = 4'b0110;
		lenght = 4'b1010;
		#30;
		////
		tcode = 4'b0010;
		//S1
		ulight = 4'b0000;
		lenght = 4'b1000;
		#30;
		ulight = 4'b1010;
		lenght = 4'b1000;
		#30;
		ulight = 4'b0000;
		lenght = 4'b1010;
		#30;
		ulight = 4'b1001;
		lenght = 4'b1110;
		#30;
		ulight = 4'b1100;
		lenght = 4'b0110;
		#30;
		ulight = 4'b0110;
		lenght = 4'b1010;
		#30;
		////
		tcode = 4'b0001;
		//S0
		ulight = 4'b0000;
		lenght = 4'b1000;
		#30;
		ulight = 4'b1010;
		lenght = 4'b1000;
		#30;
		ulight = 4'b0000;
		lenght = 4'b1010;
		#30;
		ulight = 4'b1001;
		lenght = 4'b1110;
		#30;
		ulight = 4'b1100;
		lenght = 4'b0110;
		#30;
		ulight = 4'b0110;
		lenght = 4'b1010;
		#30;
		
       
	end
      
endmodule

