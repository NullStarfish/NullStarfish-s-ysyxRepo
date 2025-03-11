#include <Vencoder.h>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <nvboard.h>

// 以下为伪代码

VerilatedContext* contextp = NULL;
Vencoder* top = NULL;
VerilatedVcdC* tfp = NULL;

void nvboard_bind_all_pins(Vencoder* top);

void step_and_dump_wave() {
    top->eval();
    tfp->dump(contextp->time());
    contextp->timeInc(1);
}

void sim_init() {
    contextp = new VerilatedContext; //初始化仿真环境
    top = new Vencoder; //初始化模块
    tfp = new VerilatedVcdC; //初始化VCD对象指针
    contextp->traceEverOn(true); //打开追踪功能
    top->trace(tfp, 0); //
    tfp->open("wave.vcd"); //设置输出的文件wave.vcd
}
void sim_exit() {
    tfp->close();
    delete top;
    delete tfp;
}
int main() {

    sim_init();
    nvboard_bind_all_pins(top);
    nvboard_init();
    printf("Starting test\n");
    //Test with enable = 0 (disabled)
    top->s = 0;
    top->x = 0b00000001; step_and_dump_wave();
    top->x = 0b00000010; step_and_dump_wave();
    top->x = 0b00000100; step_and_dump_wave();
    top->x = 0b00001000; step_and_dump_wave();
    top->x = 0b00010000; step_and_dump_wave();
    top->x = 0b00100000; step_and_dump_wave();
    top->x = 0b01000000; step_and_dump_wave();
    top->x = 0b10000000; step_and_dump_wave();

    // Test with enable = 1 (enabled) - Single bit tests
    top->s = 1;
    top->x = 0b00000001; step_and_dump_wave(); // Should encode to 000
    top->x = 0b00000010; step_and_dump_wave(); // Should encode to 001
    top->x = 0b00000100; step_and_dump_wave(); // Should encode to 010
    top->x = 0b00001000; step_and_dump_wave(); // Should encode to 011
    top->x = 0b00010000; step_and_dump_wave(); // Should encode to 100
    top->x = 0b00100000; step_and_dump_wave(); // Should encode to 101
    top->x = 0b01000000; step_and_dump_wave(); // Should encode to 110
    top->x = 0b10000000; step_and_dump_wave(); // Should encode to 111

    // Test with enable = 1 (enabled) - Multiple bits set, should encode highest priority (leftmost) 1
    top->x = 0b10000001; step_and_dump_wave(); // Should encode to 111 (priority 7)
    top->x = 0b01100000; step_and_dump_wave(); // Should encode to 110 (priority 6)
    top->x = 0b00111000; step_and_dump_wave(); // Should encode to 011 (priority 3)
    top->x = 0b11111111; step_and_dump_wave(); // Should encode to 111 (priority 7)
    top->x = 0b01010101; step_and_dump_wave(); // Should encode to 110 (priority 6)
    
    top->x = 0b00000000;
    top->eval();
    printf("Test done\n");
    while(!Verilated::gotFinish()) {
        top->eval();
        nvboard_update();
    }
    sim_exit();
    nvboard_quit();
    return 0;
}