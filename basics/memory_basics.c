#include <stdio.h>
#include <stdlib.h>

/*
    GLOBAL VARIABLE
    Exists throughout the program's lifetime.
*/
int global_count = 10;

/*
    STATIC GLOBAL VARIABLE
    Exists throughout the program's lifetime,
    but is accessible by name only in this source file.
*/
static int system_status = 1;

void demonstrate_memory(void)
{
    /*
        LOCAL VARIABLE
        Normally stored on the stack.
        Its lifetime ends when this function returns.
    */
    int temperature = 25;

    /*
        STATIC LOCAL VARIABLE
        Retains its value between function calls.
    */
    static int call_count = 0;

    call_count++;

    printf("Temperature: %d\n", temperature);
    printf("Function calls: %d\n", call_count);
}

int main(void)
{
    /*
        DYNAMIC MEMORY
        malloc() requests memory at runtime.
        Always check whether allocation succeeded.
    */
    int *ptr = malloc(sizeof *ptr);

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 100;

    printf("Global count: %d\n", global_count);
    printf("System status: %d\n", system_status);
    printf("Heap value: %d\n", *ptr);

    demonstrate_memory();
    demonstrate_memory();

    /*
        Release dynamically allocated memory
        when it is no longer needed.
    */
    free(ptr);
    ptr = NULL;

    return 0;
}