// Count total number of negative elements in array.

#include<stdio.h>
void main()
{
	int n,i=0,nc=0;
	printf("enter value of n : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter element : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			nc++;
		}
	}
	printf("\ntotal no. of negative terms in an array = %d",nc);
	
}
