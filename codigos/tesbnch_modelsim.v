`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:24:28 10/27/2016
// Design Name:   Empaquetado_total2
// Module Name:   C:/Users/User/Documents/Proy_3_grupo_7_II_2016/codigos/tesbnch_modelsim.v
// Project Name:  pico
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Empaquetado_total2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tesbnch_modelsim;

	// Inputs
	wire [9:0] PosX;
	wire [9:0] PosY;
	reg clk;
	reg reset;
	reg PS2_Clock;
	reg PS2_Data;
	reg irq;

	// Outputs
	wire [3:0] R;
	wire [3:0] G;
	wire [3:0] B;
	wire HSync;
	wire VSync;
	wire CS;
	wire AD;
	wire RD;
	wire WR;
	wire pwm_out;

	// Bidirs
	wire [7:0] datRTC;
	//memoria de registros
	reg [7:0] datoin;
	assign datRTC=(!CS&&WR&&!RD&&AD)?datoin:8'bz;
	reg [7:0] memoria[15:0];
	reg [3:0] ADD;
	//archivo
	integer id;
	// Instantiate the Unit Under Test (UUT)
	Empaquetado_total uut (
		.PosX(PosX), 
		.PosY(PosY), 
		.clk(clk), 
		.reset(reset), 
		.R(R), 
		.G(G), 
		.B(B), 
		.HSync(HSync), 
		.VSync(VSync), 
		.PS2_Clock(PS2_Clock), 
		.PS2_Data(PS2_Data), 
		.datRTC(datRTC), 
		.CS(CS), 
		.AD(AD), 
		.RD(RD), 
		.WR(WR), 
		.pwm_out(pwm_out), 
		.irq(irq)
	);
	initial forever #5 clk = !clk;
	initial begin
		// Initialize Inputs
		//id=$fopen("C:/Users/User/Documents/proy_2_grupo_7_II_2016/Simulations/testbech/resultados/pantallazo1.txt","w+");
		id=$fopen("pantallazo1.txt","w+");
		clk = 0;
		reset = 1;
		PS2_Clock = 0;
		PS2_Data = 0;
		irq = 0;
		#10 reset = 0;
		memoria[0]=0;
		memoria[1]=0;
		memoria[2]=0;
		memoria[3]=0;
		memoria[4]=0;
		memoria[5]=0;
		memoria[6]=0;
		memoria[7]=0;
		memoria[8]=0;
		memoria[9]=0;
		memoria[10]=0;
		memoria[11]=0;
		memoria[12]=0;
		memoria[13]=0;
		memoria[14]=0;
		memoria[15]=0;
		#8400000;
		memoria[0]=0;
		memoria[1]=1;
		memoria[2]=2;
		memoria[3]=3;
		memoria[4]=4;
		memoria[5]=5;
		memoria[6]=6;
		memoria[7]=7;
		memoria[8]=8;
		memoria[9]=9;
		memoria[10]=10;
		memoria[11]=11;
		memoria[12]=12;
		memoria[13]=13;
		memoria[14]=14;
		memoria[15]=15;
		$fclose(id);
		id=$fopen("pantallazo2.txt","w+");
		#8400000;
		$fclose(id);
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   
	always @ (CS or WR or AD or RD)
		begin
			//cambio del address
			if(!CS&&!WR&&!AD&&RD)
			begin
				case(datRTC)
				8'd33:ADD=4'd1;
				8'd34:ADD=4'd2;
				8'd35:ADD=4'd3;
				8'd36:ADD=4'd4;
				8'd37:ADD=4'd5;
				8'd38:ADD=4'd6;
				8'd49:ADD=4'd7;
				8'd50:ADD=4'd8;
				8'd51:ADD=4'd9;
				default: ADD = 0;
				endcase
			end
			else
			begin
				//dato salida
				if(!CS&&WR&&!RD&&AD) datoin = memoria[ADD];
				//escritura dato
				else if(!CS&&!WR&&RD&&AD) memoria[ADD]=datRTC;
				else begin end
			end
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
		$fwrite(id, "%H \n",B);
//		$fwrite(id, "\n");
	end
endmodule

