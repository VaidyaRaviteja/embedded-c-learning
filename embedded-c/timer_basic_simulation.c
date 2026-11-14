#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t timer_count = 0U;
    uint32_t overflow_count = 0U;

    // Simulate a 16-bit timer counting from 0 to 65535
    for (uint32_t i = 0; i < 70000U; i++)
    {
        timer_count++;

        if (timer_count > 65535U)
        {
            timer_count = 0U;
            overflow_count++;
        }
    }

    printf("Timer count: %lu\n", (unsigned long)timer_count);
    printf("Overflow count: %lu\n", (unsigned long)overflow_count);

    return 0;
}

// Short explanation: A 16-bit timer counts from 0 to 65,535. After reaching its maximum value, it overflows and starts again from 0. This is a software simulation, not an STM32 hardware timer.

