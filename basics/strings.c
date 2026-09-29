#include <stdio.h>
#include <string.h>

int main(void)
{
    /*
     * STRING BASICS
     *
     * C does not have a separate built-in "string" data type.
     *
     * A string is an array of characters ending with:
     *
     * '\0'
     *
     * This is called the null character.
     */


    /*
     * Example 1: Character vs string
     */
    char letter = 'A';          // One character
    char name[] = "Ravi";       // String

    printf("Character: %c\n", letter);
    printf("String: %s\n", name);


    /*
     * Example 2: How the string is stored
     *
     * "Ravi" is actually:
     *
     * R  a  v  i  \0
     *
     * The '\0' tells C where the string ends.
     */
    printf("\nCharacters inside name:\n");

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("name[%d] = %c\n", i, name[i]);
    }


    /*
     * Example 3: strlen()
     *
     * strlen() returns the number of characters,
     * NOT including '\0'.
     */
    printf("\nLength = %zu\n", strlen(name));


    /*
     * Example 4: Copying a string
     *
     * strcpy(destination, source)
     */
    char source[] = "Embedded";
    char destination[20];

    strcpy(destination, source);

    printf("Copied string: %s\n", destination);


    /*
     * Example 5: Comparing strings
     *
     * strcmp() returns:
     *
     * 0  -> strings are equal
     * <0 -> first string is smaller
     * >0 -> first string is greater
     */
    char first[] = "Hello";
    char second[] = "Hello";

    if (strcmp(first, second) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are different\n");
    }


    /*
     * Example 6: Joining strings
     *
     * strcat(destination, source)
     */
    char message[50] = "Hello ";

    strcat(message, "Embedded C");

    printf("Combined string: %s\n", message);


    /*
     * Example 7: Reading a string
     *
     * scanf("%19s", user_name)
     *
     * The 19 prevents scanf() from writing more than
     * 19 characters into our 20-character array.
     */
    char user_name[20];

    printf("\nEnter your name: ");
    scanf("%19s", user_name);

    printf("Hello, %s!\n", user_name);


    /*
     * Example 8: String size
     *
     * sizeof() gives the total array size in bytes.
     *
     * strlen() gives the number of actual characters.
     */
    char word[] = "STM32";

    printf("\nstrlen(word) = %zu\n", strlen(word));
    printf("sizeof(word) = %zu\n", sizeof(word));


    return 0;
}