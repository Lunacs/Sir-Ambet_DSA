#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>

float stack[10];
int top =- 1;
void push(float);
float pop();
float eval(char [],float[]);

void main()
{
    int i=0;
    char suffix[20];
    float value[20],result;
    printf("Enter a valid postfix expression: ");
    gets(suffix);
    while (suffix[i]!='\0')
    {
        if(isalpha(suffix[i]))
        {
            fflush(stdin);
            printf("Enter the value of %c: ",suffix[i]);
            scanf("%f",&value[i]); }
        i++; }
    result=eval(suffix,value);
    printf("\nThe result of %s=%f",suffix,result);
    getch();
}
float eval(char suffix[],float data[])
{
    int i=0;
    float op1,op2,res;
    char ch;
    while(suffix[i]!='\0')
    {
        ch=suffix[i];
        if(isalpha(suffix[i]))
        {
            push(data[i]);
        } else {
            op2=pop();
            op1=pop();
            switch(ch)
            {
                case '+' : push(op1+op2); break;
                case '-' : push(op1-op2); break;
                case '*' : push(op1*op2); break;
                case '/' : push(op1/op2); break;
                case '^' : push(pow(op1,op2)); break; } }
        i++; }
    res=pop();
    return(res);
}
void push(float num) {
    top=top+1;
    stack[top]=num; }
float pop() {
    float num;
    num=stack[top];
    top=top-1;
    return(num);
}
