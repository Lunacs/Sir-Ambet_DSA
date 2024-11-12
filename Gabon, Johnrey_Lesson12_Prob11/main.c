#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    bool isPrime = true;
    printf("Enter a number: ");
    scanf("%d", &limit);
    printf("\n");

    int i, j;
    for(i = 2; i < limit; i++)
    {
        isPrime = true; // Reset isPrime for each i
        for(j = 2; j <= (i/j); j++)
        {
            if(!(i % j)) //if factors are found
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
