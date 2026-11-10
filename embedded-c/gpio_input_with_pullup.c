#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t PUPDR = 0U;
    uint32_t IDR = 0U;

    // Configure PA5 with internal pull-up
    PUPDR &= ~(3U << 10);
    PUPDR |=  (1U << 10);

    // Simulate PA5 input as HIGH
    IDR |= (1U << 5);

    // Read PA5 input
    if (IDR & (1U << 5))
    {
        printf("PA5: HIGH\n");
    }
    else
    {
        printf("PA5: LOW\n");
    }

    return 0;
}

// Short explanation: PUPDR enables the pull-up for PA5. IDR tells us the pin's input level. Here, IDR is manually set to HIGH for simulation.

