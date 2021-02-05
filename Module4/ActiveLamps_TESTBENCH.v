`timescale 1ns / 1ps

module ActiveLamps_TESTBENCH;

	// Inputs
	reg [3:0] tcode;
	reg [3:0] ulight;
	reg [3:0] lenght;

	// Outputs
	wire [3:0] active_lights;

	// Instantiate the Unit Under Test (UUT)
	ActiveLamps uut (
		.tcode(tcode), 
		.ulight(ulight), 
		.lenght(lenght), 
		.active_lights(active_lights)
	);

	initial begin
		tcode = 4'b0000;
		ulight = 4'b0000;
		lenght = 4'b0000;
		#50;
		tcode = 4'b0001;
		ulight = 4'b0000;
		lenght = 4'b0000;
		#50;
		tcode = 4'b0010;
		ulight = 4'b0000;
		lenght = 4'b0000;
		#50;
		tcode = 4'b0100;
		ulight = 4'b0000;
		lenght = 4'b0000;
		#50;
		tcode = 4'b1000;
		ulight = 4'b0000;
		lenght = 4'b0000;
		#50;
		tcode = 4'b1000;
		ulight = 4'b1100;
		lenght = 4'b0000;
		#50;
		tcode = 4'b0100;
		ulight = 4'b0000;
		lenght = 4'b1000;
		#50;
		tcode = 4'b1000;
		ulight = 4'b0100;
		lenght = 4'b0100;
		#50;
		
		//////
		
		
		
		
		tcode = 4'b0100;
		ulight = 4'b0000;
		lenght = 4'b0001;
		#50;
		tcode = 4'b0100;
		ulight = 4'b0010;
		lenght = 4'b0010;
		#50;
		tcode = 4'b0100;
		ulight = 4'b0011;
		lenght = 4'b0011;
		#50;
		tcode = 4'b0100;
		ulight = 4'b0000;
		lenght = 4'b0100;
		#50;
		ulight = 4'b0000;
		lenght = 4'b0110;
		#50;
		ulight = 4'b1100;
		lenght = 4'b1100;
		#50;
		
		//
		tcode = 4'b1000;
		ulight = 4'b0000;
		lenght = 4'b1000;
		#50;
		ulight = 4'b0100;
		lenght = 4'b0100;
		#50;
		ulight = 4'b1100;
		lenght = 4'b0100;
		#50;
		ulight = 4'b0110;
		lenght = 4'b0100;
		#50;
		ulight = 4'b0101;
		lenght = 4'b0100;
		#50;

	end
      
endmodule

