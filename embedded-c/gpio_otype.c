#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t OTYPER = 0U;
    uint32_t pin = 5U;

    // Configure pin 5 as Open-Drain (1)
    OTYPER |= (1U << pin);

    printf("OTYPER: 0x%08lX\n", (unsigned long)OTYPER);

    // Read pin 5 output type
    uint32_t type = (OTYPER >> pin) & 1U;

    if (type == 0U)
    {
        printf("Pin 5: Push-Pull\n");
    }
    else
    {
        printf("Pin 5: Open-Drain\n");
    }

    // Configure pin 5 as Push-Pull (0)
    OTYPER &= ~(1U << pin);

    printf("After configuration: 0x%08lX\n",
           (unsigned long)OTYPER);

    return 0;
}

// Explanation
// Each GPIO pin uses one bit in OTYPER.
// Bit	Output type
// 0	Push-Pull
// 1	Open-Drain

// OTYPER |= (1U << pin) selects Open-Drain.
// OTYPER &= ~(1U << pin) selects Push-Pull.