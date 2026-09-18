#include<stdio.h>
void main()
{
	int a, i=0;
	printf("enter a : ");
	scanf("%d",&a);
	
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<a);
}
