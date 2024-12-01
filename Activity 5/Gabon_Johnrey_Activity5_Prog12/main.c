#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLS 2
void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void calculateResult(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS], int X, int Y) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = X * A[i][j] + Y * B[i][j];
        }
    }
}
int main() {
    int A[ROWS][COLS] = {{1, 2}, {3, 4}};
    int B[ROWS][COLS] = {{5, 6}, {7, 8}};
    int result[ROWS][COLS];

    int X = 2;
    int Y = 3;
    calculateResult(A, B, result, X, Y);

    printf("Matrix A:\n");
    printMatrix(A);
    printf("Matrix B:\n");
    printMatrix(B);
    printf("Resultant Matrix (XA + YB):\n");
    printMatrix(result);
    return 0;
}
