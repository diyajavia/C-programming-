#include<stdio.h>
void main()
{
	float bill,AS,TB; int u;
	printf("enter the value of the unit : ");
	scanf("%d",&u);
	
	if(u<=50)
	{
		bill=0.5*u;
		printf("bill=%f",bill);
	}
	
	else if(u<=150)
	{
		bill=(0.5*50)+((u-50)*1.2);
		printf("bill=%f",bill);
	}
	
	else if(u<=250)
	{
		bill=(0.5*50)+(100*0.75)+((u-150)*1.2);
		printf("bill=%f",bill);
	}
	
	else 
	{
		bill=(0.5*50)+(100*0.75)+(100*1.2)+((u-250)*1.5);
		printf("bill=%f",bill);
	}
	
	AS=(20*bill)/100;    //additional surcharge
	printf("\nAS = %f",AS);
	
	TB=bill+AS;         //total bill= bill+additional surcharge
	
	printf("\nTotal bill = %f",TB);
	
}
