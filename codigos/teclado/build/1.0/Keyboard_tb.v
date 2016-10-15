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
	parameter F0 = 8'hF0;

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
		Key = 8'd0;
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
		$fwrite(id, "\t");
		$fwrite(id, "Key");
		$fwrite(id, "\n");
		#100;
		// Iniciar haciendo un read_strobe durante inactividad
		Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		#100 ;
		// Iniciar con un comando inmediato F11: 78
		Key = 8'h78;
		#3300000 Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		#100;
		// Iniciar con una tecla de seleccion F1: 05
		Key = 8'h05;
		#3300000 Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		#100;
		// Iniciar con una tecla de Tab:0D
		Key = 8'h0D;
		#3300000 Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		Key = 8'h00;

		// Iniciar con una tecla de Tab:0D
		#3300000 Key = 8'h0D;
		#3300000 Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		Key = 8'h00;
		#100;
		// Iniciar con una tecla de Tab:0D
		#3300000 Key = 8'h0D;
		#3300000 Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		Key = 8'h00;
		#100;
		// Iniciar con una tecla de Tab:0D
		#3300000 Key = 8'h0D;
		#3300000 Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		#100;
		
		// Iniciar con una tecla de numero 2: 1E 
		Key = 8'h1E;
		#3300000 Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		#100;
		// Iniciar con una tecla de numero 1: 16
		Key = 8'h16;
		#3300000 Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		#100;
		// Iniciar con una tecla de commit: 5A
		Key = 8'h5A;
		#3300000 Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		#1000;
		// Probar nuevamente para ver si se borran
	   Port_ID = 8'h05; // Dir
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h06; // Dat
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		Port_ID = 8'h07; // Commit
		#20 Read_Strobe = 1;
		#20 Read_Strobe = 0;
		#20 Port_ID = 8'h00; // Low
		#100;
		$fclose(id);
		$stop;
		
	end
      
	// Configurando el reloj principal del sistema (100MHz)
	always
		#5 CLK = ~CLK;
	// Imprimir datos
	always @(Read_Strobe)
	begin
		$fwrite(id, "%H",Read_Strobe);
		$fwrite(id, "\t");
		$fwrite(id, "%H",Port_ID);
		$fwrite(id, "\t");
		$fwrite(id, "%H",Keyboard_Output);
		$fwrite(id, "\t");
		$fwrite(id, "%H",Key);
		$fwrite(id, "\n");
	end
	// Presionar tecla
	integer i;

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

