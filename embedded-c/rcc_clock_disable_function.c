#include <stdio.h>
#include <stdint.h>

#define GPIOA_CLK_ENABLE (1U << 0)
#define GPIOB_CLK_ENABLE (1U << 1)

// Disable the requested peripheral clock bits
void disable_clock(uint32_t *reg, uint32_t mask)
{
    *reg &= ~mask;
}

int main(void)
{
    uint32_t AHB1ENR = 0U;

    // Enable GPIOA and GPIOB clocks
    AHB1ENR |= GPIOA_CLK_ENABLE | GPIOB_CLK_ENABLE;

    printf("Before: 0x%08lX\n", (unsigned long)AHB1ENR);

    // Disable GPIOB clock
    disable_clock(&AHB1ENR, GPIOB_CLK_ENABLE);

    printf("After:  0x%08lX\n", (unsigned long)AHB1ENR);

    return 0;
}

// Short explanation: disable_clock() receives the register address and mask. *reg &= ~mask clears the selected bit without changing other bits.

// Expected output:
// Before: 0x00000003
// After:  0x00000001


// This is a RAM simulation, not actual RCC hardware configuration.
