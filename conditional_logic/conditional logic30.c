//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-
#include<stdio.h>
int main()
{
	int unit;
	float total;
	printf("enter your electricity consumption :");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		total =unit*0.5;
	}
	else if (unit<=150)
	{
		total =(50*0.5)+((unit-50)*0.75);
	}
	else if (unit <=150)
	{
		total =(50*0.5)+(100*0.75) +((unit -150)*1.20);
	}
	else if (unit<=250)
	{
		total =(50*0.5)+(100*0.75)+(100*1.2)+ ((unit-250*1.1.50);
	}
	printf=total + total*0.2;
	printf("your total bill is :%0.2f",total);
	
}

