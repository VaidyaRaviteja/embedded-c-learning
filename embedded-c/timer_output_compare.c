#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t counter = 0U;
    uint32_t compare_value = 500U;
    uint32_t auto_reload = 999U;

    // Simulate timer counting and output comparison
    while (counter <= auto_reload)
    {
        if (counter == compare_value)
        {
            printf("Output Compare Match at CNT = %lu\n",
                   (unsigned long)counter);
        }

        counter++;
    }

    return 0;
}
// Short explanation: Output Compare checks the timer counter (CNT) against a compare value (CCR). When they match, the timer generates a compare event. This is a software simulation, not a configured STM32 timer.

// Expected output:
// Output Compare Match at CNT = 500

