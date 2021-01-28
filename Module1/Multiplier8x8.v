`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Negin Kheirmand (neginkheirmand@gmail.com
// 
// Create Date:    17:39:34 01/27/2021 
// Design Name:     Multiplier8x8 
// Module Name:     Multiplier8x8  
// Project Name: Final Project(Module 1)
// Tool versions: v1
// Description: A simple 8*8-bit multiplier
//////////////////////////////////////////////////////////////////////////////////
module Multiplier8x8(
	input  [ 7:0] A , // input  [unsigned 08 bits]
	input  [ 7:0] B , // input  [unsigned 08 bits]
	output [15:0] P   // output [unsigned 16 bits]
    );
	 assign P = A*B;


endmodule
