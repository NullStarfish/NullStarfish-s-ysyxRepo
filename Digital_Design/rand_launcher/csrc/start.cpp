#include <Vrand_launcher.h>
#include "verilated.h"
#include <nvboard.h>

void nvboard_bind_all_pins(Vrand_launcher* top);

int main() {
    Vrand_launcher* top = new Vrand_launcher;
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