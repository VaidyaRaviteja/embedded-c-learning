#include <stdio.h>

int main(void)
{
    char ch;

    /* Example 1: Read one character */
    printf("Enter a character: ");
    ch = getchar();

    printf("You entered: %c\n", ch);


    /* Example 2: Get ASCII value */
    printf("ASCII value: %d\n", ch);


    /* Example 3: Read another character */
    printf("\nEnter another character: ");
    getchar();          // consumes the leftover '\n'
    ch = getchar();

    printf("You entered: %c\n", ch);


    /* Example 4: getchar() and EOF */
    printf("\nEnter characters. Press Ctrl+Z then Enter to stop.\n");

    int c;

    while ((c = getchar()) != EOF)
    {
        printf("Character: %c | ASCII: %d\n", c, c);
    }

    return 0;
}