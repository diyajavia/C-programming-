// Check whether the entered character is upper case, lower case, digit or any special character.

#include<stdio.h>
void main()
{
	char value;
	
	printf("enter your value : ");
	scanf("%c",&value);
	
	if(value>='a' && value<='z')
	{
		printf("the value entered %c %c is lower case",value);
	}
	else if(value>='A' && value<='Z')
	{
		printf("the value entered %c is upper case",value);
	}
	else if(value>='0' && value<='9')
	{
		printf("the value entered %c is a digit",value);
	}
	else 
	{
		printf("the value entered %c is special character",value);
	}
}
