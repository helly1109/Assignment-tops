//14.Find ascii value of given number
#include<stdio.h>
int main()
{
	char userInput;
	
	printf("enter a character");
	scanf("%c",&userInput);
	
	int asciivalue = (int)userInput;
	
	printf("ASCII value of '%c'is : %d\n" ,userInput , asciivalue);
	
	return 0;
}
