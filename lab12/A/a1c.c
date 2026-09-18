// Print following patterns

#include<stdio.h>
void main()
{
	int i,j,n,k=n;
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=n;
		for(j=1;j<=i;j++)
		{
			printf("%d",k--);
		}
		printf("\n");
	}
}
