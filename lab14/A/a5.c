// Read five person height and weight and count the number of person having height greater than 170 and weight less than 50. 

#include<stdio.h>
void main()
{
	int i,hg=0,wl=0;
	int h[5] , w[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter height : ");
		scanf("%d",&h[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("enter weight : ");
		scanf("%d",&w[i]);
	}
	
	printf("\ndata of height in the form of array\n");
	for(i=0;i<5;i++)
	{
		printf("%5d",h[i]);
	}
	
	printf("\ndata of weight in the form of array\n");
	for(i=0;i<5;i++)
	{
		printf("%3d",w[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(h[i]>170)
		{
			hg++;
		}
		if(w[i]<50)
		{
			wl++;
		}
	}
	
	printf("\npeople having height greater than 170=%d",hg);
	printf("\npeople having weight less than 50=%d",wl);
	
}
