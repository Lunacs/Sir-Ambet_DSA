#include <stdio.h>
#include <stdlib.h>

void func(int val[]);
int main()
{
    int i, a[6]= {1,2,3,4,5,6};
    func(a);
    printf("\ncontents of array: ");
    for(i=0; i<6; i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;
}
void func(int val[])
{
    int sum=0,i;
    for(i=0; i<6; i++)
    {
        val[i]=val[i]*val[i];
        sum+=val[i];
    }
    printf("the sum of squares: %d", sum);
}
