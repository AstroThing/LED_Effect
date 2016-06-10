`timescale 1ns / 1ps

module gppm_top_test;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] sw;

	// Outputs
	wire [7:0] leds;

	// Instantiate the Unit Under Test (UUT)
	gppm_top uut (
		.clk(clk), 
		.reset(reset), 
		.sw(sw), 
		.leds(leds)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		sw = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#100
		reset = 0;
	end
	
	always
	begin
		#100
		clk = !clk;
	end
endmodule

