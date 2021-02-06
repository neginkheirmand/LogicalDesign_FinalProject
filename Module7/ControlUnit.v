/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 9831023
--  Student Name: Negin kheirmand
--  Student Mail: neginkheirmand@aut.ac.ir
--  *******************************************************
--  Additional Comments:
--		in contribution to Arvand Darvish
--*/
/*-----------------------------------------------------------
---  Module Name: Control Unit
---  Description: Module7:	a -not so- simple memory unit
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

`define AAA 3'b001 // IDLE
`define BBB 3'b010 // ACTIVE
`define CCC 3'b011 // REQUEST
`define DDD 3'b100 // STORE
`define EEE 3'b101 // TRAP
`define FFF 3'b111 // FFF

`define STATE_IDLE    3'b001
`define STATE_ACTIVE  3'b010
`define STATE_REQUEST 3'b011
`define STATE_STORE   3'b100
`define STATE_TRAP    3'b101
`define STATE_OTHERS  3'b111


module ControlUnit (
	input         arst        , // async  reset
	input         clk         , // clock  posedge
	input         request     , // request input (asynch) 
	input         confirm     , // confirm input 
	input  [ 1:0] password    , // password from user
	input  [ 1:0] syskey 		 , // key  from memoty unit
	input  [34:0] configin    	, // conf from user
	output reg [34:0] configout , // conf to memory unit
	output reg    write_en  , // conf mem write enable
	output reg [ 2:0] dbg_state   // current state (debug)
	);
	
	wire correctPass;
	PassCheckUnit passChecker(password, syskey, correctPass);
	
	
	always @ (posedge clk or posedge arst or negedge request)
		begin 
			if(arst)	begin 
				configout <= 35'b00000000000000000000000000000000000;
				write_en  <= 1'b0;
				dbg_state <= `STATE_IDLE;
			end
			else begin
				if(!request) begin
					write_en  <= 1'b0;
					dbg_state <= `STATE_IDLE;
				end
				else begin
					case(dbg_state)
						`STATE_IDLE : begin
							write_en  <= 1'b0;
							dbg_state <= `STATE_ACTIVE;
						end
						`STATE_ACTIVE : begin
							write_en  <= 1'b0;
							if( confirm ) begin
								if(correctPass) begin
									dbg_state <= `STATE_REQUEST;
								end
								else begin
									dbg_state <= `STATE_TRAP;
								end
							end
						end
						`STATE_REQUEST : begin
							write_en  <= 1'b0;
							if( confirm ) begin
								dbg_state <= `STATE_STORE;
							end
						end
						`STATE_STORE : begin
							write_en  <= 1'b1;
							configout <= configin;
							//and go back to the idle state 
							dbg_state <= `STATE_IDLE;
							
						end
						`STATE_TRAP : begin
							write_en  <= 1'b0;
							//the only way is to turn off the request one time to get out of this state
							//if we wanted this action to be automatic we should uncomment the next line
							//dbg_state <= STATE_IDLE;
						end
						`STATE_OTHERS : begin
							write_en  <= 1'b0;
							//since this is a bug state (the system should never get to this state) 
							//the going-back to the starting idle state is automatic
							dbg_state <= `STATE_IDLE;
						end
					endcase
				end
			end
		end
	
	

endmodule
