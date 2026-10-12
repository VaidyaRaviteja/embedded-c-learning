#include <stdio.h>   // Includes standard I/O declarations

#define MAX_SPEED 100
#define SQUARE(x) ((x) * (x))

int main(void)
{
    // #define creates a macro
    printf("Max speed: %d\n", MAX_SPEED);

    // Function-like macro
    printf("Square of 5: %d\n", SQUARE(5));

#ifdef MAX_SPEED
    // Compiled only if MAX_SPEED is defined
    printf("MAX_SPEED is defined\n");
#endif

#ifndef DEBUG
    // Compiled only if DEBUG is NOT defined
    printf("Debug mode is disabled\n");
#endif

    return 0;
}