#include <stdio.h>

void add_values(int *restrict result,
                const int *restrict a,
                const int *restrict b,
                int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = a[i] + b[i];
    }
}

int main(void)
{
    int a[] = {10, 20, 30};
    int b[] = {1, 2, 3};
    int result[3];

    add_values(result, a, b, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}

//Remember:
//- restrict is a promise about how the pointed-to objects are accessed.
//- In this example, result, a, and b should refer to non-overlapping array storage.
//- Do not use restrict unless its requirements are satisfied.