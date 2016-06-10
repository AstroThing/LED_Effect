`timescale 1ns / 1ps

module counter_test;

	// Inputs
	reg clk;
	reg [31:0] limit;
	reg limit_we;
	reg reset;
	reg enable;

	// Outputs
	wire limit_reached;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.limit(limit), 
		.limit_we(limit_we), 
		.reset(reset), 
		.enable(enable), 
		.limit_reached(limit_reached)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		limit = 0;
		limit_we = 0;
		reset = 0;
		enable = 0;

		#100
		limit = 1;
		limit_we = 1;
		reset = 1;
		enable = 1;
		
		#100
		reset = 0;
	end
	
	always
	begin
		#100
		clk = !clk;
	end
      
endmodule

