#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ODR = 0U;
    uint32_t pin = 5U;

    // SET: Turn ON pin 5
    ODR |= (1U << pin);
    printf("After SET:    0x%08lX\n", (unsigned long)ODR);

    // READ: Check pin 5
    printf("Pin 5: %s\n",
           (ODR & (1U << pin)) ? "HIGH" : "LOW");

    // TOGGLE: Change pin 5 state
    ODR ^= (1U << pin);
    printf("After TOGGLE: 0x%08lX\n", (unsigned long)ODR);

    // CLEAR: Turn OFF pin 5
    ODR &= ~(1U << pin);
    printf("After CLEAR:  0x%08lX\n", (unsigned long)ODR);

    return 0;
}

// Explanation
// - SET (|=): Makes the selected bit 1.
// - READ (&): Checks whether the selected bit is 1 or 0.
// - TOGGLE (^=): Flips the selected bit.
// - CLEAR (&= ~): Makes the selected bit 0.
// - pin = 5U: Selects bit 5.