// Take two numbers input from user and perform a multiplication without using a * operator.

#include<stdio.h>
void main()
{
	int n1, n2;
    int product = 0; 
    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    if (n2 < 0) 
	{
        n1 = -n1;
        n2 = -n2;
    }

    while (n2 > 0) 
	{
        product += n1;
        n2--;          
    }

    printf("The product is: %d\n", product);
}
