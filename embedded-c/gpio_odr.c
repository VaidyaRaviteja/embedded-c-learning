#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ODR = 0U;

    // Set pin 5 HIGH (LED ON)
    ODR |= (1U << 5);
    printf("LED ON: ODR = 0x%08lX\n", (unsigned long)ODR);

    // Set pin 5 LOW (LED OFF)
    ODR &= ~(1U << 5);
    printf("LED OFF: ODR = 0x%08lX\n", (unsigned long)ODR);

    return 0;
}

// Short explanation
// ODR controls GPIO output states. Setting bit 5 makes the simulated pin HIGH; clearing bit 5 makes it LOW.

// This is a RAM simulation, not physical STM32 GPIO control.

