#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t MODER   = 0U;
    uint32_t OTYPER  = 0U;
    uint32_t OSPEEDR = 0U;
    uint32_t PUPDR   = 0U;
    uint32_t ODR     = 0U;

    uint32_t pin = 5U;
    uint32_t position = pin * 2U;

    // Configure pin 5 as output
    MODER &= ~(3U << position);
    MODER |=  (1U << position);

    // Configure Push-Pull output
    OTYPER &= ~(1U << pin);

    // Configure High Speed
    OSPEEDR &= ~(3U << position);
    OSPEEDR |=  (2U << position);

    // Disable Pull-Up / Pull-Down
    PUPDR &= ~(3U << position);

    // Set pin 5 HIGH
    ODR |= (1U << pin);

    printf("MODER:   0x%08lX\n", (unsigned long)MODER);
    printf("OTYPER:  0x%08lX\n", (unsigned long)OTYPER);
    printf("OSPEEDR: 0x%08lX\n", (unsigned long)OSPEEDR);
    printf("PUPDR:   0x%08lX\n", (unsigned long)PUPDR);
    printf("ODR:     0x%08lX\n", (unsigned long)ODR);

    return 0;
}

// Short explanation
// This configures simulated GPIO pin 5 as a high-speed, push-pull output with no pull-up or pull-down, then sets it HIGH.

// All registers here are ordinary RAM variables. This is not yet actual STM32 hardware configuration.
