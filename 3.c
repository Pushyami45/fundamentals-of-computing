#include<stdio.h>
int main()
{
	int n;
	printf("ENTER THE N TH VALUE:-");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(i%2!=0)
		{
		printf("%d\n",i);
	    }
    } 
}
