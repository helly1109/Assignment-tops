//3. Write a program in C to print individual characters of a string in reverse order
#include<stdio.h> 
#include<string.h> 
int rev()  //Open rev function 
{ 
char st[100]; 
int len,i; 
gets(st);  //Input the string 
len=strlen(st);  //Calculate length of the string using strlen() function 
printf("\nThe reverse string is:"); 
for(i=len;i>=0;i--)  //Loop  to print reverse string 
{ 
printf("%c",st[i]);  //Print the reverse string's character one by one 
} 
}; 
int main()  //Code given by Susobhan Akhuli 
{ 
printf("Enter the string: "); 
rev();  //Call rev function 
return 0; 
} 
