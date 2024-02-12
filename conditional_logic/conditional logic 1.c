//1) 1. Write a C program to accept two integers and check whether they are equal
or not
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the first integer");
	scanf("%d",&num1);
	printf("enter the second integer");
	scanf("%d",&num2);

   if(num1==num2)
   {
   	printf("the two integers are equal");
   }
   else 
   {
   	printf("the two integers are not equal");
   }
   return 0;
}
