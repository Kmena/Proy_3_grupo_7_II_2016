`timescale 1ns / 1ps

module PunterosVGA_MemoryPointed(
 
		input [7:0] MemDataIN,
		input [9:0] PosX,
		input [9:0] PosY,
		input [7:0] MemAddrIN,
		//output [18:0] ROMAddrOut,
		//output [1:0] ROMCS,
		//input [5:0] ROMDataIN,
		input CLK,
		input RESET,
		output reg [5:0] OutRGB,
		input VSync,
		input Write,
		input IRQ
    );

	/*
		  Banco de registros temporales
	*/
	reg [7:0] segReloj, minReloj, horReloj, dayReloj, monReloj, yearReloj, segCrono, minCrono, horCrono; // 2 Bit CS, 10 Bit D, 10 Bit U
	reg ringCrono, actCrono;
	reg [7:0] Cursor;
	
	/*
		  Control de actualizacion de los registros temporales
	*/
	
	// Proceso de actualizacion
	always @(negedge CLK)
	begin
		if(RESET)
			begin
			// Limpiar registros
				segReloj <= 0;
				minReloj <= 0;
				horReloj <= 0;
				dayReloj <= 0;
				monReloj <= 0;
				yearReloj <= 0;
				segCrono <= 0;
				minCrono <= 0;
				horCrono <= 0;
				ringCrono <= 0;
				actCrono <= 0;
				Cursor <= 0;
				
			end
		else if(!RESET && !VSync && Write)
			begin
			// Contador de flujo
				ringCrono <= ~IRQ;
				case(MemAddrIN)
					
						8'd40 : segReloj <= MemDataIN;
						8'd41 : minReloj <= MemDataIN;
						8'd42 : horReloj <= MemDataIN;
						8'd45 : yearReloj <= MemDataIN;
						8'd44 : monReloj <= MemDataIN;
						8'd43 : dayReloj <= MemDataIN;
					
						/*8'd46 : segCrono <= MemDataIN;
						8'd47 : minCrono <= MemDataIN;
						8'd48 : horCrono <= MemDataIN;*/
						8'd46: if(!ringCrono)
						begin
							segCrono[3:0] <= 4'd9 - MemDataIN[3:0];
							segCrono[7:4] <= 4'd5 - MemDataIN[7:4];
						end
						else
						begin
							segCrono[3:0] <= 4'd0;
							segCrono[7:4] <= 4'd0;
						end
						8'd47 : if(!ringCrono)
						begin
							minCrono[3:0] <= 4'd9 - MemDataIN[3:0];
							minCrono[7:4] <= 4'd5 - MemDataIN[7:4];
						end
						else
						begin
							minCrono[3:0] <= 4'd0;
							minCrono[3:0] <= 4'd0;
						end
						8'd48 : if(!ringCrono)
						begin
							if(MemDataIN[3:0] > 4'd3)
								begin
									horCrono[3:0] <= 4'd13 - MemDataIN[3:0];
									horCrono[7:4] <= 4'd1 - MemDataIN[7:4];
								end
							else
								begin
									horCrono[3:0] <= 4'd3 - MemDataIN[3:0];
									horCrono[7:4] <= 4'd2 - MemDataIN[7:4];
								end
						end
						else
						begin
							horCrono[3:0] <= 4'd0;
							horCrono[3:0] <= 4'd0;
						end
						
						// End of Ajustes de timer
						8'd51 : actCrono <= MemDataIN[3];
						8'd49 : Cursor <= MemDataIN;
					
				endcase
	
			end
	end
	
	
	/*
		Parametros de punteros
	*/
	
	// Ubicación del punto (1,1)
	parameter FechaY1 = 130; 
	parameter HoraY1 = 288; 
	parameter IndicadoresY1 = 370;
	// Parametros en X
	parameter DDayX = 132;
	parameter UDayX = 174;
	parameter DMonthX = 232;
	parameter UMonthX = 274;
	parameter DYearX = 416;
	parameter UYearX = 458;
	parameter DRHourX = 38;
	parameter URHourX = 80;
	parameter DRMinuteX = 128;
	parameter URMinuteX = 170;
	parameter DRSecondX = 218;
	parameter URSecondX = 260;
	parameter DCHourX = 339;
	parameter UCHourX = 381;
	parameter DCMinuteX = 429;
	parameter UCMinuteX = 471;
	parameter DCSecondX = 519;
	parameter UCSecondX = 561;
	parameter ActivadoX = 338;
	parameter FinalizadoX = 500;
	// Ubicación del punto (1,H)
	parameter FechaY2 = 190; 
	parameter HoraY2 = 348; 
	parameter IndicadoresY2 = 388;
	
	/*
		Calculos por adelantado
	*/
	
	reg [18:0] AddrInterfaz;
	wire [5:0] RGBInterfaz;
	reg [14:0] AddrNumeros;
	wire [5:0] RGBNumeros;
	
	VROMswithBlue Memoryinput(.CLK(CLK),.AddrInterfaz(AddrInterfaz),
									.DataOutputInterfaz(RGBInterfaz),.AddrNumeros(AddrNumeros),
									.DataOutputNumeros(RGBNumeros),.RESET(RESET));
	
	
	// Para ir caminando un pixel adelante
	//reg [9:0] PosX_1;
	
	// Bloque combinacional para ubicar cosas
	always @*
		begin
			//PosX_1 = PosX + 10'd1;
			AddrInterfaz = PosX[9:0] + 18'd640 * PosY[9:0];
		end
	
	// Posiciones para puntero
	reg [9:0] newPointerX;
	reg [9:0] newPointerY;
	reg cursorON;
	// Numero a imprimir
	reg [3:0] MeM;
	// Para punteros
	reg [9:0] unoffPointerX, unoffPointerY, adjPointerY;
	
	
	always @(posedge CLK)
		begin
			// Reset sincrónico de toda la unidad de ubicación
			if(RESET)
				begin
					AddrNumeros <= 18'd0;
					newPointerX <= 10'd0;
					newPointerY <= 10'd0;
					OutRGB <= 6'd0;
					MeM <= 8'd0;
					cursorON <= 1'b0;
					unoffPointerX <= 10'd0;
					unoffPointerY <= 10'd0;
					adjPointerY <= 10'd0;
				end
			else
				begin
					// Ver si el pixel próximo es azul 17s 18m 19h 20d 21mt 22y 23s 24m 25h
					if(RGBInterfaz == 000001)
						begin
							// Eso quiere decir que hay puntero
							case(PosX)
								// Para las fechas
								UDayX[9:0]:
									begin
										if(PosY >= FechaY1[9:0] && PosY <= FechaY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd20;
											// Colocar direccion en Y para offset
											newPointerY <= FechaY1[9:0];
											// Dato en memoria
											MeM <= dayReloj[3:0];
										end
										else begin end
									end
								DDayX[9:0]:
									begin
										if(PosY >= FechaY1[9:0] && PosY <= FechaY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd20;
											// Colocar direccion en Y para offset
											newPointerY <= FechaY1[9:0];
											// Dato en memoria
											MeM <= dayReloj[7:4];
										end
										else begin end
									end
								UMonthX[9:0]:
									begin
										if(PosY >= FechaY1[9:0] && PosY <= FechaY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd21;
											// Colocar direccion en Y para offset
											newPointerY <= FechaY1[9:0];
											// Dato en memoria
											MeM <= monReloj[3:0];
										end
										else begin end
									end
								DMonthX[9:0]:
									begin
										if(PosY >= FechaY1[9:0] && PosY <= FechaY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd21;
											// Colocar direccion en Y para offset
											newPointerY <= FechaY1[9:0];
											// Dato en memoria
											MeM <= monReloj[7:4];
										end
										else begin end
									end
								UYearX[9:0]:
									begin
										if(PosY >= FechaY1[9:0] && PosY <= FechaY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd22;
											// Colocar direccion en Y para offset
											newPointerY <= FechaY1[9:0];
											// Dato en memoria
											MeM <= yearReloj[3:0];
										end
										else begin end
									end
								DYearX[9:0]:
									begin
										if(PosY >= FechaY1[9:0] && PosY <= FechaY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd22;
											// Colocar direccion en Y para offset
											newPointerY <= FechaY1[9:0];
											// Dato en memoria
											MeM <= yearReloj[7:4];
										end
										else begin end
									end
								// Para reloj
								URHourX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd19;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= horReloj[3:0];
										end
										else begin end
									end
								DRHourX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd19;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= horReloj[7:4];
										end
										else begin end
									end
								URMinuteX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd18;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= minReloj[3:0];
										end
										else begin end
									end
								DRMinuteX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd18;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= minReloj[7:4];
										end
										else begin end
									end
								URSecondX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd17;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= segReloj[3:0];
										end
										else begin end
									end
								DRSecondX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd17;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= segReloj[7:4];
										end
										else begin end
									end
								// Para cronometro
								UCHourX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd25;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= horCrono[3:0];
										end
										else begin end
									end
								DCHourX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd25;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= horCrono[7:4];
										end
										else begin end
									end
								UCMinuteX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd24;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= minCrono[3:0];
										end
										else begin end
									end
								DCMinuteX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd24;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= minCrono[7:4];
										end
										else begin end
									end
								UCSecondX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd23;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= segCrono[3:0];
										end
										else begin end
									end
								DCSecondX[9:0]:
									begin
										if(PosY >= HoraY1[9:0] && PosY <= HoraY2[9:0])
										begin
											// Colocar direccion en X para offset
											newPointerX <= PosX;
											// Encender cursor si se cumple
											cursorON <= Cursor == 8'd23;
											// Colocar direccion en Y para offset
											newPointerY <= HoraY1[9:0];
											// Dato en memoria
											MeM <= segCrono[7:4];
										end
										else begin end
									end
								// Indicadores
								ActivadoX[9:0]:
									begin
										if(PosY >= IndicadoresY1[9:0] && PosY <= IndicadoresY2[9:0])
										begin
											if(actCrono)
												begin
												// Pintar verde
												OutRGB <= 6'b001100;
												newPointerX <= 10'd0;
												newPointerY <= 10'd0;
												end
											else
												// Pintar rojo
												begin
												OutRGB <= 6'b110000;
												newPointerX <= 10'd0;
												newPointerY <= 10'd0;
												end
										end
										else begin end
									end
								// Indicadores
								FinalizadoX[9:0]:
									begin
										if(PosY >= IndicadoresY1[9:0] && PosY <= IndicadoresY2[9:0])
										begin
											if(ringCrono)
												begin
													// Pintar verde
													OutRGB <= 6'b001100;
													newPointerX <= 10'd0;
													newPointerY <= 10'd0;
												end	
											else
												begin
													// Pintar rojo
													OutRGB <= 6'b110000;
													newPointerX <= 10'd0;
													newPointerY <= 10'd0;
												end
										end
										else begin end
									end
								default: begin end
							endcase
						
						// Ya con las coordenadas, faltan los desplazamientos
						// Calcular los offset
						if(newPointerX != 0 && newPointerY != 0)
						begin
							unoffPointerX <= PosX - newPointerX;
							unoffPointerY <= PosY - newPointerY;
							// Ajustar la Y al numero deseado
							adjPointerY <= unoffPointerY + 10'd60 * MeM;
							// Ya ajustado, se pasa a la memoria
							AddrNumeros <= unoffPointerX + 15'd40 * adjPointerY;
							// Ya en la memoria, se obtienen el RGB
							if(cursorON == 1)
							begin
								if(unoffPointerY < 55)
									OutRGB <= RGBNumeros;
								else
									OutRGB <= 6'b000010;
							end
							else OutRGB <= RGBNumeros;
						end
						else begin end
						
						end
					else
						begin
							// Sino lo es 
							OutRGB <= RGBInterfaz;
							newPointerX <= 10'd0;
							newPointerY <= 10'd0;
							cursorON <= 1'b0;
						end
						
				end
		end
		
	
	
	
	

endmodule
