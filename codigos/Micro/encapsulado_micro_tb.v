`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:54:59 10/22/2016
// Design Name:   encapsulado_micro
// Module Name:   C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/Micro/encapsulado_micro_tb.v
// Project Name:  pico
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encapsulado_micro
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module encapsulado_micro_tb;

	// Inputs
	reg [7:0] in_portRTC;
	reg [7:0] in_portteclado;
	reg [7:0] in_portVGA;
	reg clk;
	reg kcpsm6_reset;

	// Outputs
	wire [7:0] out_port;
	wire writestrobe;
	wire read_strobe;
	wire actRTC;
	wire actVGA;
	wire actTeclado;
	wire actsonido;
	wire [7:0] dir;


	integer id;
	
	// Instantiate the Unit Under Test (UUT)
	encapsulado_micro uut (
		.out_port(out_port), 
		.in_portRTC(in_portRTC), 
		.in_portteclado(in_portteclado), 
		.in_portVGA(in_portVGA), 
		.writestrobe(writestrobe), 
		.read_strobe(read_strobe), 
		.clk(clk), 
		.kcpsm6_reset(kcpsm6_reset), 
		.actRTC(actRTC), 
		.actVGA(actVGA), 
		.actTeclado(actTeclado), 
		.actsonido(actsonido), 
		.dir(dir)
	);
	initial forever #5 clk=~clk; 
	initial begin
		// Initialize Inputs
		id=$fopen("C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/Micro/micro.txt","w+");
		$fwrite(id,"dato \t dir \t RTC \t VGA \t Tec \t son \t w \t r \n");
		in_portRTC = 8'b1;
		in_portteclado = 8'b1;
		in_portVGA = 8'b1;
		clk = 0;
		kcpsm6_reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
	end
        
		// Add stimulus here
		always @(posedge read_strobe or posedge writestrobe /*or posedge actTeclado or posedge actsonido*/)
	begin
		$fwrite(id,"%d \t %d \t %b \t %b \t %b \t %b \t %b \t %b \n",out_port, dir ,actRTC,actVGA,actTeclado,actsonido,writestrobe,read_strobe);
		if(actsonido ==1)
		begin
			$fclose(id);
			$finish;
		end
		else begin end
	end
      
endmodule
/*	initial forever #5 clk=~clk; 
	initial begin
		id=$fopen("C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/Micro/micro.txt","w+");
		$fwrite(id,"dir \t RTC \t VGA \t Tec \t son \t w \t r \n");
		// Initialize Inputs
		in_port = 1;
		interrupt_ack = 0;
		clk = 0;
		kcpsm6_reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   
	always @(posedge writestrobe or read_strobe)
	begin
		$fwrite(id,"%d \t %b \t %b \t %b \t %b \t %b \t %b \n", dir ,actRTC,actVGA,actTeclado,actsonido,writestrobe,read_strobe);
		if(actVGA ==1 && dir == 8'd11)
		begin
			$fclose(id);
			$finish;
		end
		else begin end
	end*/

