#include <stdio.h>

int main(void)
{
    /* Example 1: Basic switch */
    int choice = 2;

    switch (choice)
    {
        case 1:
            printf("Option 1 selected\n");
            break;

        case 2:
            printf("Option 2 selected\n");
            break;

        case 3:
            printf("Option 3 selected\n");
            break;

        default:
            printf("Invalid option\n");
            break;
    }


    /* Example 2: Switch with character */
    char command = 'S';

    switch (command)
    {
        case 'S':
            printf("Start command\n");
            break;

        case 'P':
            printf("Stop command\n");
            break;

        case 'R':
            printf("Reset command\n");
            break;

        default:
            printf("Unknown command\n");
            break;
    }


    /* Example 3: Simple menu */
    int mode = 3;

    switch (mode)
    {
        case 1:
            printf("Normal mode\n");
            break;

        case 2:
            printf("Power saving mode\n");
            break;

        case 3:
            printf("Debug mode\n");
            break;

        default:
            printf("Invalid mode\n");
            break;
    }

    return 0;
}