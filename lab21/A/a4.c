// Create structure student with name, percentage and age. Read data of 5 students using array of structure 

#include <stdio.h>
#include <string.h> 

struct student
{
    char name[50]; 
    float percentage;
    int age;
};

int main() 
{
    struct student students[5];
    int i;

    printf("Enter information for 5 students:\n");

    for(i = 0; i < 5; i++) 
    {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %s",students[i].name); 

        printf("Enter percentage: ");
        scanf("%f", &students[i].percentage); 

        printf("Enter age: ");
        scanf("%d", &students[i].age); 
    }

    printf("\nDisplaying Information of Students:\n");

    for(i = 0; i < 5; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage); 
        printf("Age: %d\n", students[i].age);
    }

}