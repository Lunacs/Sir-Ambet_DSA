#include <stdio.h>
int main()
{
    int a[2][4][3] =
    {
        {
            {1, 2, 3},
            {4, 5, 6},
            {6, 7, 8},
            {9, 10, 11}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18},
            {19, 20, 21}
        }

    };
    //print the array
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                printf("a[%d][%d][%d] = %d\n", i, j, k, a[i][j][k]);
            }
        }
    }
    return 0;
}
