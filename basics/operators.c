#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;

    /* Arithmetic operators */
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    /* Relational operators */
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    /* Logical operators */
    printf("(a > 5) && (b < 5): %d\n", (a > 5) && (b < 5));
    printf("(a < 5) || (b < 5): %d\n", (a < 5) || (b < 5));
    printf("!(a == b): %d\n", !(a == b));

    return 0;
}