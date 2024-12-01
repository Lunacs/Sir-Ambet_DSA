#include <stdio.h>
#include <stdlib.h>
void sumArray(int arr[], int n, int *sum)
{
    printf("Sum of elements: ");
    for(int i = 0; i < n; i++)
    {
        *sum += arr[i];
    }
    printf("%d", *sum);
}
int main()
{
    int n, sum = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sumArray(arr, n,&sum);
    return 0;
}
