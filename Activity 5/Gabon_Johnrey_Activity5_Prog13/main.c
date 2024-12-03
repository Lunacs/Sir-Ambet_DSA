#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10];
    //initialize elements
    for(int i = 0; i < 10; i++){
        n[i] = 0; //set element
    }
    //output contents of array
    printf("Element\t\tValue\n");
    for(int j = 0; j < 10; j++){
        printf("%d\t\t%d\n", j, n[j]);
    }

    return 0;
}
