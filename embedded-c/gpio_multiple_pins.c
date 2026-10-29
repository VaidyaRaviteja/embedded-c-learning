#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ODR = 0U;

    // Set pins 5 and 6 HIGH
    ODR |= (1U << 5) | (1U << 6);

    printf("Both pins ON:  0x%08lX\n", (unsigned long)ODR);

    // Check whether both pins are HIGH
    if ((ODR & ((1U << 5) | (1U << 6))) ==
                 ((1U << 5) | (1U << 6)))
    {
        printf("Both pins are HIGH\n");
    }

    // Clear pin 5 only
    ODR &= ~(1U << 5);

    printf("After clearing pin 5: 0x%08lX\n",
           (unsigned long)ODR);

    return 0;
}

// Explanation
// - (1U << 5) | (1U << 6) creates a mask for pins 5 and 6.
// - ODR |= mask sets both bits.
// - ODR & mask checks their states.
// - ODR &= ~(1U << 5) clears pin 5 without changing pin 6.
