#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t AHB1ENR = 0U;

    // GPIOA clock is controlled by bit 0
    AHB1ENR |= (1U << 0);

    // Check whether GPIOA clock is enabled
    if ((AHB1ENR & (1U << 0)) != 0U)
    {
        printf("GPIOA Clock Enabled\n");
    }
    else
    {
        printf("GPIOA Clock Disabled\n");
    }

    return 0;
}

// Short explanation: AHB1ENR represents the RCC AHB1 peripheral clock enable register. Setting bit 0 enables the GPIOA clock on STM32F446. Without enabling the peripheral clock, GPIOA register access will not work as expected.

// This is a RAM simulation, not actual RCC configuration.

