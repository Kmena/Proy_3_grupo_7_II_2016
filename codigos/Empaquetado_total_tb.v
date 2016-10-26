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
	reg [7:0] Key;

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
	reg [7:0] datoinR;
	assign datRTC = WR?datoinR:8'hzz;
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
		PS2_Clock = 1;
		PS2_Data = 1;
		irq = 1;
		datoinR=8'h0F;
		#10 reset =0;
		// Wait 100 ns for global reset to finish
		#100;
      Key = 8'h05; // Seleccionar años
		#3000000 Key = 8'h2E; // Presionar un 5
		#3000000 Key = 8'h5A; // Dar enter
		// Add stimulus here

	end
	integer i;
	parameter F0 = 8'hF0;
	always @(Key)
	begin
		// KeyDown
		PS2_Data = 0;
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
		for(i = 0; i < 8; i = i + 1)
		begin
			PS2_Data = Key[i];
			#30000 PS2_Clock = 0;
			#30000 PS2_Clock = 1;
		end
		PS2_Data = 0; // Paridad no importa
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
				PS2_Data = 1; // Stop
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
		// KeyUp
		PS2_Data = 0;
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
		for(i = 0; i < 8; i = i + 1)
		begin
			PS2_Data = F0[i];
			#30000 PS2_Clock = 0;
			#30000 PS2_Clock = 1;
		end
		PS2_Data = 0; // Paridad no importa
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
				PS2_Data = 1; // Stop
		#30000 PS2_Clock = 0;
		#60000 PS2_Clock = 1;
		// KeyDown
		PS2_Data = 0;
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
		for(i = 0; i < 8; i = i + 1)
		begin
			PS2_Data = Key[i];
			#30000 PS2_Clock = 0;
			#30000 PS2_Clock = 1;
		end
		PS2_Data = 0; // Paridad no importa
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
				PS2_Data = 1; // Stop
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
	end
      
endmodule

