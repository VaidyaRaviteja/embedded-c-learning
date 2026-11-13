#include <stdio.h>
#include <stdint.h>

volatile uint32_t button_count = 0;

// Simulated interrupt service routine
void EXTI_IRQHandler(void)
{
    button_count++;
}

int main(void)
{
    // Simulate three button interrupts
    EXTI_IRQHandler();
    EXTI_IRQHandler();
    EXTI_IRQHandler();

    printf("Button events: %lu\n",
           (unsigned long)button_count);

    return 0;
}

// Short explanation: Each interrupt increments button_count. In real STM32 hardware, the EXTI interrupt handler is triggered by the configured GPIO edge. Here, we call it manually to simulate three events.

