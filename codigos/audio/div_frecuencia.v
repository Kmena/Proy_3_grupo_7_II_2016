`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:22:15 10/13/2016 
// Design Name: 
// Module Name:    div_frecuencia 
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
module div_frecuencia(clk,clk_out,reset);
input clk;
input reset;
output clk_out;
reg clk_out;
reg [16:0] contador;
always @(posedge clk)
begin
 if (reset)
 begin
  contador<=0;
  clk_out<=0;
 end
 else
 begin
  if (contador==17'd800)
  begin
   contador<=0;
   clk_out<=~clk_out;
  end 
  else
   contador<=contador+17'd1;
 end
 
end


endmodule
