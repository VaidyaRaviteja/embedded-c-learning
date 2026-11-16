#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t timer_clock = 16000000U; // 16 MHz
    uint32_t prescaler = 1599U;

    // Timer counter frequency = Timer clock / (PSC + 1)
    uint32_t counter_frequency = timer_clock / (prescaler + 1U);

    printf("Timer clock: %lu Hz\n", (unsigned long)timer_clock);
    printf("Prescaler: %lu\n", (unsigned long)prescaler);
    printf("Counter frequency: %lu Hz\n",
           (unsigned long)counter_frequency);

    return 0;
}

// Short explanation: The prescaler divides the timer input clock. Here, 16 MHz / (1599 + 1) = 10,000 Hz, so the timer counter increments 10,000 times per second.

// This is a software calculation. The 16 MHz clock is an example, not a claim about your STM32F446RE's current timer clock.

