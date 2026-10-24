#include <stdio.h>

// Callback function type
typedef void (*SensorCallback)(int value);

void process_sensor(int value, SensorCallback callback)
{
    callback(value);
}

void print_sensor_value(int value)
{
    printf("Sensor value: %d\n", value);
}

void check_sensor_limit(int value)
{
    if (value > 100)
    {
        printf("Warning: Sensor value is high!\n");
    }
}

int main(void)
{
    process_sensor(150, print_sensor_value);
    process_sensor(150, check_sensor_limit);

    return 0;
}

//Key points:
//- SensorCallback represents a pointer to a function that accepts an int.
//- process_sensor() calls whichever callback it receives.
//- This pattern is useful for event handlers and callbacks in embedded software.

