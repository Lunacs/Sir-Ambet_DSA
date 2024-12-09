#include <stdio.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void push(Stack *stack, int value) {
    if (stack->top < MAX - 1) {
        stack->data[++stack->top] = value;
    } else {
        printf("Stack overflow\n");
    }
}
int pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top--];
    } else {
        printf("Stack underflow\n");
        return -1;
    }
}

void printStack(Stack *stack) {
    printf("Final Stack Contents (Top to Bottom): ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

int main() {
    Stack stack = {.top = -1};
    push(&stack, 5);
    push(&stack, 10);
    pop(&stack);
    push(&stack, 2);
    push(&stack, 5);
    push(&stack, pop(&stack) + pop(&stack));
    pop(&stack);
    push(&stack, 9);
    push(&stack, 1);
    push(&stack, pop(&stack));

    printStack(&stack);

    return 0;
}
