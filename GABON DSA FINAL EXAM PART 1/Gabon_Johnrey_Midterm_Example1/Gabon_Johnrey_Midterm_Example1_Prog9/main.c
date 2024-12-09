#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct NodeStudent
{
    int id;
    char name[20];
    int age;
    char address[20];
    struct NodeStudent *next;
};
struct NodeStudent *head = NULL;
int SizeofTheList()
{
    struct NodeStudent *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}
void addNode(int id, const char *name, int age, const char *address)
{
    struct NodeStudent *newNode = (struct NodeStudent*)malloc(sizeof(struct NodeStudent));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->age = age;
    strcpy(newNode->address, address);
    newNode->next = head;
    head = newNode;
}
int main()
{
    addNode(1, "Alice", 20, "123 Main St");
    addNode(2, "Bob", 21, "456 Elm St");
    addNode(3, "Charlie", 22, "789 Oak St");
    printf("Size of the list: %d\n", SizeofTheList());
    return 0;
}
