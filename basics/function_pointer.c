#include <stdio.h>

// A normal function
void turn_on_led(void)
{
    printf("LED ON\n");
}

int main(void)
{
    // Function pointer: points to a function returning void
    void (*function_ptr)(void) = turn_on_led;

    function_ptr();  // Call the function through the pointer

    return 0;
}
//Remember:
//- void (*function_ptr)(void) — declares a function pointer.
//- = turn_on_led — stores the function's address.
//- function_ptr() — calls the function through the pointer.