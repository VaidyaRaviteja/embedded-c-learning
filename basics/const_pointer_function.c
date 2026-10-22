#include <stdio.h>

// Function can read values but cannot modify them through ptr
void print_sensor(const int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ptr[i]);
    }
}

int main(void)
{
    int sensor_values[] = {100, 200, 300};

    print_sensor(sensor_values, 3);

    return 0;
}

//Remember:
//- const int *ptr prevents modification of elements through this pointer.
//- ptr[i] accesses each array element.
//- This is useful when a function only needs to read sensor data.