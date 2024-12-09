#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_SIZE 1000

typedef struct
{
    char data[STACK_SIZE];
    int top;
} Stack;

void init_stack(Stack *stack)
{
    if (stack == NULL) return;
    stack->top = -1;
}
bool is_empty(Stack *stack)
{
    if (stack == NULL) return true;
    return stack->top == -1;
}
bool is_full(Stack *stack)
{
    if (stack == NULL) return true;
    return stack->top >= STACK_SIZE - 1;
}
void push(Stack *stack, char item)
{
    if (stack == NULL) return;

    if (is_full(stack))
    {
        fprintf(stderr, "\nStack Error: pushing on a full stack\n");
        return;
    }
    stack->data[++stack->top] = item;
}
char pop(Stack *stack)
{
    if (stack == NULL || is_empty(stack))
    {
        fprintf(stderr, "\nStack Error: Popping an empty stack\n");
        return '\0';
    }
    return stack->data[stack->top--];
}
int main()
{
    Stack equation;
    init_stack(&equation);
    char ch;
    char popped;
    bool good = true;
    int read_result;

    printf("Enter an equation followed by an s:\n");
    while ((read_result = scanf(" %c", &ch)) == 1)
    {
        if (ch == 's') break;

        if (ch == '{' || ch == '[' || ch == '(')
        {
            push(&equation, ch);
        }
        else if (ch == '}' || ch == ']' || ch == ')')
        {
            if (!is_empty(&equation))
            {
                popped = pop(&equation);
                if (!((popped == '{' && ch == '}') ||
                      (popped == '[' && ch == ']') ||
                      (popped == '(' && ch == ')')))
                {
                    good = false;
                }
            }
            else
            {
                good = false;
            }
        }
    }
    if (read_result != 1)
    {
        fprintf(stderr, "\nError reading input\n");
        return 1;
    }
    if (!is_empty(&equation))
    {
        good = false;  // Unmatched opening brackets
    }
    if (good)
    {
        printf("\nYes, it matched\n");
    }
    else
    {
        printf("\nNo, it was bad!\n");
    }
    return 0;
}
