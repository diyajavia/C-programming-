// Print given number in reverse order.

#include<stdio.h>
void main()
{
	int a,rev=0,rem;
	printf("enter a : ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	printf("reverse of given no.= %d",rev);
}
