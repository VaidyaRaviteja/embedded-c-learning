#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t IDR = 0U;

    // Simulate pin 3 HIGH
    IDR |= (1U << 3);

    if ((IDR & (1U << 3)) != 0U)
    {
        printf("Pin 3 is HIGH\n");
    }
    else
    {
        printf("Pin 3 is LOW\n");
    }

    // Simulate pin 3 LOW
    IDR &= ~(1U << 3);

    if ((IDR & (1U << 3)) != 0U)
    {
        printf("Pin 3 is HIGH\n");
    }
    else
    {
        printf("Pin 3 is LOW\n");
    }

    return 0;
}
// Explanation
// - IDR represents the GPIO input data register.
// - IDR |= (1U << 3) simulates pin 3 becoming HIGH.
// - IDR & (1U << 3) checks the state of bit 3.
// - IDR &= ~(1U << 3) simulates pin 3 becoming LOW.


// This is a software simulation; it does not read a physical STM32 pin.