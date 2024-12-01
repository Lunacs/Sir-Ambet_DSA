#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    printf("Enter a string (max 9 characters):\n");
    scanf("%9s", str);
    printf("You entered: %s\n", str);
    return 0;
}
