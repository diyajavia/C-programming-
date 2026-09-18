// Calculate the average, geometric and harmonic mean of n elements in an array.

#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,sum=0,s2=0,product=1; float avg=1,hm,gm;
	printf("enter n : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter element : ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	
	avg=(float)sum/n;
	
	printf("\nsum=%d",sum);
	printf("\naverage=%f",avg);
	
	float b[n];
	
	for(i=0;i<n;i++)
	{
		b[i]=(float)1/arr[i];
		s2=s2+b[i];
		product=product*arr[i];
	}
	hm=(float)(n*product)/sum;
	printf("harmonic mean = %f",hm);
	
	gm=sqrt(avg*hm);
	printf("geometric mean = %f",gm);
	
}
