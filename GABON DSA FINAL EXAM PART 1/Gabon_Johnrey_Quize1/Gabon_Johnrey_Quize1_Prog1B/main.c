#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int item;
    struct Node* next;
} Node;

int main()
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->item = 20;
    newNode->next = NULL;

    printf("First node created: Item = %d, Next = %p\n", newNode->item,  newNode->next);
    return 0;
}
