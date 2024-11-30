#include <stdio.h>
#include <stdlib.h>

int main()
{
    register int a;
    for(; a < 50000; a++)
        printf(" %d\t",a);

    return 0;
}
