#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t timer_clock = 90000000U; // 90 MHz
    uint32_t prescaler = 89U;
    uint32_t auto_reload = 999U;
    uint32_t compare_value = 250U;

    // Calculate PWM frequency
    uint32_t counter_frequency =
        timer_clock / (prescaler + 1U);

    uint32_t pwm_frequency =
        counter_frequency / (auto_reload + 1U);

    // Calculate duty cycle
    float duty_cycle =
        ((float)compare_value / (auto_reload + 1U)) * 100.0f;

    printf("PWM Frequency: %lu Hz\n",
           (unsigned long)pwm_frequency);

    printf("Duty Cycle: %.1f%%\n", duty_cycle);

    return 0;
}
// Expected output:
// PWM Frequency: 1000 Hz
// Duty Cycle: 25.0%


// Short explanation: PSC controls the timer counting speed, ARR controls the PWM period, and CCR controls the duty cycle. Here, the output is 1 kHz PWM with 25% duty cycle.

// This is a calculation example, not actual PWM output from your STM32 board.

