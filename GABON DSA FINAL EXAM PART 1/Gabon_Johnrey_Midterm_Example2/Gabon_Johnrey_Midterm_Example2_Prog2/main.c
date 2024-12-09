#include <stdio.h>

int main() {
    float A[5][5] = {
        {1, 1, 0, -1},
        {1, 1, 2, -1, 5},
        {1, 1, 0, -1},
        {6, 1, 1, 0, -1},
        {1, 1}
    };

    printf("Array A content:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
