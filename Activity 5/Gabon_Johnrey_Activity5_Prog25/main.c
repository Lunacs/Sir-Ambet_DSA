#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 1000

struct listType {
    int listElem[ARRAY_SIZE];
    int listLength;
};

void printList(struct listType list){
    printf("List Length: %d\n", list.listLength);
    printf("List Elements: ");
    for(int i = 0; i < list.listLength; i++){
        printf("%d ", list.listElem[i]);
    }

}
int main()
{
    struct listType myList;
    myList.listLength = 5;
    for(int i = 0; i < myList.listLength; i++){
        myList.listElem[i] = i + 1;
    }
    printList(myList);
    return 0;
}
