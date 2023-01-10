#include<stdio.h>
int main()
{
	int n,s,t;
	printf("enter the number ");
	scanf("%d",&n);
	printf("enter the second number ");
	scanf("%d",&n);
	t=n;
	n=s;
	s=t;
	printf("\n-----after swap-----\n");
	printf("%d",&n);
	printf("\n%d",s);
}
