#include <nvboard.h>
#include "Vencoder.h"

void nvboard_bind_all_pins(Vencoder* top) {
	nvboard_bind_pin( &top->x, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->y, 3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->yex, 1, LD15);
	nvboard_bind_pin( &top->s, 1, SW8);
	nvboard_bind_pin( &top->o_seg0, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
}
