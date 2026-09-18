// Read and store the roll no and marks of 20 students using 2D array. 

#include<stdio.h>
void main()
{
	int a[20][2];  int i,j;
	
	for(i=0;i<20;i++)
	{
		for(j=0;j<2;j++)
		{
			if(j==0)
			{
				printf("enter roll number ");
				scanf("%d",&a[i][j]);
			}
			else if(j==1)
			{
				printf("enter marks ");
				scanf("%d",&a[i][j]);
			}
		}
	}
	
	printf("RollNo. Marks \n");

	for(i=0;i<20;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
