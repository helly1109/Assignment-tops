//11.WAP to find number is even or odd using ternery operator
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	
	(n % 2==0)?
	printf("%d is even.\n",n):printf("%d is odd\n",n);
	
	return 0;
}
