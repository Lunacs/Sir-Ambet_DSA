#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char data[MAX];
    int top;
} Stack;

void push(Stack *stack, char value) {
    stack->data[++stack->top] = value;
}

char pop(Stack *stack) {
    return stack->data[stack->top--];
}

int precedence(char operator) {
    switch (operator) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        default: return 0;
    }
}

void infixToPostfix(char *infix) {
    Stack stack = {.top = -1};
    char postfix[MAX];
    int k = 0;

    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        if (ch >= '0' && ch <= '9') {
            postfix[k++] = ch;
        } else if (ch == '(') {
            push(&stack, ch);
        } else if (ch == ')') {
            while (stack.data[stack.top] != '(') {
                postfix[k++] = pop(&stack);
            }
            pop(&stack); // Pop '('
        } else {
            while (stack.top != -1 && precedence(stack.data[stack.top]) >= precedence(ch)) {
                postfix[k++] = pop(&stack);
            }
            push(&stack, ch);
        }
    }

    while (stack.top != -1) {
        postfix[k++] = pop(&stack);
    }

    postfix[k] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}

int main() {
    char infix1[] = "8*2-3";
    char infix2[] = "1*3+3+5+1";

    printf("Postfix for '%s': ", infix1);
    infixToPostfix(infix1);

    printf("Postfix for '%s': ", infix2);
    infixToPostfix(infix2);

    return 0;
}
