#include <stdio.h>

int main()
{
    int arr[100], n, i, h, low, mid, high, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &h);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == h)
        {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < h)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}
