#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t OSPEEDR = 0U;
    uint32_t pin = 5U;

    // Each GPIO pin uses 2 bits
    uint32_t position = pin * 2U;

    // Configure pin 5 as High Speed (10)
    OSPEEDR &= ~(3U << position);
    OSPEEDR |=  (2U << position);

    printf("OSPEEDR: 0x%08lX\n",
           (unsigned long)OSPEEDR);

    // Read pin 5 speed configuration
    uint32_t speed = (OSPEEDR >> position) & 3U;

    switch (speed)
    {
        case 0U:
            printf("Low Speed\n");
            break;

        case 1U:
            printf("Medium Speed\n");
            break;

        case 2U:
            printf("High Speed\n");
            break;

        case 3U:
            printf("Very High Speed\n");
            break;
    }

    return 0;
}

// Explanation
// Each GPIO pin uses two bits in OSPEEDR.
// Bits	Speed
// 00	Low
// 01	Medium
// 10	High
// 11	Very High

// For pin 5:
// - pin * 2U calculates bit position 10.
// - 3U << position creates a two-bit mask.
// - OSPEEDR &= ~(3U << position) clears those bits.
// - OSPEEDR |= (2U << position) configures High Speed.