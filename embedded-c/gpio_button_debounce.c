#include <stdio.h>
#include <stdint.h>

// Simulated button readings
int read_button(void)
{
    static int count = 0;
    int readings[] = {0, 1, 0, 1, 1, 1};

    return readings[count++];
}

int main(void)
{
    int stable_state = 0;
    int current_state;
    int same_count = 0;

    // Accept a new state after 3 identical readings
    for (int i = 0; i < 6; i++)
    {
        current_state = read_button();

        if (current_state == stable_state)
        {
            same_count = 0;
        }
        else
        {
            same_count++;

            if (same_count >= 3)
            {
                stable_state = current_state;
                same_count = 0;
                printf("Button state changed: %d\n", stable_state);
            }
        }
    }

    return 0;
}

// Short explanation: A physical button may produce rapid HIGH/LOW changes when pressed. Debouncing waits for a stable reading before accepting the new state. This example simulates readings; real hardware usually uses a time delay or timer.

