#include <stdio.h>
#include <stdlib.h>

int countDuplicates(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; // To avoid counting the same element more than once
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicateCount = countDuplicates(arr, size);
    printf("Number of duplicate entries: %d\n", duplicateCount);

    return 0;
}
