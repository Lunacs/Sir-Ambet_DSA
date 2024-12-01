#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char str[20];
    printf("\nEnter a string:\n");
    fgets(str, sizeof(str), stdin);
    printf("The string is:\n");
    puts(str);
    getch();
    return 0;
}
