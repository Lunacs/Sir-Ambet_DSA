#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fname[30] = "bob";
    int length = strlen(fname);
    printf("The length of the string \"%s\" is : %d\n",
           fname, length);
    return 0;
}
