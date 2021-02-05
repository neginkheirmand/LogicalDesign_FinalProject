
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
`timescale 1 ns/1 ns 

module LightingSystem (
	input  [ 3:0] tcode      , // time code    [table2 time code   ]
	input  [ 3:0] ulight     , // user light   [light degree mode  ]
	input  [ 3:0] lenght     , // room length  [square room lenght ]
	output [ 3:0] wshade     , // shade level  [window shade level ]
	output [ 3:0] lightnum   , // number on    [number of active   ]
	output [15:0] lightstate   // lights state [lights state decode]
);

	WindowShadeDegree windowShade( tcode, ulight , wshade);	//this modules takes care of the Window shade in the room
	LampState lampStates( lightnum , lightstate );    //this module takes care of the state of the lamps in the room
	ActiveLamps activateLamps( tcode  , ulight , lenght , lightnum);//this module takes care of number of turned on lamps in the room
	
endmodule