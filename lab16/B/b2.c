// Perform Multiplication of two matrices. 

#include<stdio.h>
void main()
{
	int a[3][3] , b[3][3] , c[3][3];
	int i,j,ans;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element");
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
	
	c[i][j]=0;
	for(i=0;i<3;i++)
	{
		ans=0;
		for(j=0;j<3;j++)
		{
			ans = a[i][j] * b[j][i] ;
			c[i][j] = ans + c[i][j];
		}
	}
	
	printf("\nresultant matrix c recieved while multipling matrix a and b\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}
