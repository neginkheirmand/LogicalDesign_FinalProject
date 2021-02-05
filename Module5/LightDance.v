`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:34:02 02/01/2021 
// Design Name: 
// Module Name:    LightDance 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module LightDance(
	input        arst  , // async  reset
	input        clk   , // clock  posedge
	input        din   , // input  data
	input        load  , // load   enable 
	input  [7:0] pdata , // load   data
	output [7:0] qdata   // output data
    );
	 wire din0, din1, din2, din3, din4, din5, din6, din7;
	 assign din0 = load ? pdata[0] : (qdata[1] ^ qdata[0]);
	 assign din1 = load ? pdata[1] : (qdata[2] ^ qdata[0]);
	 assign din2 = load ? pdata[2] : qdata[3];
	 assign din3 = load ? pdata[3] : qdata[4];
	 assign din4 = load ? pdata[4] : (qdata[5] ^ qdata[0]);
	 assign din5 = load ? pdata[5] : (qdata[6] ^ qdata[0]);
	 assign din6 = load ? pdata[6] : qdata[7];
	 assign din7 = load ? pdata[7] : (din      ^ qdata[0]);
	 DFlop f0(arst, clk, din0, 1'b1, qdata[0]), 		// DFlop(arst, clk, din, load = 1'b1, dout) 
			 f1(arst, clk, din1, 1'b1, qdata[1]),
			 f2(arst, clk, din2, 1'b1, qdata[2]),
			 f3(arst, clk, din3, 1'b1, qdata[3]),
			 f4(arst, clk, din4, 1'b1, qdata[4]),
			 f5(arst, clk, din5, 1'b1, qdata[5]),
			 f6(arst, clk, din6, 1'b1, qdata[6]),
			 f7(arst, clk, din7, 1'b1, qdata[7]);

endmodule
