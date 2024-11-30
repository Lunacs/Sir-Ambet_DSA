#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4][5];
    //a) Reading values in a
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //b) Displaying values of a
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
