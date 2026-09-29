#include <stdio.h>

int main(void)
{
    /*
     * ARRAY BASICS
     *
     * An array stores multiple values of the same data type
     * under one variable name.
     *
     * Example:
     *
     * int numbers[5];
     *
     * This creates space for 5 integers.
     *
     * IMPORTANT:
     * Array indexing starts from 0, not 1.
     *
     * numbers[0] -> first element
     * numbers[1] -> second element
     * numbers[2] -> third element
     * numbers[3] -> fourth element
     * numbers[4] -> fifth element
     */


    /*
     * Example 1: Declaration and initialization
     */
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("First element: %d\n", numbers[0]);
    printf("Third element: %d\n", numbers[2]);
    printf("Fifth element: %d\n", numbers[4]);


    /*
     * Example 2: Updating an array element
     *
     * We can change an element after creating the array.
     */
    numbers[2] = 100;

    printf("Updated third element: %d\n", numbers[2]);


    /*
     * Example 3: Print all elements using a loop
     */
    printf("\nAll elements:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }


    /*
     * Example 4: Calculate the sum
     */
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }

    printf("\nSum = %d\n", sum);


    /*
     * Example 5: Calculate average
     *
     * Casting sum to float prevents integer division.
     */
    float average = (float)sum / 5;

    printf("Average = %.2f\n", average);


    /*
     * Example 6: Find the largest value
     */
    int largest = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("Largest value = %d\n", largest);


    /*
     * Example 7: Array with sensor readings
     *
     * In a real embedded system, these values could represent
     * readings collected from an ADC or sensor.
     */
    int sensor_values[5] = {450, 520, 480, 600, 550};

    printf("\nSensor readings:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Sample %d = %d\n", i + 1, sensor_values[i]);
    }


    /*
     * Example 8: Find the highest sensor reading
     */
    int highest_sensor = sensor_values[0];

    for (int i = 1; i < 5; i++)
    {
        if (sensor_values[i] > highest_sensor)
        {
            highest_sensor = sensor_values[i];
        }
    }

    printf("Highest sensor reading = %d\n", highest_sensor);


    /*
     * Example 9: Character array
     *
     * A string in C is actually an array of characters.
     */
    char name[] = "Ravi";

    printf("\nName: %s\n", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("name[%d] = %c\n", i, name[i]);
    }


    return 0;
}