#include <stdio.h>
#include <stdlib.h>

int main()
{
    //use initializer list to initialize array
    int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    printf("%-10s%13s\n", "Element", "Value");

    //output contents of array n in tabular format
    for(int i = 0; i < 10; i++){
        printf("%-10d%13d\n", i, n[i]);
    }

    return 0;
}
