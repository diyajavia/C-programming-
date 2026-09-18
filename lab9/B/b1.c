// Print all uppercase and lowercase alphabets.

#include<stdio.h>
void main()
{
	char ch1='A',ch2='a';

	while(ch1<='Z')
	{
		printf("%c",ch1);
		ch1++;
	}
	printf("\n");
	while(ch2<='z')
	{
		printf("%c",ch2);
		ch2++;
	}
}
