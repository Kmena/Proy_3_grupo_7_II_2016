`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:58:28 10/23/2016
// Design Name:   FlipFlopRS
// Module Name:   C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/Nueva carpeta/FlipFlopRS_tb.v
// Project Name:  pico
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FlipFlopRS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FlipFlopRS_tb;

	// Inputs
	reg S;
	reg R;

	// Outputs
	wire Q;

	// Instantiate the Unit Under Test (UUT)
	FlipFlopRS uut (
		.S(S), 
		.R(R), 
		.Q(Q)
	);
	initial forever
	begin
		#5 S=~S;
		#5 R=~R;
	end
	initial begin
		// Initialize Inputs
		S = 0;
		R = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

