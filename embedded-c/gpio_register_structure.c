#include <stdio.h>
#include <stdint.h>

typedef struct
{
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
} GPIO_Registers;

int main(void)
{
    GPIO_Registers gpio = {0};

    GPIO_Registers *GPIOA = &gpio;

    GPIOA->ODR |= (1U << 5);  // Set simulated pin 5

    printf("ODR: 0x%08lX\n", (unsigned long)GPIOA->ODR);

    return 0;
}

// Now let's connect your C pointer knowledge to the STM32F446RE.

// In STM32, GPIO peripherals have registers such as:
// - MODER — configures a pin's mode.
// - IDR — reads input pin states.
// - ODR — reads or writes output pin states.
// - BSRR — sets or resets output pins.
// For now, let's model these registers in normal RAM