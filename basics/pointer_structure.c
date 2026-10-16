#include <stdio.h>
#include <stdint.h>

struct Sensor
{
    uint32_t value;
    uint8_t status;
};

int main(void)
{
    struct Sensor sensor = {250, 1};

    struct Sensor *ptr = &sensor;

    printf("Value: %lu\n", (unsigned long)ptr->value);
    printf("Status: %u\n", (unsigned int)ptr->status);

    ptr->value = 500;  // Modify through the pointer

    printf("Updated value: %lu\n", (unsigned long)sensor.value);

    return 0;
}

//Remember:
//- struct Sensor *ptr — pointer to a structure.
//- ptr = &sensor — stores the structure's address.
//- ptr->value — accesses a structure member through a pointer.
//- ptr->value = 500 — modifies the original structure.
//ptr->value is equivalent to (*ptr).value.