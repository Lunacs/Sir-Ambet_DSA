#include <stdio.h>

int main() {
    int A[10] = {45, 5, 89, 6, 999, 90, 43, 22, 0, 2};
    int v, found = 0;
    printf("Enter a value to search: ");
    scanf("%d", &v);

    for (int i = 0; i < 10; i++) {
        if (A[i] == v) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
