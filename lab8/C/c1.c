#include<stdio.h>
void main()
{
	int i=1,sq,sum=0,count=0; 
	float avg=0;
	while(count<=10)
	{
		sq=i*i;
		if(sq%10==9)
		{
			printf("number=%d",sq);
			sum=sum+sq;
			count=count+1;
		}
		i++;
	}
	if(count>0){
	avg=sum/10.0;
	}
	else{
		avg=0;
	}
	printf("sum=%d average=%f",sum,avg);
	
}
