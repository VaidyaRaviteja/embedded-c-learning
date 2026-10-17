#include <stdio.h>

int main(void)
{
    int number = 25;
    float temperature = 36.5f;

    void *ptr;

    ptr = &number;
    printf("Integer: %d\n", *(int *)ptr);

    ptr = &temperature;
    printf("Temperature: %.1f\n", *(float *)ptr);

    return 0;
}

//Remember:
//- void *ptr — a generic object pointer.
//- (int *)ptr — converts it to an integer pointer.
//- (float *)ptr — converts it to a float pointer.
//- The pointer must be converted to a compatible type before dereferencing.