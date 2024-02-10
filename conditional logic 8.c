//8.WAP to accept the height of a person in centimeters and categorize the
#include<stdio.h>
int main ()
{
	float height;
	printf("enter the height in centimeter :");
	scanf("%f",&height);
	
	if (height< 150)
{
	printf("short/n");
} else if("height >= 150 && height < 180")
{
	printf("average \n");
}else { 
printf("tall\n");
}
return 0;
}
