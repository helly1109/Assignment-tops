//28.Convert years into days and months
#include<stdio.h>
int main()
{
	int year,days,months;
	printf("\nenter years ");
	
	scanf("%d",&year);
	days=year*365;
	
	printf("\ndays are %d",days);
	months=days/30;
	
	printf("\ntotal months are %d",months);
	return 0;
}
