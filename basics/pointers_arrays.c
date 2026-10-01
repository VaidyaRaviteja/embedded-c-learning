#include <stdio.h>

void print_array(int *ptr, int size);
void double_values(int *ptr, int size);

int main(void)
{
    /*
     * POINTERS + ARRAYS
     *
     * An array stores elements next to each other in memory.
     *
     * int numbers[3] = {10, 20, 30};
     *
     * numbers
     *   |
     *   +--> numbers[0] = 10
     *   +--> numbers[1] = 20
     *   +--> numbers[2] = 30
     *
     * In most expressions, the array name represents the
     * address of its first element.
     */

    int numbers[3] = {10, 20, 30};

    /*
     * Example 1: Array indexing
     */
    printf("numbers[0] = %d\n", numbers[0]);
    printf("numbers[1] = %d\n", numbers[1]);
    printf("numbers[2] = %d\n", numbers[2]);


    /*
     * Example 2: Pointer to the first element
     */
    int *ptr = numbers;

    printf("\nUsing pointer:\n");
    printf("*ptr       = %d\n", *ptr);
    printf("*(ptr + 1) = %d\n", *(ptr + 1));
    printf("*(ptr + 2) = %d\n", *(ptr + 2));


    /*
     * Example 3: Pointer arithmetic
     *
     * ptr + 1 does NOT necessarily mean one byte forward.
     *
     * Because ptr is an int pointer, ptr + 1 moves to
     * the next int element.
     */
    printf("\nPointer addresses:\n");
    printf("ptr     = %p\n", (void *)ptr);
    printf("ptr + 1 = %p\n", (void *)(ptr + 1));
    printf("ptr + 2 = %p\n", (void *)(ptr + 2));


    /*
     * Example 4: Modifying an array through a pointer
     */
    *(ptr + 1) = 200;

    printf("\nAfter modification:\n");
    printf("numbers[1] = %d\n", numbers[1]);


    /*
     * Example 5: sizeof array
     *
     * sizeof(numbers) gives the total size of the entire array.
     */
    printf("\nArray size = %zu bytes\n", sizeof(numbers));
    printf("One element = %zu bytes\n", sizeof(numbers[0]));

    int element_count = sizeof(numbers) / sizeof(numbers[0]);

    printf("Number of elements = %d\n", element_count);


    /*
     * Example 6: Pass an array to a function
     *
     * When an array is passed to a function, the function receives
     * access to the original array through a pointer.
     */
    printf("\nArray from function:\n");

    print_array(numbers, element_count);


    /*
     * Example 7: Modify array inside a function
     *
     * Because the function receives the address of the array data,
     * changes made inside the function affect the original array.
     */
    double_values(numbers, element_count);

    printf("\nAfter doubling values:\n");

    print_array(numbers, element_count);


    /*
     * Example 8: Embedded-style buffer
     *
     * A buffer is simply a memory area used to temporarily hold data.
     *
     * This type of array is commonly used for UART, SPI, I2C,
     * sensor data, communication packets, etc.
     */
    unsigned char rx_buffer[5] = {10, 20, 30, 40, 50};

    unsigned char *rx_ptr = rx_buffer;

    printf("\nUART-style buffer example:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Buffer[%d] = %u\n", i, *(rx_ptr + i));
    }


    return 0;
}


/*
 * Function: print_array
 *
 * ptr  -> address of first array element
 * size -> number of elements
 */
void print_array(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
}


/*
 * Function: double_values
 *
 * This modifies the original array because ptr points
 * to the original array data.
 */
void double_values(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(ptr + i) = *(ptr + i) * 2;
    }
}