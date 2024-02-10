//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
	float num,avg,sum=0;
	int i;

   printf("enter the five numbers :\n");
   
   for (i=0;i<5;i++)
   {
   	scanf("%f",&num);
   	sum= sum+num;
   }
   return 0;
}
