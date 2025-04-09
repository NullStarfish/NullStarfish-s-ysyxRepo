module rand_launcher (
    input clk,
    input rst,
    output [7:0] o_seg0,
    output [7:0] o_seg1,
);
    reg In;
    wire [7:0] num;

    always@(posedge clk) begin
        if (rst) begin
            In <= 0;
        end else begin
            if (num == 8'b0) begin
                In <= 1;
            end
            else begin
                In <= num[0] ^ num[2] ^ num[3] ^ num[4];
            end
        end
    end

    shift_register #(8) shift_reg (
        .In(In),
        .clk(clk),
        .rst(rst),
        .Q(num)
    );
    seg_driver seg_driver (
        .num(num),
        .o_seg0(o_seg0),
        .o_seg1(o_seg1)
    );
endmodule