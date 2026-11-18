#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t timer_clock = 16000000U; // 16 MHz
    uint32_t prescaler = 1599U;
    uint32_t auto_reload = 999U;

    // Calculate timer counter frequency
    uint32_t counter_frequency =
        timer_clock / (prescaler + 1U);

    // Calculate timer period in milliseconds
    uint32_t delay_ms =
        ((auto_reload + 1U) * 1000U) / counter_frequency;

    printf("Counter frequency: %lu Hz\n",
           (unsigned long)counter_frequency);

    printf("Timer delay: %lu ms\n",
           (unsigned long)delay_ms);

    return 0;
}

// Short explanation: PSC divides the timer clock to 10 kHz. ARR sets 1,000 counts, so one timer update period is 100 ms.

// Expected output:
// Counter frequency: 10000 Hz
// Timer delay: 100 ms

