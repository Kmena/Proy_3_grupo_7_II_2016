`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:38:10 09/10/2016 
// Design Name: 
// Module Name:    lectura 
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
module lectura(reset,clk,dir,iniciar,fin,activa,dir_out,final);
//inicio input output
input reset;
input iniciar;
input [7:0] dir;
input clk;
input fin;
output [7:0] dir_out;
output activa;
output final;
//fin input output
reg [7:0] dir_out;
reg activa;
reg final;

//inicio variables y parametros internos

reg [1:0] state;
reg [1:0] next_state;

parameter [1:0] inicio = 2'b00;
parameter [1:0] lee = 2'b01;
parameter [1:0] finalizar = 2'b10;

//logica de estado siguiente

always @(iniciar or fin or state)
begin
 next_state = 0;
 case (state)
  inicio:begin
          if (iniciar == 1'b1)
			  next_state = lee;
			 else
			  next_state = inicio;
   end
  lee:begin
          if (fin == 1'b1)
			  next_state = finalizar;
			 else
			  next_state = lee;
   end
  finalizar:begin
			  next_state = inicio;	
			 end
  default:begin
          next_state = inicio;
   end
  endcase
end

//logica de salida

always @(posedge clk)
begin
 if (reset || ~iniciar)
 begin
  dir_out <= 0;
  activa <= 0;
  state <= inicio;
  final <= 0;
 end
 else
 begin
  state <= next_state;
  case (state)
   inicio:begin
	        dir_out <= 0;
           activa <= 0;
			  final <= 0;
	 end
	lee:begin
	        dir_out <= dir;
           activa <= 1;
			  final<= 0;
	 end
   finalizar:begin
	        dir_out <= 0;
           activa <= 0;
			  final <= 1;
	 end
	default:begin
	        state <= inicio;
	  end
	 endcase
 end
end

endmodule
