`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:27:41 10/17/2016 
// Design Name: 
// Module Name:    control_principal_rtc 
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
module control_principal_rtc(clk,reset,cs,writestrobe,readstrobe,dir,dato,memorialisto,esclisto,datomem, actesc,actlec, datoout,datoreg,dirreg,dirmem,esc_reg);
 input clk,reset,cs,writestrobe,readstrobe,memorialisto,esclisto;
 input [7:0] dir,dato,datomem;
 output datoout,datoreg,dirreg,dirmem,actesc,actlec,esc_reg;
 reg actesc,actlec,esc_reg;
 reg [7:0] datoout,datoreg,dirreg;
 reg [3:0] dirmem;
 reg [2:0] State;
 reg [2:0] NextState;
 parameter [2:0] inicio = 3'b000;
 parameter [2:0] finallec= 3'b001;
 parameter [2:0] esclec = 3'b010;
 parameter [2:0] esc= 3'b011;
 parameter [2:0] lec= 3'b100;
 parameter [2:0] ciclolec= 3'b101;
 parameter [2:0] lectmem=3'b110;
 parameter [2:0] final=3'b111;
 
 always@(cs or writestrobe or readstrobe or memorialisto or State or esclisto or dirreg)
 begin
	 NextState=0;
	 case(State)
	 inicio:
			if(cs==1'b1)
				NextState=esclec;
			else
				NextState=inicio;
	 finallec:
			if(cs==1'b0)
				NextState=lectmem;
			else
				NextState=finallec;
	 esclec:
			if(readstrobe ==1)
				NextState=lec;
			else
				if(writestrobe ==1)
					NextState=esc;
				else
					NextState=inicio;
	esc:
		if(esclisto ==1)
			NextState = final;
		else
			NextState = esc;
	lec:
	   if(dirreg == 10 || dirreg == 11)
			NextState=lectmem;
		else
			NextState= ciclolec;
	ciclolec:
		if(memorialisto==1)
			NextState=finallec;
		else
			NextState= ciclolec;
	lectmem:
		NextState=final;
	final: 
		NextState=inicio;
	default:
		NextState=inicio;
	endcase
 end

 always @(posedge clk)
 begin
 State<=NextState;
 if(reset == 1)
 begin
	esc_reg<=0;
	datoout<=0;
	datoreg<=0;
	dirreg<=0;
	dirmem<=0;
	actesc<=0;
	actlec<=0;
 end
 else
 begin
	 case(State)
		 inicio:
		 begin
			datoout<=0;
			datoreg<=0;
			dirreg<=0;
			dirmem<=0;
			actesc<=0;
			actlec<=0;
		 end
		 esclec:
		 begin
			datoout<=0;
			datoreg<=dato;
			dirreg<=dir;
			actesc<=0;
			actlec<=0;
			case(dir)
				8'd33: dirmem <=4'd1;
				8'd34: dirmem <=4'd2;
				8'd35: dirmem <=4'd3;
				8'd36: dirmem <=4'd4;
				8'd37: dirmem <=4'd5;
				8'd38: dirmem <=4'd6;
				8'd65: dirmem <=4'd7;
				8'd66: dirmem <=4'd8;
				8'd67: dirmem <=4'd9;
				8'd10: dirmem <=4'd10;
				8'd11: dirmem <=4'd11;
				default: dirmem <= 4'd0;
			endcase
		 end
		esc:
		begin
			esc_reg<=0;
			datoout<=0;
			actesc<=1;
			actlec<=0;
		end
		lec:
		begin
			esc_reg<=0;
			datoout<=0;
			actesc<=0;
			actlec<=0;
		end
		ciclolec:
		begin
			esc_reg<=1;
			datoout<=0;
			actesc<=0;
			actlec<=0;
		end
		finallec:
		begin
			esc_reg<=0;
			esc_reg<=0;
			datoout<=1;
			actesc<=0;
			actlec<=0;
		end
		lectmem:
		begin
			esc_reg<=0;
			datoout<=datomem;
			actesc<=0;
			actlec<=0;
		end
		final: 
		begin
			esc_reg<=0;
			datoout<=1;
			actesc<=0;
			actlec<=0;
		end
		default:
		 begin
			esc_reg<=0;
			datoout<=0;
			datoreg<=0;
			dirreg<=0;
			dirmem<=0;
			actesc<=0;
			actlec<=0;
			State<=inicio;
		 end
		endcase
	end
end

endmodule
