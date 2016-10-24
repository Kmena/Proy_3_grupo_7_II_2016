`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:08:39 09/13/2016 
// Design Name: 
// Module Name:    ControlVGACentral 
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
module ControlVGACentral_MemoryPointed(
		input CLK,
		input RESET,
		input actVGA,
		input [7:0] Port_ID,
		input [7:0] IN_DATA,
		input Read_Strobe,
		input Write_Strobe,
		output reg [7:0] OUT_DATA,
		output [3:0] R,
		output [3:0] G,
		output [3:0] B,
		output HSync,
		output VSync
    );

	
	wire BLANK;
	wire [9:0] PosX, PosY;
	wire [5:0] RGB;
	wire Rstrobe;
	FlipFlopRS FFVGA(.S(Read_Strobe),.R(actVGA),.Q(Rstrobe));

	// Vincular Maquina de Sincronia
	SyncCounters SyncMachine(.CLK(CLK),.RESET(RESET),.Blank(BLANK),.HSync(HSync),.VSync(VSync),.PosX(PosX),.PosY(PosY));


	// Adaptador de entrada para Picoblaze - 13/OCT/2016
	reg [7:0] MemData;
	reg [3:0] MemAddr;
	
	/*
		NOTA:
		USAR MemDataIN, MemAddrOut, CS_VGA, OUT_DATA, IN_DATA, Port_ID
	*/
	
	reg Write;

	// Vincular Punteros
	PunterosVGA_MemoryPointed Pointers(.MemDataIN(MemData),.PosX(PosX),
								.PosY(PosY),.MemAddrIN(MemAddr),.CLK(CLK),.RESET(RESET),
								.OutRGB(RGB),.VSync(VSync),.Write(Write));
								
	
	//VROMs Memoryinput(.CLK(CLK),.ChipSelector(ROMCS),.Address(ROMAddr),.DataOutput(RGB));
	
	// Control de Salidda
	ControlSalidaVGA OutputAdapter(.RGB(RGB),.Blank(BLANK),.CLK(CLK),.R(R),.G(G),.B(B));
	
	
	/*
		Control de puertos - 15/Oct/2016
	*/
	
	// Direccionamientos
	always @*
	begin
		// De salida
		if(Port_ID == 8'd2 && Rstrobe)
			OUT_DATA = {7'd0, ~VSync};
		else
			OUT_DATA = 8'h00;
	end
	always @(posedge CLK)
	begin
		if(RESET)
			begin
				Write <= 1'b0;
				MemAddr <= 4'hF;
				MemData <= 8'h00;
			end
		else
			begin
				// De entrada
				if(Write_Strobe)
					if(Port_ID == 8'd40)
						begin
							MemAddr <= IN_DATA[3:0];
							Write <= 0;
						end
					else if(Port_ID == 8'd41)
						begin
							MemData <= IN_DATA;
							Write <= 1;
						end
					else
						Write <= 0;
				else
					Write <= 0;
			end
	end
	
endmodule
