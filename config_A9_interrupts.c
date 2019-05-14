#include "interrupt_ID.h"
#include "address_map_arm.h"
#include "config_A9_interrupts.h"

void config_audio(){
	volatile int * audio_base = (int*) AUDIO_BASE;
	
	//set the control bits to clear both write and read queue in the audio controller
	int control = 0b1100;
	*audio_base = control;
	
	//unset the control bits to clear and set the correct interrupt bit in the audio controller
	control = 0b0000;
	*audio_base = control;
}

void config_keys(){
	volatile int * key_base = (int*) KEY_BASE;
	
	//turn on interrupts for all the keys
	int interrupt_mask = 0b1111;
	*(key_base + 2) = interrupt_mask;
}

void set_A9_IRQ_stack(){
	register int stack __asm__ ("r2");
	register int mode __asm__ ("r3");
	
	stack = 0xFFFFFFFF - 7; //top of A9 on-chip memory, aligned to 8 bytes
	
	/* change processor to IRQ mode with interrupts disabled */
	mode = 0b11010010;
	__asm__("msr cpsr, %[ps]" : : [ps] "r" (mode));
	/* set banked stack pointer */
	__asm__("mov sp, %[ps]" : : [ps] "r" (stack));
	
	/* go back to SVC mode before executing subroutine return! */
	mode = 0b11010011;
	__asm__("msr cpsr, %[ps]" : : [ps] "r" (mode));
}

void enable_A9_interrupts(){
	volatile int status = 0b01010011;
	__asm__("msr cpsr, %[ps]" : : [ps] "r" (status));
}

void config_GIC(){	
	config_interrupt(KEYS_IRQ, 1);
	config_interrupt(AUDIO_IRQ, 1);

	// Set Interrupt Priority Mask Register (ICCPMR). Enable interrupts of all
	// priorities
	*((int *) MPCORE_GIC_CPUIF + ICCPMR) = 0xFFFF;
	
	// Set CPU Interface Control Register (ICCICR). Enable signaling of
	// interrupts
	*((int *) MPCORE_GIC_CPUIF + ICCICR) = 1;
	
	// Configure the Distributor Control Register (ICDDCR) to send pending
	// interrupts to CPUs
	*((int *) MPCORE_GIC_DIST + ICDDCR) = 1;
}

void config_interrupt(int N, int CPU_target){
	volatile int reg_offset, index, value, address;
	
	/* Configure the Interrupt Set-Enable Registers (ICDISERn).
	* reg_offset = (integer_div(N / 32) * 4
	* value = 1 << (N mod 32) */
	reg_offset = (N >> 3) & 0xFFFFFFFC;
	index = N & 0x1F;
	value = 0x1 << index;
	address = 0xFFFED100 + reg_offset;
	
	/* Now that we know the register address and value, set the appropriate bit */
	*(int *)address |= value;
	
	/* Configure the Interrupt Processor Targets Register (ICDIPTRn)
	* reg_offset = integer_div(N / 4) * 4
	* index = N mod 4 */
	
	reg_offset = (N & 0xFFFFFFFC);
	index = N & 0x3;
	address = 0xFFFED800 + reg_offset + index;
	/* Now that we know the register address and value, write to (only) the
	* appropriate byte */
	*(char *)address = (char)CPU_target;
}

