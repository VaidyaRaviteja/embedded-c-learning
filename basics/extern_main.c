#include <stdio.h>

// Declaration: variable is defined in another file.
extern int sensor_value;

int main(void)
{
    printf("Sensor value: %d\n", sensor_value);

    return 0;
}


//int sensor_value = 100; — defines the variable and allocates storage for it.
//extern int sensor_value; — declares that the variable is defined elsewhere.