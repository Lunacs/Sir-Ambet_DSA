#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX 10

int top = -1, ch, i;
int stk[MAX], ele;

void Push()
{
    if (top == (MAX - 1))
    {
        printf("\nThe stack is full");
    }
    else
    {
        printf("Enter an element: ");
        scanf("%d", &ele);
        top++;
        stk[top] = ele;
        printf("\n\nElement pushed successfully\n");
    }
}
void Pop()
{
    if (top == -1)
    {
        printf("\nThe stack is empty");
    }
    else
    {
        ele = stk[top];
        top--;
        printf("\nThe deleted element is: %d\n", ele);
    }
}
void Top()
{
    if (top == -1)
    {
        printf("\nThe stack is empty");
    }
    else
    {
        printf("The top element of the stack is: %d\n", stk[top]);
    }
}
void Display()
{
    if (top == -1)
    {
        printf("\nThe stack is empty");
    }
    else
    {
        printf("\nThe elements in the stack are:");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stk[i]);
        }
    }
}
int main()
{
    int flag = 1;
    do
    {
        printf("\n****MENU****");
        printf("\n1. Push\n2. Pop\n3. Top\n4. Display\n5. Exit");
        printf("\nEnter your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Top();
            break;
        case 4:
            Display();
            break;
        case 5:
            flag = 0;
            break;
        default:
            printf("Enter correct Choice\n");
            break;
        }
    }
    while (flag);
    return 0;
}
