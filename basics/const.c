#include <stdio.h>

int main(void)
{
    /*
        const means the value should not be changed
        after it has been initialized.
    */

    const int MAX_SPEED = 100;

    printf("Maximum speed: %d\n", MAX_SPEED);

    /*
        The following would cause a compilation error:

        MAX_SPEED = 120;

        Why?
        Because MAX_SPEED was declared as const.
    */


    /*
        const is useful in embedded systems when
        a value should remain fixed.

        Example:
        A sensor's fixed reference voltage.
    */

    const float REFERENCE_VOLTAGE = 3.3f;

    printf("Reference voltage: %.2f V\n",
           REFERENCE_VOLTAGE);


    return 0;
}