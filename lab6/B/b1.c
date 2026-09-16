// electricity bill calculation on basis of given condition

#include<stdio.h>
void main()
{
	int u; float bill,AS,TB;
	printf("enter the value of the unit : ");
	scanf("%d",&u);
	
	if(u>=50)
	{
		if(u<=150)
		{
			if(u<=250)
		    {
				bill=(0.5*50)+(100*0.75)+(100*1.2)+((u-250)*1.5);
			}
			
			else
			{
				bill=(0.5*50)+(100*0.75)+((u-150)*1.2);
			}
		}
		
		else 
		{
			bill=(0.5*50)+((u-50)*1.2);
		}
	}
	else 
	{
		bill=0.5*u;
	}
	printf("bill = %f",bill);
	
	AS=(20*bill)/100;    //additional surcharge
	printf("AS=%f",AS);
	
	TB=bill+AS;         //total bill= bill+additional surcharge
	
	printf("Total bill = %f",TB);
}
