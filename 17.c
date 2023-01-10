#include<stdio.h>
int main()
{
	int d1;
	printf("ENTER THE DECIMAL NUMBER:-");
	if(scanf("%d",&d1))
	{
		printf("\nDECIMAL NYMBER-->%d",d1);
		printf("\n HEXADECIMAL NUMBER-->%x",d1);
	}
	else{
		printf("INVALID");
	}
}
