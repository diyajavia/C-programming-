// area of circle with use of scanf

#include<stdio.h>
void main()
{
	int r;
	int area; 
	float pie=3.14;
	
	printf("enter the value of radius - r:");
	scanf("%d",&r);
	
	area=pie*r*r;
	
	printf("%d",area);
}
