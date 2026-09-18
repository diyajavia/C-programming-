#include<stdio.h>
void main()
{
	int a,i=1,odd=0,even=0;
	while(i<=10)
	{
		printf("enter value of a : ");
		scanf("%d",&a);
		if(a%2!=0)
		{
			odd=odd+1;
		}
		else{
			even=even+1;
		}
		i++;
	}
	printf("no of odd terms=%d",odd);
	printf("\nno of even terms=%d",even);

}
