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
    long long square = (long long)num * num;
    int digits = countDigits(num);
    int divisor = (int)pow(10, digits);
    return (square % divisor) == num;
}

int main() {
    int num;
    bool isPositive = true;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Please enter a positive number\n");
        }else isPositive = false;
    } while (!isPositive);

    if (isAutomorphic(num)) {
        printf("%d is an automorphic number\n", num);
    } else {
        printf("%d is not an automorphic number\n", num);
    }

    return 0;
}
