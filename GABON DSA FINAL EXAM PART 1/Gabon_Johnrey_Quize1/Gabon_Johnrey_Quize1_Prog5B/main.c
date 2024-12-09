#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int item;
    struct Node* next;
    struct Node* prev;
} Node;
Node* head = NULL;
void insertNode(int item) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->item = item;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void insertAfterNode(int target, int item) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        if (temp->item == target) {
            Node* newNode = (Node*)malloc(sizeof(Node));
            newNode->item = item;
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != NULL) {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    }
    printf("Node with item %d not found.\n", target);
}
void removeNode(int item) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = head;
    // If head node is to be removed
    if (head->item == item) {
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
        return;
    }
    // Remove non-head node
    while (temp != NULL) {
        if (temp->item == item) {
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            }
            free(temp);
            return;
        }
        temp = temp->next;
    }
    printf("Node %d not found.\n", item);
}
void displayNode() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->item);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertNode(5);
    insertNode(10);
    insertNode(100);
    printf("Before removal:\n");
    displayNode();

    removeNode(100);

    printf("After removing 100:\n");
    displayNode();
    return 0;
}
