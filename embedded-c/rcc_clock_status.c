#include <stdio.h>
#include <stdint.h>

#define GPIOA_CLK_ENABLE (1U << 0)
#define GPIOB_CLK_ENABLE (1U << 1)

int main(void)
{
    uint32_t AHB1ENR = 0U;

    // Enable GPIOA and GPIOB clocks
    AHB1ENR |= GPIOA_CLK_ENABLE | GPIOB_CLK_ENABLE;

    // Check GPIOA clock status
    if (AHB1ENR & GPIOA_CLK_ENABLE)
        printf("GPIOA Clock: ENABLED\n");
    else
        printf("GPIOA Clock: DISABLED\n");

    // Check GPIOB clock status
    if (AHB1ENR & GPIOB_CLK_ENABLE)
        printf("GPIOB Clock: ENABLED\n");
    else
        printf("GPIOB Clock: DISABLED\n");

    return 0;
}

// Short explanation: The & operator checks whether a particular clock-enable bit is set. A non-zero result means the clock is enabled.

// Expected output:
// GPIOA Clock: ENABLED
// GPIOB Clock: ENABLED


// This is a RAM simulation, not actual RCC hardware access.

