#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t IDR = 0U;

    // Simulate button pressed (HIGH)
    IDR |= (1U << 5);

    // Check PA5 input
    if (IDR & (1U << 5))
    {
        printf("Button Pressed\n");
    }
    else
    {
        printf("Button Released\n");
    }

    return 0;
}

// Short explanation: Polling means repeatedly checking a GPIO input to detect whether a button is pressed. Here, the input is simulated by setting PA5 HIGH. No physical button is read.

