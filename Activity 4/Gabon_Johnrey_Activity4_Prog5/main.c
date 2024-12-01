#include <stdio.h>
#include <stdlib.h>

int sumdigit(int n) {
    static int sum;  // Maintains running total across recursive calls
    int p = n % 10;  // Get last digit
    int q = (n-p)/10;  // Get remaining digits
    sum = sum + p;  // Add current digit to sum

    if(q != 0)
        sumdigit(q);  // Recurse with remaining digits
    return sum;  // Return final sum
}

int main() {
    int m = sumdigit(25634);
    printf("\n%d", m);
    return 0;
}
