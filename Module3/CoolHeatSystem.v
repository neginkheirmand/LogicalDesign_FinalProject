`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// dev: Negin Kheirmand 																			/
// dev email: 		neginkheirmand@gmail.com													/
// Create Date:    17:45:02 01/28/2021 														/
// Design Name: 	 CoolHeatSystem																/
// Module Name:    CoolHeatSystem 																/
// Project Name: Final Logical Circuits project												/
// Description: a simmple Cool & Heat System													/
//																											/
//////////////////////////////////////////////////////////////////////////////////
module CoolHeatSystem(
	input        arst     , // reset [asynch]  
	input        clk      , // clock [posedge] 
	input  [7:0] speed    , // speed [duty-cycle]  
	output reg   pwm_data   // data  [output]
    );
	 
	 ModePower m(chs_conf, chs_power, chs_mode);
	 FanSpeed f(arst, clk, speed, pwm_data);
	 
endmodule
