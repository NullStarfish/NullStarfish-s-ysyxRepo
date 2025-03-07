#include <Vlight.h>
#include "verilated.h"
#include <nvboard.h>

// 以下为伪代码
VerilatedContext* contextp = NULL;
static Vlight* top = NULL;

void nvboard_bind_all_pins(Vlight* top);

void single_cycle() {
    top->clk = 0; 
    top->eval();
    top->clk = 1; 
    top->eval();
}

void reset(int n) {
    top->rst = 1;
    while (n-- > 0) 
        single_cycle();
    top->rst = 0;
}

void sim_init() {
    contextp = new VerilatedContext;
    top = new Vlight;
}

void sim_exit() {
    delete contextp;
}


int main() {
    sim_init();
    nvboard_bind_all_pins(top);
    nvboard_init();


    reset(10);  // 复位10个周期
    while(!Verilated::gotFinish()) {
        single_cycle();
        nvboard_update();
    }
    sim_exit();
    nvboard_quit();
    return 0;
}