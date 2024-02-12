//6.Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
int main()
{
	float base  ,height ,area;
	
	printf("enter the base of triangle");
	scanf("%f",&base);
	
	printf("enter the height of the triangle");
	scanf("%f", &height);
	
	area = ( base * height / 2);
	printf("enter the area of triangle is :%f %f",area);
	
	return 0;
}
