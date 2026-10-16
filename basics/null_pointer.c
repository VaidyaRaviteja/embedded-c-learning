#include <stdio.h>

int main(void)
{
    int *ptr = NULL;  // Initialize with no valid object address

    if (ptr == NULL)
    {
        printf("Pointer is NULL\n");
    }

    int sensor_value = 25;
    ptr = &sensor_value;  // Now points to a valid variable

    printf("Sensor value: %d\n", *ptr);

    return 0;
}

//Key points:
//- NULL indicates that the pointer does not point to a valid object.
//- Check a pointer before dereferencing it when it might be NULL.
//- Never use *ptr while ptr == NULL — that causes undefined behavior.