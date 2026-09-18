// Create a structure book with book title, author, publication, and price. Read data of 3 books and display. 

#include<stdio.h>
struct Book
{
    char title[100], author[100], publication[100];
    float price;
};

void main()
{
    struct Book b1;
    printf("enter details of book b1 : ");
    printf("enter book title : ");
    gets(b1.title);

    printf("enter author name : ");
    scanf("%s",b1.author);

    printf("enter publication name : ");
    scanf("%s",b1.publication);
    
    printf("enter price : ");
    scanf("%f",&b1.price);

    printf("%s",b1.title);
    printf("\n%s",b1.author);
    printf("\n%s",b1.publication);
    printf("\n%f",b1.price);
}