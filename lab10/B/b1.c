// Check whether the given number is perfect or not.

#include<stdio.h>
void main()
{
	int a,i=1,sum=0;
	printf("enter a : ");
	scanf("%d",&a);
	
	while(i<a)
	{
		if(a%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==a)
	{
		printf("%d is a perfect no. ",a);
	}
	else
	{
		printf("%d is not a perfect no. ",a);
	}
}
