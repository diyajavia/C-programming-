// Check whether given character(in lower case) is vowel or consonant.

#include<stdio.h>
void main()
{
	char ch;
	
	printf("enter any alphabet character ch : ");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("character is a vowel");
	}
	else
	{
		printf("character is a consonant");
	}
}
