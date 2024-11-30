#include <stdio.h>
#include <stdlib.h>

int main()
{
    static int a = 6;
    printf("\na=%d",a--);
    if(a!=0)
        main();

    return 0;
}
