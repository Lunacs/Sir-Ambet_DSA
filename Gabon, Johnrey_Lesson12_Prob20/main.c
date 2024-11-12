#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userInput, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &userInput);

    // Keep reducing number until it's single digit (generic root)
    while (userInput >= 10)
    {
        sum = 0; // Reset sum for each iteration

        // Extract and sum all digits of current number
        while (userInput != 0)
        {
            digit = userInput % 10; // Get rightmost digit
            sum += digit;           // Add to running sum
            userInput /= 10;        // Remove rightmost digit
        }
        userInput = sum; // Update number to sum of its digits
    }

    // At this point, userInput is single digit (generic root)
    printf("Generic root: %d\n", userInput);
    return 0;
}
