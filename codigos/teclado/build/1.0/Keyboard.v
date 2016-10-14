/*
	TOP Keyboard
	
	Project: III Digitales
	Designer: Luis Leon
	Developer: Luis Leon
	Start Date: 13-Oct-2016
	End Date: -- No yet --
	Description: This is the top module of the Keyboard Controller.
*/
module Keyboard(
		input CLK, 
		input RESET,
		input [7:0] Port_ID,
		input Read_Strobe,
		output reg [7:0] Keyboard_Output,
		input PS2_Clock,
		input PS2_Data
	);
	
	// Instanciar receptor PS2 
	wire [15:0] KBBuffer;
	PS2Receiver PS2(
		.clk(CLK), .kclk(PS2_Clock), .kdata(PS2_Data), .keycodeout(KBBuffer)
	);
	
	// Decodificador de Port_ID
	wire [1:0] DataSelect;
	Port_ID_Decoder Decoder(
		.Port_ID(Port_ID),.Read_Strobe(Read_Strobe),.DataSelect(DataSelect)
	);
	
	// Control KB
	wire [7:0] Commit, Data, Address;
	ControlKB Control(
		.CLK(CLK),
		.RESET(RESET),
		.KBBuffer(KBBuffer),
		.Read_Strobe(Read_Strobe),
		.Address(Address), 
		.Data(Data),
		.Commit(Commit)
	);
	
	// Mux de salida
	always @*
	begin
		case(DataSelect)
			2'd0: Keyboard_Output = Address;
			2'd1: Keyboard_Output = Data;
			2'd2: Keyboard_Output = Commit;
			2'd3: Keyboard_Output = 8'd0;
			default: Keyboard_Output = 8'd0;
		endcase
	end

endmodule
