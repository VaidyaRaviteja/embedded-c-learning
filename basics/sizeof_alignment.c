
#include <stdio.h>
#include <stdint.h>

struct Sensor
{
    uint8_t id;       // 1 byte
    uint32_t value;   // 4 bytes
    uint8_t status;   // 1 byte
};

int main(void)
{
    // sizeof gives the size in bytes
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of uint32_t: %zu bytes\n", sizeof(uint32_t));

    // Size of an array 
    int numbers[5];
    printf("Array size: %zu bytes\n", sizeof(numbers));

    // Structure size may include padding bytes
    printf("Sensor structure size: %zu bytes\n",
           sizeof(struct Sensor));

    return 0;
}

//sizeof — returns the size of an object or type in bytes.
//%zu — format specifier for sizeof results.
//Padding — extra bytes a compiler may add between structure members or at the end.
//Alignment — placing data at memory addresses suitable for its type.

//For example, a structure containing 1-byte and 4-byte members may occupy more than the sum of their member sizes.



