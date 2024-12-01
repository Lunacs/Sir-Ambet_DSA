#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3],i;
    for(i=0; i<=2; i++) //Reading the array values
    {
        printf("Enter the elements #%d: ", i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<=2; i++) //display the array values
    {
        printf("%d",a[i]);
        printf("\n");
    }

    return 0;
}
