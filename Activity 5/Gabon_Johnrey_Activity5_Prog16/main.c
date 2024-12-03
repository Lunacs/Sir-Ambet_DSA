#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int arraySize = 10;

    int a[] = {1,2,3,4,5,6,7,8,9,10};

    int total = 0;

    // Sum contents of array a
    for (int i = 0; i < arraySize; i++)
    {
        total += a[i];
    }

    printf("Total of array element values is %d\n", total);
    return 0;
}
