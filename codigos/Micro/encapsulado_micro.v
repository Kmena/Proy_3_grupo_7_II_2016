`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:54 10/18/2016 
// Design Name: 
// Module Name:    encapsulado_micro 
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
module encapsulado_micro(
	output [7:0]		out_port,
	input	[7:0]		in_portRTC,
	input [7:0]		in_portteclado,
	input [7:0]	in_portVGA,
	output  writestrobe,
	output			read_strobe,
	input clk,
	input kcpsm6_reset,
	output actRTC, 
	output actVGA, 
	output actTeclado,
	output actsonido, 
	output [7:0] dir,
	output [7:0] port_id
   );
	wire [7:0]		in_port;
	wire write_strobe;
	wire k_write_strobe;	
//	wire [7:0] port_id;
	wire Act;
	assign Act=actRTC||actVGA||actTeclado||actsonido;
//	assign writestrobe=Act&&~read_strobe;
//	assign writeS = 1'b0;
	or2 or2_2(.dato1(write_strobe),.dato2(k_write_strobe),.salida(writestrobe));
	pico piko(.port_id(port_id),.out_port(out_port),.in_port(in_port),.write_strobe(write_strobe),.k_write_strobe(k_write_strobe),.read_strobe(read_strobe),.clk(clk),.kcpsm6_reset(kcpsm6_reset));
	deco_id id_out(.id_port(port_id), .actRTC(actRTC), .actVGA(actVGA), .actTeclado(actTeclado), .actsonido(actsonido), .dir(dir));
	mux3x7 mux1(.Dato1(in_portRTC),.Dato2(in_portteclado),.Dato3(in_portVGA),.selector(actRTC),.selector2(actVGA),.salida(in_port));
//	FlipFlopRS FF1(.S(W_strobe),.R(writeS),.Q(writestrobe));
//	FlipFlopRS FF2(.S(RStrobe),.R(Act),.Q(read_strobe));
endmodule
