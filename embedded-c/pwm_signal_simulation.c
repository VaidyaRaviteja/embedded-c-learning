#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ARR = 9U;
    uint32_t CCR = 3U;

    // Simulate one PWM period
    printf("PWM signal: ");

    for (uint32_t CNT = 0; CNT <= ARR; CNT++)
    {
        if (CNT < CCR)
            printf("HIGH ");
        else
            printf("LOW ");
    }

    printf("\n");
    return 0;
}

// Expected output:
// PWM signal: HIGH HIGH HIGH LOW LOW LOW LOW LOW LOW LOW


// Short explanation: CNT counts from 0 to ARR. The output is HIGH while CNT is below CCR, then LOW for the rest of the period. Here, 3 of 10 counts are HIGH, giving 30% duty cycle.

// This is a simplified edge-aligned PWM simulation, not actual STM32 hardware output.
