#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ODR = 0xFFU;
    uint32_t mask = (1U << 5);

    printf("Initial ODR: 0x%08lX\n", (unsigned long)ODR);

    // Set bit 5
    ODR |= mask;
    printf("After SET:   0x%08lX\n", (unsigned long)ODR);

    // Clear bit 5
    ODR &= ~mask;
    printf("After CLEAR: 0x%08lX\n", (unsigned long)ODR);

    // Toggle bit 5
    ODR ^= mask;
    printf("After TOGGLE: 0x%08lX\n", (unsigned long)ODR);

    return 0;
}

// Explanation
// - mask = (1U << 5) creates a mask with only bit 5 set.
// - ODR |= mask sets bit 5 without changing other bits.
// - ODR &= ~mask clears bit 5 without changing other bits.
// - ODR ^= mask toggles bit 5.

// Key point: A mask lets you modify a specific bit while preserving the other bits.
