module timer_top (
    input clk,
    input rst,
    input pause,
    output reg [15:0] out
);
    wire clk_1Hz;
    clk_div #(.freq(10)) clk_div_inst (
        .clk(clk),
        .en(~pause),
        .rst_n(~rst),
        .clk_out(clk_1Hz)
    );
    wire [31:0] timer;
    basic_timer #(.LIMIT(99)) cnt_to_99 (
        .clk(clk_1Hz),
        .rst_n(~rst),
        .en(~pause),
        .timer(timer)
    );
    seg_driver seg_driver_inst (
        .num(timer),
        .o_seg0(out[7:0]),
        .o_seg1(out[15:8])
    );
    
endmodule