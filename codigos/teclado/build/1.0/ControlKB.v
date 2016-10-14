/*
	Port_ID Decoder
	
	Project: III Digitales
	Designer: Luis Leon
	Developer: Luis Leon
	Start Date: 13-Oct-2016
	End Date: -- No yet --
	Description: This is the port id decoder for selecting the output of the controller
*/

module ControlKB(
		input CLK,
		input RESET,
		input [15:0] KBBuffer,
		input Read_Strobe,
		output [7:0] Address, 
		output [7:0] Data,
		output [7:0] Commit
	);
	
	reg ReadyCommit;
	reg [7:0] AddressBuffer;
	reg [7:0] DataBuffer;
	
	
	always @(posedge CLK or posedge RESET)
	begin
		if(Read_Strobe)
			if(ReadyCommit)
				AddressBuffer <= 8'd0;
				DataBuffer <= 8'd0;
				ReadyCommit <= 1'd0;
			else begin end
		else
		begin
			// Comprobar teclado
		end
	end

endmodule