// Count numbers higher than the average of an array

#include<stdio.h>
void main()
{
	int n,i,sum=0,avg=0,count=0;
	printf("enter n : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter element : ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	
	avg=sum/(float)n;
	
	printf("\nsum=%d",sum);
	printf("\naverage=%d",avg);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>avg)
		{
			count++;
		}
	}
	printf("\n no. greater than avg = %d",count);
	
}
