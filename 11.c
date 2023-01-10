#include<stdio.h>
int main()
{
	int n,arr[100],i,sum;
	printf("enter the range ");
	scanf("%d,",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("\nsum of integer is an array=%d",sum);
	printf("\naverage of integer in an array=%d",sum/n);
}
