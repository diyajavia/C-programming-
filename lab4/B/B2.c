// calculation of simple interest

#include<stdio.h>
void main()
{
	int p;
	int r;
	int t;
	int si;
	
	printf("enter value of principal amount p : ");
	scanf ("%d",&p);
	
	printf("enter the value of rate of interest r : ");
	scanf("%d",&r);
	
	printf("enter the value of time period t : ");
	scanf("%d",&t);
	
	si=(p*r*t)/100;
	
	printf("Simple interest = %d",si);
}
