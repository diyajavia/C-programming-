// Read n numbers from user and print in normal and reverse order.

#include<stdio.h>
void main()
{
	int n,i;
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
	
	printf("\nreverse order array");
	for(i=n-1;i>=0;i--)
	{
		printf("%3d",arr[i]);
	}
}
