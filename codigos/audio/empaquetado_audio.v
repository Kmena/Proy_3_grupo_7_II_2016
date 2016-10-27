`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:59:41 10/22/2016 
// Design Name: 
// Module Name:    empaquetado_audio 
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
module empaquetado_audio(clk,reset/*,act_sonido,data_in*/,pwm_out);
	input clk,reset;/*,act_sonido;
	input [7:0] data_in;*/
	output pwm_out;

//	wire reset_interno;
	
//	Latch_entrada entrada(.clk(clk),.reset(reset),.en(act_sonido),.data_in(data_in),.out(reset_interno));
	pwm sonido(.clk(clk),.pwm_out(pwm_out),.reset(reset));

endmodule
