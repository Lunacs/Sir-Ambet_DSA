#include <stdio.h>

int main() {
    printf("Pythagorean triplets up to 100:\n");
    printf("a\tb\tc\n");
    printf("------------------\n");
    
    // Outer loop for 'a' side
    for(int a = 1; a <= 100; a++) {
        // Start 'b' from 'a' to avoid duplicates
        for(int b = a; b <= 100; b++) {
            // 'c' must be larger than both 'a' and 'b'
            for(int c = b; c <= 100; c++) {
                // Check if it forms a Pythagorean triplet
                if (a*a + b*b == c*c) {
                    printf("%d\t%d\t%d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}
