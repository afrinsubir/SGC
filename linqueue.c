#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int main()
{
    int choice, x, i;

    while(1)
    {
        printf("\n1.Insert  2.Delete  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // INSERTION
        if(choice == 1)
        {
            printf("Enter value: ");
            scanf("%d", &x);

            if(rear == MAX - 1)
            {
                printf("Queue Overflow\n");
            }
            else
            {
                if(front == -1)
                    front = 0;

                queue[++rear] = x;
            }
        }

        // DELETION
        else if(choice == 2)
        {
            if(front == -1 || front > rear)
            {
                printf("Queue Underflow\n");
            }
            else
            {
                printf("Deleted: %d\n", queue[front]);
                front++;
            }
        }

        // DISPLAY
        else if(choice == 3)
        {
            if(front == -1 || front > rear)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue: ");
                for(i = front; i <= rear; i++)
                    printf("%d ", queue[i]);
            }
        }

        // EXIT
        else if(choice == 4)
        {
            break;
        }

        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
