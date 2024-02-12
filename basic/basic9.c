//9. Find circumference of Triangle formula : triangle = a + b + c
#include<Stdio.h>
int main()
{
	float sideA, sideB,sideC;
	float circumference;
	
	printf("enter the length of side a:");
	scanf("%f",&sideA);
	
	printf("enter the length of side b:");
	scanf("%f",&sideB);
	
	printf("enter the length of side c:");
	scanf("%f",&sideC);
	
	circumference = sideA + sideB + sideC;
	printf("circumference of the triangle :%2.f\n",circumference);
	
	return 0;
}
