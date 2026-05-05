#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int main()
{
    int n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &x);

        if(top == MAX - 1)
        {
            printf("Stack Overflow\n");
            break;
        }

        stack[++top] = x;   // push
    }

    // Display stack
    printf("Stack: ");
    for(i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    return 0;
}
