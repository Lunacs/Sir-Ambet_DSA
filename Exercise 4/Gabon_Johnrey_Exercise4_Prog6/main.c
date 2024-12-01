#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mystr[10];
    strcpy(mystr, "Hello");

    printf("String copied to mystr: %s\n", mystr);
    return 0;
}
