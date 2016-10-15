`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:03:26 10/11/2016 
// Design Name: 
// Module Name:    pwm 
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
module pwm(clk,pwm_ref,pwm_out,reset);
input clk;
input reset;
input [4:0] pwm_ref;
output pwm_out;
reg pwm_out;
wire [4:0] counter;
wire clk_out;
wire reset_sec;
counter counter1(.clk(clk_out),.reset(reset),.counter_out(counter));
div_frecuencia div(.clk(clk),.clk_out(clk_out),.reset(reset));
reset reset2(.clk(clk_out),.reset(reset_sec),.reset_central(reset));

always @(posedge clk_out)
begin
 if (reset_sec)
  pwm_out<=0;
 else
 begin
  if(pwm_ref > counter)
   pwm_out <= 1;
  else
   pwm_out <= 0;
 end
 
end 


endmodule
