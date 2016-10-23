`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:00:36 10/23/2016
// Design Name:   empaquetado_audio
// Module Name:   C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/audio/empaquetado_sonido_tb.v
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

module empaquetado_sonido_tb;

	// Inputs
	reg clk;
	reg reset;
	reg act_sonido;
	reg [7:0] data_in;

	// Outputs
	wire pwm_out;

	// Instantiate the Unit Under Test (UUT)
	empaquetado_audio uut (
		.clk(clk), 
		.reset(reset), 
		.act_sonido(act_sonido), 
		.data_in(data_in), 
		.pwm_out(pwm_out)
	);
	initial forever #5 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		act_sonido = 0;
		data_in = 0;
		#10 reset =0;
		#50 act_sonido =1;
		data_in = 8'd1;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

