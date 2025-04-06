module alutb;
reg [7:0] inputa, inputb;
reg [2:0] inputaluop; // ALU 的操作码
reg [7:0] k; // ALU 的预期输出
reg resultof, resultc, resultz; // ALU 的预期溢出，进位，零位
wire [7:0] outputs; // ALU 的输出
wire of, c, z; // ALU 的溢出标志和进位标志

// 实例化 ALU 模块
alu #(8) alu_uut (
    .A(inputa),         // 连接到输入 inputa
    .B(inputb),         // 连接到输入 inputb
    .Mode(inputaluop),  // 连接到操作码 inputaluop
    .Results(outputs),  // 连接到输出 outputs
    .Overflow(of),      // 连接到溢出标志 of
    .Carry(c),          // 连接到进位标志 c
    .zero(z)            // 连接到零标志 z
);

task check;  // 测试任务
  input [7:0] results;  // ALU 的结果预期正确输出
  input resultof, resultc, resultz;  // ALU 的预期溢出，进位，零位
  begin
    if(outputs != results)  // 比较预期结果和测试单元输出的 outputs
      begin
        $display("Error:x=%h,y=%h,ctrl=%b,s should be %h, get %h", inputa, inputb, inputaluop, results, outputs);
      end
    if (of != resultof || c != resultc || z != resultz) // 比较标志位
      begin
        $display("Error in flags: Overflow=%b, Carry=%b, Zero=%b (expected: Overflow=%b, Carry=%b, Zero=%b)",
                 of, c, z, resultof, resultc, resultz);
        $display("x=%b,y=%b,ctrl=%b,s should be %h, get %h", inputa, inputb, inputaluop, results, outputs);
      end
  end
endtask

task check2;  // 测试任务
  input [7:0] results;  // ALU 的结果预期正确输出  
  begin
    if(outputs != results)  // 比较预期结果和测试单元输出的 outputs
      begin
        $display("Error:x=%h,y=%h,ctrl=%b,s should be %h, get %h", inputa, inputb, inputaluop, results, outputs);
      end
  end
endtask

task check3;  // 测试任务
  input [7:0] results;  // ALU 的结果预期正确输出  
  input resultof, resultz;  
  begin
    if(outputs != results)  // 比较预期结果和测试单元输出的 outputs
      begin
        $display("Error:x=%h,y=%h,ctrl=%b,s should be %h, get %h", inputa, inputb, inputaluop, results, outputs);
      end
    if (of != resultof || z != resultz) // 比较标志位
      begin
        $display("Error in flags: Overflow=%b, Zero=%b (expected: Overflow=%b,  Zero=%b)",
                 of,  z, resultof, resultz);
        $display("x=%b,y=%b,ctrl=%b,s should be %h, get %h", inputa, inputb, inputaluop, results, outputs);
      end
  end
endtask

reg [8:0] tempresult;
initial begin
    integer i, j; // 定义循环变量
    for (i = -128; i <= 127; i = i + 1)
        for (j = -128; j <= 127; j = j + 1)
            begin
                inputa = i; // 设置输入 A
                inputb = j; // 设置输入 B

                // 测试加法操作 (Mode = 3'b000)
                inputaluop = 3'b000; // ALU 的操作码，表示加法
                k = inputa + inputb; // 预期的加法结果
                resultof = (inputa[7] == inputb[7]) && (inputa[7] != k[7]); // 溢出标志（补码规则）
                tempresult = inputa + inputb; // 计算加法结果
                resultc = (tempresult > 8'hFF); // 进位标志（无符号加法进位）
                resultz = (k == 8'b0); // 零标志
                #20 check(k[7:0], resultof, resultc, resultz); // 调用测试任务

                // 测试减法操作 (Mode = 3'b001)
                inputaluop = 3'b001; // ALU 的操作码，表示减法
                k = inputa - inputb; // 预期的减法结果
                resultof = (inputa[7] == inputb[7]) && (inputa[7] != k[7]); // 溢出标志（补码规则）
                resultz = (k == 8'b0); // 零标志
                #20 check3(k[7:0], resultof, resultz); // 调用测试任务

                // 测试按位取反操作 (Mode = 3'b010)
                inputaluop = 3'b010; // ALU 的操作码，表示按位取反
                k = ~inputa; // 预期结果
                resultof = 0; // 按位取反无溢出
                resultc = 0; // 按位取反无进位
                resultz = (k == 8'b0); // 零标志
                #20 check2(k[7:0]); // 调用测试任务

                // 测试按位与操作 (Mode = 3'b011)
                inputaluop = 3'b011; // ALU 的操作码，表示按位与
                k = inputa & inputb; // 预期结果
                resultof = 0; // 按位与无溢出
                resultc = 0; // 按位与无进位
                resultz = (k == 8'b0); // 零标志
                #20 check2(k[7:0]); // 调用测试任务

                // 测试按位或操作 (Mode = 3'b100)
                inputaluop = 3'b100; // ALU 的操作码，表示按位或
                k = inputa | inputb; // 预期结果
                resultof = 0; // 按位或无溢出
                resultc = 0; // 按位或无进位
                resultz = (k == 8'b0); // 零标志
                #20 check2(k[7:0]); // 调用测试任务

                // 测试按位异或操作 (Mode = 3'b101)
                inputaluop = 3'b101; // ALU 的操作码，表示按位异或
                k = inputa ^ inputb; // 预期结果
                resultof = 0; // 按位异或无溢出
                resultc = 0; // 按位异或无进位
                resultz = (k == 8'b0); // 零标志
                #20 check2(k[7:0]); // 调用测试任务
            end
    $finish; // 结束仿真
end

endmodule