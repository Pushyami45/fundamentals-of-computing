#include<stdio.h>
int main()
{
	int n,s,t,i,r=0;
	printf("enter the number ");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		s=t%10;
		r+=s;
		t=t/10;
	}
	printf("sum of integer=%d",r);
}
