// average of 3 number with the help of scanf

#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	int d;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	
	printf("enter the value of b : ");
	scanf("%d",&b);	
	
	printf("enter the value of c : ");
	scanf("%d",&c);
	
	d=(a+b+c)/3;
	
	printf("Average=%d",d);
}
