`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:12:12 10/16/2016
// Design Name:   ControlVGACentral_MemoryPointed
// Module Name:   /home/lleon95/GitHub/Proy_3_grupo_7_II_2016/codigos/controlVGA/ControlVGAwithBlue_tb.v
// Project Name:  VGA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlVGACentral_MemoryPointed
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ControlVGAwithBlue_tb;

	// Inputs
	reg CLK;
	reg RESET;
	reg [7:0] Port_ID;
	reg [7:0] IN_DATA;
	reg Read_Strobe;
	reg Write_Strobe;

	// Outputs
	wire [7:0] OUT_DATA;
	wire [3:0] R;
	wire [3:0] G;
	wire [3:0] B;
	wire HSync;
	wire VSync;
	
	integer id;
	wire [9:0] PosX, PosY;
	// Instantiate the Unit Under Test (UUT)
	ControlVGACentral_MemoryPointed uut (
		.CLK(CLK), 
		.RESET(RESET), 
		.Port_ID(Port_ID), 
		.IN_DATA(IN_DATA), 
		.Read_Strobe(Read_Strobe), 
		.Write_Strobe(Write_Strobe), 
		.OUT_DATA(OUT_DATA), 
		.R(R), 
		.G(G), 
		.B(B), 
		.HSync(HSync), 
		.VSync(VSync),
		.PosX(PosX),
		.PosY(PosY)
	);

	initial begin
		// Initialize Inputs
		id = $fopen("VGA.txt","w+");
		CLK = 0;
		RESET = 1;
		Port_ID = 0;
		IN_DATA = 0;
		Read_Strobe = 0;
		Write_Strobe = 0;

		// Wait 100 ns for global reset to finish
		#100;
      RESET = 0;
		// Add stimulus here
		
		// Iniciar con la alteración de registros - Se alterará años y minutos del timer
		// Para alterar 
		#34000000 $fclose(id);
		$stop;
	end
     
	// Alterar registros
	always @(posedge CLK)
	begin
		if(!VSync)
		begin
			// Ver si el micro puede escribir - tiene alrededor de 10uS para escribir
			Port_ID = 8'd2;
			#10;
			Read_Strobe = 1;
			#100; // Catch OUT_DATA
			Read_Strobe = 0;
			#10;
			Port_ID = 8'd0;
			#100;
			// Escribir en años
			Port_ID = 8'd40;
			IN_DATA = 8'd4; // Addr Años
			#10 Write_Strobe = 1;
			#10 Write_Strobe = 0;
			Port_ID = 8'd41;
			IN_DATA = 8'h16; // Datos Años
			#10 Write_Strobe = 1;
			#10 Write_Strobe = 0;
			
			// Escribir en minutos Timer
			Port_ID = 8'd40;
			IN_DATA = 8'd8; // Addr Años
			#10 Write_Strobe = 1;
			#10 Write_Strobe = 0;
			Port_ID = 8'd41;
			IN_DATA = 8'h45; // Datos Años
			#10 Write_Strobe = 1;
			#10 Write_Strobe = 0;
			Port_ID = 8'd0;
		end
	end
	
	always
	begin
		#5 CLK = ~CLK;
	end
	
	always @(PosX)
	begin
		//dataIN = memoria[addrOUT];
		$fwrite(id, "_%H",PosX);
		//$fwrite(id, "\t");
		$fwrite(id, "_%H_",PosY);
		//$fwrite(id, "\t");
		$fwrite(id, "%H",R);
		//$fwrite(id, "\t");
		$fwrite(id, "%H",G);
		//$fwrite(id, "\t");
		$fwrite(id, "%H",B);
		$fwrite(id, "\n");
	end
endmodule

