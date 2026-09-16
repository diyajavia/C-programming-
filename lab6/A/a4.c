// Input an integer number and check the last digit of number is even or odd.

#include<stdio.h>
void main()
{
	int a,rem;
	
	printf("enter any integer : ");
	scanf("%d",&a);
	
	rem = a % 10;
	
	if (rem<0) 
	{
        rem = -rem; 
    }
	
	if (rem%2==0)
	{
		printf("the last digit %d is a even number",rem);
	}
	else
	{
		printf("the last digit %d is a odd number",rem);
	}
}
