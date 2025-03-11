module encoder(
    input s,
    input wire [7:0] x,
    output reg ys,
    output reg yex,
    output reg [2:0] y
);
    always@(*) begin
        if(s) begin
            ys = 1;
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
            ys = 0;
            yex = 0;
            y = 3'b000;
        end
    end
endmodule