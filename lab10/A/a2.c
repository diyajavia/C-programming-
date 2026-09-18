// Find the sum and average of different numbers which are accepted by user as many as user wants.

#include<stdio.h>
void main()
{
	int a,i=1,sum=0,n; float avg;
	printf("enter number of terms for which you want to perform operations n : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("enter a = ");
		scanf("%d",&a);
		sum=sum+a;
		i=i+1;
	}
	avg=sum/(float)n;
	printf("sum=%d average=%f",sum,avg);
}
