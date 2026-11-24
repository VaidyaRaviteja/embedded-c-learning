#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t timer_clock = 90000000U;
    uint32_t PSC = 89U;
    uint32_t ARR = 999U;
    uint32_t CCR = 500U;

    // Calculate PWM frequency
    uint32_t pwm_frequency =
        timer_clock / ((PSC + 1U) * (ARR + 1U));

    // Calculate duty cycle
    float duty_cycle =
        ((float)CCR / (ARR + 1U)) * 100.0f;

    printf("PWM Frequency: %lu Hz\n",
           (unsigned long)pwm_frequency);

    printf("PWM Duty Cycle: %.1f%%\n", duty_cycle);

    // Change duty cycle to 75%
    CCR = 750U;

    duty_cycle =
        ((float)CCR / (ARR + 1U)) * 100.0f;

    printf("Updated Duty Cycle: %.1f%%\n", duty_cycle);

    return 0;
}

// Expected output:
// PWM Frequency: 1000 Hz
// PWM Duty Cycle: 50.0%
// Updated Duty Cycle: 75.0%


// Short explanation: PSC and ARR determine PWM frequency. CCR determines duty cycle. Changing CCR changes the pulse width without changing the frequency.

