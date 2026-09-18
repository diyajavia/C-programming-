#include<stdio.h>
void main()
{
	int a,b,i;
	printf("enter a,b : ");
	scanf("%d %d",&a,&b);
	i=a+1;
	
	while(i<b)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
