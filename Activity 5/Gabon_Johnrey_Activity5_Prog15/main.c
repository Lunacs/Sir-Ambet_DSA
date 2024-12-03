#include <stdio.h>
#include <stdlib.h>

int main()
{
    //constant variable can be used to specify array size
    const int arraySize = 10;

    int s[arraySize];
    // Set the values
    for (int i = 0; i < arraySize; i++) {
        s[i] = 2 * i;
    }

    // Output column headers
    printf("%-10s%13s\n", "Element", "Value");

    // Output contents of array s in tabular format
    for (int j = 0; j < arraySize; j++) {
        printf("%7d%13d\n", j, s[j]);
    }
    return 0;
}
