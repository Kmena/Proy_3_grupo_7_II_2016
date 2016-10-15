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
module reset(contador,clk,pwm_ref,reset_central);
input clk;
input reset_central;
input [16:0] contador;
output [4:0] pwm_ref;
reg [4:0] pwm_ref;
always @(posedge clk or posedge reset_central)
begin
 if (reset_central)
 begin
  pwm_ref<=0;
 end
 else
 begin
  if (contador>=17'd80000 && contador<=17'b11111111111111111)
  begin
   pwm_ref<=5'b00110;
  end
  else
	pwm_ref<=5'b11111;
 end
end
endmodule
