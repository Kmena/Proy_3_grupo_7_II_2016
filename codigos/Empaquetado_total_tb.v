`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:03:45 10/24/2016
// Design Name:   Empaquetado_total
// Module Name:   C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/Empaquetado_total_tb.v
// Project Name:  pico
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Empaquetado_total
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Empaquetado_total_tb;

	// Inputs
	reg clk;
	reg reset;
	reg PS2_Clock;
	reg PS2_Data;
	reg irq;

	// Outputs
	wire [3:0] R;
	wire [3:0] G;
	wire [3:0] B;
	wire HSync;
	wire VSync;
	wire CS;
	wire AD;
	wire RD;
	wire WR;
	wire pwm_out;

	// Bidirs
	wire [7:0] datRTC;

	// Instantiate the Unit Under Test (UUT)
	Empaquetado_total uut (
		.clk(clk), 
		.reset(reset), 
		.R(R), 
		.G(G), 
		.B(B), 
		.HSync(HSync), 
		.VSync(VSync), 
		.PS2_Clock(PS2_Clock), 
		.PS2_Data(PS2_Data), 
		.datRTC(datRTC), 
		.CS(CS), 
		.AD(AD), 
		.RD(RD), 
		.WR(WR), 
		.pwm_out(pwm_out), 
		.irq(irq)
	);
	initial forever #5 clk = ~ clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		PS2_Clock = 0;
		PS2_Data = 0;
		irq = 1;
		#10 reset =0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

