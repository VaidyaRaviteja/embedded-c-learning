
#include <stdio.h>
#include <stdlib.h>

/*
    DYNAMIC MEMORY ALLOCATION

    malloc()  -> Allocates memory; contents are uninitialized.
    calloc()  -> Allocates memory; all bytes are initialized to zero.
    realloc() -> Changes the size of an existing allocation.
    free()    -> Releases dynamically allocated memory.

    These functions are declared in <stdlib.h>.
*/

int main(void)
{
    /*
        1. MALLOC

        Allocate memory for 3 integers.

        sizeof(int) gives the size of one integer
        in bytes on this system.

        malloc() returns a pointer to the allocated
        memory, or NULL if allocation fails.
    */

    int *numbers = malloc(3 * sizeof *numbers);

    if (numbers == NULL)
    {
        printf("malloc failed\n");
        return 1;
    }

    // Store values in the allocated memory.
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

    printf("=== malloc ===\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");


    /*
        2. CALLOC

        Allocate memory for 3 integers.
        All allocated bytes are initialized to zero.

        Check the returned pointer before using it.
    */

    int *values = calloc(3, sizeof *values);

    if (values == NULL)
    {
        printf("calloc failed\n");

        free(numbers);
        return 1;
    }

    printf("\n=== calloc ===\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", values[i]);
    }

    printf("\n");


    /*
        3. REALLOC

        Resize the numbers allocation from space
        for 3 integers to space for 5 integers.

        Use a temporary pointer so the original
        allocation is not lost if realloc fails.
    */

    int *temp = realloc(numbers, 5 * sizeof *numbers);

    if (temp == NULL)
    {
        printf("realloc failed\n");

        // The original numbers allocation is still valid.
        free(numbers);
        free(values);
        return 1;
    }

    numbers = temp;

    // Store values in the two newly added elements.
    numbers[3] = 40;
    numbers[4] = 50;

    printf("\n=== realloc ===\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");


    /*
        4. FREE

        Release memory when it is no longer needed.

        Do not access the released memory afterward.
    */

    free(numbers);
    free(values);

    // Setting pointers to NULL avoids retaining
    // these pointers after their allocations are released.
    numbers = NULL;
    values = NULL;

    printf("\nMemory released successfully.\n");

    return 0;
}
