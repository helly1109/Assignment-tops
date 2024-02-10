//5) Check the  Number Is Positive or Negative.
#include<stdio.h>
int main()
{
	int n;
	
	printf("enter a number :");
	scanf("%d",&n);
	
	if (n>0)
	{
		printf("the number is positive.\n");
	} else if (n<0)
    {
    	printf("the number is negative.\n");
	} else
	{
		printf("enter number is zero.\n");
	}

return 0;
}


