#include <nvboard.h>
#include "Vtimer_top.h"

void nvboard_bind_all_pins(Vtimer_top* top) {
	nvboard_bind_pin( &top->rst, 1, SW0);
	nvboard_bind_pin( &top->pause, 1, SW1);
	nvboard_bind_pin( &top->out, 16, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
}
