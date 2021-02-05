`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:11:58 02/04/2021 
// Design Name: 
// Module Name:    MemoryUnit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MemoryUnit (
	input         arst , // async  reset
	input         clk  , // clock  posedge
	input         wren , // write  enabledata
	input  [34:0] din  , // input  data
	output reg [34:0] dout   // output data
);
always @(posedge clk or posedge arst)  
    begin  
      if (arst)  
        dout = 35'b00000000000000000000000000000000000;  
      else  
        if (wren)  
          dout = din;  
    end 

endmodule
