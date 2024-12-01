#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k;
    int row1, col1, row2, col2, row3, col3;
    printf("\nEnter the number of rows in the first matrix: ");
    scanf("%d", &row1);
    printf("\nEnter the number of columns in the first matrix: ");
    scanf("%d", &col1);
    printf("\nEnter the number of rows in the second matrix: ");
    scanf("%d", &row2);
    printf("\nEnter the number of columns in the second matrix: ");
    scanf("%d", &col2);

    if(col1 != row2)
    {
        printf("\nThe number of columns in the first matrix must be equal to the number of rows in the second matrix");
        return 1;
    }
    row3 = row1;
    col3 = col2;
    int mat1[row1+1][col1+1], mat2[row2+1][col2+1], mat3[row3+1][col3+1];
    printf("\nEnter the elements of the first matrix:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col1; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("\nEnter the elements of the second matrix:\n");
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < col2; j++)
            scanf("%d", &mat2[i][j]);
    }
    // Matrix multiplication
    for(i = 0; i < row3; i++)
    {
        for(j = 0; j < col3; j++)
        {
            mat3[i][j] = 0;
            for(k = 0; k < col3; k++)  // Fixed loop condition
                mat3[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    printf("\nThe elements of the product matrix are:\n");
    for(i = 0; i < row3; i++)
    {
        for(j = 0; j < col3; j++)
            printf("\t%d", mat3[i][j]);
        printf("\n");
    }
    return 0;
}
