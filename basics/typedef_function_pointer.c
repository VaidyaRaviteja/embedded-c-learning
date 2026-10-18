#include <stdio.h>

// Create a type named Command
typedef void (*Command)(void);

void led_on(void)
{
    printf("LED ON\n");
}

void led_off(void)
{
    printf("LED OFF\n");
}

int main(void)
{
    Command command = led_on;
    command();

    command = led_off;
    command();

    return 0;
}
//
//Remember:
//- typedef void (*Command)(void); creates the type Command.
//- Command command = led_on; stores a function address.
//- command() calls the selected function.


