`timescale 1ns / 1ps
/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 9831023
--  Student Name: Negin Kheirmand
--  Student Mail: neginkheirmand@aut.ac.ir
--  *******************************************************
--  Additional Comments:
--			in contribution to Arvand Darvash
--*/

/*-----------------------------------------------------------
---  Module Name: Active Lights
---  Description: Module4: LampState IC
-----------------------------------------------------------*/

module LampState (
	input  [ 3:0] active_lights , // number of active light
	output [15:0] lights_state    // state of lights is on
);
			assign lights_state[0] = ( 0 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[1] = ( 1 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[2] = ( 2 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[3] = ( 3 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[4] = ( 4 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[5] = ( 5 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[6] = ( 6 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[7] = ( 7 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[8] = ( 8 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[9] = ( 9 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[10] = ( 10 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[11] = ( 11 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[12] = ( 12 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[13] = ( 13 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[14] = ( 14 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			assign lights_state[15] = ( 15 < active_lights[0]+ 2*active_lights[1]+ 4*active_lights[2]+ 8*active_lights[3] )  ? 1'b1  : 1'b0;
			
		
	
endmodule