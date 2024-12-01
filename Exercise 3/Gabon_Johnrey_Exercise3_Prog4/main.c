#include <stdio.h>
#include <stdlib.h>

extern int n;
extern void hello();

int main()
{
    printf("%d\n", n);
    hello();

    return 0;
}
