#include <stdio.h>

int main() {
    int *ptr, a[10], x;
    x = 10;
    a[0] = -1;
    a[5] = -5;
    a[7] = 15;
    ptr = &x;

    printf("%d\n", x);
    *ptr = *ptr + a[5];
    printf("%d\n", x);

    return 0;
}
