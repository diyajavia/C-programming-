// Check whether character is an alphabet or not using conditional operator.

#include<stdio.h>
void main()
{
	char ch;
	printf("enter any character : ");
	scanf("%c",&ch);
	
	((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) ? printf("the character %c is alphabet",ch) : printf("the character %c is not a alphabet",ch);
}
