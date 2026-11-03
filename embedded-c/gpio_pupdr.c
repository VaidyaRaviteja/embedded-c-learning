#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t PUPDR = 0U;
    uint32_t pin = 5U;

    // Each GPIO pin uses 2 bits
    uint32_t position = pin * 2U;

    // Configure pin 5 as Pull-Up (01)
    PUPDR &= ~(3U << position);
    PUPDR |= (1U << position);

    printf("PUPDR: 0x%08lX\n",
           (unsigned long)PUPDR);

    // Read pin 5 configuration
    uint32_t mode = (PUPDR >> position) & 3U;

    switch (mode)
    {
        case 0U:
            printf("No Pull-Up / Pull-Down\n");
            break;

        case 1U:
            printf("Pull-Up Enabled\n");
            break;

        case 2U:
            printf("Pull-Down Enabled\n");
            break;

        case 3U:
            printf("Reserved Configuration\n");
            break;
    }

    return 0;
}

// GPIO Pull-Up/Pull-Down Register (PUPDR)
// The PUPDR register configures the internal pull-up and pull-down resistors of GPIO pins.

// Explanation
// Each GPIO pin uses two bits in PUPDR.
// Bits	Configuration
// 00	No Pull-Up / Pull-Down
// 01	Pull-Up
// 10	Pull-Down
// 11	Reserved

// For pin 5:
// - pin * 2U calculates bit position 10.
// - PUPDR &= ~(3U << position) clears both bits.
// - PUPDR |= (1U << position) enables Pull-Up.
// A pull-up resistor keeps an otherwise floating input at a HIGH level when nothing else drives it.

// Expected output:
// PUPDR: 0x00000400
// Pull-Up Enabled