//10 10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
	float width,length,height;
	float surfacearea;
	
	printf("enter the width of the rectanglar prism:");
	scanf("%f",&width);
	
	printf("enter the length of the rectangular prism:");
	scanf("%f",&length);
	
	printf("enter the height of the rectangular prism :");
	scanf("%f",&height);
	
	surfacearea = 2 * (width * length +height * length + height * width);
	
	printf("surface area of  the rectangular prism  :%2.f\n",surfacearea);
	
	return 0;
}
