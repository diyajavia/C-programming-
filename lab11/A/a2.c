// Print sum of 1 to n numbers.

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		printf("\n");
		sum=sum+i;
	}
	printf("sum=%d",sum);
}
