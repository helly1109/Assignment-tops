//6) Find the Character Is Vowel or Not
#include<stdio.h>
int main() {
   char input;
   
   printf("enter a character:");
   scanf("%c",&input);
   
   
   input=(input);
   
   if (input=='a'|| input=='e'||input=='i'||input=='o'||input=='u'){
   	printf("the character is vowel.\n");
} else if (input>='a '&& input <='z'){
	printf("the character is a constant.\n");
} else{
	printf("invalid input or not a letter.\n");
}

return 0;
}
   
