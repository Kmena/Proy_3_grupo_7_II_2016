`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:03:41 10/13/2016 
// Design Name: 
// Module Name:    reset 
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
module reset(clk,reset,reset_central);
input clk;
input reset_central;
output reset;
reg reset;
always @(posedge clk or posedge reset_central)
begin
 if (reset_central)
  reset<=0;
 else
  reset<=~reset;
end
endmodule
