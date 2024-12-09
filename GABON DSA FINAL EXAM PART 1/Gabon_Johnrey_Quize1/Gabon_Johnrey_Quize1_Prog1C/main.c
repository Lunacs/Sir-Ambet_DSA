#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int item;
    struct Node* next;
} Node;
struct Node* head;

int main()
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->item = 20;
    newNode->next = NULL;

    head = newNode;

    printf("Head node created: Item = %d, Next = %p\n", head->item,  head->next);
    return 0;
}
