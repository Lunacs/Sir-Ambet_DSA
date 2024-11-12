#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Input validation
    if (num1 == 0 && num2 == 0)
    {
        printf("HCF is undefined for both numbers being zero\n");
        return 1;    }

    int a = num1;
    int b = num2;
    // Repeatedly divide numbers and take remainder until remainder is zero
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // At this point, 'a' contains the HCF
    printf("The highest common factor of %d and %d is %d\n", num1, num2, a);
    return 0;
}
