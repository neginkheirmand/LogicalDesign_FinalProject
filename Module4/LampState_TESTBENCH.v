`timescale 1ns / 1ps

module LampState_TESTBENCH;

	// Inputs
	reg [3:0] active_lights;

	// Outputs
	wire [15:0] lights_state;

	// Instantiate the Unit Under Test (UUT)
	LampState uut (
		.active_lights(active_lights), 
		.lights_state(lights_state)
	);

	initial begin
		active_lights = 4'b0000;
		#100;
		active_lights = 4'b0001;
		#100;
		active_lights = 4'b0010;
		#100;
		active_lights = 4'b0011;
		#100;
		active_lights = 4'b0100;
		#100;
		active_lights = 4'b0101;
		#100;
		active_lights = 4'b0110;
		#100;
		active_lights = 4'b0111;
		#100;
		active_lights = 4'b1000;
		#100;
		active_lights = 4'b1001;
		#100;
		active_lights = 4'b1010;
		#100;
		active_lights = 4'b1011;
		#100;
		active_lights = 4'b1100;
		#100;
		active_lights = 4'b1101;
		#100;
		active_lights = 4'b1110;
		#100;
		active_lights = 4'b1111;
		#100;
      
	end
      
endmodule

