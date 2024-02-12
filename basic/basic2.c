//2. Write a program to make Simple calculator (to make addition, subtraction,multiplication,divison and modulo)
#include<stdio.h>
int main()
{
	char o;
	float num1,num2;
	printf("enter the operator either + or -or *or / :");
	scanf("%c",&o);
	printf("enter the two operands: ");
	scanf("%f %f ",&num1,num2);
	
	switch (o){
		case '+':
			printf("enter the addition:", num1 , num2 , num1 + num2);
			break;
			
	    case '-':
	    	printf("enter the subtraction ,num1 , num2 , num1-num2");
	    	break;
	    	
	    case  '*':
	    	printf("enter the multiplication ,num1 , num2 , num1*num2");
	    	break ;
	    	
	    case  '/':
	    	printf("enter the division , num1 , num2 , num1 / num2");
	    	break;
	    	
	    	default :
	    		printf("choice is not available");
	    		
	    		return 0;
	}
	

}
