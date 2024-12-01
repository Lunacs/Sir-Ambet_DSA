#include <stdio.h>

void readArray(int array[2][2][2])
{
    printf("Enter elements for 2x2x2 array:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Enter element at position [%d][%d][%d]: ", i, j, k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }
}
void displayArray(int array[2][2][2])
{
    printf("\nDisplaying 2x2x2 array:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\nLayer %d:\n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d\t", array[i][j][k]);
            }
            printf("\n");
        }
    }
}
int main()
{
    int array[2][2][2];

    readArray(array);
    displayArray(array);

    return 0;
}
