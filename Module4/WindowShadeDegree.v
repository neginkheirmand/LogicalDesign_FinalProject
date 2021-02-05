
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

module WindowShadeDegree (
	input  [3:0] tcode  , // time code    [table2 time code   ]
	input  [3:0] ulight , // user light   [light degree mode  ]
	output reg [3:0] wshade   // shade level  [window shade level ]
);


	parameter s0 = 4'b0001 , s1 = 4'b0010, s2 = 4'b0100, s3 = 4'b1000, s4 = 4'b0000;
	always @ * begin
		case(tcode)
			s0 : begin
					wshade <= 4'b1111;
				end 
			s1 : begin
					wshade <= 4'b1100;
				end
			s2 : begin
				wshade <= ulight;
				end
			s3 : begin
					wshade <= s4;
				end
			s4 : begin
					wshade <= s4;
				end
		endcase
	end
		

endmodule