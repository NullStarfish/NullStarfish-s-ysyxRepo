module AddAndSub #(
    parameter WIDTH = 32
)   (
    input [WIDTH - 1 : 0] A, // A 和 B 是补码
    input [WIDTH - 1 : 0] B,
    input Cin, // 1 表示减法，0 表示加法
    output Carry,
    output zero,
    output Overflow,
    output [WIDTH - 1 : 0] Result
);
    wire [WIDTH - 1 : 0] t_Cin;
    assign t_Cin = ({WIDTH{Cin}} ^ B) + Cin;
    assign {Carry, Result} = A + t_Cin;
    assign Overflow = (A[WIDTH - 1] == B[WIDTH - 1]) && (Result[WIDTH - 1] != A[WIDTH - 1]);
    assign zero = ~(|Result);
endmodule
