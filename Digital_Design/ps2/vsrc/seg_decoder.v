module seg_decoder (
    input [3:0] num,
    output reg [7:0] seg
);
    always @(*) begin
        case (num)
            4'b0000: seg = 8'b11111100; // 0
            4'b0001: seg = 8'b01100000; // 1
            4'b0010: seg = 8'b11011010; // 2
            4'b0011: seg = 8'b11110010; // 3
            4'b0100: seg = 8'b01100110; // 4
            4'b0101: seg = 8'b10110110; // 5
            4'b0110: seg = 8'b10111110; // 6
            4'b0111: seg = 8'b11100000; // 7
            4'b1000: seg = 8'b11111110; // 8
            4'b1001: seg = 8'b11110110; // 9
            4'b1010: seg = 8'b11101110; // A
            4'b1011: seg = 8'b00111110; // B
            4'b1100: seg = 8'b10011100; // C
            4'b1101: seg = 8'b01111010; // D
            4'b1110: seg = 8'b10011110; // E
            4'b1111: seg = 8'b10001110; // F
            default: seg = 8'b00000000; // Default case (off)
        endcase
    end
endmodule