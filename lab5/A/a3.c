// Check whether given number is positive or negative

#include<stdio.h>
void main()
{
	int a;
	
	printf("enter value of a :");
	scanf("%d",&a);
	
	if(a>=0)
	{
		if(a==0)
		{
			printf("a=0");
		}
		else{
			printf("a is positive number");
		}
	}
	else{
		printf("a is a negative number");
	}
}
