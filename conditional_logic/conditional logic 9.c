//9.C Program to Check Uppercase or Lowercase or Digit or Special character
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character");
	scanf("%c", &ch);
	
	if(ch >='A' && ch <='Z')
	{
		printf(" upper case\n");
	}
	 else if (ch >= 'a' && ch <= 'z')
	 
	 {
	 	printf(" lower case\n");
	 }
	 else 
	 printf("not english latter\n");
	  
	  
	  return 0;
	
	
}


