#include <stdio.h>
#include <stdlib.h>

void fillMatrix(int n) {
    int matrix[n][n];
    // Fill the matrix according to the specified rules
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = 0; // Diagonal elements
            } else if (i < j) {
                matrix[i][j] = 1; // Upper right triangle
            } else {
                matrix[i][j] = -1; // Lower left triangle
            }
        }
    }
    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    fillMatrix(n);
    return 0;
}
