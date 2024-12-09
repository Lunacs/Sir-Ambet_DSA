#include <stdio.h>

int main() {
    int A[100];
    int x1, x2;
    for (int i = 0; i < 100; i++) {
        A[i] = i + 1;
    }
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Values between %d and %d:\n", x1, x2);
    for (int i = 0; i < 100; i++) {
        if (A[i] >= x1 && A[i] <= x2) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    return 0;
}
