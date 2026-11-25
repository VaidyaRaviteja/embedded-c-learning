#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t ARR = 9U;
    uint32_t CCR = 4U;

    printf("Main output:         ");
    printf("Complementary output:\n");

    // Simulate complementary outputs
    for (uint32_t CNT = 0; CNT <= ARR; CNT++)
    {
        uint8_t main_output = (CNT < CCR) ? 1U : 0U;
        uint8_t complementary_output = !main_output;

        printf("       %u                 %u\n",
               main_output, complementary_output);
    }

    return 0;
}

// Short explanation: A complementary PWM output is the logical opposite of the main PWM output. STM32 advanced timers such as TIM1 and TIM8 support complementary outputs. Real complementary switching usually requires dead-time configuration to prevent both power switches from turning on simultaneously. This example does not implement dead time.

