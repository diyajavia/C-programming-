// Pass an array in function to print array elements. 

#include<stdio.h>
int passArray(int n);
void main()
{
	int n,i=0;
	printf("enter n : ");
	int res[n];
	for(i=0;i<n;i++)
	{
		res[i]=passArray(n);
		printf("%d",res[i]);
	}
	
}
int passArray(int n)
{
	scanf("%d",&n);
	int a[n],i=0;
	for(i=0;i<n;i++)
	{
		printf("enter element");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		return a[i];
	}
}
