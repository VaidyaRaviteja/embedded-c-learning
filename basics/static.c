#include <stdio.h>

/*
    STATIC VARIABLE

    A static variable keeps its value between
    function calls.

    A normal local variable is created again
    each time the function is called.
*/

void counter(void)
{
    /*
        Because count is static:

        - It is initialized only once.
        - Its value is preserved between function calls.
    */
    static int count = 0;

    count++;

    printf("Count = %d\n", count);
}


int main(void)
{
    /*
        Call the same function three times.
    */

    counter();   // Count = 1
    counter();   // Count = 2
    counter();   // Count = 3

    return 0;
}