// Print following patterns

#include<stdio.h>
void main()
{
	int i,j,n,k=1; 
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			if(k%2!=0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			k++;
		}
		printf("\n");
	}
}
