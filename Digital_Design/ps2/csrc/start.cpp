#include <Vps2_top.h>
#include "verilated.h"
#include <nvboard.h>
#include <iostream>
void nvboard_bind_all_pins(Vps2_top* top);

void single_cycle(Vps2_top* top) {
    top->clk = 0; 
    top->eval();
    top->clk = 1; 
    top->eval();
}

int main() {
    Vps2_top* top = new Vps2_top;
    nvboard_bind_all_pins(top);
    nvboard_init();
    int validbuff = 0;
    int databuff = 0;
    while(!Verilated::gotFinish()) {
      single_cycle(top);
      top->eval();
      nvboard_update();
    }
    top->eval();
    delete top;
    return 0;
}