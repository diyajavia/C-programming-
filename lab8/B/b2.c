#include<stdio.h>
void main()
{
	int a=100,i;
	i=a+1;
	while(i<200)
	{
		if(i%7==0 && i%5!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
