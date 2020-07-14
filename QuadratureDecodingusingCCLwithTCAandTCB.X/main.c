#include "atmel_start.h"
#include "main.h"

// To read counter value from TCA0
#define COUNTER_VALUE (TCA0.SINGLE.CNT)

// To read the value of the direction signal from the CCL LUT0 OUT pin
#define DIRECTION_BIT ((VPORTA.IN & PIN4_bm) >> PIN4_bp)

static volatile uint16_t corrected_counter_value = 0;
static volatile uint16_t sample_delay_counter    = 0;

// External interrupt on direction change
ISR(PORTA_PORT_vect)
{
	VPORTA.INTFLAGS = 0xFF; // Clear interrupt flags

	// Check direction signal
	if (VPORTA.IN & PIN4_bm) {
		// Set count direction up
		TCA0.SINGLE.CTRLECLR = TCA_SINGLE_DIR_DOWN_gc;
	} else {
		// Set count direction down
		TCA0.SINGLE.CTRLESET = TCA_SINGLE_DIR_DOWN_gc;
	}
}

int main(void)
{
	// Initializes MCU, drivers and middleware
	atmel_start_init();

	// Enable External Interrupt for the direction signal on PA4
	PORTA.PIN4CTRL |= PORT_ISC_BOTHEDGES_gc;

	// Start here to further develop your application
	while (1) {

		// Simple loop to illustrate position decoding
		if (sample_delay_counter > 20000) {

			// Map counter value and direction bit to physical position
			corrected_counter_value = COUNTER_VALUE - DIRECTION_BIT;
			sample_delay_counter    = 0;
		}
		sample_delay_counter++;
	}
}
