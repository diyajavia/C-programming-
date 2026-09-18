// Count number of even or odd number from an array of n numbers. 

#include<stdio.h>
void main()
{
	int n,i,even=0,odd=0;
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
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("even=%d odd=%d",even,odd);
}

