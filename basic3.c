//3. WAP to Find Area And Circumference of Circle
#include<stdio.h>
int main()
{
	float radius , area , cf;
	printf("enter the radius of circle");
	scanf("%f", &radius);
	
	//value of pi is 3.14 
	area =3.14*radius*radius;
	printf("the area of circle is %f",area);
	
	cf=3.14 *radius;
	printf("\n the cf of circle is %f",cf);
	
	return 0;
}

