#include <stdio.h>
#include <stdlib.h>

void test();
int main()
{
    test();
    test();
    test();

    return 0;
}
void test()
{
    auto int k=10;
    printf("%d\n",k);
    k++;
}
