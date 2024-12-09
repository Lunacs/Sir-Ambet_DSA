#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void push(Stack *stack, int value) {
    stack->data[++stack->top] = value;
}

int pop(Stack *stack) {
    return stack->data[stack->top--];
}

int evaluatePostfixExpression() {
    Stack stack = {.top = -1};
    // New postfix expression: 2 5 4 + 3 * + 1 +
    char expression[] = "254+3*+1+";
    int i = 0;

    while (expression[i] != '\0') {
        char ch = expression[i];
        if (ch >= '0' && ch <= '9') {
            push(&stack, ch - '0');
        } else {
            int b = pop(&stack);
            int a = pop(&stack);
            switch (ch) {
                case '+': push(&stack, a + b); break;
                case '-': push(&stack, a - b); break;
                case '*': push(&stack, a * b); break;
                case '/': push(&stack, a / b); break;
            }
        }
        i++;
    }

    return pop(&stack); // Return final result directly
}

int main() {
    printf("Result: %d\n", evaluatePostfixExpression());
    return 0;
}
