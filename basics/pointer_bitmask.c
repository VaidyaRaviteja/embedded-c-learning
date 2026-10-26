#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t register_value = 0x00;

    // Set bit 3
    register_value |= (1U << 3);
    printf("After setting bit 3: 0x%08lX\n",
           (unsigned long)register_value);

    // Clear bit 3
    register_value &= ~(1U << 3);
    printf("After clearing bit 3: 0x%08lX\n",
           (unsigned long)register_value);

    // Set bit 1 through a pointer
    uint32_t *reg_ptr = &register_value;
    *reg_ptr |= (1U << 1);

    printf("After setting bit 1: 0x%08lX\n",
           (unsigned long)register_value);

    return 0;
}

//Remember:
//- 1U << 3 creates a mask with bit 3 set.
//- |= sets the selected bit.
//- &= ~mask clears the selected bit.
//- *reg_ptr |= mask modifies the value through a pointer.
//This example modifies a normal RAM variable, not a real hardware register.