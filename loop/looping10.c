//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include<stdio.h>
int main()
{
	int num, firstdigit, lastdigit, originalnum;
	printf("Enter a num: ");
	scanf("%d",&num);
	originalnum = num;
	while(num>=10)
	{
		num /= 10;
	}
	firstdigit = num;
	lastdigit = originalnum % 10;
	int sum = firstdigit + lastdigit;
	printf("sum of 1st and last num: %d\n",sum);
	
	return 0;
}


