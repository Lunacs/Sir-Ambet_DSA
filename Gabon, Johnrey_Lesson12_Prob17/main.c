#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int num;
    bool isValid = false;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num < 0) //input validation
        {
            printf("Please enter a positive number!\n");
        }
        else isValid = true;
    }while (!isValid);

    // Store original number for comparison
    int originalNum = num;
    int sum = 0;

    // Calculate sum of cubes of each digit
    while (num > 0) {
        int digit = num % 10;
        sum += (digit * digit * digit);
        num /= 10;
    }
    // Check if Armstrong number
    printf("%d is %san Armstrong number!\n", originalNum, sum == originalNum ? "" : "NOT ");
    return 0;
}
