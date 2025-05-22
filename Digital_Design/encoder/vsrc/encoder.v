module encoder(
    input s,
    input wire [7:0] x,
    output reg yex,
    output reg [2:0] y,
    output [7:0] o_seg0
);
    always@(*) begin
        if(s) begin
            yex = 0;
            casez(x)
                8'b00000000: begin y = 3'b000; yex = 0; end
                8'b00000001: begin y = 3'b000; yex = 1; end
                8'b0000001?: begin y = 3'b001; yex = 1; end
                8'b000001??: begin y = 3'b010; yex = 1; end
                8'b00001???: begin y = 3'b011; yex = 1; end
                8'b0001????: begin y = 3'b100; yex = 1; end
                8'b001?????: begin y = 3'b101; yex = 1; end
                8'b01??????: begin y = 3'b110; yex = 1; end
                8'b1???????: begin y = 3'b111; yex = 1; end
                default: begin y = 3'b000; yex = 1; end
            endcase
        end
        else begin
            yex = 0;
            y = 3'b000;
        end
    end
    wire [7:0] seg0;
    seg_decoder seg_decoder0 (
        .num({1'b0, y}),
        .seg(seg0)
    );
    assign o_seg0 = yex ? ~seg0 : 8'b11111111;
endmodule