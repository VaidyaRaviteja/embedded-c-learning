#include <stdio.h>
#include <stdint.h>

int main(void)
{
    volatile uint32_t status_register = 0;

    volatile uint32_t *reg_ptr = &status_register;

    *reg_ptr = 1;  // Write through the pointer

    printf("Register value: %lu\n",
           (unsigned long)*reg_ptr);

    return 0;
}
//Remember:
//- volatile uint32_t *reg_ptr means the pointer accesses a volatile value.
//- *reg_ptr = 1 writes to that value.
//- volatile tells the compiler that accesses must be treated as observable and not simply optimized away.
//- Important: volatile does not guarantee atomic access or thread safety. 
//	This example uses RAM, not a real STM32 hardware register.