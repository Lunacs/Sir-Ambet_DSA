#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NodeStudent {
    int id;
    char name[20];
    int age;
    char address[20];
    struct NodeStudent *next;
};

struct NodeStudent *head = NULL;

void DisplayNames(int minAge, int maxAge) {
    struct NodeStudent *curr = head;

    while (curr != NULL) {
        if (curr->age >= minAge && curr->age <= maxAge) {
            printf("%s\n", curr->name);
        }
        curr = curr->next;
    }
}

void addNode(int id, const char *name, int age, const char *address) {
    struct NodeStudent *newNode = (struct NodeStudent*)malloc(sizeof(struct NodeStudent));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->age = age;
    strcpy(newNode->address, address);
    newNode->next = head;
    head = newNode;
}

int main() {
    addNode(1, "Alice", 20, "123 Main St");
    addNode(2, "Bob", 25, "456 Elm St");
    addNode(3, "Charlie", 28, "789 Oak St");
    addNode(4, "David", 30, "101 Pine St");
    addNode(5, "Eve", 22, "202 Maple St");

    printf("Names of students aged between 24 and 30:\n");
    DisplayNames(24, 30);

    return 0;
}
