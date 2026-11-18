#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t pclk1 = 45000000U; // APB1 clock: 45 MHz
    uint32_t apb1_prescaler = 2U;

    uint32_t timer_clock;

    // STM32 timer clock rule:
    // APB prescaler = 1  -> Timer clock = PCLK
    // APB prescaler > 1  -> Timer clock = 2 x PCLK

    if (apb1_prescaler == 1U)
    {
        timer_clock = pclk1;
    }
    else
    {
        timer_clock = 2U * pclk1;
    }

    printf("APB1 clock: %lu Hz\n", (unsigned long)pclk1);
    printf("Timer clock: %lu Hz\n", (unsigned long)timer_clock);

    return 0;
}

// Expected output:
// APB1 clock: 45000000 Hz
// Timer clock: 90000000 Hz


// Short explanation: On STM32F446RE, when the APB1 prescaler is greater than 1, the APB1 timer clock is twice PCLK1. This example uses 45 MHz PCLK1, giving a 90 MHz timer clock. The values are illustrative, not your board's measured clock configuration.

