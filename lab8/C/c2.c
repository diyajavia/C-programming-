// Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.

#include<stdio.h>
void main()
{
	int n,i=1,sum=0;
	printf("enter n : ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d+",i*i);
		sum = i*i + sum;
		i++;
	}
	printf("\nsum=%d",sum);
}
