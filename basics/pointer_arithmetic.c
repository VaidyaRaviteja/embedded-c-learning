#include <stdio.h>

int main(void)
{
    int values[] = {10, 20, 30};
    int *ptr = values;

    printf("First:  %d\n", *ptr);

    ptr++;  // Move to the next integer
    printf("Second: %d\n", *ptr);

    ptr++;
    printf("Third:  %d\n", *ptr);

    return 0;
}
//
//
//Output:
//First:  10
//Second: 20
//Third:  30
//
//
//Remember:
//- int *ptr = values; points to the first array element.
//- ptr++ moves to the next int element, not just the next byte.
//- Only move pointers within an array or to its one-past-the-end position; never dereference that one-past position.