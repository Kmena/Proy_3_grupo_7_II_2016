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
reg [2:0] contador;
output reset;
reg reset;
always @(posedge clk or posedge reset_central)
begin
 if (reset_central)
 begin
  reset<=0;
  contador<=0;
 end
 else
 begin
  if (contador==3'b111)
   reset<=~reset;
  else
   contador<=contador+3'd1;
 end
end
endmodule
