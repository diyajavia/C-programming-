/* Enter basic salary of an employee and calculate Gross salary according to given conditions:
-
Basic Salary >= 10000: HRA = 20% of basic, DA = 80% of basic
-
Basic Salary >= 20000: HRA = 25% of basic, DA = 90% of basic
-
Basic Salary >= 30000: HRA = 30% of basic, DA = 95% of basic
*/

#include<stdio.h>
void main()
{
	int BS,HRA,DA=0; int GS;
    
    printf("enter the value of your basic salary : ");
    scanf("%d",&BS);
    
    if(BS>=10000)
    {
    	HRA=0.2*BS;
    	DA=0.8*BS;
    	printf("HRA=%d \nDA=%d",HRA,DA);
	}
	else if(BS>=20000)
    {
    	HRA=0.25*BS;
    	DA=0.9*BS;
    	printf("HRA=%d \nDA=%d",HRA,DA);
	}
	else if(BS>=30000)
    {
    	HRA=0.3*BS;
    	DA=0.95*BS;
    	printf("HRA=%d \nDA=%d",HRA,DA);
	}
	else
	{
		if(BS<10000)
		{
			printf("BS=%d",BS);
			printf("\nHRA=%d \nDA=%d",HRA,DA);
		}
	}
	
	GS=BS+HRA+DA;
	printf("\ngross salary=%d",GS);
}
