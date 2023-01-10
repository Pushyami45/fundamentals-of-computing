#include<stdio.h>
int main()
{
	int n,s,t,i;r=0;
	printf("ENTER THE NUMBER:-");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		s=t%10;
		r=r*10+s;
		t=t/10;
		
	}
	printf("REVERSED=%d",r);
	
}
