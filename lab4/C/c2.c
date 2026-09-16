// Convert number of days into year, week & days

#include<stdio.h>
void main()
{
	int totaldays, years, weeks, days;
	
	printf("enter the value of totaldays : ");
	scanf("%d",&totaldays);
	
	years=totaldays/365;
	weeks=(totaldays%365)/7;
	days=totaldays%7;
	
	printf("THE NUMBER OF DAYS IN THE FORM OF YEAR WEEK AND DAYS IS : %d %d %d",years,weeks,days);
	
}
