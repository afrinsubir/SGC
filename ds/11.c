#include <stdio.h>  
#include <ctype.h>  
 
#define MAX 100  
 
// Stack structure  
typedef struct  
{ 
    int items[MAX];  

    int top;  
} Stack;  
 
void initStack(Stack *s)  
{ 
    s->top = -1; 
} 
 
void push(Stack *s, int value)  
{ 
    s->items[++s ->top] = value;  
} 
 
int pop(Stack *s)  
{ 
    return s ->items[s ->top--]; 
} 
 
int evaluatePostfix(char *postfix)  
{ 
    Stack s;  
    initStack(&s);  
    int i, op1, op2;  
 
    for (i = 0; postfix[i] != '\0'; i++)  
    { 
        if (isdigit(postfix[i]))  
        { 
            push(&s, postfix[i] - '0'); // Convert char to int  
        } 
        else 
        { 
            op2 = pop(&s);  
            op1 = pop(&s);  
 

            switch (postfix[i])  
            { 
                case '+': push(&s, op1 + op2); break;  
                case '-': push(&s, op1 - op2); break;  
                case '*': push(&s, op1 * op2); break;  
                case '/': push(&s, op1 / op2); break;  
            } 
        } 
    } 
    return pop(&s);  
} 
 
int main()  
{ 
    char postfix[MAX];  
 
    printf("Enter postfix expression: ");  
    scanf("%s", postfix);  
 
    printf("Result: %d \n", evaluatePostfix(postfix));  
 
    return 0;  
}
#include<stdio.h>
int main()
{ 
        int i,j,k,row1,col1,row2,col2,p;
        printf("Enter the number of matrixA rows:");
        scanf("%d",&row1);
        printf("Enter the number of matrixA columns:");
        scanf("%d",&col1);
        printf("Enter the number of matrixB rows:");
        scanf("%d",&row2);
        printf("Enter the number of matrixB columns:");
        scanf("%d",&col2);
        if(col1!=row2)
        {
                printf("Multiplication not possible column if number of element>
                return 0;
#include<stdio.h>
int main()
{ 
        int i,j,k,row1,col1,row2,col2,p;
        printf("Enter the number of matrixA rows:");
        scanf("%d",&row1);
        printf("Enter the number of matrixA columns:");
        scanf("%d",&col1);
        printf("Enter the number of matrixB rows:");
        scanf("%d",&row2);
        printf("Enter the number of matrixB columns:");
        scanf("%d",&col2);
        if(col1!=row2)
        {
                printf("Multiplication not possible column if number of element>
                return 0;
