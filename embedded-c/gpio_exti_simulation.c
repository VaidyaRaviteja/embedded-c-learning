#include <stdio.h>
#include <stdint.h>

volatile uint32_t button_event = 0;

// Simulated interrupt callback
void EXTI_Callback(void)
{
    button_event = 1;
}

int main(void)
{
    // Simulate a button interrupt
    EXTI_Callback();

    // Check whether an interrupt occurred
    if (button_event == 1)
    {
        printf("Button interrupt detected!\n");
        button_event = 0;
    }

    return 0;
}
// Short explanation: An external interrupt (EXTI) notifies the MCU when a GPIO pin detects a configured event. The callback simulates the interrupt here. No real hardware interrupt is configured.

