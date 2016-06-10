`timescale 1ns / 1ps
// Created by fizzim.pl version 5.10 on 2016:06:08 at 22:41:39 (www.fizzim.com)

module FSM (
  input wire clk,
  input wire reset,
  output reg [2:0] ra1,
  output reg [2:0] ra2,
  output wire rf_we,
  output reg [2:0] wa,
  output reg [31:0] imm,
  output reg [1:0] wd_sel,
  output reg [2:0] alu_op,
  output wire ld_we,
  output wire c_enable,
  output wire c_limit_we,
  output wire c_reset,
  input wire isZero,
  input wire limit_reached
);

  // state bits
  parameter 
  init_leds         = 8'b00010000, // extra=000 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  check_leds        = 8'b00000000, // extra=000 rf_we=0 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  init_counter      = 8'b00110000, // extra=001 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  init_led_limit    = 8'b01010000, // extra=010 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  init_shift_offset = 8'b01110000, // extra=011 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  set_counter       = 8'b00000110, // extra=000 rf_we=0 ld_we=0 c_reset=1 c_limit_we=1 c_enable=0 
  set_leds          = 8'b00001000, // extra=000 rf_we=0 ld_we=1 c_reset=0 c_limit_we=0 c_enable=0 
  shift_led         = 8'b10010000, // extra=100 rf_we=1 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  stop              = 8'b00100000, // extra=001 rf_we=0 ld_we=0 c_reset=0 c_limit_we=0 c_enable=0 
  waitCounter       = 8'b00000001; // extra=000 rf_we=0 ld_we=0 c_reset=0 c_limit_we=0 c_enable=1 

  reg [7:0] state;
  reg [7:0] nextstate;

  // comb always block
  always @* begin
    // Warning I2: Neither implied_loopback nor default_state_is_x attribute is set on state machine - defaulting to implied_loopback to avoid latches being inferred 
    nextstate = state; // default to hold value because implied_loopback is set
    case (state)
      init_leds        : begin
        begin
          nextstate = init_led_limit;
        end
      end
      check_leds       : begin
        // Warning P3: State check_leds has multiple exit transitions, and transition trans12 has no defined priority 
        if (!isZero) begin
          nextstate = shift_led;
        end
        else if (isZero) begin
          nextstate = stop;
        end
      end
      init_counter     : begin
        begin
          nextstate = init_shift_offset;
        end
      end
      init_led_limit   : begin
        begin
          nextstate = init_counter;
        end
      end
      init_shift_offset: begin
        begin
          nextstate = set_leds;
        end
      end
      set_counter      : begin
        begin
          nextstate = waitCounter;
        end
      end
      set_leds         : begin
        begin
          nextstate = set_counter;
        end
      end
      shift_led        : begin
        begin
          nextstate = set_leds;
        end
      end
      stop             : begin
        begin
          nextstate = stop;
        end
      end
      waitCounter      : begin
        // Warning P3: State waitCounter has multiple exit transitions, and transition trans3 has no defined priority 
        if (!limit_reached) begin
          nextstate = waitCounter;
        end
        else if (limit_reached) begin
          nextstate = check_leds;
        end
      end
    endcase
  end

  // Assign reg'd outputs to state bits
  assign c_enable = state[0];
  assign c_limit_we = state[1];
  assign c_reset = state[2];
  assign ld_we = state[3];
  assign rf_we = state[4];

  // sequential always block
  always @(posedge clk or posedge reset) begin
    if (reset)
      state <= init_leds;
    else
      state <= nextstate;
  end

  // datapath sequential always block
  always @(posedge clk or posedge reset) begin
    if (reset) begin
      // Warning R18: No reset value set for datapath output alu_op[2:0].   Assigning a reset value of 3'b000 based on value in reset state init_leds 
      alu_op[2:0] <= 3'b000;
      // Warning R18: No reset value set for datapath output imm[31:0].   Assigning a reset value of 32'h1 based on value in reset state init_leds 
      imm[31:0] <= 32'h1;
      // Warning R18: No reset value set for datapath output ra1[2:0].   Assigning a reset value of 3'b000 based on value in reset state init_leds 
      ra1[2:0] <= 3'b000;
      // Warning R18: No reset value set for datapath output ra2[2:0].   Assigning a reset value of 3'b000 based on value in reset state init_leds 
      ra2[2:0] <= 3'b000;
      // Warning R18: No reset value set for datapath output wa[2:0].   Assigning a reset value of 3'b000 based on value in reset state init_leds 
      wa[2:0] <= 3'b000;
      // Warning R18: No reset value set for datapath output wd_sel[1:0].   Assigning a reset value of 2'b00 based on value in reset state init_leds 
      wd_sel[1:0] <= 2'b00;
    end
    else begin
      alu_op[2:0] <= 3'b000; // default
      imm[31:0] <= 32'h0; // default
      ra1[2:0] <= 3'b000; // default
      ra2[2:0] <= 3'b000; // default
      wa[2:0] <= 3'b000; // default
      wd_sel[1:0] <= 2'b00; // default
      case (nextstate)
        init_leds        : begin
          imm[31:0] <= 32'h1;
        end
        check_leds       : begin
          alu_op[2:0] <= 3'b011;
          ra2[2:0] <= 3'b001;
        end
        init_counter     : begin
          imm[31:0] <= 32'h17D7840;
          wa[2:0] <= 3'b010;
        end
        init_led_limit   : begin
          imm[31:0] <= 32'h80;
          wa[2:0] <= 3'b001;
        end
        init_shift_offset: begin
          imm[31:0] <= 32'h1;
          wa[2:0] <= 3'b011;
        end
        set_counter      : begin
          ra1[2:0] <= 3'b010;
        end
        shift_led        : begin
          alu_op[2:0] <= 3'b100;
          ra2[2:0] <= 3'b011;
          wd_sel[1:0] <= 2'b10;
        end
      endcase
    end
  end

  // This code allows you to see state names in simulation
  `ifndef SYNTHESIS
  reg [135:0] statename;
  always @* begin
    case (state)
      init_leds        :
        statename = "init_leds";
      check_leds       :
        statename = "check_leds";
      init_counter     :
        statename = "init_counter";
      init_led_limit   :
        statename = "init_led_limit";
      init_shift_offset:
        statename = "init_shift_offset";
      set_counter      :
        statename = "set_counter";
      set_leds         :
        statename = "set_leds";
      shift_led        :
        statename = "shift_led";
      stop             :
        statename = "stop";
      waitCounter      :
        statename = "waitCounter";
      default          :
        statename = "XXXXXXXXXXXXXXXXX";
    endcase
  end
  `endif

endmodule
