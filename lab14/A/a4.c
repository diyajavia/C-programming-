// Find Max, Min, Sum, Avg. of given numbers from an array. 

#include<stdio.h>
void main()
{
	int n,i,max=0,min=0,sum=0;
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
		sum=sum+arr[i];
	}
	
	max=arr[0]; min=arr[0];
	printf("\n sum=%d  average=%f",sum,sum/(float)n);
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("\n maximum=%d  minimum=%d",max,min);
}
