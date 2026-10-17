#include <stdio.h>

// Function that receives a callback
void process_sensor(void (*callback)(void))
{
    printf("Processing sensor...\n");
    callback();  // Call the supplied function
}

void sensor_ready(void)
{
    printf("Sensor is ready!\n");
}

int main(void)
{
    process_sensor(sensor_ready);

    return 0;
}

//Remember:
//- callback is a function pointer parameter.
//- process_sensor(sensor_ready) passes the function to call.
//- callback() executes that function.