#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("    Multiplication Table (1-12)\n");
    printf("--------------------------------\n");
    
    // Print header row
    printf("    ");
    for(int i = 1; i <= 12; i++) {
        printf("%5d", i);
    }
    printf("\n\n");
    
    // Print multiplication table
    for(int i = 1; i <= 12; i++) {
        printf("%-3d|", i);  // Row header
        for(int j = 1; j <= 12; j++) {
            printf("%5d", i * j);
        }
        printf("\n");
    }
    
    return 0;
}
