#include <stdio.h>
#include <stdint.h>

volatile uint8_t interrupt_flag = 0;

// Simulated interrupt service routine (ISR)
void EXTI_IRQHandler(void)
{
    interrupt_flag = 1;
}

int main(void)
{
    // Simulate an external interrupt
    EXTI_IRQHandler();

    // Main loop checks the interrupt flag
    if (interrupt_flag)
    {
        printf("Interrupt event handled!\n");

        // Clear the flag after handling
        interrupt_flag = 0;
    }

    return 0;
}

// Short explanation: volatile tells the compiler that the flag can change unexpectedly, such as inside an ISR. The ISR sets the flag, and the main program handles the event. This is only a simulation, not a real STM32 interrupt.

