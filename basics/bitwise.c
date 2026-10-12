#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 0x0A;  // Binary: 00001010
    uint8_t b = 0x0C;  // Binary: 00001100

    // AND: 1 only when both bits are 1
    printf("AND: %u\n", (unsigned)(a & b));

    // OR: 1 when either bit is 1
    printf("OR: %u\n", (unsigned)(a | b));

    // XOR: 1 when bits are different
    printf("XOR: %u\n", (unsigned)(a ^ b));

    // NOT: flips all bits after integer promotion
    printf("NOT: %u\n", (unsigned)(uint8_t)~a);

    // Left shift: shifts bits left
    printf("Left shift: %u\n", (unsigned)(a << 1));

    // Right shift: shifts bits right
    printf("Right shift: %u\n", (unsigned)(a >> 1));

    // Set bit 2 (bit positions start at 0)
    a |= (1U << 2);

    // Clear bit 1
    a &= ~(1U << 1);

    // Toggle bit 3
    a ^= (1U << 3);

    // Check whether bit 2 is set
    if ((a & (1U << 2)) != 0U)
    {
        printf("Bit 2 is SET\n");
    }

    printf("Final a: %u\n", (unsigned)a);

    
//    STM32 applications:
//    - Set a bit: REG |= (1U << n);
//    - Clear a bit: REG &= ~(1U << n);
//    - Toggle a bit: REG ^= (1U << n);
//    - Check a bit: (REG & (1U << n)) != 0U
//    Here, n is the bit position, starting from 0.
    
    return 0;
}