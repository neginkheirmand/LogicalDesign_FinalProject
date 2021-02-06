`timescale 1ns / 1ps

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
		
		arst = 1'b1;
		request = 1'b1;
		confirm = 1'b1;
		password = 2'b00;
		syskey = 2'b10;
		configin = 35'b00000000000000000000000000000000001;
		#10;
		/*
      arst = 1'b0;
		request = 1'b1;
		confirm = 1'b1;
		password = 2'b00;
		syskey = 2'b10;
		configin = 35'b00000000001000000000000000000000000;
		#40;
      arst = 1'b0;
		request = 1'b1;
		confirm = 1'b1;
		password = 2'b00;
		syskey = 2'b10;
		configin = 35'b00000000000000000000000010000000000;
		#40;
      arst = 1'b0;
		request = 1'b1;
		confirm = 1'b1;
		password = 2'b00;
		syskey = 2'b10;
		configin = 35'b00000000000000000000110000000000000;
		#5;
      arst = 1'b0;
		request = 1'b0;
		confirm = 1'b1;
		password = 2'b00;
		syskey = 2'b10;
		configin = 35'b00000000000000000011000000000000000;
		#40;
		*/
		//now should go to state active 010
      arst = 1'b0;
		request = 1'b1;
		confirm = 1'b0;
		password = 2'b10;
		syskey = 2'b10;
		configin = 35'b00000000000000000011000000000000000;
      #40;
		//after these changes should go to state request 011
      arst = 1'b0;
		request = 1'b1;
		confirm = 1'b1;
		password = 2'b10;
		syskey = 2'b10;
		configin = 35'b00000000000000000011000000000000000;
		#40
		//here should do nothing and stay on its place cause its waiting for the confirm 
      arst = 1'b0;
		request = 1'b1;
		confirm = 1'b0;
		password = 2'b00;
		syskey = 2'b10;
		configin = 35'b00000000000010000011000000000000111;
		#40;
      arst = 1'b0;
		request = 1'b1;
		confirm = 1'b1;
		password = 2'b00;
		syskey = 2'b10;
		configin = 35'b10000000000010000011000000000000101;
		#100
		$finish;
       
	end

	initial begin
	//clock with T=40
	clk = 0;
		forever	begin
			#20 
			clk = ~clk;
		end
	end
      
endmodule

