// Get a decimal number from user and convert it into roman digits. 
//(Symbol: I:1, IV:4, V:5, IX:9, X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000)

#include<stdio.h>
void main()
{
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		if(n>=1000)
		{
			printf("M");
			n=n-1000;
		}
		else if(n>=900)
		{
			printf("CM");
			n=n-900;
		}
		else if(n>=500)
		{
			printf("D");
			n=n-500;
		}	
		else if(n>=400)
		{
			printf("CD");
			n=n-400;
		}	
		else if(n>=900)
		{
			printf("CM");
			n=n-900;
		}	
		else if(n>=900)
		{
			printf("CM");
			n=n-900;
		}	
		else if(n>=900)
		{
			printf("CM");
			n=n-900;
		}	
		else if(n>=900)
		{
			printf("CM");
			n=n-900;
		}	
		else if(n>=900)
		{
			printf("CM");
			n=n-900;
		}	
		else if(n>=900)
		{
			printf("CM");
			n=n-900;
		}	
		else if(n>=900)
		{
			printf("CM");
			n=n-900;
		}	
		else if(n>=900)
		{
			printf("CM");
			n=n-900;
		}	
		else if(n>=1)
		{
			printf("CM");
			n=n-1;
		}
	}
}
