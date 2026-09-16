// Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using switch.

#include<stdio.h>
void main()
{
	int a,x,y;
	printf("value of a are 1=addition 2=subtraction 3=multiplication 4=division");
	printf("\nenter a : ");
	scanf("%d",&a);
	
	printf("enter x , y : ");
	scanf("%d %d",&x,&y);
	
	switch(a)
	{
		case 1 : printf("%d+%d=%d",x,y,x+y);
				 break;
		case 2 : printf("%d-%d=%d",x,y,x-y);
				 break;
		case 3 : printf("%d*%d=%d",x,y,x*y);
				 break;
		case 4 : printf("%d/%d=%d",x,y,x/y);
				 break;
	}
}
