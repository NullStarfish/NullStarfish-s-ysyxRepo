module clk_div #(parameter freq) (
    input clk,
    input en,
    input rst_n,
    output reg clk_out
);
    reg [31:0] count;
    parameter DIV = 50000000 / freq; // 计算分频系数
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            count <= 0;
            clk_out <= 0;
        end else if (en) begin
            if (count == DIV / 2 - 1) begin
                count <= 0;
                clk_out <= ~clk_out;
            end else begin
                count <= count + 1;
            end
        end else begin
            count <= count;
            clk_out <= clk_out;
        end
    end
endmodule