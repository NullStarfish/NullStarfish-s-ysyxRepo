module ascii_rom (
    input wire [7:0] ps2_code,
    output reg [7:0] ascii_code
);

    always @(*) begin
        case (ps2_code)
            // Letters
            8'h1C: ascii_code = 8'h41;  // A
            8'h32: ascii_code = 8'h42;  // B
            8'h21: ascii_code = 8'h43;  // C
            8'h23: ascii_code = 8'h44;  // D
            8'h24: ascii_code = 8'h45;  // E
            8'h2B: ascii_code = 8'h46;  // F
            8'h34: ascii_code = 8'h47;  // G
            8'h33: ascii_code = 8'h48;  // H
            8'h43: ascii_code = 8'h49;  // I
            8'h3B: ascii_code = 8'h4A;  // J
            8'h42: ascii_code = 8'h4B;  // K
            8'h4B: ascii_code = 8'h4C;  // L
            8'h3A: ascii_code = 8'h4D;  // M
            8'h31: ascii_code = 8'h4E;  // N
            8'h44: ascii_code = 8'h4F;  // O
            8'h4D: ascii_code = 8'h50;  // P
            8'h15: ascii_code = 8'h51;  // Q
            8'h2D: ascii_code = 8'h52;  // R
            8'h1B: ascii_code = 8'h53;  // S
            8'h2C: ascii_code = 8'h54;  // T
            8'h3C: ascii_code = 8'h55;  // U
            8'h2A: ascii_code = 8'h56;  // V
            8'h1D: ascii_code = 8'h57;  // W
            8'h22: ascii_code = 8'h58;  // X
            8'h35: ascii_code = 8'h59;  // Y
            8'h1A: ascii_code = 8'h5A;  // Z

            // Numbers
            8'h45: ascii_code = 8'h30;  // 0
            8'h16: ascii_code = 8'h31;  // 1
            8'h1E: ascii_code = 8'h32;  // 2
            8'h26: ascii_code = 8'h33;  // 3
            8'h25: ascii_code = 8'h34;  // 4
            8'h2E: ascii_code = 8'h35;  // 5
            8'h36: ascii_code = 8'h36;  // 6
            8'h3D: ascii_code = 8'h37;  // 7
            8'h3E: ascii_code = 8'h38;  // 8
            8'h46: ascii_code = 8'h39;  // 9

            // Special characters
            8'h29: ascii_code = 8'h20;  // Space
            8'h5A: ascii_code = 8'h0D;  // Enter
            8'h66: ascii_code = 8'h08;  // Backspace

            // Default
            default: ascii_code = 8'h00;  // Null character for unknown codes
        endcase
    end

endmodule