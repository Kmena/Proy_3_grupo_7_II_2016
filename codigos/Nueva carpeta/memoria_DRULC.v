`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:06:59 09/03/2016 
// Design Name: 
// Module Name:    memoria_DMULC 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//					memoria:
//								1.segundos
//								2.minutos
//								3.horas
//								4.dias
//								5.meses
//								6.aos
//								cronometro
//								9.segundos
//								10.minutos
//								11.horas
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module memoria_DMULC(ADD1,ADD2,DAT1,Dato2,clk,reset,w1,irq);
	input clk,reset,w1,irq;
	input[3:0] ADD1;
	input[3:0] ADD2;
	input[7:0] DAT1;
	output Dato2;
	
	reg actready;
	reg [7:0] Dato2;
	reg [7:0] memoriain[0:15];
	
	always @(posedge clk)
	begin
		if(reset)
		begin
			Dato2<=0;
			memoriain[0]<=0;
			memoriain[1]<=0;
			memoriain[2]<=0;
			memoriain[3]<=0;
			memoriain[4]<=0;
			memoriain[5]<=0;
			memoriain[6]<=0;
			memoriain[7]<=0;
			memoriain[8]<=0;
			memoriain[9]<=0;
			memoriain[10]<=0;
			memoriain[11]<=0;
			memoriain[12]<=0;
			memoriain[13]<=0;
			memoriain[14]<=0;
			memoriain[15]<=0;
		end
		else
			begin
			if(w1) memoriain[ADD1]<=DAT1;
			else begin end
			if(memoriain[7]==8'b0 && memoriain[8]==8'b0 && memoriain[9]==8'b0)
			begin
				memoriain[11]<=8'b0;
				if(ADD2 == 4'd7) Dato2<=8'd23;
				else if(ADD2 == 4'd8) Dato2<=8'd59;
				else if(ADD2 == 4'd9) Dato2<=8'd59;
				else Dato2<=memoriain[ADD2];
			end
			else
			begin
				Dato2<=memoriain[ADD2];
				memoriain[11]<=8'h08;
			end
				/*Dato2<=memoriain[ADD2];
				memoriain[10]<={7'b0,~irq};
				memoriain[11]<={7'b0,irq};*/
			end
	end
endmodule
