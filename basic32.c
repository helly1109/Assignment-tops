//accept 2 numbers and find out its sum,check it size
#include<stdio.h>
int main()
{
	int num1,num2,sum;
	printf("enter the first number");
	scanf("%d",&num1);
	
	printf("enter the second number");
	scanf("%d",&num2);
	
	sum=num1+num2;
	
	printf("sum :%d\n",&sum);
	
	printf("size of the sum :%d bytes\n",sizeof(sum));
	
	return 0;
}
