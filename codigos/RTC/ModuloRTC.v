`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:49:47 10/17/2016 
// Design Name: 
// Module Name:    ModuloRTC 
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
module ModuloRTC(clk,reset,data_out,data_out_micro,dat_RTC,CS,AD,RD,WR,chipsel,writestrobe,readstrobe,irq,dir_in,dato_in);
 input clk,reset,chipsel,writestrobe,readstrobe,irq;
 input [7:0] dir_in,dato_in,dat_RTC;
 output CS,AD,RD,WR;
 output [7:0] data_out,data_out_micro;
 
 wire memstb;
 wire actlec,actwr;
 wire [7:0] dir,dato,datmem;
 wire finout,finesc,esc_reg,w;
 wire [3:0] dirmem,dirlectreg;
 wire activaoutlec,activaoutesc;
 wire escribe,memescribe;
 wire [7:0]datescout;
 wire [7:0] direscout,dirlecout,dirsalida;
 
 Mux2x7 Mux1(.Dato1(direscout),.Dato2(dirlecout),.selector(actwr),.salida(dirsalida));
 or2 or1(.dato1(activaoutlec),.dato2(activaoutesc),.salida(activaout));
 control_principal_rtc CPRTC(.clk(clk),.reset(reset),.cs(chipsel),.writestrobe(writestrobe),.readstrobe(readstrobe),.dir(dir_in),.dato(dato_in),.memorialisto(memstb),.esclisto(finesc),.datomem(datmem), .actesc(actwr),.actlec(actlec), .datoout(data_out_micro),.datoreg(dato),.dirreg(dir),.dirmem(dirmem),.esc_reg(esc_reg));
 control_salida Cout(.reset(reset),.direccion(dirsalida),.dato(datescout),.clk(clk),.iniciar(activaout),.escribe(escribe),.data_out(data_out),.CS(CS),.AD(AD),.RD(RD),.WR(WR),.final(finout),.esc(w),.escreg(memescribe));
 escritura Write(.reset(reset),.clk(clk),.dir(dir),.dato(dato),.iniciar(actwr),.fin(finout),.data_out(datescout),.dir_out(direscout),.escribe(escribe),.final(finesc),.activa(activaoutesc));
 lectura read(.reset(reset),.clk(clk),.dir(dir),.dir_reg(dirmem),.esc_reg(esc_reg),.iniciar(actlec),.fin(finout),.activa(activaoutlec),.w(w),.reg_out(dirlectreg),.dir_out(dirlecout));
 memoria_DMULC memoria(.ADD1(dirlectreg),.ADD2(dirmem),.DAT1(dat_RTC),.Dato2(datmem),.clk(clk),.reset(reset),.w1(memescribe),.whileT(memescribe),.actready(memstb),.irq(irq));

endmodule
