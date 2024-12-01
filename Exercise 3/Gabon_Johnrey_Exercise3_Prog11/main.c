#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][3] = {
        {11, 0, 0},
        {12, 13, 0},
        {14, 15, 16},
        {17, 0, 0}
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
