#include <stdio.h>

int main(void)
{
    int age;
    float height;
    char grade;
    char name[20];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your name: ");
    scanf("%19s", name);

    printf("\n--- Details ---\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    return 0;
}