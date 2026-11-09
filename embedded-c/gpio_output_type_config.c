#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t OTYPER = 0U;

    // PA5: 0 = Push-pull, 1 = Open-drain

    // Configure PA5 as push-pull
    OTYPER &= ~(1U << 5);

    printf("Push-pull: 0x%08lX\n", (unsigned long)OTYPER);

    // Configure PA5 as open-drain
    OTYPER |= (1U << 5);

    printf("Open-drain: 0x%08lX\n", (unsigned long)OTYPER);

    return 0;
}

// Short explanation: OTYPER bit 5 selects PA5's output type. 0 means push-pull; 1 means open-drain. This is a RAM simulation, not actual hardware configuration.

