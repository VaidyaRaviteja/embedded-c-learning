#include <stdio.h>

// Function that accepts two integers and returns an integer
int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    // Function pointer declaration
    int (*operation)(int, int) = add;

    int result = operation(10, 20);

    printf("Result: %d\n", result);

    return 0;
}

//Remember:
//- int (*operation)(int, int) — points to a function that accepts two integers and returns an integer.
//- operation(10, 20) — calls add(10, 20) through the pointer.
//- Function pointers let us choose which function to call at runtime.