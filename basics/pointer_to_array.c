#include <stdio.h>

int main(void)
{
    int values[3] = {10, 20, 30};

    // Pointer to the entire array of 3 integers
    int (*ptr)[3] = &values;

    printf("First:  %d\n", (*ptr)[0]);
    printf("Second: %d\n", (*ptr)[1]);
    printf("Third:  %d\n", (*ptr)[2]);

    return 0;
}

//Remember:
//- int (*ptr)[3] → pointer to an entire array of 3 integers.
//- &values → address of the entire array.
//- (*ptr)[0] → first element of that array.

//Important difference:
//- int *ptr points to an individual integer.
//- int (*ptr)[3] points to an array containing 3 integers.