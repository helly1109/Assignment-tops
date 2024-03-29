//9. Write a program in C to find the maximum number of characters in a string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100
#define chr_no 255   

int main() {
    char str[str_size]; 
    int ch_fre[chr_no];
   int i = 0, max;      
    int ascii;          

    printf("\n\nFind maximum occurring character in a string :\n");  
    printf("--------------------------------------------------\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);  

    for (i = 0; i < chr_no; i++) { 
        ch_fre[i] = 0;
    }

    /* Read for frequency of each character */
    i = 0;
    while (str[i] != '\0') { 
        ascii = (int)str[i]; 
        ch_fre[ascii] += 1;  
        i++;
    }

    max = 0;
    for (i = 0; i < chr_no; i++) {
        if (i != 32) { 
            if (ch_fre[i] > ch_fre[max]) {
                max = i; 
            }
        }
    }

    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, ch_fre[max]); // Display the character with maximum frequency and its count
	
	return 0; 
}
