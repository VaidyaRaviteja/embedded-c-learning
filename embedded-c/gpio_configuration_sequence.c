#include <stdio.h>
#include <stdint.h>

#define GPIOA_CLOCK_ENABLE (1U << 0)

int main(void)
{
    uint32_t AHB1ENR = 0U;
    uint32_t MODER = 0U;

    // Step 1: Enable GPIOA clock
    AHB1ENR |= GPIOA_CLOCK_ENABLE;

    // Step 2: Configure PA5 as output (01)
    MODER &= ~(3U << 10);
    MODER |=  (1U << 10);

    printf("AHB1ENR: 0x%08lX\n", (unsigned long)AHB1ENR);
    printf("MODER:   0x%08lX\n", (unsigned long)MODER);

    return 0;
}

// Expected output:
// AHB1ENR: 0x00000001
// MODER:   0x00000400


// Here, we simulate the two basic steps: enable the GPIOA clock, then configure PA5 as output. MODER bits 11:10 are set to 01.

// Important: These are ordinary RAM variables, not actual STM32 hardware registers.