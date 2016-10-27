/*
	Port_ID Decoder
	
	Project: III Digitales
	Designer: Luis Leon
	Developer: Luis Leon
	Start Date: 13-Oct-2016
	End Date: -- No yet --
	Description: This is the port id decoder for selecting the output of the controller
*/

/*
	Definicion de teclas
	F1: 05: Adj Date
	F2: 06: Adj Clock
	F3: 04: Adj Timer
	F11: 78: Timer Act
	F12: 07: Timer Off
	ESC: 76: Discard all
	
	Tab: 0D: Sweep Element
	Enter: 5A: Send Changes
	
	Numbers: 0-9: 45, 16, 1E, 26, 25, 2E, 36, 3D, 3E, 46
*/

/*
	Recordatorio de memoria:
	segReloj <= 0;
	minReloj <= 0;
	horReloj <= 0;
	yearReloj <= 0;
	monReloj <= 0;
	dayReloj <= 0; //6
	segCrono <= 0;
	minCrono <= 0;
	horCrono <= 0; //9
	ringCrono <= 0;
	actCrono <= 0;
	Cursor <= 0;
*/
module ControlKB(
		input CLK,
		input RESET,
		input [15:0] KBBuffer,
		input Read_Strobe,
		output [7:0] Address, 
		output [7:0] Data,
		output [7:0] Commit,
		input [1:0] DataSelect
	);
	
	// Parámetros
	localparam F1 = 8'h05;
	localparam F2 = 8'h06;
	localparam F3 = 8'h04;
	localparam F11 = 8'h78;
	localparam F12 = 8'h07;
	localparam Enter = 8'h5A;
	localparam Esc = 8'h76;
	localparam Tab = 8'h0D;
	localparam N0 = 8'h45;
	localparam N1 = 8'h16;
	localparam N2 = 8'h1E;
	localparam N3 = 8'h26;
	localparam N4 = 8'h25;
	localparam N5 = 8'h2E;
	localparam N6 = 8'h36;
	localparam N7 = 8'h3D;
	localparam N8 = 8'h3E;
	localparam N9 = 8'h46;
	
	reg ReadyCommit;
	reg [7:0] AddressBuffer;
	reg [7:0] DataBuffer;
	reg [15:0] KBBuffer_Before; // Save the keycode when is attempted
	reg Changing; // See changes in the Keycode
	reg [1:0] VirtualPos; // For Tabs
	
	always @(posedge CLK or posedge RESET)
	begin
		if(RESET)
		begin
			AddressBuffer <= 8'd0;
			DataBuffer <= 8'd0;
			ReadyCommit <= 1'd0;
			KBBuffer_Before <= 16'd0;
			Changing <= 1'd0;
			VirtualPos <= 2'd0;
		end
		else
		begin
			if(Read_Strobe)
				if(ReadyCommit && DataSelect == 2'b10)
				begin
					AddressBuffer <= 8'd20;
					DataBuffer <= 8'hF0;
					ReadyCommit <= 1'd0;
					KBBuffer_Before <= 16'd0;
					Changing <= 1'd0;
					VirtualPos <= 2'd0;
				end
				else begin end
			else begin end
			
				// Comprobar teclado - Detectar nueva tecla
				Changing <= KBBuffer != KBBuffer_Before;
				if(Changing)
				begin
					// Save changes 
					KBBuffer_Before <= KBBuffer;
					// Verificar si es KeyDown or KeyUp
					if(KBBuffer[15:8] != 8'hF0)
					begin
						// KeyDown
						case(KBBuffer[7:0])
							F1: begin 
								AddressBuffer <= 8'd22; // Brinca a año 6
								VirtualPos <= 2'd0;
							end
							F2: begin 
								AddressBuffer <= 8'd19; // Brinca a hora 3
								VirtualPos <= 2'd0;
							end
							F3: begin 
								AddressBuffer <= 8'd25; // Cronometro a hora 9
								VirtualPos <= 2'd0;
							end
							F11: begin
								// Cambiar timer
								AddressBuffer <= 8'd28;
								DataBuffer[7:0] <= 8'd8; // RECORDAR KEYLOR
								ReadyCommit <= 1'b1;
							end
							F12: begin
								// Desactivar el Ring
								AddressBuffer <= 8'd28;
								DataBuffer <= 8'd0;
								ReadyCommit <= 1'b1;
							end
							Enter: ReadyCommit <= 1'b1;
							Tab: begin
								// Select Cursors
								if(VirtualPos == 2'd2)
									begin
										VirtualPos <= 2'd0;
										AddressBuffer <= AddressBuffer + 8'd2;
									end
								else
									begin
										VirtualPos <= VirtualPos + 2'd1;
										AddressBuffer <= AddressBuffer - 8'd1;
									end
							end
							N0: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd0;
							end
							N1: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd1;
							end
							N2: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd2;
							end
							N3: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd3;
							end
							N4: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd4;
							end
							N5: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd5;
							end
							N6: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd6;
							end
							N7: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd7;
							end
							N8: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd8;
							end
							N9: begin
								DataBuffer[7:4] <= DataBuffer[3:0];
								DataBuffer[3:0] <= 4'd9;
							end
						endcase
						Changing <= 0;
					end
					else
					begin
						if(KBBuffer[7:0] == Esc)
						begin
							// Discard Changes
							AddressBuffer <= 8'd0;
							DataBuffer <= 8'd0;
							ReadyCommit <= 1'd0;
							KBBuffer_Before <= 16'd0;
							Changing <= 1'd0;
							VirtualPos <= 2'd0;
						end
					end
				end
			
		end
	end
	
	// Assignment
	assign Address = AddressBuffer;
	assign Data = DataBuffer;
	assign Commit = {7'd0, ReadyCommit};

endmodule