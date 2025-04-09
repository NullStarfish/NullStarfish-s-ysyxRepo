module seg_driver (
    input [7:0] num,
    output [7:0] o_seg0,
    output [7:0] o_seg1,
);
    wire [7:0] seg0;
    wire [7:0] seg1;

    wire [3:0] num0;
    wire [3:0] num1;
    assign num0 = num[3:0];
    assign num1 = num[7:4];
    seg_decoder seg_decoder0 (
        .num(num0),
        .seg(seg0)
    );
    seg_decoder seg_decoder1 (
        .num(num1),
        .seg(seg1)
    );

    assign o_seg0 = ~seg0;
    assign o_seg1 = ~seg1;
endmodule