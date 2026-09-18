// Add two numbers using function. 

#include<stdio.h>
void sum(int a,int b);
void main()
{
	int a,b;
	printf("enter a,b : ");
	scanf("%d %d",&a,&b);
	sum(a,b);
}
void sum(int a,int b)
{
	int sum=a+b;
	printf("sum  = %d",sum);
}
