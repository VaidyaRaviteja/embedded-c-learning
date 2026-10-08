#include <stdio.h>

/*
    volatile tells the compiler:

    "This variable can change unexpectedly,
     so do not assume its value stays the same."

    In Embedded Systems, a variable may change because of:

    1. Hardware
    2. Interrupts
    3. Another execution context
*/


/*
    Example: A flag that could be changed by
    an interrupt.

    volatile tells the compiler that the value
    of interrupt_flag can change at any time.
*/

volatile int interrupt_flag = 0;


int main(void)
{
    printf("Initial flag: %d\n", interrupt_flag);

    /*
        Normally we can change the variable.
    */

    interrupt_flag = 1;

    printf("Updated flag: %d\n", interrupt_flag);

    return 0;
}