// Print digits of given number.

#include<stdio.h>
void main()
{
	int a,rem;
	printf("enter a : ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		rem=a%10;
		a=a/10;
		printf("%d",rem);
	}
	
}
