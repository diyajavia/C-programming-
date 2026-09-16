// Swap two numbers without using temporary variable

#include<stdio.h>
void main()
{
	int a,b;
		
	printf("enter value of a :");
	scanf("%d",&a);
	
	printf("enter value of b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=b-a;
	
	printf("a=%d b=%d",a,b);
}
