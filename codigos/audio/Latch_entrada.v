`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:08 10/22/2016 
// Design Name: 
// Module Name:    Latch_entrada 
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
module Latch_entrada(clk,reset,en,data_in,out);
	input clk,reset,en;
	input [7:0] data_in;
	output out;
	reg out;
	
	assign data_in [7:1] = 7'b0;
	
	always @ (posedge clk)
	begin
	if(reset == 1'b1)
		out <=1'b1;
	else
	begin
		if(en ==1'b1)
			out <= ~data_in[0];
		else
			out<=out;
	end
	end


endmodule
