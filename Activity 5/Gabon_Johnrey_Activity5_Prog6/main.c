#include <stdio.h>
#include <stdlib.h>

void interchangeLargestSmallest(int arr[], int size) {
    int i, maxIndex = 0, minIndex = 0;
    // Find the index of the largest and smallest elements
    for (i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    // Swap the largest and smallest elements
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, size);

    interchangeLargestSmallest(arr, size);
    printf("Array after interchanging largest and smallest elements: \n");
    printArray(arr, size);

    return 0;
}
