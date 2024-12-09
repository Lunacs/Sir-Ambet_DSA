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
int SizeofTheList() {
    int count = 0;
    NodeEmployer *curr = head;

    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    return count;
}
int main(){
    NodeEmployer* emp1 = (NodeEmployer*)malloc(sizeof(NodeEmployer));
    emp1->id = 1;
    strcpy(emp1->name, "Johnrey Gabon");
    strcpy(emp1->address, "Valenzuela City");
    emp1->next = NULL;

    head = emp1;

    printf("Size of the list: %d\n", SizeofTheList());
    free(emp1);
    return 0;
}
