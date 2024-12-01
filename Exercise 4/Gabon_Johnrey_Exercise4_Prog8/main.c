#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fname[30]= {"bob"};
    char lname[]= {"by"};
    printf("%s", strcat(fname,lname));
    return 0;
}
