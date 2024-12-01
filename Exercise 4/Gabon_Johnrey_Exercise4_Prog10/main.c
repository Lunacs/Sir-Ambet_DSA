#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mystr[] = "This is a simple string";
    char *pch = strchr(mystr, 's');

    if(pch != NULL){
        printf("The first occurence of 's' is at index: %ld\n", pch - mystr);
    }else{
        printf("Character not found in the string!\n");
    }
    return 0;
}
