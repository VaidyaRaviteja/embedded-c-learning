#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t AHB1ENR = 0U;

    // Enable GPIOA, GPIOB and GPIOC clocks
    AHB1ENR |= (1U << 0) | (1U << 1) | (1U << 2);

    printf("Before Disable: 0x%08lX\n",
           (unsigned long)AHB1ENR);

    // Disable GPIOB clock only
    AHB1ENR &= ~(1U << 1);

    printf("After Disable:  0x%08lX\n",
           (unsigned long)AHB1ENR);

    return 0;
}

// Short explanation: AHB1ENR &= ~(1U << 1) clears bit 1, disabling GPIOB's clock while keeping GPIOA and GPIOC enabled.

// Expected output:
// Before Disable: 0x00000007
// After Disable:  0x00000005


// This is a RAM simulation, not actual RCC hardware configuration.

