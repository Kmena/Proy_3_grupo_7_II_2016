`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:15:15 10/15/2016
// Design Name:   Keyboard
// Module Name:   /home/lleon95/GitHub/Proy_3_grupo_7_II_2016/codigos/teclado/build/1.0/Keyboard_tb.v
// Project Name:  keyboard
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Keyboard
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Keyboard_tb;

	// Inputs
	reg CLK;
	reg RESET;
	reg [7:0] Port_ID;
	reg Read_Strobe;
	reg PS2_Clock;
	reg PS2_Data;
	integer id;
	reg [7:0] Key;

	// Outputs
	wire [7:0] Keyboard_Output;

	// Instantiate the Unit Under Test (UUT)
	Keyboard uut (
		.CLK(CLK), 
		.RESET(RESET), 
		.Port_ID(Port_ID), 
		.Read_Strobe(Read_Strobe), 
		.Keyboard_Output(Keyboard_Output), 
		.PS2_Clock(PS2_Clock), 
		.PS2_Data(PS2_Data)
	);

	initial begin
		// Initialize Inputs
		CLK = 1;
		RESET = 1;
		Port_ID = 0;
		Read_Strobe = 0;
		PS2_Clock = 1;
		PS2_Data = 1;
		Toggle = 0;
		WriteKey = 0;
		id = $fopen("TB_Results.txt", "w");

		// Wait 100 ns for global reset to finish
		#100;
       RESET = 0;
		// Add stimulus here
		// Ver primera línea de resultados
		$fwrite(id, "Read_Strobe");
		$fwrite(id, "\t");
		$fwrite(id, "PORT_ID");
		$fwrite(id, "\t");
		$fwrite(id, "Keyboard_Output");
		$fwrite(id, "\n");
		#100;
		// Iniciar haciendo un read_strobe durante inactividad
		Port_ID = 8'h05; // Dir
		#10 Read_Strobe = 1;
		#10 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#10 Read_Strobe = 1;
		#10 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#10 Read_Strobe = 1;
		#10 Read_Strobe = 0;
		#100;
		// Iniciar con un comando inmediato F11: 78
		
	end
      
	// Configurando el reloj principal del sistema (100MHz)
	always
		#5 CLK = ~CLK;
	// Imprimir datos
	always @(Read_Strobe)
	begin
		$fwrite(id, Read_Strobe);
		$fwrite(id, "\t");
		$fwrite(id, Port_ID);
		$fwrite(id, "\t");
		$fwrite(id, Keyboard_Output);
		$fwrite(id, "\n");
	end
	// Presionar tecla
	integer i;
	integer
	always @(Key)
	begin
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
		PS2_Data = 0;
		for(i = 0; i < 8; i++)
		begin
			#30000 PS2_Clock = 0;
			#30000 PS2_Clock = 1;
			PS2_Data = Key[i];
		end
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
		PS2_Data = 0; // Paridad no importa
		#30000 PS2_Clock = 0;
		#30000 PS2_Clock = 1;
		PS2_Data = 1; // Stop
	end

endmodule

