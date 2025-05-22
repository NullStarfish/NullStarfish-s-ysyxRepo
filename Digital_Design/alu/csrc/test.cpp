#include <Valu.h>
#include "verilated.h"
#include <nvboard.h>
#include <iostream>
void nvboard_bind_all_pins(Valu* top);

int main() {
    Valu* top = new Valu;
    nvboard_bind_all_pins(top);
    nvboard_init();
    while(!Verilated::gotFinish()) {
      top->eval();
      nvboard_update();
    }
    top->eval();
    delete top;
    return 0;
}