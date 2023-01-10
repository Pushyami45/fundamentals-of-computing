#include<stdio.h>
int main()
{
	int n,i,t,s=0,a,b;
	printf("enter a number ");
	scanf("%d",&n);
	t=n;while(t!=0)
	{
		a=t%10;
		b=a*a*a;
		s+=b;
		t=t/10;
	}
	if(s==n)
	{
		printf("%d is amstrong number ",s);
	}
	else
	{
		printf("%d is not a amstrong number ");
    }
}
