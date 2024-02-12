//17. Calculate person’s insurance premium based on salary
#include<stdio.h>

float calculateinsurancepremium(float salary)
{
	const float premiumrate = 0.05;
	float premium = salary * premiumrate;
	
	return 0;
}
int main()
{
	float salary , premium;
	printf("enter the person's salary:");
	scanf("%f",&salary);
	
	premium = calculateinsurancepremium (salary);
	printf("insurance premium based on salary :%.2f\n",premium);
	
	return 0;
}
