// Find factorial of the given number.

#include<stdio.h>
void main()
{
	int n,i=1,fact=1;
	printf("enter n : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial=%d",fact);
}
