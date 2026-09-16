// Check whether given character(in capital) is vowel or consonant.

#include<stdio.h>
void main()
{
	char ch;
	
	printf("enter any alphabet character ch : ");
	scanf("%c",&ch);
	
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("character is a vowel");
	}
	else
	{
		printf("character is a consonant");
	}
}
