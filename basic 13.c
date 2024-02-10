//13.Find character value from ascii
#include<stdio.h>
int main()
{
	int asciicode;
	
	printf("enter the ascii code :");
	scanf("%d",&asciicode);
	
	char charactervalue = (char)asciicode;
	
	printf("character corresponding to ASCII code %d is : %c\n", asciicode,charactervalue);
	
	return 0;
}
