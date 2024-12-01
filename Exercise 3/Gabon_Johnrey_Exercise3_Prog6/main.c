#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[4] = {10, 20, 30, 40};
    for (i = 0; i < 4; i++){
        array[i]++;
    }

    for (i = 0; i < 4; i++){
        printf("%d\t", array[i]);
    }

    return 0;
}
