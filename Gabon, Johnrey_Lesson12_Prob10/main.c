#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number", num);
    }

    for(int i = 2; i <= num/2 && isPrime; i++) {
        if(num % i == 0) {
            isPrime = false;
        }
    }

    printf("%d is %sa prime number", num, isPrime ? "" : "NOT ");
    return 0;
}
