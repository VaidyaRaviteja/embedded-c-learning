#include <stdio.h>

int main(void)
{
    int age = 25;

    /* Example 1: Simple if */
    if (age >= 18)
    {
        printf("Adult\n");
    }


    /* Example 2: if-else */
    int number = 7;

    if (number % 2 == 0)
    {
        printf("%d is even\n", number);
    }
    else
    {
        printf("%d is odd\n", number);
    }


    /* Example 3: if-else if-else */
    int marks = 78;

    if (marks >= 90)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 75)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: C\n");
    }
    else
    {
        printf("Grade: D\n");
    }


    /* Example 4: Multiple conditions */
    int temperature = 35;

    if (temperature >= 20 && temperature <= 40)
    {
        printf("Temperature is in normal range\n");
    }
    else
    {
        printf("Temperature is outside normal range\n");
    }


    /* Example 5: Nested if */
    int user_logged_in = 1;
    int admin = 1;

    if (user_logged_in)
    {
        if (admin)
        {
            printf("Admin access granted\n");
        }
        else
        {
            printf("Normal user access\n");
        }
    }
    else
    {
        printf("Please login\n");
    }


    /* Example 6: Embedded-style condition */
    int sensor_value = 850;

    if (sensor_value > 800)
    {
        printf("Warning: High sensor value\n");
    }
    else
    {
        printf("Sensor value is normal\n");
    }

    return 0;
}