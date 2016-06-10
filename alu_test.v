`timescale 1ns / 1ps

module alu_test;

	// Inputs
	reg [31:0] op1;
	reg [31:0] op2;
	reg [2:0] operator;

	// Outputs
	wire [31:0] result;
	wire isZero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.op1(op1), 
		.op2(op2), 
		.operator(operator), 
		.result(result), 
		.isZero(isZero)
	);

	initial begin
		// Add stimulus here
		operator = 3'b001;
		op1 = 16;
		op2 = 16;
	end
      
endmodule

