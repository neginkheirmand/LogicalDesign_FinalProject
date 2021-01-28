`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Negin Kheirmand (neginkheirmand@gmail.com
// 
// Create Date:    17:46:43 01/27/2021  
// Design Name:     TemperatureCalculator  
// Module Name:     TemperatureCalculator   
// Project Name: Final Project(Module 1)
// Tool versions: v1
// Description: A simple Temperature Calculator 
//////////////////////////////////////////////////////////////////////////////////
module TemperatureCalculator(
	input  [31:0] tc_base  , // base [environment degree ]
	input  [ 7:0] tc_ref   , // ref  [system work voltage]
	input  [15:0] adc_data , // adc  [sensor digital data]
	output [31:0] tempc      // temp [temperature celsius]
    );
	wire [15:0] w1;
	wire [31:0] w2;
	Multiplier8x8 m1(tc_ref, tc_ref, w1);
	Multiplier16x16 m2(w1, {1'b0,adc_data[14:0]}, w2);
	AdderSubtractor32bit s1(tc_base, {6'b000000,w2[31:6]}, adc_data[15], tempc);

endmodule