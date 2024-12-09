#include <stdio.h>

int main() {
    int A[100][20];
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 20; j++) {
            A[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
