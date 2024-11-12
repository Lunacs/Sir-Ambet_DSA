#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// Function to count digits in a number
int countDigits(int num) {
    int count = 0;
    do {
        count++;
        num /= 10;
    } while(num != 0);
    return count;
}

// Function to check if number is automorphic
int isAutomorphic(int num) {
    long square = (long)num * num;
    int digits = countDigits(num);
    int divisor = (int)pow(10, digits);
    return (square % divisor) == num;
}

int main() {
    int num;
    bool isPositive = false;

    // Input validation loop - continues until a positive number is entered
    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        // Check if number is negative
        if (num < 0) {
            printf("Please enter a positive number\n");
        } else {
            isPositive = true;
        }
    } while (!isPositive);

    // Check if number is automorphic
    if (isAutomorphic(num)) {
        printf("%d is an automorphic number!\n", num);
    } else {
        printf("%d is NOT an automorphic number!\n", num);
    }

    return 0;
}
