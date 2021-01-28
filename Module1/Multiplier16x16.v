`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Negin Kheirmand (neginkheirmand@gmail.com
// 
// Create Date:    17:26:49 01/27/2021 
// Module Name:    Multiplier16x16 
// Module Name:    Multiplier16x16 
// Project Name: Final Project(Module 1)
// Tool versions: v1
// Description: A simple 16*16-bit multiplier
//////////////////////////////////////////////////////////////////////////////////
module Multiplier16x16(
	input  [15:0] A , // input  [unsigned 16 bits]
	input  [15:0] B , // input  [unsigned 16 bits]
	output [31:0] P   // output [unsigned 32 bits]
    );
	 //the size of the output is double the size of the inputs because of multiplication 
	wire [31:0] p1;
	wire [15:0] a1, b1;
	wire sign;
	assign a1 = A[15] ? (~A + 1) : A;    //unsigned value of A
	assign b1 = B[15] ? (~B + 1) : B;    //unsigned value of B
	assign sign = A[15] ^ B[15];          //sign of P
	assign p1 = a1 * b1;                //unsigned value of P
	assign P = sign ? (~p1 + 1) : p1;   //final output (P)

endmodule