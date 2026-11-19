#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ARR = 999U;
    uint32_t CCR = 250U;

    // Calculate PWM duty cycle
    float duty_cycle = ((float)CCR / (ARR + 1U)) * 100.0f;

    printf("Initial duty cycle: %.1f%%\n", duty_cycle);

    // Increase duty cycle to 50%
    CCR = 500U;
    duty_cycle = ((float)CCR / (ARR + 1U)) * 100.0f;

    printf("Updated duty cycle: %.1f%%\n", duty_cycle);

    // Increase duty cycle to 75%
    CCR = 750U;
    duty_cycle = ((float)CCR / (ARR + 1U)) * 100.0f;

    printf("Updated duty cycle: %.1f%%\n", duty_cycle);

    return 0;
}
// Expected output:
// Initial duty cycle: 25.0%
// Updated duty cycle: 50.0%
// Updated duty cycle: 75.0%


// Short explanation: CCR controls the PWM pulse width. Increasing CCR increases the duty cycle while ARR remains unchanged. This is a software calculation, not actual PWM output.

