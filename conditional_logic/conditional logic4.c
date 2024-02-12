//////4. WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement.....
#include<stdio.h>
int main()
{
   int num1,num2;
   char o;
   printf("enter the operator '+','-','*','/','%'");
   scanf("%c",&o);
   printf("enter the operands");
   scanf("%d\n",&num1,&num2);
   	
  switch(o)
  {
  	case '+':
  		printf("enter the addition , num1 ,num2",num1+num2);
  		break;
  		
    case '-':
	    printf("enter the subtraction", num1 , num2, num1-num2);
		break;
		
	case '*':
	    printf("enter the mutiplication",num1 , num2 , num1*num2);
		break;
		
	case '/':
	    printf("enter the division",num1 , num2, num1/num2);
		break;
		
	case '%':
	     printf("enter the modulo" ,num1 , num2 ,num1%num2);
		 break;				
  }
  return 0;
}
