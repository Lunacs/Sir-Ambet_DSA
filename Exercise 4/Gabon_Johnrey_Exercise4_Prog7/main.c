#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mystr_a[10] = "Hello";
    char mystr_b[10] = "Hello";
    if (strcmp(mystr_a, mystr_b ) != 0)
        printf ("Strings are NOT the same.");
    else
        printf( "Strings are the same.");
    return 0;
}
