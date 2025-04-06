module basic_timer #(parameter LIMIT = 99) (
    input clk,
    input rst_n,
    input en,
    output reg [32 - 1:0] timer
);
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            timer <= 32'b0;
        end else if (en) begin
            if (timer == LIMIT) begin
                timer <= 32'b0;
            end else begin
                timer <= timer + 1;
            end
        end else begin
            timer <= timer;
        end
    end
endmodule