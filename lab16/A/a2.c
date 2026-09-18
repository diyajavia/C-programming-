// Count number of positive, negative and zero elements from 3 X 3 matrix. 

#include<stdio.h>
void main()
{
	int a[3][3];
	int i,j,pos=0,zero=0,neg=0;
	
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
			if(a[i][j]>0)
			{
				pos++;
			}
			else if(a[i][j])
			{
				zero++;
			}
			else 
			{
				neg++;
			}
		}
	}
	printf("positive=%d   negative=%d   zero=%d",pos,neg,zero);
}
