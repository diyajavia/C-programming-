// Find whether the given number is prime or not.

#include<stdio.h>
void main()
{
	int n,i=1,count=0;
	printf("enter n : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%i==0)
		{
			count=count+1;
		}
		i++;
	}
	if(count==2)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is a not prime number",n);
	}
}
