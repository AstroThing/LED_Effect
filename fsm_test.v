`timescale 1ns / 1ps

module fsm_test;

	// Inputs
	reg clk;
	reg reset;
	reg isZero;
	reg limit_reached;

	// Outputs
	wire [2:0] ra1;
	wire [2:0] ra2;
	wire rf_we;
	wire [2:0] wa;
	wire [31:0] imm;
	wire [1:0] wd_sel;
	wire [2:0] alu_op;
	wire ld_we;
	wire c_enable;
	wire c_limit_we;
	wire c_reset;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.clk(clk), 
		.reset(reset), 
		.ra1(ra1), 
		.ra2(ra2), 
		.rf_we(rf_we), 
		.wa(wa), 
		.imm(imm), 
		.wd_sel(wd_sel), 
		.alu_op(alu_op), 
		.ld_we(ld_we), 
		.c_enable(c_enable), 
		.c_limit_we(c_limit_we), 
		.c_reset(c_reset), 
		.isZero(isZero), 
		.limit_reached(limit_reached)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		isZero = 0;
		limit_reached = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#100
		reset = 0;
		#2000
		#100
		limit_reached = 1;
		isZero = 1;
		#100
		limit_reached = 0;

	end
	
	always
	begin
		#100
		clk = !clk;
	end
      
endmodule

