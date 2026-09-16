// Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.

#include<stdio.h>
void main()
{
	int a,b,c; int choice;
	
	printf("enter value of a,b : ");
	scanf("%d %d",&a,&b);
	
	printf("to perform any operation enter your choice \n for addition choice=1 \n subtraction=2 \n multiply=3 \n division=4");
	printf("enter your choice : ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		c=a+b;
		printf("sum=%d",c);
	}
	else if(choice==2)
	{
		c=a-b;
		printf("subtraction=%d",c);
	}
	else if(choice==3)
	{
		c=a*b;
		printf("multiplication=%d",c);
	}
	else if(choice==4)
	{
		c=a/b;
		printf("division=%d",c);	
	}
	else
	{
		printf("enter a valid choice");
	}
}
