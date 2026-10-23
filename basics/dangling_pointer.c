#include <stdio.h>

int main(void)
{
    int *ptr = NULL;

    {
        int value = 100;
        ptr = &value;

        printf("Value: %d\n", *ptr);  // Valid here
    }  // value's lifetime ends here

    ptr = NULL;  // Avoid keeping the invalid address

    printf("Pointer reset to NULL\n");

    return 0;
}
//
//Remember:
//- A local variable's lifetime ends when its block exits.
//- A pointer to that variable becomes dangling.
//- Do not dereference a dangling pointer.
//- Setting ptr = NULL prevents accidental use through this pointer, but does not fix copies of the old address elsewhere.