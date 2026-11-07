#include <stdio.h>
#include <stdint.h>

// Define GPIO clock bit positions
#define GPIOA_CLK_ENABLE  (1U << 0)
#define GPIOB_CLK_ENABLE  (1U << 1)
#define GPIOC_CLK_ENABLE  (1U << 2)

int main(void)
{
    uint32_t AHB1ENR = 0U;

    // Enable GPIOA, GPIOB and GPIOC clocks
    AHB1ENR |= GPIOA_CLK_ENABLE |
               GPIOB_CLK_ENABLE |
               GPIOC_CLK_ENABLE;

    printf("AHB1ENR: 0x%08lX\n",
           (unsigned long)AHB1ENR);

    return 0;
}

// Short explanation: Macros give meaningful names to bit positions. Instead of writing 1U << 0, we use GPIOA_CLK_ENABLE. This makes register configuration easier to understand.

// Expected output:
// AHB1ENR: 0x00000007