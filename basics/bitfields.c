#include <stdio.h>
#include <stdint.h>

/*
    A bit field specifies how many bits a structure
    member should use.

    Example: mode needs only 2 bits.
*/

struct DeviceStatus
{
    unsigned int mode : 2;      // 2 bits
    unsigned int error : 1;     // 1 bit
    unsigned int enabled : 1;   // 1 bit
};

int main(void)
{
    struct DeviceStatus device = {0};

    device.mode = 2;
    device.error = 1;
    device.enabled = 1;

    printf("Mode: %u\n", device.mode);
    printf("Error: %u\n", device.error);
    printf("Enabled: %u\n", device.enabled);

    return 0;
}


//mode : 2 — allocates a 2-bit-wide field; values 0 to 3 are representable.
//error : 1 — a one-bit field; values 0 or 1.
//enabled : 1 — another one-bit field.
//
//Mode: 2
//Error: 1
//Enabled: 1