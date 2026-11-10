#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t PUPDR = 0U;

    // PA5 uses bits 11:10 in PUPDR.
    // 00 = No pull, 01 = Pull-up
    // 10 = Pull-down, 11 = Reserved

    // Configure PA5 with pull-up
    PUPDR &= ~(3U << 10);
    PUPDR |=  (1U << 10);

    printf("Pull-up: 0x%08lX\n", (unsigned long)PUPDR);

    // Change PA5 to pull-down
    PUPDR &= ~(3U << 10);
    PUPDR |=  (2U << 10);

    printf("Pull-down: 0x%08lX\n", (unsigned long)PUPDR);

    return 0;
}

// Short explanation: PUPDR controls the internal pull-up and pull-down resistors for each GPIO pin. PA5 uses bits 11:10. This is a RAM simulation, not actual hardware configuration.

