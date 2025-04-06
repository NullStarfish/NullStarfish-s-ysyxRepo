module alu 
    #(parameter WIDTH = 8)   
    (
        input [WIDTH - 1 : 0] A,
        input [WIDTH - 1 : 0] B,
        input [2 : 0] Mode,
        output reg [WIDTH - 1 : 0] Results,
        output zero,
        output Overflow,
        output Carry
    );  

    reg AdderCtrl;
    wire [WIDTH - 1 : 0] AdderResult;

    always@(*) begin
        case(Mode) 
            3'b000: AdderCtrl = 0; // 加法
            3'b001: AdderCtrl = 1; // 减法
            3'b110: AdderCtrl = 1; // 比较
            default: AdderCtrl = 0;
        endcase
    end

    AddAndSub #(.WIDTH(WIDTH)) selAdder (
        .A(A), .B(B), .Cin(AdderCtrl), .Carry(Carry), .Overflow(Overflow),
        .Result(AdderResult), .zero(zero)
    );
    
    wire less;
    assign less = AdderResult[WIDTH - 1] ^ Overflow;
    wire equal;
    assign equal = zero;

    always@(*) begin
        case(Mode)
            3'b000, 3'b001: Results = AdderResult; // 加法或减法
            3'b010: Results = ~A;                 // 按位取反
            3'b011: Results = A & B;              // 按位与
            3'b100: Results = A | B;              // 按位或
            3'b101: Results = A ^ B;              // 按位异或
            3'b110: Results = { {WIDTH-1{1'b0}}, less }; // 比较
            3'b111: Results = { {WIDTH-1{1'b0}}, equal }; // 相等
        endcase
    end
endmodule
