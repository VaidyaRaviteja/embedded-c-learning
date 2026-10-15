#include <stdio.h>

int main(void)
{
    int sensor_value = 25;

    int *ptr = &sensor_value;

    printf("Value: %d\n", sensor_value);
    printf("Address: %p\n", (void *)&sensor_value);
    printf("Pointer stores address: %p\n", (void *)ptr);
    printf("Value through pointer: %d\n", *ptr);

    return 0;
}

//Code					Meaning
//int 					sensor_value = 25;	Creates an integer variable.
//int 					*ptr;	Declares a pointer to an integer.
//&sensor_value			Gets the variable's memory address.
//ptr = &sensor_value;	Stores that address in the pointer.
//*ptr					Accesses the value at that address.
//Remember:
//- & → gets the address.
//- * → accesses the value through a pointer (when used as a unary operator).
