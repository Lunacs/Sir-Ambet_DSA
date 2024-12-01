#include <stdio.h>

int main()
{
    int a[4][5];
    int value = 1;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            a[i][j] = value++;
        }
    }
    printf("The elements of the 2D array are:\n");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
