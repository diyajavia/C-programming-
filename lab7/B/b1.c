// Read 3 numbers, multiply largest number from first two numbers to third one using conditional.
 
#include<stdio.h>
void main()
{
	int a,b,c,ans;
	printf("enter value of a , b , c : ");
	scanf("%d %d %d",&a,&b,&c);
	
	ans=(a>b)?(a*c):(b*c);
	
	printf("answer=%d",ans);	
}
