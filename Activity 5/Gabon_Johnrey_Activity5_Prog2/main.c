#include <stdio.h>
#include <stdlib.h>
void printHistogram(int array[], int size, int max)
{
    int i, j;
    printf("\nHistogram:\n\n");
    // Print bars vertically
    for (i = max; i > 0; i--){
        printf("%2d |", i);
        for (j = 0; j < size; j++){
            if (array[j] >= i){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    // Print bottom line
    printf("   ");
    for (i = 0; i < size; i++){
        printf("---");
    }
    printf("\n   ");
    // Print indices
    for (i = 0; i < size; i++){
        printf(" %d ", i + 1);
    }
    printf("\n");
}
int main()
{
    int array[50], n, i, max = 0;
    // Clear screen
    system("cls");
    // Input array size
    printf("Enter number of elements (max 50): ");
    scanf("%d", &n);
    if (n <= 0 || n > 50){
        printf("Invalid array size!\n");
        return 1;
    }
    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
        if (array[i] > max){
            max = array[i];
        }
    }
    printHistogram(array, n, max);
    return 0;
}
