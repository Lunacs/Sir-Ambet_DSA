#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    int i, j;
    printf("The elements of 2D array are:\n");
    for(int i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
