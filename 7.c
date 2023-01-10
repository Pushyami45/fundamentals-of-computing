#include<stdio.h>
int main()
{
	int n,sum=0,t;
	printf("ENTER THE N TH VALUE:-");
	scanf("%d,&n");
	for(int i=1;i<=n;i++)
	{
		t=i*i*i;
		sum+=t;
	}
	printf("SUM=%d",sum);
}
