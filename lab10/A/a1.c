// Find out sum of first and last digit of a given number.

#include<stdio.h>
void main()
{
	int n,rem,temp,ld,fd;
	printf("enter n : ");
	scanf("%d",&n);
	ld=n%10;
	
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
	}
	fd=rem;
	printf("%d + %d = %d",ld,fd,ld+fd);
}
