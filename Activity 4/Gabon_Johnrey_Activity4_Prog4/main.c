#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=20;
    {
        int a=30;
        printf("%d\n",a);
    }
    printf("%d",a);

    return 0;
}
