#include<stdio.h>
int main()
{
    int arr[100],n,i,h,found=0;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to be searched:");
    scanf("%d",&h);
    for(i=0;i<n;i++)
    {
        if(arr[i] == h)
        {
            found=1;
            printf("elements found",i +1);
            break;
        }
    }
    if(found==0)
    {
        printf("element not found");
    }
    return 0;
}
