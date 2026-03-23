#include<stdio.h>
void main()
{
	int a[100],i,loc,mid,beg,end,n,flag=0,item;
	printf("ENter the number of elements");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements to be searched:");
	scanf("%d",&item);
	loc=0;
	beg=0;
	end=n-1;
	while((beg<=end)&&(item != a[mid]))
	{
		mid=((beg+end)/2);
		if(item==a[mid])
		{
			printf("Search is succesfull\n");
			loc=mid;
			printf("Position of the item %d\n",loc+1);
			flag=1;
		}
		else if(item<a[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
	}
	if(flag==0)
	{
		printf("Search is not succesfull\n");
	}
}
