// Print following patterns

#include<stdio.h>
void main()
{
	int i,j,n,k=1; 
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		
		k=1;
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2!=0)
			{
			printf("%d",k++);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

