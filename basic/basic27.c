//27 .Convert days into months
#include<stdio.h>
int main()
{
	int days,months;
	
	printf("enter days :");
	scanf("%d",&days);
	
	months=days/30;
	
	printf("total month is %d",months);
	return 0;
}
