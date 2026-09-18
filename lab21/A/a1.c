// Create, declare and initialize structure employee. (email name height weight)

#include<stdio.h>
struct empDetails
{
    char name[25];
    int height,weight;
    char id[25];
};

void main()
{
    struct empDetails E1;
    printf("enter details of employee E1 : ");
    printf("enter name : ");
    scanf("%s",E1.name);

    printf("enter height : ");
    scanf("%d",&E1.height);

    printf("enter weight : ");
    scanf("%d",&E1.weight);

    printf("enter id : ");
    scanf("%s",E1.id);
    
    printf("%s",E1.name);
    printf("\n%d",E1.height);
    printf("\n%d",E1.weight);
    printf("\n%s",E1.id);
}