// Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 70.

#include<stdio.h>
void main()
{
	int a,b,c,d,e,sum; float percentage;
	
	printf("enter the value of a , b , c , d , e : ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	
	sum=a+b+c+d+e;
	percentage=(sum*100)/500.0;
	
	printf("percentage=%f",percentage);
	
	if(percentage>=35 && percentage<=45)
	{
		printf("\nclass=PASS");
	}
	else if(percentage>=46 && percentage<=60)
	{
		printf("\nclass=SECOND");
	}
	else if(percentage>=61 && percentage<=70)
	{
		printf("\nclass=FIRST");
	}
	else if(percentage>=71 && percentage<=100)
	{
		printf("\nclass=DISTINCTION");
	}
	else
	{
		printf("\nclass=FAIL");
	}

}
