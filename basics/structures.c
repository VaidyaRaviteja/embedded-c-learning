
#include <stdio.h>

/*
    STRUCTURES IN C

    A structure groups different types of data
    under one name.

    Example: A sensor may have an ID, voltage,
    and current. A structure groups these values.
*/

// Define a structure named Sensor
struct Sensor
{
    int id;           // Sensor identification number
    float voltage;    // Voltage measured by sensor
    float current;    // Current measured by sensor
};

// A function that accepts a structure pointer
void displaySensor(struct Sensor *s)
{
    // -> accesses structure members through a pointer
    printf("Sensor ID: %d\n", s->id);
    printf("Voltage: %.2f V\n", s->voltage);
    printf("Current: %.2f A\n", s->current);
}

int main(void)
{
    // 1. Create a structure variable and initialize it
    struct Sensor sensor1 = {1, 12.5f, 2.3f};

    // 2. Access members using the dot (.) operator
    printf("=== Single Sensor ===\n");
    printf("ID: %d\n", sensor1.id);
    printf("Voltage: %.2f V\n", sensor1.voltage);
    printf("Current: %.2f A\n", sensor1.current);

    // 3. Modify a structure member
    sensor1.voltage = 13.0f;

    printf("\nUpdated voltage: %.2f V\n",
           sensor1.voltage);

    // 4. Create an array of structures
    struct Sensor sensors[2] =
    {
        {1, 12.5f, 2.3f},
        {2, 24.0f, 1.5f}
    };

    printf("\n=== Sensor Array ===\n");

    for (int i = 0; i < 2; i++)
    {
        printf("Sensor %d: Voltage = %.2f V, "
               "Current = %.2f A\n",
               sensors[i].id,
               sensors[i].voltage,
               sensors[i].current);
    }

    // 5. Pass a structure pointer to a function
    printf("\n=== Using Pointer ===\n");
    displaySensor(&sensor1);

    return 0;
}
