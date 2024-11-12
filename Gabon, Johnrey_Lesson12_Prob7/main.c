#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);
    printf("-------------------------\n");

    for(int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
