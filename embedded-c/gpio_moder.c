#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t MODER = 0U;

    uint32_t pin = 5U;

    // Each GPIO pin uses 2 bits in MODER
    uint32_t position = pin * 2U;

    // Configure pin 5 as Output (01)
    MODER &= ~(3U << position);
    MODER |=  (1U << position);

    printf("MODER: 0x%08lX\n", (unsigned long)MODER);

    // Read pin 5 configuration
    uint32_t mode = (MODER >> position) & 3U;

    printf("Pin 5 mode: ");

    switch (mode)
    {
        case 0U:
            printf("Input\n");
            break;

        case 1U:
            printf("Output\n");
            break;

        case 2U:
            printf("Alternate Function\n");
            break;

        case 3U:
            printf("Analog\n");
            break;
    }

    return 0;
}

// Explanation
// Each GPIO pin uses two bits in MODER.
// Bits	Mode
// 00	Input
// 01	Output
// 10	Alternate Function
// 11	Analog

// For pin 5:
// - pin * 2 calculates the starting bit position: 10.
// - 3U << position creates a two-bit mask.
// - MODER &= ~mask clears those two bits.
// - MODER |= (1U << position) sets them to 01 (Output).