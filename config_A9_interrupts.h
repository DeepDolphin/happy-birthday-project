#ifndef config_A9_interrupts
#define config_A9_interrupts

void config_GIC();
void config_interrupt(int N, int CPU_target);
void set_A9_IRQ_stack();
void enable_A9_interrupts();
void config_audio();
void config_keys();

#endif