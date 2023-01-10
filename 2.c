#include<stdio.h>
int main()
{
	 int n,s,t,i;
	 printf("ENTER THE NUMBER:-");
	 scanf("%d",&n);
	 t=n;
	 while(t!=0)
	 {
	 	s=t%10;
	 	printf("\n %d",s);
	 	t=t/10;
	 }
   
}
