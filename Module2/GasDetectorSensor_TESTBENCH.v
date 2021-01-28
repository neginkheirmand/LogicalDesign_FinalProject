`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// 
// 	GasDetectorSensor_TESTBENCH
// 	for additional information visit: https://github.com/neginkheirmand/LogicalDesign_FinalProject
////////////////////////////////////////////////////////////////////////////////


module GasDetectorSensor_TESTBENCH;

	// Inputs
	reg arst;
	reg clk;
	reg din;

	// Outputs
	wire [2:0] dout;

	// Instantiate the Unit Under Test (UUT)
	GasDetectorSensor uut (
		.arst(arst), 
		.clk(clk), 
		.din(din), 
		.dout(dout)
	);

	
	initial 
	begin
	
	/*
		arst = 1'b1;
		din = 1'b0;
		#90;
		arst = 1'b0;
		#20
		din = 1'b0;
		#40
		din = 1'b0;
		#40
		din = 1'b1;
		#40
		din = 1'b0;
		#40
		din = 1'b1;
		#40
		din = 1'b1;
		#40
		din = 1'b1;
		#40
		din = 1'b0;
		#40
		din = 1'b1;
		#40
		din = 1'b0;
		#40
		din = 1'b1;
		#40
		din = 1'b0;
		#40
		din = 1'b0;
		#40
		din = 1'b0;
        */
		arst = 1'b1;
		din = 1'b0;
		#40
		arst = 1'b0;
		#40
		din = 1'b1;
		#40
		din = 1'b0;
		#40
		din = 1'b1;
		#40
		din = 1'b0;
		#40
		din = 1'b1;
		#40
		din = 1'b0;
		#40
		din = 1'b0;
		#40
		din = 1'b1;
		#40
		din = 1'b0;
		#40
		din = 1'b0;
		#40
		din = 1'b1;
		#40
		din = 1'b1;
		#40
		din = 1'b1;
		#40
		din = 1'b1;
	end
	
	initial 
	begin
	clk = 0;
		forever
		begin
			#20 
			clk = ~clk;
		end
	end
      
endmodule

