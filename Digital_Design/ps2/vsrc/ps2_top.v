module ps2_top (
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output [7:0] o_seg0,
    output [7:0] o_seg1,
    output [7:0] o_seg2,
    output [7:0] o_seg3
);
    wire [7:0] num;
    wire [7:0] data /*verilator public*/;
    wire valid /*verilator public*/;

    ps2_keyboard uut1 (
        .clk(clk),
        .resetn(~rst),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .data(data),
        .valid(valid)
    );

    assign num = data;

    seg_driver seg_uut0 (
        .num(num),
        .en(valid),
        .o_seg0(o_seg0),
        .o_seg1(o_seg1)
    );

    wire [7:0] ascii_code;
    ascii_rom ascii_uut (
        .ps2_code(data),
        .ascii_code(ascii_code)
    );

    seg_driver seg_uut1 (
        .num(ascii_code),
        .en(valid),
        .o_seg0(o_seg2),
        .o_seg1(o_seg3)
    );
endmodule