#include <stdio.h>
#include <stdlib.h>
void fun1()
{
    auto int x=0;
    register int y=0;
    static int z=0;
    x++;
    y++;
    z++;
    printf("\n%d %d %d",x,y,z);
}

int main()
{
    fun1();
    fun1();
    return 0;
}
