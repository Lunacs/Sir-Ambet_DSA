#include <stdio.h>
#include <stdbool.h>

int reverseNumber(int num)
{
    int reverse = 0;

    // Special cases
    if (num < 0)
        return 0;
    if (num == 0 || num == 1)
        return num;

    while (num != 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return reverse;
}

int main()
{
    int userInput;
    bool isValid = false;
    do
    {
        printf("Enter a magic number: ");
        scanf("%d", &userInput);
        if (userInput < 0) // input validation
        {
            printf("Please enter a positive number!\n");
        }
        else
            isValid = true;
    } while (!isValid);

    // Calculate sum of digits
    int temp = userInput;
    int sum = 0;

    while (temp != 0)
    {
        sum += temp % 10; // Add last digit to sum
        temp /= 10;       // Remove last digit
    }
    // Check if it's a magic number
    if (reverseNumber(sum) * sum == userInput) printf("%d is a magic number!\n", userInput);
    else printf("%d is NOT a magic number!\n", userInput);

    return 0;
}
