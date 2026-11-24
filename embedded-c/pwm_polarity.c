#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ARR = 9U;
    uint32_t CCR = 4U;

    printf("Normal polarity: ");

    // Active-high output
    for (uint32_t CNT = 0; CNT <= ARR; CNT++)
    {
        printf("%s ", (CNT < CCR) ? "HIGH" : "LOW");
    }

    printf("\nInverted polarity: ");

    // Active-low output
    for (uint32_t CNT = 0; CNT <= ARR; CNT++)
    {
        printf("%s ", (CNT < CCR) ? "LOW" : "HIGH");
    }

    printf("\n");
    return 0;
}

// Expected output:
// Normal polarity: HIGH HIGH HIGH HIGH LOW LOW LOW LOW LOW LOW
// Inverted polarity: LOW LOW LOW LOW HIGH HIGH HIGH HIGH HIGH HIGH


// Short explanation: PWM polarity determines whether the active part of the signal is HIGH or LOW. In STM32 timers, the CCxP bit controls output polarity. This is a software simulation.

