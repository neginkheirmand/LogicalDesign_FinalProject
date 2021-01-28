`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// dev: Negin Kheirmand 																			/
// dev email: 		neginkheirmand@gmail.com													/
// Create Date:    17:45:02 01/28/2021 														/
// Design Name: 	 ModePower																		/
// Module Name:    ModePower 																		/
// Project Name: Final Logical Circuits project												/
// Description: a simple ModePower System														/
//																											/
//////////////////////////////////////////////////////////////////////////////////

module ModePower (
	input  [7:0] chs_conf  , // degree [temprature] 
	output [3:0] chs_power , // power  [cooler/heater] 
	output       chs_mode    // model  [heat=1/cool=0]
);

	//^ is bitwise xor 
	 assign chs_mode = chs_conf[7] ^ chs_conf[6] ^ chs_conf[5] ^ chs_conf[4] ^ chs_conf[3] ^ chs_conf[2] ^ chs_conf[1] ^ chs_conf[0];
	 assign chs_power = chs_conf[7] + chs_conf[6] + chs_conf[5] + chs_conf[4] + chs_conf[3] + chs_conf[2] + chs_conf[1] + chs_conf[0];


endmodule
