#include "interrupt_ID.h"
#include "address_map_arm.h"
#include "exceptions.h"

// Define the IRQ exception handler
void __attribute__((interrupt)) __cs3_isr_irq(){
	// Read the ICCIAR from the processor interface
	volatile int address = MPCORE_GIC_CPUIF + ICCIAR;
	volatile int int_ID = *((int *)address);
	
	if (int_ID == KEYS_IRQ)
		keys_ISR();
	else if(int_ID == AUDIO_IRQ)
		audio_ISR();
	else
		while (1);
	
	//clear the interrupt id from the GIC
	*((int *) (MPCORE_GIC_CPUIF + ICCEOIR)) = int_ID;
}

// Define the remaining exception handlers
void __attribute__((interrupt)) __cs3_reset(){
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_undef(){
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_swi(){
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_pabort(){
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_dabort(){
	while (1);
}

void __attribute__((interrupt)) __cs3_isr_fiq(){
	while (1);
}