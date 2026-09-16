// Find out largest number from given 3 numbers using conditional operator.

#include<stdio.h>
void main()
{
	int a,b,c,large;
	printf("enter a, b, c : ");
	scanf("%d %d %d",&a,&b,&c);
	
	large=(a>b)?((a>c)?a:c):(b>c)?b:c;
	
	printf("largest no =%d",large);
}
