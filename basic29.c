//29 .Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
	float min,sec,hour;
	printf("\nenter minutes ");
	scanf("%f",&min);
	
	sec=min*60;
	printf("\nsecond is %f",sec);
	
	hour=(sec/60)/60;
	printf("\nhour is %f",hour);
	return 0;
}
