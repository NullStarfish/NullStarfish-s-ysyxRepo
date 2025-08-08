#include "VtestV.h"
#include "verilated.h"
#include "svdpi.h"

// Note: No need to include "VtestV_Dpi.h" here.
// The DPI function implementation is separate from the main testbench driver.

// DPI function implementation
extern "C" int add(int a, int b) {
    return a + b;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VtestV* top = new VtestV;

    // The initial block in Verilog will run, call our 'add' function,
    // and then call $finish.
    while (!Verilated::gotFinish()) {
        top->eval();
    }

    delete top;
    return 0;
}