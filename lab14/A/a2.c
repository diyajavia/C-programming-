// Count number of positive or negative number from an array of n numbers.

#include<stdio.h>
void main()
{
	int n,i,pc=0,nc=0;
	printf("enter n : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter element : ");
		scanf("%d",&arr[i]);
	}
	
	printf("normal order array");
	for(i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>=0)
		{
			pc++;
		}
		else
		{
			nc++;
		}
	}
	printf("positive=%d negative=%d",pc,nc);
}

