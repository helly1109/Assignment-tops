//5. Find Area of Cube formula : a = 6a2
#include<stdio.h>
int main()
{
	int side;
	float area;
	
	printf("enter the side of the cube:");
	scanf("%d", &side);
	
	area =6* side * side;
	
	printf(" area of cube :%f %f", area);
	
	return 0;
}
