#include <stdio.h>
#define MAX 10

int front = 0, rear = 0, ch, i;
int q[MAX], ele;

void Insert() {
    if (rear == MAX) {
        printf("\nQueue is full\n");
    } else {
        printf("\nEnter an element: ");
        scanf("%d", &ele);
        q[rear] = ele;
        rear++;
        printf("\nElement inserted successfully\n");
    }
}
void Delete() {
    if (front == rear) {
        printf("\nQueue is empty\n");
    } else {
        ele = q[front];
        front++;
        printf("The deleted element is: %d\n", ele);
    }
}
void Display() {
    if (front == rear) {
        printf("\nQueue is empty\n");
    } else {
        printf("\nThe elements in the queue are: ");
        for (i = front; i < rear; i++) {
            printf("%d ", q[i]);
        }
        printf("\n");
    }
}
int main() {
    int flag = 1;
    do {
        printf("\n*** MENU ***");
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: Insert(); break;
            case 2: Delete(); break;
            case 3: Display(); break;
            case 4: flag = 0; break;
            default: printf("Enter a correct choice\n");
        }
    } while (flag);

    return 0;
}
