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
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}
void insertAfterNode(int target, int item) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = head;
    do {
        if (temp->item == target) {
            Node* newNode = (Node*)malloc(sizeof(Node));
            newNode->item = item;
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != head);
    printf("Node with item %d not found.\n", target);
}
void displayNode() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = head;
    do {
        printf("%d -> ", temp->item);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}
int main() {
    insertNode(20);
    insertNode(40);
    insertNode(100);
    //Inserted node 30 after 20
    insertAfterNode(20, 30);
    displayNode();

    return 0;
}
