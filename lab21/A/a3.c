// Demonstrate difference between structure and union

#include<stdio.h>
struct MyStruct 
{
    int id;
    char name;
    int height;
    int weight;
};

union MyUnion 
{
    int id;
    char name;
    int height;
    int weight;
};

void main()
{
    
}