`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:48:15 10/11/2016 
// Design Name: 
// Module Name:    counter 
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
module counter(clk,reset,counter_out);
input clk;	
input reset;	// clock declared as an input port
output [16:0] counter_out;
reg [16:0] counter_out;  // counter_out declared as an 8 bit output register

always @(posedge clk or posedge reset)
		begin
		   if (reset)
			 counter_out<=0;
			else
			 counter_out <= counter_out + 17'b1;
		end

endmodule
