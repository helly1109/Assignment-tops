//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main()
{
	float num;
	
	printf("enter the number :");
	scanf("%f",&num);
	
	printf("number first power %2f\n",num*num);
	printf("number second power %2f\n",num*num);
	printf ("number third power %2f\n",num*num);
	return 0;
}
