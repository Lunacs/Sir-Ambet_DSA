#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

typedef struct {
    char data[MAX];
    int top;
} Stack;

void push(Stack *stack, char value) {
    if (stack->top < MAX - 1) {
        stack->data[++stack->top] = value;
    } else {
        printf("Stack overflow\n");
    }
}

char pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top--];
    }
    return '\0';
}

bool isValidExpression(char *expression) {
    Stack stack = {.top = -1};

    for (int i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];

        if (ch == '(') {
            push(&stack, ch);
        } else if (ch == ')') {
            if (stack.top == -1) {
                printf("Error: Extra closing parenthesis\n");
                return false;
            }
            pop(&stack);
        }
    }

    if (stack.top != -1) {
        printf("Error: Missing closing parenthesis\n");
        return false;
    }
    return true;
}

int main() {
    char expression[] = "a+(b+3)-((c*d)+e";
    printf("Expression: %s\n", expression);
    printf("Is Valid: %s\n", isValidExpression(expression) ? "Yes" : "No");
    return 0;
}
