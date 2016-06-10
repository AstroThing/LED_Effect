`timescale 1ns / 1ps

module reg_file_test;

	// Inputs
	reg clk;
	reg write_enabled;
	reg [2:0] ra1;
	reg [2:0] ra2;
	reg [2:0] wa;
	reg [31:0] wd;

	// Outputs
	wire [31:0] rd1;
	wire [31:0] rd2;

	// Instantiate the Unit Under Test (UUT)
	reg_file uut (
		.clk(clk), 
		.write_enabled(write_enabled), 
		.ra1(ra1), 
		.ra2(ra2), 
		.wa(wa), 
		.wd(wd), 
		.rd1(rd1), 
		.rd2(rd2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		write_enabled = 0;
		ra1 = 0;
		ra2 = 0;
		wa = 0;
		wd = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		write_enabled = 1;
		wa = 3'b000;
		wd = 32'b11111111;
		
		#100
		write_enabled = 0;
		#100
		ra2 = 3'b000;
	end
	
	always
	begin
		#100
		clk = !clk;
	end
      
endmodule

