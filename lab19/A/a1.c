// Find factorial of a number using function and recursive function. 

#include<stdio.h>
int fact(int n);
void main()
{
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	
	int res=fact(n);
	printf("%d",res);
}
int fact(int n)
{
	int fact=1,i;
	for(i=1;i<n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
