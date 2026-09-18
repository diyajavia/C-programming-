// Count number of elements divisible by 3 in array

#include<stdio.h>
void main()
{
	int n,i=0,count=0;
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
		if(a[i]%3==0)
		{
			count++;
		}
	}
	printf("\ntotal no. of terms divisible by 3 in an array = %d",count);
	
}
