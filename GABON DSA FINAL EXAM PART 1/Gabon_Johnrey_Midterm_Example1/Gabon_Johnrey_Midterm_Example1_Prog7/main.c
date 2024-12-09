#include <stdio.h>

int main() {
    int *ptr, a[10];
    ptr = &a[0];
    a[0] = 1;
    a[4] = 4;
    a[5] = 4;
    a[6] = 4;
    a[7] = 4;
    a[8] = -5;
    ptr += 6;
    ptr--;
    *ptr = *ptr + a[5];
    printf("%d\n", *ptr); // Outputs 8

    return 0;
}
