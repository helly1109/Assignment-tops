//8. Write a program to find out the max from given number (E.g., No: -1562Max number is 6)
#include<stdio.h>
int main()
{
	int num,digit,maxdigit=0;
	printf("Enter num: ");
	scanf("%d",&num);
	while(num !=0)
	{
		digit = num % 10;
		if(digit>maxdigit)
		{
			maxdigit = digit;
		}
		num = num / 10;
	}
	printf("max digit: %d\n", maxdigit);
	
	return 0;
}
