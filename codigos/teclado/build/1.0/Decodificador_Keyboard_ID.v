/*
	Port_ID Decoder
	
	Project: III Digitales
	Designer: Luis Leon
	Developer: Luis Leon
	Start Date: 13-Oct-2016
	End Date: -- No yet --
	Description: This is the port id decoder for selecting the output of the controller
*/

module Port_ID_Decoder(
		input [7:0] Port_ID,
		input Read_Strobe,
		output reg[1:0] DataSelect
	);
	
	always @*
	begin
		if(Read_Strobe)
		begin
			case(Port_ID)
			8'h05: DataSelect = 2'd0;
			8'h06: DataSelect = 2'd1;
			8'h07: DataSelect = 2'd2;
			default: DataSelect = 2'd0;
			endcase
		end
		else DataSelect = 2'd0;
	end

endmodule