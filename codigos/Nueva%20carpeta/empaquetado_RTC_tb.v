`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:10:43 10/31/2016
// Design Name:   ModuloRTC
// Module Name:   C:/Users/User/Documents/Proy_3_grupo_7_II_2016/codigos/Nueva%20carpeta/empaquetado_RTC_tb.v
// Project Name:  pico
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ModuloRTC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module empaquetado_RTC_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] dat_RTC;
	reg chipsel;
	reg writestrobe;
	reg readstrobe;
	reg irq;
	reg [7:0] dir_in;
	reg [7:0] port_id;
	reg [7:0] dato_in;

	// Outputs
	wire [7:0] data_out;
	wire [7:0] data_out_micro;
	wire CS;
	wire AD;
	wire RD;
	wire WR;

	// Instantiate the Unit Under Test (UUT)
	ModuloRTC uut (
		.clk(clk), 
		.reset(reset), 
		.data_out(data_out), 
		.data_out_micro(data_out_micro), 
		.dat_RTC(dat_RTC), 
		.CS(CS), 
		.AD(AD), 
		.RD(RD), 
		.WR(WR), 
		.chipsel(chipsel), 
		.writestrobe(writestrobe), 
		.readstrobe(readstrobe), 
		.irq(irq), 
		.dir_in(dir_in), 
		.port_id(port_id), 
		.dato_in(dato_in)
	);
	initial #5 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		dat_RTC = 0;
		chipsel = 0;
		writestrobe = 0;
		readstrobe = 0;
		irq = 0;
		dir_in = 0;
		port_id = 0;
		dato_in = 0;
		#10 reset =0;
		dir_in = 0;
		port_id = 1;
		writestrobe = 1;
		#10;
		dir_in = 0;
		port_id = 11;
		writestrobe = 11;
		#10;
		$stop;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

