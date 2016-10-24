`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:51:33 10/23/2016 
// Design Name: 
// Module Name:    FlipFlopRS 
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
module FlipFlopRS(S,R,Q);
	input S,R;
	output Q;
	reg Q;
	
	always @ (posedge S or negedge R)
	begin
		if(S==1'b1)
			Q<=1'b1;
		else
		begin
			if(R==1'b0)
				Q<=1'b0;
			else begin end
		end
	end


endmodule
