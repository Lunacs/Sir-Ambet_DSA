#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a[2][2], b[2][2], c[2][2];
    int i, j;

    printf("Enter the elements of 1st matrix\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
        {
            scanf("%f", &a[i][j]);
        }
    printf("Enter the elements of 2nd matrix\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
        {
            scanf("%f", &b[i][j]);
        }
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    system("cls");
    printf("\nSum Of Matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            printf("%.2f\t", c[i][j]);
        printf("\n");
    }
    return 0;
}
