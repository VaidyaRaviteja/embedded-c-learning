#include <stdio.h>

int main(void)
{
    /* Example 1: for loop */
    printf("For loop:\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }


    /* Example 2: Sum using for loop */
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    printf("Sum of 1 to 10: %d\n", sum);


    /* Example 3: while loop */
    int count = 1;

    printf("\nWhile loop:\n");

    while (count <= 5)
    {
        printf("%d\n", count);
        count++;
    }


    /* Example 4: do-while loop */
    int number = 1;

    printf("\nDo-while loop:\n");

    do
    {
        printf("%d\n", number);
        number++;
    }
    while (number <= 5);


    /* Example 5: break */
    printf("\nBreak example:\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }

        printf("%d\n", i);
    }


    /* Example 6: continue */
    printf("\nContinue example:\n");

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }


    /* Example 7: Embedded-style loop */
    printf("\nEmbedded-style example:\n");

    int sensor_value = 0;

    for (int sample = 1; sample <= 5; sample++)
    {
        sensor_value = sensor_value + 100;

        printf("Sample %d: Sensor value = %d\n",
               sample, sensor_value);
    }

    return 0;
}