/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: Active Lights
---  Description: Module4: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module ActiveLamps (
	input  [3:0] tcode  , // time code    [table2 time code   ]
	input  [3:0] ulight , // user light   [light degree mode  ]
    input  [3:0] lenght     , // room length  [square room lenght ]
	output reg [3:0] active_lights  // number of active light
);

	parameter s0 = 4'b0001 , s1 = 4'b0010, s2 = 4'b0100, s3 = 4'b1000, s4 = 4'b0000;
	always @ * begin
		case(tcode)
			s0 : begin
					active_lights <= s4;
				end 
			s1 : begin
					active_lights <= s4;
				end
			s2 : begin
				//we know S/2p = a/4
				//but what happens if a %4 !=0 then the result of division will pass to a floor function
				active_lights <= lenght/4;
				end
			s3 : begin
					active_lights <= ulight;
				end
			s4 : begin
					active_lights <= s4;
				end
		endcase
	end
			
endmodule