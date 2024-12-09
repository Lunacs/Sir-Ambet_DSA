#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int item;
    struct Node* next;
} Node;
Node* head = NULL;
void insertNode(int item) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->item = item;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void displayNode() {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->item);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertNode(5);
    insertNode(8);
    insertNode(15);
    insertNode(100);
    displayNode();

    return 0;
}
