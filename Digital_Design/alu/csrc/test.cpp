#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valutb.h"

int main(int argc, char** argv) {
VerilatedContext* m_contextp = new VerilatedContext;
VerilatedVcdC* m_tracep = new VerilatedVcdC;
Valutb* m_duvp = new Valutb;

m_contextp->traceEverOn(true);
m_duvp->trace(m_tracep, 3);
m_tracep->open("cnt_ceil_wf.vcd");

while (!m_contextp->gotFinish()) {
m_duvp->eval();
m_tracep->dump(m_contextp->time());
m_contextp->timeInc(1);
}

m_tracep->close();
delete m_duvp;
return 0;
}