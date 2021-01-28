`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Engineer: Negin Kheirmand (neginkheirmand@gmail.com
// 
// Create Date:    17:58:10 01/27/2021 
// Design Name:    GasDetectorSensor 
// Project Name: Final Project(Module 1)
// Tool versions: V1
// Description: A not so-simple GasDetectorSensor
//////////////////////////////////////////////////////////////////////////////////
module GasDetectorSensor (
	input        arst     , // async reset
	input        clk      , // clock posedge
	input        din      , // input data 
	output reg [2:0] dout       // output data
);
 
	
	
	//Methan detection
	
	parameter s1 = 4'b0000, s2 = 4'b0001, s3 = 4'b0010, s4 = 4'b0011, s5 = 4'b0100,
					s6 = 4'b0101, s7 = 4'b0110 , s8 = 4'b0111, s9 = 4'b1000, s10 = 4'b1001;
	
	reg [3:0] currentState ;
		always @ (posedge arst)
		begin
			//if (arst)
			//begin
				dout = 3'b000;
				currentState = 4'b0000;
				currentMonoxideState = 4'b0000;
				
			//end
		end
	
	always @ (posedge clk)
		begin 
		case (currentState)
			s1 : begin
					dout[0]= 0;
					if (din) 
					begin 
						currentState = s2;
					end
				  end
				  
			s2 : begin 
					dout[0]= 0;	
					if (~din) 
					begin 
						currentState = s3;
					end
				  end
			s3 : begin 
					dout[0]= 0;	
					if (din) 
					begin 
						currentState = s4;
					end
					else currentState = s1;
				  end
			s4 : begin 
					dout[0]= 0;	
					if (din) 
					begin 
						currentState = s5;
					end
					else currentState = s1;
				  end
			s5 : begin 
					dout[0]= 0;	
					if (din) 
					begin 
						currentState = s6;
					end
					else currentState = s3;
				  end
			s6 : begin 
					dout[0]= 0;	
					if (din) 
					begin 
						currentState = s2;
					end
					else currentState = s7;
				  end
			s7 : begin 
					dout[0]= 0;	
					if (din) 
					begin 
						currentState = s8;
					end
					else currentState = s1;
				  end
			s8 : begin 
					dout[0]= 0;	
					if (din) 
					begin 
						currentState = s5;
					end
					else currentState = s9;
				  end
			s9 : begin 
					dout[0]= 0;	
					if (din) 
					begin 
						currentState = s10;
					end
					else currentState = s1;
				  end
			s10 : begin 	
					if (din) 
					begin 
						currentState = s5;
						dout[0]= 0;
					end
					else 
					begin
						currentState = s1;
						dout[0]= 1;
					end
				  end
		endcase
	end
	
	
	
	
	//Carbon Monoxide detection
	
	parameter c1 = 4'b0000, c2 = 4'b0001, c3 = 4'b0010, c4 = 4'b0011, c5 = 4'b0100,
					c6 = 4'b0101, c7 = 4'b0110 , c8 = 4'b0111, c9 = 4'b1000, c10 = 4'b1001, c11 = 4'b1010, c12 = 4'b1011;
	
	
	reg [3:0] currentMonoxideState ;
		always @ (posedge clk)
		begin 
		case (currentMonoxideState )
			c1 : begin
					dout[1]= 0;
					if (din) 
					begin 
						currentMonoxideState = c2;
					end
				  end
				  
			c2 : begin 
					dout[1]= 0;	
					if (~din) 
					begin 
						currentMonoxideState = c3;
					end
				  end
			c3 : begin 
					dout[1]= 0;
					if (din) 
					begin 
						currentMonoxideState = c4;
					end
					else currentMonoxideState = c1;
				  end
			c4 : begin 
					dout[1]= 0;
					if (din) 
					begin 
						currentMonoxideState = c2;
					end
					else currentMonoxideState = c5;
				  end
			c5 : begin 
					dout[1]= 0;
					if (din) 
					begin 
						currentMonoxideState = c6;
					end
					else currentMonoxideState = c1;
				  end
			c6 : begin 
					dout[1]= 0;	
					if (din) 
					begin 
						currentMonoxideState = c2;
					end
					else currentMonoxideState = c7;
				  end
			c7 : begin 
					dout[1]= 0;	
					if (din) 
					begin 
						currentMonoxideState = c6;
					end
					else currentMonoxideState = c8;
				  end
			c8 : begin 
					dout[1]= 0;	
					if (din) 
					begin 
						currentMonoxideState = c9;
					end
					else currentMonoxideState = c1;
				  end
			c9 : begin 
					dout[1]= 0;
					if (din) 
					begin 
						currentMonoxideState = c2;
					end
					else currentMonoxideState = c10;
				  end
			c10 : begin 
					dout[1]= 0;
					if (din) 
					begin 
						currentMonoxideState = c4;
					end
					else currentMonoxideState = c11;
				  end
			c11 : begin 
					dout[1]= 0;
					if (din) 
					begin 
						currentMonoxideState = c12;
					end
					else currentMonoxideState = c1;
				  end
			c12 : begin 	
					if (din) 
					begin 
						currentMonoxideState = c1;
						dout[1]= 1;
					end
					else 
					begin
						currentMonoxideState = c3;
						dout[1]= 0;
					end
				  end
		endcase
	end
	
	
	
endmodule