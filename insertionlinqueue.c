#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int main()
{
    int n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &x);

        // Check overflow
        if(rear == MAX - 1)
        {
            printf("Queue Overflow\n");
            break;
        }

        // First insertion
        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = x;
    }

    // Display queue
    printf("Queue: ");
    for(i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    return 0;
}
