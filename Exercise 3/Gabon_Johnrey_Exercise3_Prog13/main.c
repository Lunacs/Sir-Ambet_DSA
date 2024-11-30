#include <stdio.h>
#include <stdlib.h>


int main()
{
    int d[5];
    int i;
    for(i=0; i<5; i++)
    {
        d[i]=i;
    }
    for(i=0; i<5; i++)
    {
        printf("value in array %d: %d\n",i,d[i]);
    }
    return 0;
}
