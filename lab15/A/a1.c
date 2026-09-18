// Copy all elements of one array to another.

#include<stdio.h>
#include<string.h>
void main()
{
	int a[6]={10,20,30,40,50,60},b[6],i=0,n=6;
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("%3d",b[i]);
	}
	
}
