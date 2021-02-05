`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:33:11 02/01/2021 
// Design Name: 
// Module Name:    DFlop 
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
module DFlop(
	input  arst  , // async reset
	input  clk   , // clock posedge
	input  din   , // data  in
	input  load  , // data  load 
	output reg dout    // data  out
    );
	 wire D;
	 assign D = load ? din : dout; 
	 always @(posedge clk or posedge arst) 
		begin
		if(arst)
			begin
				dout <= 1'b0;
			end
		else
			begin
				dout <= D;
			end
	end


endmodule
