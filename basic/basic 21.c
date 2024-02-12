//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable
#include<stdio.h>
int main()
{
	int a;int b ;int temp;
	
	printf("enter value of a :");
	scanf("%d",&a);
	
	printf("enter value of b :");
	scanf("%d",&b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("before swap value of  a :%d",a);
	printf("before swap value of  b :%d",b);
	
	return 0;
	
}
