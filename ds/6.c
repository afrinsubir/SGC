#include<stdio.h>
void isort(int a[],int n)
{
	int key,i,j;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}
void printa(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
int main()
{
	int a[100], n,i;
	printf("enter the number of array elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before sorting\n");
	printa(a,n);
	isort(a,n);
	printf("after sorting\n");
	printa(a,n);
	return 0;
}
