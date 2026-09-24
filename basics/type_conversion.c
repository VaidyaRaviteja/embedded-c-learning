#include <stdio.h>

int main(void)
{
    /* 1. Implicit conversion: int -> float */
    int num = 10;
    float result = num;

    printf("Implicit int to float: %.2f\n", result);


    /* 2. Explicit conversion: float -> int */
    float temperature = 25.75f;
    int temp_int = (int)temperature;

    printf("Explicit float to int: %d\n", temp_int);


    /* 3. Integer division */
    int a = 10;
    int b = 3;

    printf("Integer division: %d\n", a / b);


    /* 4. Floating-point division */
    float division = (float)a / b;

    printf("Floating-point division: %.2f\n", division);


    /* 5. char -> int */
    char letter = 'A';
    int ascii_value = letter;

    printf("Character: %c\n", letter);
    printf("ASCII value: %d\n", ascii_value);


    /* 6. int -> char */
    int value = 66;
    char character = (char)value;

    printf("Integer: %d\n", value);
    printf("Character: %c\n", character);


    /* 7. Mixed data types */
    int x = 5;
    float y = 2.5f;

    float sum = x + y;

    printf("Mixed int + float: %.2f\n", sum);


    /* 8. Explicit conversion in calculation */
    int marks = 85;
    int total = 100;

    float percentage = ((float)marks / total) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}