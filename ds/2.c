#include<stdio.h>
int main()
{
	int a[5]={2,3,4,9,0},i,n,flag=0;
	printf("Enter the number you want to search:");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			printf("Number is found\n");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Number not found\n");
	}
	return 0;
}
