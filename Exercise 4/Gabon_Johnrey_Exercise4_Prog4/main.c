#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    char str[10] = "Hello";
    printf("Printing the string character by character:\n");
    while(str[i] != '\0'){
        putchar(str[i]);
        i++;
    }
    printf("\n");
    return 0;
}
