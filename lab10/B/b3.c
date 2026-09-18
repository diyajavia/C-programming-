// Check whether the given number is palindrome or not.

#include<stdio.h>
void main()
{
	int a,rev=0,rem,temp;
	printf("enter a : ");
	scanf("%d",&a);
	temp=a;
	
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	printf("reverse of given no.= %d",rev);
	
	a=temp;
	
	if(a==rev)
	{
		printf("\n %d is a palindrome no.",a);
	}
	else 
	{
		printf("\n %d is not a palindrome no.",a);
	}
}
