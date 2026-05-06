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

        // INSERT
        if(choice == 1)
        {
            printf("Enter value: ");
            scanf("%d", &x);

            if((rear + 1) % MAX == front)
            {
                printf("Queue Overflow\n");
            }
            else
            {
                if(front == -1)
                    front = 0;

                rear = (rear + 1) % MAX;
                queue[rear] = x;
            }
        }

        // DELETE
        else if(choice == 2)
        {
            if(front == -1)
            {
                printf("Queue Underflow\n");
            }
            else
            {
                printf("Deleted: %d\n", queue[front]);

                if(front == rear)
                    front = rear = -1;
                else
                    front = (front + 1) % MAX;
            }
        }

        // DISPLAY
        else if(choice == 3)
        {
            if(front == -1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue: ");
                i = front;

                while(1)
                {
                    printf("%d ", queue[i]);

                    if(i == rear)
                        break;

                    i = (i + 1) % MAX;
                }
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
