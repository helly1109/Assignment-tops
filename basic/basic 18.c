//18.Calculate person’s Annual salary
#include<stdio.h>
float calculateannualsalary (float monthlysalary)
{
	const int monthsInyear = 12;
	float annualsalary = monthlysalary *  monthsInyear;
	
   return annualsalary;
}
int main()
{
	float monthlysalary , annualsalary;
	
	printf("enter the person's' monthly salary: rs");
	scanf("%f",&monthlysalary);
	
	annualsalary = calculateannualsalary(monthlysalary);
	
	printf("annual salary :rs%.2f\n", annualsalary);
	
	return 0;
}

