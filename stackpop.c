#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int main()
{
    int i, n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Push elements first
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if(top == MAX - 1)
        {
            printf("Stack Overflow\n");
            break;
        }

        stack[++top] = x;
    }

    // Pop one element
    if(top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }

    // Display stack
    printf("Stack: ");
    for(i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    return 0;
}
