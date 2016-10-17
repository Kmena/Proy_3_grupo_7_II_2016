`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:50:36 10/17/2016
// Design Name:   deco_id
// Module Name:   C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/deco id/deco_id_tb.v
// Project Name:  VGA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: deco_id
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module deco_id_tb;

	// Inputs
	reg [7:0] id_port;

	// Outputs
	wire actRTC;
	wire actVGA;
	wire actTeclado;
	wire actsonido;
	wire [7:0] dir;
	
	reg clk;

	integer id;
	// Instantiate the Unit Under Test (UUT)
	deco_id uut (
		.id_port(id_port), 
		.actRTC(actRTC), 
		.actVGA(actVGA), 
		.actTeclado(actTeclado), 
		.actsonido(actsonido), 
		.dir(dir)
	);
	initial forever #5 clk=~clk;
	initial begin
		// Initialize Inputs
		id= $fopen("C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/deco id/id's.txt","w+");
		$fwrite(id,"id \t actRTC \t actVGA \t actTeclado \t actsonido \t direccion \n");
		id_port = 0;
		clk=0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   
	always @(posedge clk)
	begin
	if(id_port<128)
	begin
	$fwrite(id,id_port);
	$fwrite(id,"\t");
	$fwrite(id,actRTC);
	$fwrite(id,"\t");
	$fwrite(id,actVGA);
	$fwrite(id,"\t");
	$fwrite(id,actTeclado);
	$fwrite(id,"\t");
	$fwrite(id,actsonido);
	$fwrite(id,"\t");
	$fwrite(id,dir);
	$fwrite(id,"\n");
	id_port=id_port+1;
	end
	else
	begin
	$fclose(id);
	$finish;
	end
	end
endmodule

