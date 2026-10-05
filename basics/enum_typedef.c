#include <stdio.h>

/*
    ENUMERATION (enum)

    enum allows us to give meaningful names
    to integer values.

    By default:
    OFF = 0
    ON  = 1
    ERROR = 2
*/

enum DeviceState
{
    OFF,
    ON,
    ERROR
};


/*
    TYPEDEF

    typedef gives another name (alias) to
    an existing data type.

    Instead of writing:

        enum DeviceState state;

    We can create a shorter name:

        DeviceState state;
*/

typedef enum DeviceState DeviceState;


/*
    TYPEDEF WITH STRUCT

    Normally we write:

        struct Sensor sensor1;

    Using typedef, we can write:

        Sensor sensor1;
*/

typedef struct
{
    int id;
    float voltage;
    float current;
} Sensor;


int main(void)
{
    /*
        1. ENUM EXAMPLE
    */

    DeviceState state;

    state = ON;

    printf("Device state value: %d\n", state);


    /*
        We can compare the enum value
        with its meaningful name.
    */

    if (state == ON)
    {
        printf("Device is ON\n");
    }


    /*
        2. Change the state
    */

    state = ERROR;

    if (state == ERROR)
    {
        printf("Device has an ERROR\n");
    }


    /*
        3. TYPEDEF STRUCT EXAMPLE
    */

    Sensor sensor1;

    sensor1.id = 1;
    sensor1.voltage = 12.5f;
    sensor1.current = 2.3f;

    printf("\n=== Sensor ===\n");
    printf("ID: %d\n", sensor1.id);
    printf("Voltage: %.2f V\n", sensor1.voltage);
    printf("Current: %.2f A\n", sensor1.current);


    return 0;
}