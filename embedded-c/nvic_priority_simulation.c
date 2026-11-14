#include <stdio.h>
#include <stdint.h>

volatile uint8_t uart_event = 0;
volatile uint8_t button_event = 0;

// Simulated interrupt handlers
void UART_IRQHandler(void)
{
    uart_event = 1;
}

void EXTI_IRQHandler(void)
{
    button_event = 1;
}

int main(void)
{
    // Simulated interrupt priority:
    // Lower numerical value means higher priority.
    uint8_t uart_priority = 2;
    uint8_t exti_priority = 1;

    // Simulate both interrupts occurring
    UART_IRQHandler();
    EXTI_IRQHandler();

    // Handle the higher-priority event first
    if (button_event && exti_priority < uart_priority)
    {
        printf("Button interrupt handled first\n");
        button_event = 0;
    }

    if (uart_event)
    {
        printf("UART interrupt handled\n");
        uart_event = 0;
    }

    return 0;
}


// Short explanation: NVIC manages interrupt priorities on STM32. A lower numerical priority value represents higher priority. This program only simulates the order. It does not configure the actual NVIC.

    