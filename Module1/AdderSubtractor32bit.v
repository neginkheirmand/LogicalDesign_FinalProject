`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Negin Kheirmand (neginkheirmand@gmail.com
// 
// Create Date:    17:12:06 01/27/2021 
// Design Name: AdderSubtractor32bit
// Module Name:    AdderSubtractor32bit 
// Project Name: Final Project(Module 1)
// Tool versions: V1
// Description: A simple 32-bit Adder-subtractor
// if sel = true subtract else add
//////////////////////////////////////////////////////////////////////////////////
module AdderSubtractor32bit(
	input  [31:0] A    , // input  [2's complement 32 bits]
	input  [31:0] B    , // input  [2's complement 32 bits]
	input         sel  , // input  [add:sel=0 || sub:sel=1] 
	output [31:0] S      // output [2's complement 32 bits]
    );
	 assign S = sel ? (A-B) : (A+B);


endmodule
