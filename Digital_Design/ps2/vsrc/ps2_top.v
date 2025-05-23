module ps2_top (
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output [7:0] o_seg0,
    output [7:0] o_seg1,
    output [7:0] o_seg2,
    output [7:0] o_seg3,
    output [7:0] o_seg4,
    output [7:0] o_seg5
);
    wire [7:0] num;
    wire [7:0] data /*verilator public*/;
    wire ready /*verilator public*/;
    wire nextdata_n;
    ps2_keyboard uut1 (
        .clk(clk),
        .clrn(~rst),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .data(data),
        .nextdata_n(nextdata_n),
        .ready(ready),
        .overflow()
    );

    wire key_pressed;
    wire [7:0] data_to_seg;
    wire [7:0] press_cnt;
    ps2_fsm fsm (
        .clk(clk),
        .rst_n(~rst),
        .data(data),
        .ready(ready),
        .nextdata_n(nextdata_n),
        .key_pressed(key_pressed),
        .data_to_seg(data_to_seg),
        .press_cnt(press_cnt)
    );


    seg_driver seg_uut0 (
        .num(data_to_seg),
        .en(key_pressed),
        .o_seg0(o_seg0),
        .o_seg1(o_seg1)
    );

    wire [7:0] ascii_code;
    ascii_rom ascii_uut (
        .ps2_code(data_to_seg),
        .ascii_code(ascii_code)
    );

    seg_driver seg_uut1 (
        .num(ascii_code),
        .en(key_pressed),
        .o_seg0(o_seg2),
        .o_seg1(o_seg3)
    );


    seg_driver seg_uut2 (
        .num(press_cnt),
        .en(1),
        .o_seg0(o_seg4),
        .o_seg1(o_seg5)
    );
endmodule