// Find weather given string is palindrome or not.

#include<stdio.h>
#include<string.h>
void findPalindrom(char string1[]);
void main()
{
    char string1[20];

    printf("Enter a string: ");
    scanf("%s", string1);
    findPalindrom(string1);

}

void findPalindrom(char string1[])
{
    int length;
    length = strlen(string1);

    int flag=0,i=0;
    for (i = 0; i < length / 2; i++)
    {
        if (string1[i] != string1[length-i-1]) {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%s is not a palindrome\n", string1);
    } 
    else
    {
        printf("%s is a palindrome\n", string1);
    }

}
 