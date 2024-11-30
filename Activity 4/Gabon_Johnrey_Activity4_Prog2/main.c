#include <stdio.h>
#include <stdlib.h>

int fun1(int a)
{
    static int b=2;
    int c=3;
    b=a+b;
    return(a+b+c);
}
int main()
{

    int i,j;
    for(i=1; i<5; i++)
    {
        j=fun1(i);
        printf("\n%d",j);
    }
    return 0;
}
