#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t AHB1ENR = 0U;

    // Create mask for GPIOA, GPIOB and GPIOC
    uint32_t gpio_mask = (1U << 0) |
                         (1U << 1) |
                         (1U << 2);

    // Enable all three GPIO clocks
    AHB1ENR |= gpio_mask;

    printf("AHB1ENR: 0x%08lX\n",
           (unsigned long)AHB1ENR);

    return 0;
}

// Short explanation: gpio_mask combines bits 0, 1 and 2. Using AHB1ENR |= gpio_mask enables all three GPIO clocks without changing other register bits.

// Expected output:
// AHB1ENR: 0x00000007


// This is a RAM simulation, not actual RCC hardware configuration.