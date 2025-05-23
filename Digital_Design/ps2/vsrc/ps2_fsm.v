module ps2_fsm (
    input clk,
    input [7:0] data,
    input ready,
    input rst_n,
    output reg nextdata_n,
    output reg key_pressed,
    output reg [7:0] data_to_seg,
    output reg [7:0] press_cnt
);

    parameter WAIT_FOR_READY = 0;
    parameter JUDGE_KEY = 1;

    reg [1:0] cur_state, next_state;
    reg [7:0] next_cnt;
    reg next_key_pressed;
    reg [7:0] next_data_to_seg;

    always @(posedge clk) begin
        if (rst_n == 0) begin
            cur_state <= WAIT_FOR_READY;
            press_cnt <= 0;
            key_pressed <= 0;
            data_to_seg <= 0;
        end else begin
            cur_state <= next_state;
            press_cnt <= next_cnt;
            key_pressed <= next_key_pressed;
            data_to_seg <= next_data_to_seg;
        end
    end

    always @(*) begin
        // 默认赋值
        next_state = cur_state;
        nextdata_n = 1;
        next_cnt = press_cnt;
        next_key_pressed = key_pressed;
        next_data_to_seg = data_to_seg;
        case (cur_state)
            WAIT_FOR_READY: begin
                if (ready) begin
                    nextdata_n = 0;
                    next_state = JUDGE_KEY;
                end
            end
            JUDGE_KEY: begin
                nextdata_n = 1;
                if (data != 8'hF0) begin
                    next_key_pressed = 1;
                    next_data_to_seg = data;
                end else begin
                    next_key_pressed = 0;
                    next_data_to_seg = 0;
                    next_cnt = press_cnt + 1;
                end
                next_state = WAIT_FOR_READY;
            end
        endcase
    end

endmodule



