#include <stdio.h>

int main(void)
{
    /*
     * POINTER BASICS
     *
     * A pointer is a variable that stores the MEMORY ADDRESS
     * of another variable.
     *
     * Example:
     *
     * int number = 10;
     *
     * int *ptr;
     *
     * ptr = &number;
     *
     * &number -> address of number
     * ptr     -> stores that address
     * *ptr    -> value stored at that address
     */


    /*
     * Example 1: Normal variable
     */
    int number = 10;

    printf("Value of number: %d\n", number);


    /*
     * Example 2: Get the address using &
     */
    printf("Address of number: %p\n", (void *)&number);


    /*
     * Example 3: Pointer variable
     */
    int *ptr = &number;

    printf("Address stored in ptr: %p\n", (void *)ptr);


    /*
     * Example 4: Dereferencing *
     *
     * *ptr means:
     *
     * "Go to the address stored in ptr
     *  and get the value stored there."
     */
    printf("Value using ptr: %d\n", *ptr);


    /*
     * Example 5: Modify a variable through a pointer
     */
    *ptr = 25;

    printf("Number after modification: %d\n", number);


    /*
     * Example 6: Pointer and another variable
     */
    int value = 50;
    int *value_ptr = &value;

    printf("\nValue: %d\n", value);
    printf("Value using pointer: %d\n", *value_ptr);

    *value_ptr = 100;

    printf("Value after pointer modification: %d\n", value);


    /*
     * Example 7: Pointer with a function
     *
     * A function normally receives a copy of a variable.
     *
     * Using a pointer allows the function to access and
     * modify the original variable.
     */
    int count = 10;

    void increment(int *p);

    increment(&count);

    printf("\nCount after function: %d\n", count);


    /*
     * Example 8: Array and pointer
     *
     * The array name represents the address of its first element
     * in most expressions.
     */
    int numbers[3] = {10, 20, 30};

    int *array_ptr = numbers;

    printf("\nFirst array element: %d\n", *array_ptr);
    printf("Second array element: %d\n", *(array_ptr + 1));
    printf("Third array element: %d\n", *(array_ptr + 2));


    /*
     * Example 9: Embedded-style example
     *
     * A pointer can be used when a function needs to modify
     * a value supplied by another part of the program.
     */
    int sensor_value = 500;

    void update_sensor(int *sensor);

    update_sensor(&sensor_value);

    printf("\nUpdated sensor value: %d\n", sensor_value);


    return 0;
}


/*
 * Function definitions
 */

void increment(int *p)
{
    (*p)++;
}


void update_sensor(int *sensor)
{
    *sensor = *sensor + 50;
}