#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t simulated_register = 0;

    // Pointer to the simulated register
    volatile uint32_t *reg_ptr = &simulated_register;

    // Write: set bit 5
    *reg_ptr |= (1U << 5);

    // Read
    if ((*reg_ptr & (1U << 5)) != 0U)
    {
        printf("Bit 5 is SET\n");
    }

    // Clear bit 5
    *reg_ptr &= ~(1U << 5);

    printf("Register value: %lu\n",
           (unsigned long)*reg_ptr);

    return 0;
}
//Remember:
//- *reg_ptr reads or writes the value at the pointed-to address.
//- |= (1U << 5) sets bit 5.
//- &= ~(1U << 5) clears bit 5.
//- This is a simulated register in RAM, not a physical STM32 register.