#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int item;
    struct Node* next;
} Node;

int main()
{
    printf("Node structure created successfully.\n");
    return 0;
}
