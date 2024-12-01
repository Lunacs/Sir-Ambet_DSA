#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    printf("Enter a string (max 9 characters):\n");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s\n", str);
    return 0;
}
