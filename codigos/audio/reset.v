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
module reset(clk,pwm_ref,reset_central);
input clk;
input reset_central;
reg [1:0] contador;
output reg [4:0] pwm_ref;

always @(posedge clk or posedge reset_central)
begin
 if (reset_central)
 begin
  pwm_ref<=0;
  contador<=0;
 end
 else
 begin
	  if (contador==2'b11)
		pwm_ref<=5'b00110;
	  else
		pwm_ref<=5'b00000;
	contador<=contador+2'd1;
 end
end
endmodule
