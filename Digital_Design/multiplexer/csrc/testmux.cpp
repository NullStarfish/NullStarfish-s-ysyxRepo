#include <Vmux.h>
#include "verilated.h"
#include "minunit.h"
#include <nvboard.h>
VerilatedContext* contextp = NULL;
static Vmux* top = NULL;
void nvboard_bind_all_pins(Vmux* top);

void sim_init() {
    contextp = new VerilatedContext;
    top = new Vmux;
}

void sim_exit() {
    delete contextp;
    delete top;
}

char* testmux() {
    sim_init();
    top->eval();
    for (int x0 = 0; x0 <= 0b11; x0 ++) {
        for (int x1 = 0; x1 <= 0b11; x1 ++) {
            for (int x2 = 0; x2 <= 0b11; x2 ++) {
                for (int x3 = 0; x3 <= 0b11; x3 ++) {
                    for (int addr = 0; addr <= 0b11; addr ++) {
                        top->x0 = x0;
                        top->x1 = x1;
                        top->x2 = x2;
                        top->x3 = x3;
                        top->s = addr;
                        int expected = 0;
                        if (addr == 0) {
                            expected = x0;
                        } else if (addr == 1) {
                            expected = x1;
                        } else if (addr == 2) {
                            expected = x2;
                        } else if (addr == 3) {
                            expected = x3;
                        }
                        top->eval();
                        printf("x0=%d, x1=%d, x2=%d, x3=%d, s=%d, y=%d\n", x0, x1, x2, x3, addr, expected);
                        mu_assert(top->y == expected, "mux failed");
                    }
                }
            }
        }
    }
    sim_exit();
    return NULL;
}


int main() {
    Vmux* top = new Vmux;
    nvboard_bind_all_pins(top);
    nvboard_init();
    //testmux();
    while (!Verilated::gotFinish()) {
        top->eval();
        nvboard_update();
    }
    return 0;
}