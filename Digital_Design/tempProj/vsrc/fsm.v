module fsm (
    input M,
    input clk,
    output [2:0] state
);
    reg [2:0] cur_state = 0;
    reg [2:0] next_state = 0;

    always@(posedge clk) begin
        cur_state <= next_state;
    end

    always@(*) begin 
        case (cur_state)
            3'b100: next_state = M ? 3'b110 : 3'b101;
            3'b101: next_state = M ? 3'b100 : 3'b001;
            3'b001: next_state = M ? 3'b101 : 3'b011;
            3'b011: next_state = M ? 3'b001 : 3'b010;
            3'b010: next_state = M ? 3'b011 : 3'b110;
            3'b110: next_state = M ? 3'b010 : 3'b100;
            default: next_state = 3'b100;
        endcase
    end
    

    assign state = cur_state;

endmodule