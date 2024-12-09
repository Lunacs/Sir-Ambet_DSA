#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack is full\n");
    } else {
        stack[++top] = value;
        printf("Value %d is pushed into stack\n", value);
    }
}
int pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        int poppedValue = stack[top--];
        printf("Value %d is popped\n", poppedValue);
        return poppedValue;
    }
}
int evaluate(int operand1, int operand2, char operator) {
    switch (operator) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
        default: return 0;
    }
}
int main() {
    char ch;
    int operand1, operand2, result;
    while (1) {
        printf("Enter operator or operand: ");
        scanf(" %c", &ch);
        if (ch == 'x') {
            break;
        } else if (isdigit(ch)) {
            push(ch - '0');
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            operand2 = pop();
            operand1 = pop();
            result = evaluate(operand1, operand2, ch);
            push(result);
            printf("Result %d is pushed into stack\n", result);
        } else {
            printf("Invalid input\n");
        }
    }
    printf("\nThe result is: %d\n", stack[top]);
    return 0;
}
