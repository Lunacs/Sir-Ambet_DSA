#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[20]; // reserves 20 characters
    char string2[] = "string literal"; // reserves 15 characters

    // Read string from user into array string1
    printf("Enter the string \"hello there\": ");
    scanf("%19s", string1); // reads "hello" [space terminates input]
    // Output strings
    printf("string1 is: %s\n", string1);
    printf("string2 is: %s\n", string2);
    // Print string1 with spaces between characters
    printf("string1 with spaces between characters is:\n");
    for (int i = 0; string1[i] != '\0'; i++)
    {
        printf("%c ", string1[i]);
    }
    printf("\n");

    scanf("%s", &string1);// reads "there"
    printf("string1 is: %s\n", string1);

    return 0; // indicates successful termination
}
