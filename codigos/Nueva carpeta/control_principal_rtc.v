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
module control_principal_rtc(clk,reset,cs,writestrobe,readstrobe,dir,dato,memorialisto,esclisto,datomem, actesc,actlec, datoout,datoreg,dirreg,dirmem,port_id);
 input clk,reset,cs,writestrobe,readstrobe,memorialisto,esclisto;
 input [7:0] dir,dato,datomem,port_id;
 output datoout,datoreg,dirreg,dirmem,actesc,actlec;
 reg actesc,actlec;
 reg [7:0] datoout,datoreg,dirreg;
 reg [3:0] dirmem;
 reg [3:0] State;
 reg [3:0] NextState;
 parameter [3:0] inicio = 4'b0000;
 parameter [3:0] esclec= 4'b0001;
 parameter [3:0] wstrobe = 4'b0010;
 parameter [3:0] w_start= 4'b0011;
 parameter [3:0] finesc= 4'b0100;
 parameter [3:0] mem_cicle= 4'b0101;
 parameter [3:0] rstrobe=4'b0110;
 parameter [3:0] r_start=4'b1011;
 parameter [3:0] noactlec=4'b0111;
 parameter [3:0] actilec=4'b1000;
 parameter [3:0] mem=4'b1001;
 parameter [3:0] fin=4'b1010;
 always@(cs or writestrobe or readstrobe or memorialisto or State or esclisto or dirreg or port_id)
 begin
	 NextState=0;
	 case(State)
	 inicio:
//			if(cs==1'b1)
				NextState=esclec;/*
			else
				NextState=inicio;*/
	 esclec:
	 if((port_id>= 8'd1 && port_id<=8'd4)||(port_id>= 8'd17 && port_id<=8'd25)||port_id==11)
			if(readstrobe ==1)
				NextState=mem_cicle;//error con el write strobe, por si acaso, no se usa
			else
				if(writestrobe==1)NextState=wstrobe;
//				else if(cs==1'b0) NextState=inicio;
				else NextState = esclec;
	else NextState = esclec;
	wstrobe:
		if(readstrobe ==1'b1)
			NextState = w_start;
		else
			NextState = wstrobe;
	mem_cicle:
	   if(dirreg == 10 || dirreg == 11)
			NextState=actilec;
		else
			NextState= rstrobe;
	w_start:
		if(esclisto==1)
			NextState=finesc;
		else
			NextState= wstrobe;
	finesc:
		NextState=fin;
	rstrobe:
		if(readstrobe ==1'b1)
			NextState = r_start;
		else
			NextState = rstrobe;
	r_start:
		if(memorialisto ==1'b1)
			NextState = actilec;
		else
			NextState = rstrobe;
	noactlec:
		if(readstrobe ==1'b1)
			NextState = mem;
		else
			NextState = noactlec;
	actilec:
		if(readstrobe ==1'b1)
			NextState = actilec;
		else
			NextState = noactlec;
	mem:
		if(readstrobe ==1'b1)
			NextState = mem;
		else
			NextState = fin;
	fin: 
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
	datoout<=0;
	datoreg<=0;
	dirreg<=0;
	dirmem<=0;
	actesc<=0;
	actlec<=0;
	State<=inicio;
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
		wstrobe:
		begin
			datoout<={7'd0,esclisto};
			actesc<=1;
			actlec<=0;
		end
	   mem_cicle:
	   begin
			datoout<=0;
			actesc<=0;
			actlec<=0;
		end
	   w_start:
		begin
			datoout<={7'd0,esclisto};
			actesc<=1;
			actlec<=0;
		end
	   finesc:
		begin
			datoout<=8'd1;
			actesc<=0;
			actlec<=0;
		end
	   rstrobe:
		begin
			datoout<={7'd0,memorialisto};
			actesc<=0;
			actlec<=1;
		end
	   r_start:
		begin
			datoout<={7'd0,memorialisto};
			actesc<=0;
			actlec<=1;
		end
	   noactlec:
		begin
			datoout<=datomem;
			actesc<=0;
			actlec<=1;
		end
	   actilec:
		begin
			datoout<=8'd1;
			actesc<=0;
			if(dir != 8'd11) actlec<=1;
			else actlec<=0;
		end
	   mem:
			begin
			datoout<=datomem;
			actesc<=0;
			if(dir != 8'd11) actlec<=1;
			else actlec<=0;
		end
	   fin: 
		begin
			datoout<=0;
			actesc<=0;
			actlec<=0;
		end
	default:
		begin
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
/*always@(cs or writestrobe or readstrobe or memorialisto or State or esclisto or dirreg)
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
			datoout<=0;
			actesc<=1;
			actlec<=0;
		end
		lec:
		begin
			datoout<=0;
			actesc<=0;
			actlec<=0;
		end
		ciclolec:
		begin
			datoout<=0;
			actesc<=0;
			actlec<=0;
		end
		finallec:
		begin
			datoout<=1;
			actesc<=0;
			actlec<=0;
		end
		lectmem:
		begin
			datoout<=datomem;
			actesc<=0;
			actlec<=0;
		end
		final: 
		begin
			datoout<=1;
			actesc<=0;
			actlec<=0;
		end
		default:
		 begin
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
end*/