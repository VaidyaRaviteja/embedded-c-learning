#include <stdio.h>

void led_on(void)
{
    printf("LED ON\n");
}

void led_off(void)
{
    printf("LED OFF\n");
}

void buzzer_on(void)
{
    printf("Buzzer ON\n");
}

int main(void)
{
    // Array of pointers to functions
    void (*commands[3])(void) = {
        led_on,
        led_off,
        buzzer_on
    };

    commands[0]();  // Call led_on()
    commands[1]();  // Call led_off()
    commands[2]();  // Call buzzer_on()

    return 0;
}


//Remember:
//- commands[3] stores three function pointers.
//- commands[0]() calls led_on().
//- commands[1]() calls led_off().
//- commands[2]() calls buzzer_on().


