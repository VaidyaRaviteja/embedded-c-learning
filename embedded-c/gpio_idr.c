#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t IDR = 0U;

    // Simulate GPIO pin 5 receiving HIGH input
    IDR |= (1U << 5);

    // Read the state of pin 5
    if ((IDR & (1U << 5)) != 0U)
    {
        printf("Pin 5 is HIGH\n");
    }
    else
    {
        printf("Pin 5 is LOW\n");
    }

    return 0;
}

// Short explanation
// IDR represents the input register. IDR & (1U << 5) checks bit 5. A set bit means HIGH; a cleared bit means LOW. This simulates an input in RAM, not a physical STM32 pin.



