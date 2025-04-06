#include <Vtimer_top.h>
#include "verilated.h"
#include <nvboard.h>

void nvboard_bind_all_pins(Vtimer_top* top);

int main() {
    Vtimer_top* top = new Vtimer_top;
    nvboard_bind_all_pins(top);
    nvboard_init();
    top->clk = 0; 
    top -> rst = 1;
    top->eval();
    top->clk = 1; 
    top->eval();
    top -> rst = 0;
    top->clk = 0;
    top->eval();
    while(!Verilated::gotFinish()) {
        top->clk = 0;
        top->eval();
        nvboard_update();
        top->clk = 1;
        top->eval();
        nvboard_update();
    }
    top->eval();
    delete top;
    return 0;
}