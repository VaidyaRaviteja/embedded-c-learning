#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t timer_clock = 16000000U; // 16 MHz
    uint32_t prescaler = 1599U;
    uint32_t auto_reload = 9999U;

    // Counter frequency = 16 MHz / 1600 = 10 kHz
    uint32_t counter_frequency =
        timer_clock / (prescaler + 1U);

    // Update frequency = 10 kHz / 10000 = 1 Hz
    uint32_t update_frequency =
        counter_frequency / (auto_reload + 1U);

    printf("Counter frequency: %lu Hz\n",
           (unsigned long)counter_frequency);

    printf("Update frequency: %lu Hz\n",
           (unsigned long)update_frequency);

    return 0;
}

// Short explanation: PSC controls how fast the timer counts. ARR sets the count limit. With PSC = 1599 and ARR = 9999, this example produces one timer update event per second.

