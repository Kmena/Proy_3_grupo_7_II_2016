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
wire [4:0] ref;//nuevo pwM_ref
counter counter1(.clk(clk_out),.reset(reset),.counter_out(counter));//reset sec en lugar del otro reset
div_frecuencia div(.clk(clk),.clk_out(clk_out),.reset(reset));//reset sec en lugar del otro reset
reset reset2(.clk(clk_out),.pwm_ref(ref),.reset_central(reset));

always @(posedge clk_out)
begin
 if (reset)
  pwm_out<=0;
 else
 begin
  if(ref > counter)
   pwm_out <= 1;
  else
   pwm_out <= 0;
 end
 
end 


endmodule
