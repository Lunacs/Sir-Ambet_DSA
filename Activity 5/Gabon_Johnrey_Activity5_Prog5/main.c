#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
        {
            return mid;
        } // If target is greater, ignore left half
        else if (arr[mid] < target)
        {
            left = mid + 1;
        } // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    // Target is not present in array
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element is present at index %d\n", result);
    else
        printf("Element is not present in array\n");

    return 0;
}