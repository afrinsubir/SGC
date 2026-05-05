#include <stdio.h>
#include <ctype.h>

int stack[100], top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[100];
    int i = 0, a, b;

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    while(exp[i] != '\0')
    {
        if(isdigit(exp[i]))   // operand
        {
            push(exp[i] - '0');
        }
        else   // operator
        {
            b = pop();
            a = pop();

            switch(exp[i])
            {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
        i++;
    }

    printf("Result = %d", pop());

    return 0;
}
