#include <stdio.h>

int main(void)
{
    int sensor_value = 25;

    int *ptr = &sensor_value;  // Store the variable's address

    printf("Before: %d\n", sensor_value);

    *ptr = 50;  // Modify the value through the pointer

    printf("After: %d\n", sensor_value);

    return 0;
}



//Output:
//Before: 25
//After: 50


//Understand the key line
//*ptr = 50;
//- ptr stores the address of sensor_value.
//- *ptr accesses the value at that address.
//- Assigning 50 through *ptr changes sensor_value to 50.
//Remember: Changing *ptr changes the original variable when the pointer points to that variable.

