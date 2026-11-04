#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ODR = 0U;
    uint32_t BSRR = 0U;

    // Set pin 5 HIGH using BSRR lower 16 bits
    BSRR = (1U << 5);
    ODR |= BSRR & 0xFFFFU;

    printf("After SET:   ODR = 0x%08lX\n", (unsigned long)ODR);

    // Reset pin 5 using BSRR upper 16 bits
    BSRR = (1U << (5U + 16U));
    ODR &= ~(BSRR >> 16U);

    printf("After RESET: ODR = 0x%08lX\n", (unsigned long)ODR);

    return 0;
}

// Short explanation
// - BSRR lower 16 bits: set GPIO pins.
// - BSRR upper 16 bits: reset GPIO pins.
// - Bit 5 sets pin 5 HIGH.
// - Bit 21 resets pin 5 LOW.
// In STM32 hardware, writing to BSRR changes the output state without needing a read-modify-write operation on ODR. Here, we simulate that behavior using RAM variables.

// Expected output
// After SET:   ODR = 0x00000020
// After RESET: ODR = 0x00000000

