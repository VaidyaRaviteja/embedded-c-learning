#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t IDR = 0U;
    int count = 0;

    // Simulate button becoming HIGH after 3 checks
    while (count < 5)
    {
        if (count == 3)
            IDR |= (1U << 5);

        if (IDR & (1U << 5))
        {
            printf("Button Pressed\n");
            break;
        }

        printf("Button Released\n");
        count++;
    }

    return 0;
}

// Short explanation: A while loop continuously checks the input. The loop stops when PA5 becomes HIGH. The button state is simulated here, not read from actual hardware.

