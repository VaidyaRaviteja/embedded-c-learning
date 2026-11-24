#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ARR = 9U;
    uint32_t CCR = 4U;

    printf("PWM Mode 1: ");

    // Mode 1: HIGH while CNT < CCR
    for (uint32_t CNT = 0; CNT <= ARR; CNT++)
    {
        printf("%s ", (CNT < CCR) ? "HIGH" : "LOW");
    }

    printf("\nPWM Mode 2: ");

    // Mode 2: LOW while CNT < CCR
    for (uint32_t CNT = 0; CNT <= ARR; CNT++)
    {
        printf("%s ", (CNT < CCR) ? "LOW" : "HIGH");
    }

    printf("\n");

    return 0;
}

// Expected output:
// PWM Mode 1: HIGH HIGH HIGH HIGH LOW LOW LOW LOW LOW LOW
// PWM Mode 2: LOW LOW LOW LOW HIGH HIGH HIGH HIGH HIGH HIGH


// Short explanation: In up-counting PWM, Mode 1 gives HIGH before the compare match and LOW afterward. Mode 2 gives the opposite output. Both have a 40% HIGH or LOW interval, depending on the mode.

// This is a software simulation of the output logic, not actual STM32 PWM.

