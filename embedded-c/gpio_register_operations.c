#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ODR = 0U;

    // Set bit 5: simulate turning ON an LED
    ODR |= (1U << 5);
    printf("LED ON:  ODR = 0x%08lX\n", (unsigned long)ODR);

    // Clear bit 5: simulate turning OFF an LED
    ODR &= ~(1U << 5);
    printf("LED OFF: ODR = 0x%08lX\n", (unsigned long)ODR);

    // Toggle bit 5
    ODR ^= (1U << 5);
    printf("LED TOGGLE: ODR = 0x%08lX\n", (unsigned long)ODR);

    return 0;
}

// Explanation
// - ODR represents a simulated GPIO output data register.
// - ODR |= (1U << 5) sets bit 5 to 1.
// - ODR &= ~(1U << 5) clears bit 5 to 0.
// - ODR ^= (1U << 5) toggles bit 5: 0 becomes 1, or 1 becomes 0.
// This is a RAM simulation, not actual control of your STM32 LED.