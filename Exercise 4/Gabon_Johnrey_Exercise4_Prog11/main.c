#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mystr[] = "This is a simple string";
    char *pch = strstr(mystr, "simple");

    if(pch != NULL){
        printf("The substring 'simple' starts at index: %ld\n", pch - mystr);
    }else{
        printf("Substring not found!\n");
    }
    return 0;
}
