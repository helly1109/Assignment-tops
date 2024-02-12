//7.Find area of Rectangle Formula : A=wl
#include<stdio.h>
int main()
{
	int length ,breadth , area;
	
	printf("enter the length of the triangle :");
	scanf("%d",&length);
	
	printf("enter the breadth of the rectangle :");
	scanf("%d",&breadth);
	
	area = length * breadth;
	
	printf("area of the rectangle :%d", area);
	
	return 0;
}
