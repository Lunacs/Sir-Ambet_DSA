#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error: Factorial is not defined for negative numbers\n");
    }

    // Calculate factorial
    for(int i = num; i != 0; i--){
        fact *= i;
    }
    printf("Factorial of %d is: %d\n", num, fact);
    return 0;
}
