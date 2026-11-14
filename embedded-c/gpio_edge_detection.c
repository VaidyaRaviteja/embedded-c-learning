#include <stdio.h>
#include <stdint.h>

volatile uint8_t button_state = 0;
volatile uint32_t rising_count = 0;
volatile uint32_t falling_count = 0;

// Simulated GPIO interrupt handler
void EXTI_IRQHandler(uint8_t new_state)
{
    if (new_state == 1 && button_state == 0)
    {
        rising_count++;
        printf("Rising edge detected\n");
    }
    else if (new_state == 0 && button_state == 1)
    {
        falling_count++;
        printf("Falling edge detected\n");
    }

    button_state = new_state;
}

int main(void)
{
    // Simulate button transitions: LOW -> HIGH -> LOW
    EXTI_IRQHandler(1);
    EXTI_IRQHandler(0);
    EXTI_IRQHandler(1);

    printf("Rising edges: %lu\n", (unsigned long)rising_count);
    printf("Falling edges: %lu\n", (unsigned long)falling_count);

    return 0;
}

// Short explanation: A rising edge is LOW to HIGH. A falling edge is HIGH to LOW. This simulation detects both transitions. A real STM32 EXTI handler gets the event from hardware, not through a function argument.
