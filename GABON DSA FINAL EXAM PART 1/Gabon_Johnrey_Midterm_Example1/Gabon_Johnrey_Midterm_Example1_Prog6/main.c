#include <stdio.h>

int main() {
    int *ptr, a[10], x;
    x = 10;
    a[0] = 1;
    a[5] = 10;
    a[7] = 5;
    ptr = &x;
    printf("%d\n", x); // Outputs 10
    *ptr = *ptr + a[5];
    printf("%d\n", x); // Outputs 20

    return 0;
}
