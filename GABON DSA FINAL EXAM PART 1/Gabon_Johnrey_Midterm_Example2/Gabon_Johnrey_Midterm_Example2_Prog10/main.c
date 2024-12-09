#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NodeEmployer {
    int id;
    char name[20];
    int age;
    char address[20];
    struct NodeEmployer *next;
} NodeEmployer;

NodeEmployer *head = NULL;
void AddEmployer(int id, char *name, int age, char *address) {
    NodeEmployer *newNode = (NodeEmployer *)malloc(sizeof(NodeEmployer));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->age = age;
    strcpy(newNode->address, address);
    newNode->next = head;
    head = newNode;
}
int SizeofTheList() {
    int count = 0;
    NodeEmployer *curr = head;

    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    return count;
}

void DisplayNames() {
    NodeEmployer *curr = head;

    printf("Employers with age > 60:\n");
    while (curr != NULL) {
        if (curr->age > 60) {
            printf("%s\n", curr->name);
        }
        curr = curr->next;
    }
}

int main() {

    AddEmployer(1, "Michael", 62, "Bignay");
    AddEmployer(2, "Gabriel", 99, "Karuhatan");
    AddEmployer(3, "Andrew", 18, "Malinta");

    printf("Total number of employers: %d\n", SizeofTheList());
    DisplayNames();

    return 0;
}
