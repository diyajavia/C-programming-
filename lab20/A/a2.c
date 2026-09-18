// Using a String pointer remove a space and special character from string. 

#include<stdio.h>

int main()
{
    unsigned int n=0;
    char str[100];
    char *ptr,*ptr1;    
    printf("Enter the string = ");
    gets(str);
    ptr = &str[0];
    while(*ptr!='\0')
    {
        n++;ptr++;
    }
    ptr=&str[0];
    while(*ptr!='\0')
    {
        if(*ptr==' ')
        {
            n--;
            for(ptr1=++ptr;*ptr1!='\0';ptr1++)
            {
                *ptr=*ptr1;
                 ptr++;
            }   
            ptr=&str[0];    
        }
        ptr++;
    }
    printf("Modified string = ");
    for(int i=0;i<n;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
