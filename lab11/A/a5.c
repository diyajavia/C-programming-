// Find factorial of the given number.

#include<stdio.h>
void main()
{
	int n,i,fact;
	printf("enter n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
