#include <stdio.h>
#include <stdint.h>

#define GPIOA_CLK_ENABLE (1U << 0)
#define GPIOB_CLK_ENABLE (1U << 1)

// Enable the requested peripheral clock bits
void enable_clock(uint32_t *reg, uint32_t mask)
{
    *reg |= mask;
}

int main(void)
{
    uint32_t AHB1ENR = 0U;

    enable_clock(&AHB1ENR, GPIOA_CLK_ENABLE);
    enable_clock(&AHB1ENR, GPIOB_CLK_ENABLE);

    printf("AHB1ENR: 0x%08lX\n",
           (unsigned long)AHB1ENR);

    return 0;
}

// Short explanation: enable_clock() receives the register address and a bitmask. The pointer allows the function to modify the original register variable.

// Expected output:
// AHB1ENR: 0x00000003


// This is a RAM simulation, not actual RCC hardware configuration.
