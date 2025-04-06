module addandsub_tb;
    reg [7:0] inputa, inputb;
    reg Cin; // ALU 的操作码
    reg [7:0] k; // ALU 的预期输出
    reg resultof, resultc, resultz; // ALU 的预期溢出，进位，零位
    wire [7:0] outputs; // ALU 的输出
    wire of, c, z; // ALU 的溢出标志和进位标志

    // 实例化 ALU 模块
    AddAndSub #(8) alu_uut (
        .A(inputa),         // 连接到输入 inputa
        .B(inputb),         // 连接到输入 inputb
        .Cin(Cin),         // 连接到操作码 inputaluop
        .Result(outputs),  // 连接到输出 outputs
        .Overflow(of),      // 连接到溢出标志 of
        .Carry(c),          // 连接到进位标志 c
        .zero(z)            // 连接到零标志 z
    );
    initial begin
        #10 inputa = 8'b00000000; inputb = 8'b00000000; Cin = 1'b0;
        $display("x=%b,y=%b,ctrl=%b,s should be %h, get %h", inputa, inputb, Cin, 8'b00000000, outputs);
        #10 inputa = 8'b00000001; inputb = 8'b00000001; Cin = 1'b0;
        $display("x=%b,y=%b,ctrl=%b,s should be %h, get %h", inputa, inputb, Cin, 8'b00000010, outputs);
        #10 inputa = 8'b00000001; inputb = 8'b00000001; Cin = 1'b1;
        $display("x=%b,y=%b,ctrl=%b,s should be %h, get %h", inputa, inputb, Cin, 8'b00000000, outputs);
        #10 inputa = 8'b00000000; inputb = 8'b00000001; Cin = 1'b1;
        $display("x=%b,y=%b,ctrl=%b,s should be %h, get %h", inputa, inputb, Cin, 8'b11111111, outputs);
    end
endmodule