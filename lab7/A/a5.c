// Check whether number is even number or odd number using conditional operator.

#include<stdio.h>
void main()
{
	int a;
	printf("enter a : ");
	scanf("%d",&a);
	
	(a%2==0)?printf("a= %d is a even no",a):printf("a= %d is a odd no",a); 
}
