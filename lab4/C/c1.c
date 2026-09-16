// Convert seconds into hours, minutes & seconds and print in HH:MM:SS

#include<stdio.h>
void main()
{
	int totalseconds, hours, minutes, seconds;
	
	printf("enter value of totalseconds : ");
	scanf("%d",&totalseconds);
	
	hours=totalseconds/3600;
	minutes=(totalseconds%3600)/60;
	seconds=totalseconds%60;
	
	printf("TIME IN HH:MM:SS FORM IS : %02d : %02d : %02d",hours,minutes,seconds);
}
