#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    char str[10],ch;
    printf("Enter a string (max 9 characters:)\n");
    while(i < 9 && (ch = getchar()) != '\n' && ch != EOF)
    {
        str[i] = ch; // store the read character in str
        i++;
    }
    str[i]='\0'; // terminate str with null character
    printf("You entered: %s\n", str);
    return 0;
}
