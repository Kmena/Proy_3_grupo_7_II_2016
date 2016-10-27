`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:07:18 10/27/2016
// Design Name:   empaquetado_audio
// Module Name:   C:/Users/LuisOrlando/Documents/Proyectos Lab Digitales/Proy_3_grupo_7_II_2016/codigos/audio/empaquetado_audio_tb.v
// Project Name:  pico
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: empaquetado_audio
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module empaquetado_audio_tb;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire pwm_out;

	// Instantiate the Unit Under Test (UUT)
	empaquetado_audio uut (
		.clk(clk), 
		.reset(reset), 
		.pwm_out(pwm_out)
	);
	initial forever #5 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#10 reset = 0;
		#10 reset = 1;
		#750000000;
		reset =0;
		#750000000;
		reset =1;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

