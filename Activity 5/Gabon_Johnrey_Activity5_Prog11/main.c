#include <stdio.h>
#include <stdlib.h>

int validateDimensions(int rows, int cols)
{
    if (rows != cols)
    {
        printf("Matrix must be square to have a main diagonal.\n");
        return 0;
    }
    return 1;
}
void readMatrix(int rows, int cols, int matrix[rows][cols])
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
int calculateSumAboveDiagonal(int rows, int cols, int matrix[rows][cols])
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}
int main()
{
    int rows, cols;
    printf("Enter the dimensions of the matrix (rows columns): ");
    scanf("%d %d", &rows, &cols);
    if (!validateDimensions(rows, cols))
    {
        return 1;
    }
    int matrix[rows][cols];
    readMatrix(rows, cols, matrix);
    int sum = calculateSumAboveDiagonal(rows, cols, matrix);
    printf("Sum of the elements above the main diagonal: %d\n", sum);
    return 0;
}
