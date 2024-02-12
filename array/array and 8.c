////8. WAP to reverse a string and check that the string is palindrome or not
//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address
//andage
//b. Write a program of structure for five employee that
//provides the following information -print and display
//empno, empname, address andage
#include <stdio.h>
#include <string.h>

int main() {
   char string[100], rev_string[100];

   printf("Enter a string: ");
   gets(string);

   strcpy(rev_string, string);
   strrev(rev_string);

   if(strcmp(string, rev_string) == 0)
      printf("%s is a palindrome string.\n", string);
   else
      printf("%s is not a palindrome string.\n", string);

   return 0;
}
