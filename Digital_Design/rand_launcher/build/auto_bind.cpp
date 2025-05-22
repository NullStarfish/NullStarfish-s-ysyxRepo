#include <nvboard.h>
#include "Vrand_launcher.h"

void nvboard_bind_all_pins(Vrand_launcher* top) {
	nvboard_bind_pin( &top->rst, 1, SW0);
	nvboard_bind_pin( &top->clk, 1, BTNR);
	nvboard_bind_pin( &top->o_seg1, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
	nvboard_bind_pin( &top->o_seg0, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
}
