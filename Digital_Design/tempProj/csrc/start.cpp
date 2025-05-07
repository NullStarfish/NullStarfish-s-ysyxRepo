#include <Vfsm.h>
#include "verilated.h"
#include <iostream>
#include <stdio.h>
void single_cycle(Vfsm* top) {
    top->clk = 0; 
    top->eval();
    top->clk = 1; 
    top->eval();
}

int main() {
    Vfsm* top = new Vfsm;
    for (int i = 0; i < 12; i ++) {
      if (i < 6) {
        top->M = 0;
        single_cycle(top);
        printf("%d\n", top->state);
        //std::cout << top->state << std::endl;
      } else {
        top->M = 1;
        single_cycle(top);
        printf("%d\n", top->state);
        //std::cout << top->state << std::endl;
      }
    }
    delete top;
    return 0;
}