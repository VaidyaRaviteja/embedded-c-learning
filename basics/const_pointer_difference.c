#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    // Pointer to const: value cannot be changed through ptr
    const int *ptr1 = &a;
    // *ptr1 = 15;  // Error

    ptr1 = &b;      // Allowed: pointer can change address

    // Const pointer: address cannot be changed
    int *const ptr2 = &a;
    *ptr2 = 15;     // Allowed: value can change
    // ptr2 = &b;   // Error

    printf("ptr1 value: %d\n", *ptr1);
    printf("ptr2 value: %d\n", *ptr2);

    return 0;
}

//Remember:
//- const int *ptr1 → change the address, but not the value through the pointer.
//- int *const ptr2 → change the value, but not the address.
//- const int *const ptr3 → change neither through that pointer.