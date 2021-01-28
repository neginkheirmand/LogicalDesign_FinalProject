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
	wire [15:0] p1;
	wire [7:0] a1, b1;
	wire sign;
	assign a1 = A[7] ? (~A + 1) : A;    //unsigned value of A
	assign b1 = B[7] ? (~B + 1) : B;    //unsigned value of B
	assign sign = A[7] ^ B[7];          //sign of P
	assign p1 = a1 * b1;                //unsigned value of P
assign P = sign ? (~p1 + 1) : p1;   //final output (P)

endmodule
