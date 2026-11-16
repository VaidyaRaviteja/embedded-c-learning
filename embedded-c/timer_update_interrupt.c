#include <stdio.h>
#include <stdint.h>

volatile uint32_t timer_events = 0;

// Simulated timer interrupt handler
void TIM_IRQHandler(void)
{
    timer_events++;
}

int main(void)
{
    // Simulate 5 timer update events
    for (int i = 0; i < 5; i++)
    {
        TIM_IRQHandler();
    }

    printf("Timer update events: %lu\n",
           (unsigned long)timer_events);

    return 0;
}

// Short explanation: When a timer reaches its configured ARR limit, it generates an update event. If its interrupt is enabled, the CPU runs the timer interrupt handler. Here, we manually simulate five events.

