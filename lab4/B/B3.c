// converstion of temp. from fahrenheit to celcius

#include<stdio.h>
void main()
{
	int f;
	int c;
	
	printf("enter the value temp in fahrenheit f : ");
	scanf("%d",&f);
	
	c=((f-32)*5)/9;
	
	printf("Temp in Celsius is %d",c);
	
}
