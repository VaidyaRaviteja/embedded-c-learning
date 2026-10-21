#include <stdio.h>

int main(void)
{
    char message[] = "Hello STM32";

    char *ptr = message;

    printf("Full string: %s\n", ptr);
    printf("First character: %c\n", *ptr);

    ptr++;  // Move to the next character

    printf("Second character: %c\n", *ptr);

    return 0;
}

//Remember:
//- char *ptr — points to a character.
//- %s — prints a string starting at that address.
//- %c — prints one character.
//- ptr++ — moves to the next character.