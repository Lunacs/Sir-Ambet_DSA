#include <stdio.h>

int main()
{
    // Method 1: Direct initialization during declaration
    char vowels1[] = "AEIOU";

    // Method 2: Character array initialization followed by assignment
    char vowels2[6];
    vowels2[0] = 'A';
    vowels2[1] = 'E';
    vowels2[2] = 'I';
    vowels2[3] = 'O';
    vowels2[4] = 'U';
    vowels2[5] = '\0'; // Null terminator

    // Print both arrays to verify
    printf("Method 1: %s\n", vowels1);
    printf("Method 2: %s\n", vowels2);

    return 0;
}
