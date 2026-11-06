#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t AHB1ENR = 0U;

    // Enable GPIOA (bit 0)
    AHB1ENR |= (1U << 0);

    // Enable GPIOB (bit 1)
    AHB1ENR |= (1U << 1);

    // Enable GPIOC (bit 2)
    AHB1ENR |= (1U << 2);

    printf("AHB1ENR: 0x%08lX\n",
           (unsigned long)AHB1ENR);

    // Check enabled GPIO clocks
    printf("GPIOA: %s\n",
           (AHB1ENR & (1U << 0)) ? "Enabled" : "Disabled");

    printf("GPIOB: %s\n",
           (AHB1ENR & (1U << 1)) ? "Enabled" : "Disabled");

    printf("GPIOC: %s\n",
           (AHB1ENR & (1U << 2)) ? "Enabled" : "Disabled");

    return 0;
}

// Short explanation: Each GPIO peripheral has its own enable bit in AHB1ENR. Setting bits 0, 1 and 2 enables GPIOA, GPIOB and GPIOC respectively.

// Expected output:
// AHB1ENR: 0x00000007
// GPIOA: Enabled
// GPIOB: Enabled
// GPIOC: Enabled

// This is a RAM simulation, not actual RCC hardware configuration.

