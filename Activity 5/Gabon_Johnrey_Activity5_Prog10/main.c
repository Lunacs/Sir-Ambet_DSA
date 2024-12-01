#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void calculateStatistics(int arr[], int size, double *sum, double *mean, double *variance, double *std_dev) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += arr[i];
    }
    *mean = *sum / size;
    *variance = 0;
    for (int i = 0; i < size; i++) {
        *variance += pow(arr[i] - *mean, 2);
    }
    *variance /= size;
    *std_dev = sqrt(*variance);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    double sum, mean, variance, std_dev;

    calculateStatistics(arr, size, &sum, &mean, &variance, &std_dev);
    printf("Sum: %.2f\n", sum);
    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", std_dev);
    return 0;
}
