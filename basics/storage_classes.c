#include <stdio.h>

/* Global variable: accessible throughout this file */
int global_value = 100;

/* Static global: accessible only within this source file */
static int file_value = 200;

void counter(void)
{
    /* Retains its value between function calls */
    static int count = 0;

    count++;
    printf("Count: %d\n", count);
}

int main(void)
{
    /* Local variable: accessible inside main() */
    int local_value = 10;

    /* auto is the default for ordinary local variables */
    auto int number = 20;

    /* register is a hint; compiler may ignore it */
    register int index = 1;

    printf("Global: %d\n", global_value);
    printf("File static: %d\n", file_value);
    printf("Local: %d\n", local_value);
    printf("Auto: %d\n", number);
    printf("Register: %d\n", index);

    counter();
    counter();
    counter();

    return 0;
}


//Keyword	    Meaning
//auto	        Default storage class for ordinary local variables
//register	    Hint that a variable may benefit from fast access
//static	    Preserves a local variable's value between calls; at file scope, limits name visibility to that source file
//extern	    Declares a variable or function defined elsewhere

