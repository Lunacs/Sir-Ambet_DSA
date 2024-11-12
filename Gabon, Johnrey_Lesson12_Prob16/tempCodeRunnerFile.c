#include <stdio.h>
#include <stdbool.h>

int main() {
    int numDays;
    bool isValid = true;
    printf("Enter number of days: ");
    scanf("%d", &numDays);
    
    do
    {
        if (numDays < 0)
        {
            printf("Please enter a positive number\n");
        }else isValid = true;
    } while (isValid);

    // Calculate years
    int years = numDays / 365;
    int remainingDays = numDays % 365;
    
    // Calculate weeks from remaining days
    int weeks = remainingDays / 7;
    // Calculate remaining days after weeks
    int days = remainingDays % 7;
    
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days:  %d\n", days);
    
    return 0;
}
