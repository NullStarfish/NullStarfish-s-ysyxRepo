module shift_register #(parameter WIDTH = 8) 
(
    input In,
    input clk,
    input rst,
    output reg [WIDTH - 1:0] Q
);
    always @(posedge clk) begin
        if (rst)
            Q <= 0;
        else
            Q <= {In, Q[WIDTH - 1:1]};
    end
endmodule
    