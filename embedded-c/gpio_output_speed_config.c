#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t OSPEEDR = 0U;

    // PA5 uses bits 11:10 in OSPEEDR.
    // 00 = Low, 01 = Medium, 10 = High, 11 = Very high.

    // Configure PA5 as high speed (10)
    OSPEEDR &= ~(3U << 10);
    OSPEEDR |=  (2U << 10);

    printf("OSPEEDR: 0x%08lX\n", (unsigned long)OSPEEDR);

    return 0;
}

// Short explanation: Each GPIO pin uses two OSPEEDR bits. For PA5, bits 11:10 are set to 10 for high speed. This is a RAM simulation, not actual STM32 hardware configuration.

